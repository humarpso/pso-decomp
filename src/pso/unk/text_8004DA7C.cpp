#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef struct { f32 x, y, z; } Vec_8004DA7C;
struct Self_8004DA7C { u8 pad[0x90]; s32 t; u8 pad94[0x14]; void *p[5]; u8 padbc[0x48]; f32 f104; f32 f108; f32 f10c; };

struct Ent_8004DA7C { s32 arg; s32 start; s32 end; u8 data[0xC]; };

extern "C" {
void request_destroy__11TBoss4Type2FUi(void *);
void *create_particle_emitter(void *, s32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void subtract_vector(void *, void *);
void normalize_vector(void *);
void vec3_add_to(void *, void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void *spawn_particle_effect(void *, int);
s32 play_sound_effect(int, void *, int, int);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
void TBoss4Type2__sub_8004A98C(void *);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D8968;
extern const f32 lbl_805D8970;
extern const f32 lbl_805D8974;
extern const f32 lbl_805D8978;
extern const f32 lbl_805D897C;
void TBoss3Volopt__sub_8004DA7C(u8 *self);
}

extern "C" {

void *lbl_80485460[30] = {
    (void *)0x14b, (void *)0x0, (void *)0x82, (void *)0x0,
    (void *)0x0, (void *)0xc2f00000, (void *)0x14c, (void *)0x50,
    (void *)0x8c, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x14c, (void *)0x64, (void *)0x8c, (void *)0x43020000,
    (void *)0x0, (void *)0xc2f00000, (void *)0x14c, (void *)0x78,
    (void *)0x8c, (void *)0xc3020000, (void *)0x0, (void *)0xc2f00000,
    (void *)0x14d, (void *)0x92, (void *)0xc8, (void *)0x0,
    (void *)0x0, (void *)0xc2f00000,
};
void *lbl_804854D8[6] = {
    (void *)0x50, (void *)0x4e, (void *)0x19, (void *)0x19,
    (void *)0x19, (void *)0x18,
};
void *lbl_804854F0[3] = {
    (void *)0x0, (void *)0x0, (void *)0xc2f00000,
};
void *lbl_804854FC[6] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x10000,
    (void *)0x0, (void *)0x3f000000,
};
void *lbl_80485514[15] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41f00000,
    (void *)0x0, (void *)0x42700000, (void *)0x0, (void *)0x42700000,
    (void *)0x0, (void *)0xc1f00000, (void *)0x0, (void *)0x42700000,
    (void *)0x0, (void *)0x42f00000, (void *)0x0,
};
#define lbl_80485460 ((u8 *)lbl_80485460)
#define lbl_804854F0 ((u8 *)lbl_804854F0)
#define lbl_80485514 ((u8 *)lbl_80485514)
#define V90 (*(Vec_8004DA7C *)lbl_804854F0)
void TBoss3Volopt__sub_8004DA7C(u8 *self) {
    s32 i;
    Self_8004DA7C *S = (Self_8004DA7C *)self;
    f32 v;
    for (i = 0; i < 5; i++) {
        Ent_8004DA7C *e = &((Ent_8004DA7C *)lbl_80485460)[i];
        s32 t = M2C_FIELD(self, s32 *, 0x90);
        if (t >= e->end) {
            if (((Self_8004DA7C *)self)->p[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(((Self_8004DA7C *)self)->p[i]);
                ((Self_8004DA7C *)self)->p[i] = NULL;
            }
        } else if (t >= e->start) {
            if (((Self_8004DA7C *)self)->p[i] == NULL) {
                ((Self_8004DA7C *)self)->p[i] = create_particle_emitter(e->data, e->arg);
                if (((Self_8004DA7C *)self)->p[i] != NULL) {
                    set_flags__11TBoss4Type2FPvUi(((Self_8004DA7C *)self)->p[i], 0x40);
                }
            }
            switch (i) {
            case 1: case 2: case 3: {
                u8 *p = (u8 *)((Self_8004DA7C *)self)->p[i];
                if (p != NULL) {
                    Vec_8004DA7C a = *(Vec_8004DA7C *)(p + 0x60);
                    Vec_8004DA7C b = V90;
                    subtract_vector(&b, &a);
                    b.y = lbl_805D8968;
                    normalize_vector(&b);
                    b.x *= lbl_805D8970;
                    b.z *= lbl_805D8970;
                    vec3_add_to(&a, &b);
                    copy_pos__11TNowLoadingFPvPv(((Self_8004DA7C *)self)->p[i], &a);
                }
            }
            break;
            }
        }
    }
    {
        s32 t = M2C_FIELD(self, s32 *, 0x90);
        if (t >= 0x8C && t < 0x91) {
            void *p;
            Vec_8004DA7C c = V90;
            vec3_add_to(&c, &((Vec_8004DA7C *)lbl_80485514)[t - 0x8C]);
            p = spawn_particle_effect(&c, 0x14A);
            if (p != NULL) {
                set_flags__11TBoss4Type2FPvUi(p, 0x40);
            }
        }
    }
    if (M2C_FIELD(self, s32 *, 0x90) >= 0xAA) {
        v = S->f10c + lbl_805D8974;
        S->f10c = v;
        if (v > 1.0f) {
            S->f10c = 1.0f;
        }
    }
    v = S->f104 + lbl_805D8978;
    S->f104 = v;
    if (v >= lbl_805D897C) {
        S->f104 = lbl_805D8968;
    }
    v = S->f108 + lbl_805D8978;
    S->f108 = v;
    if (v > 139.0f) {
        S->f108 = 139.0f;
    }
    switch (M2C_FIELD(self, s32 *, 0x90)) {
    case 0:
        play_sound_effect(0x4003BC07, lbl_804854F0, 0, 1);
        play_sound_effect(0x3C604, lbl_804854F0, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    case 0x50:
        play_sound_effect(0x3A805, 0, 0, 0);
    case 0x64:
    case 0x78:
        play_sound_effect(0x4003D006, lbl_804854F0, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    case 0x8C:
        play_sound_effect(0x36408, lbl_804854F0, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    case 0x92:
        play_sound_effect(0x3DA03, lbl_804854F0, 0, 1);
        break;
    case 0xAA:
        play_sound_effect(0x40039E09, lbl_804854F0, 0, 1);
        break;
    case 0xC8:
        play_sound_effect(0x40039E21, lbl_804854F0, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
        break;
    }
    TBoss4Type2__sub_8004A98C(self + 0x94);
    if (++M2C_FIELD(self, s32 *, 0x90) >= 0x118) {
        queue_destruction__7TObjectFv(self);
    }
}

}
