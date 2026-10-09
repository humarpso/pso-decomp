#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8002E784 { char pad[0xC]; };
struct VObj_8002E784 : Base_8002E784 {
    virtual void m0(int);
};

typedef struct Unit { u8 pad[0x2C]; } Unit;

typedef struct Boss2 { u8 pad[0x20]; Unit units[0x13]; } Boss2;

struct Rec_8002ECC4 { u8 pad[0x10]; u8 f10[0xC]; };

struct Obj_8002ECC4 { u8 pad[4]; Rec_8002ECC4 *recs; };

struct Rec_8002ED48 { u8 pad[4]; u8 f4[0xC]; u8 tail[0xC]; };

struct Obj_8002ED48 { u8 pad[4]; Rec_8002ED48 *recs; };

typedef s32 M2C_UNK;
typedef struct Vec_8002EA64 {
    f32 x, y, z;
} Vec_8002EA64;

typedef struct Src_8002EA64 {
    u8 pad0[4];
    Vec_8002EA64 a;
    Vec_8002EA64 b;
} Src_8002EA64;

typedef struct Part_8002EA64 {
    Vec_8002EA64 pos;
    Vec_8002EA64 vel;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    f32 unk24;
    s32 unk28;
} Part_8002EA64;

typedef struct Obj_8002EA64 {
    u8 pad0[0x18];
    M2C_UNK *vtbl;
    u8 pad1C[4];
    Part_8002EA64 parts[19];
} Obj_8002EA64;

struct VBase_18_38992e { char pad[0x18]; };

struct VObj_18_38992e : VBase_18_38992e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

struct Vec_8002EFE8 { s32 x, y, z; };

struct Motion_8002EFE8 { s32 f0; s32 anim; s32 f8; s32 fC; };

struct Model_8002EFE8 { s32 f0; u32 frames; };

struct Anim_8002EFE8 { s32 f0; Model_8002EFE8 *model; };

struct Self_8002EFE8 {
    u8 pad0[0x24];
    s32 x24;
    u8 pad28[0x34 - 0x28];
    s32 x34;
    u8 pos[0xC];
    u8 pad44[0x5C - 0x44];
    s32 rotX;
    s32 rotY;
    s32 rotZ;
    u8 pad68[0xC0 - 0x68];
    f32 frame;
    u8 padC4[0xD8 - 0xC4];
    Motion_8002EFE8 *motions;
    Anim_8002EFE8 *anims;
    u8 padE0[0x354 - 0xE0];
    f32 motionIdx;
    f32 fixedFrame;
    f32 speed;
    u8 pad360[0x5E0 - 0x360];
    s32 joints[10];
};

extern "C" {
extern f32 lbl_805D4B90;
extern const f32 lbl_805D8258;
void TObjPlayer__sub_8002EF80(void);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * init_from_model__11TBreakUpMdlFPvi(void *, s32);
extern void *lbl_805D4B8C;
extern u8 *lbl_805D4BA4;
void TObjPlayer__sub_8002E7C8(void);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * init_from_model__11TBreakUpMdlFPvi(void *, s32);
extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;
extern u8 *lbl_805D4BA4;
void create_breakup_model__10TObjPlayerFv(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(void *, M2C_UNK);
void TObjPlayer__sub_8002E974(u8 *arg0);
f32 vec3_add_to(void *, void *);
extern const f32 lbl_805D822C;
extern const f32 lbl_805D8230;
extern const f32 lbl_805D8250;
extern const f32 lbl_805D8254;
extern const f32 lbl_805D8258;
extern const f32 lbl_805D8264;
extern const f32 lbl_805D8268;
extern const f32 lbl_805D826C;
extern const f32 lbl_805D8270;
extern const f32 lbl_805D8274;
s32 TObjPlayer__sub_8002EDCC(u8 *arg0);
void scale_matrix(int, f32, f32, f32);
void set_matrix_identity__10TObjPlayerFPv(int);
void rotate_vector_by_matrix(int, void *, void *);
void push_matrix(void);
void pop_matrix(void);
extern const f32 lbl_805D822C;
extern const f32 lbl_805D824C;
void TObjPlayer__sub_8002ECC4(Obj_8002ECC4 *self, s32 n);
void scale_matrix(int, f32, f32, f32);
void set_matrix_identity__10TObjPlayerFPv(int);
void rotate_vector_by_matrix(int, void *, void *);
void push_matrix(void);
void pop_matrix(void);
extern const f32 lbl_805D8260;
void TObjPlayer__sub_8002ED48(Obj_8002ED48 *self, s32 n);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 lerp__9TDeadSpotFff(f32, f32);
f32 rand_signed_unit(void);
void *init_base__10TObjPlayerFPv(void *arg0);
s32 calc_random_scaled__10TObjPlayerFv(void);
f32 vec3_add_to(void *, void *);
extern M2C_UNK lbl_804820A8[];
extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;
extern const f32 lbl_805D8228;
extern const f32 lbl_805D8234;
extern const f32 lbl_805D8238;
extern const f32 lbl_805D823C;
extern const f32 lbl_805D8240;
Obj_8002EA64 *TObjPlayer__sub_8002EA64(Obj_8002EA64 *arg0, void *arg1, Vec_8002EA64 *arg2);
void fn_8002F5AC(void *);
M2C_UNK TBoss2Joint__sub_8003688C(s32);
M2C_UNK check_v2_mode__9TObjEneDDFv(void);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK TObjLight__sub_801337F8(s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
void push_matrix(void);
void pop_matrix(void);
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_model_motion(int, void *, f32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjPlayer__sub_8002F61C(void);
extern Vec_8002EFE8 lbl_804359E4;
extern u8 lbl_8050E208[];
extern s32 current_scene_light;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8278;
extern const f32 TBoss2DeRolLe__data_805D827C;
void render_body__13TBoss2DeRolLeFPv(u8 *arg0);
}

extern "C" {

struct VObj8002EB88_8002eb88_8002E784 {
    char pad[0xC];
    virtual void m0(int);
};

int TObjLight__sub_8002F238(void* p);
void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1);
void TObjPlayer__sub_8002EB88(void);
s32 calc_random_scaled__10TObjPlayerFv(void);
void clear_target_ref__10TObjPlayerFv(void);
void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1);
void *init_base__10TObjPlayerFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int get_target_info__9TObjEneDDFPv(void*);
s32 rand();

extern void *lbl_805D4B8C;

void clear_target_ref__10TObjPlayerFv(void) {
    if (lbl_805D4B8C != NULL) {
        ((VObj_8002E784 *)lbl_805D4B8C)->m0(1);
    }
    lbl_805D4B8C = NULL;
}

extern M2C_UNK lbl_804820A8[];

void TObjPlayer__sub_8002E7C8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x10);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (init_from_model__11TBreakUpMdlFPvi((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x58)));
    }
    (*(u8 * *)&lbl_805D4B8C) = (unsigned char *) ((void *) var_r0);
    TObjPlayer__sub_8002ECC4((Obj_8002ECC4 *)((void *) var_r0), (s32)(0x1C));
}

void TObjPlayer__sub_8002E974(u8 *arg0) {
    u8 *temp_r30;
    s32 var_r29;
    Boss2 *self;
    M2C_FIELD(arg0, s32 *, 0x1C) += 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= 0xA0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    var_r29 = 0;
    do {
        temp_r30 = (u8 *)&((Boss2 *)arg0)->units[var_r29];
        if (TObjPlayer__sub_8002EDCC((u8 *)(temp_r30)) != 0) {
            if ((var_r29 % 2) == 0) {
                create_particle__17TObjBoss2CeilJunkFv(temp_r30, 0x171);
            }
        }
        var_r29 += 1;
    } while (var_r29 < 0x13);
}

void *TObjPlayer__sub_8002EA0C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820A8;
        deleting_dtor__10TObjPlayerFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern struct VObj8002EB88_8002eb88_8002E784 *lbl_805D4B88;

struct VObj8002EB88_8002eb88_8002E784;
Obj_8002EA64 *TObjPlayer__sub_8002EA64(Obj_8002EA64 *arg0, void *arg1, Vec_8002EA64 *arg2) {
    f32 zero;
    f32 scale;
    Part_8002EA64 *p;
    Vec_8002EA64 *v;
    s32 i;
    init_base__10TObjPlayerFPv(arg0);
    scale = lbl_805D8240;
    zero = lbl_805D8228;
    arg0->vtbl = lbl_804820A8;
    for (i = 0, p = arg0->parts; i < 19; i++, p++) {
        VecCopy__FP3VecPC3Vec(&p->pos, arg2);
        vec3_add_to(&p->pos, &(*(Src_8002EA64 **)((u8 *)lbl_805D4B88 + 4))[i].a);
        v = &p->vel;
        VecCopy__FP3VecPC3Vec(v, &(*(Src_8002EA64 **)((u8 *)lbl_805D4B88 + 4))[i].b);
        v->y = lerp__9TDeadSpotFff(lbl_805D8234, lbl_805D8238);
        v->z -= lerp__9TDeadSpotFff(lbl_805D8228, lbl_805D823C);
        p->unk18 = calc_random_scaled__10TObjPlayerFv();
        p->unk1C = (s32)(scale * rand_signed_unit());
        p->unk20 = calc_random_scaled__10TObjPlayerFv();
        p->unk28 = 0;
        p->unk24 = zero;
    }
    return arg0;
}

void TObjPlayer__sub_8002EB88(void) {
    if (lbl_805D4B88 != NULL) {
        lbl_805D4B88->m0(1);
    }
    lbl_805D4B88 = NULL;
}

extern M2C_UNK lbl_804820C0[];

void create_breakup_model__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x10);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (init_from_model__11TBreakUpMdlFPvi((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x68)));
    }
    (*(u8 * *)&lbl_805D4B88) = (unsigned char *) ((void *) var_r0);
    TObjPlayer__sub_8002ED48((Obj_8002ED48 *)((void *) var_r0), (s32)(0x13));
    TObjPlayer__sub_8002ECC4((Obj_8002ECC4 *)((*(u8 * *)&lbl_805D4B88)), (s32)(0x13));
}

void *deleting_dtor__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804820C0[];

void *init_base__10TObjPlayerFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804820C0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

extern M2C_UNK lbl_80435620;
extern const f32 lbl_805D8244;
extern const f32 lbl_805D8248;

void TObjPlayer__sub_8002ECC4(Obj_8002ECC4 *self, s32 n) {
    s32 i;
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    scale_matrix(0, lbl_805D824C, lbl_805D822C, lbl_805D824C);
    for (i = 0; i < n; i++) {
        rotate_vector_by_matrix(0, self->recs[i].f10, self->recs[i].f10);
    }
    pop_matrix();
}

void TObjPlayer__sub_8002ED48(Obj_8002ED48 *self, s32 n) {
    s32 i;
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    scale_matrix(0, lbl_805D8260, lbl_805D8260, lbl_805D8260);
    for (i = 0; i < n; i++) {
        rotate_vector_by_matrix(0, self->recs[i].f4, self->recs[i].f4);
    }
    pop_matrix();
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
s32 TObjPlayer__sub_8002EDCC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r30;
    var_r30 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805D8250);
        vec3_add_to((void *) (arg0), (void *) (arg0 + 0xC));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x10);
        if (temp_f1 < lbl_805D822C) {
            temp_f2 = M2C_FIELD(arg0, f32 *, 4);
            if (temp_f2 < lbl_805D8264) {
                temp_f3 = M2C_FIELD(arg0, f32 *, 0);
                temp_f4 = M2C_FIELD(arg0, f32 *, 8);
                if ((temp_f3 <= lbl_805D8268) && (temp_f3 >= lbl_805D826C) && (temp_f4 <= lbl_805D8270) && (temp_f4 >= lbl_805D8274)) {
                    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (temp_f1 * lbl_805D8230);
                    M2C_FIELD(arg0, s32 *, 0x28) = 2;
                } else if (temp_f2 < lbl_805D8258) {
                    var_r30 = 1;
                    M2C_FIELD(arg0, s32 *, 0x28) = 1;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg0, f32 *, 0x10) - lbl_805D8250);
        vec3_add_to((void *) (arg0), (void *) (arg0 + 0xC));
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) - lbl_805D8254);
        if (M2C_FIELD(arg0, f32 *, 0x24) < lbl_805D822C) {
            M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805D822C;
            M2C_FIELD(arg0, s32 *, 0x28) = 3;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_r31);
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + (temp_r31 * 2));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 4) = (f32) ((lbl_805D8250 * M2C_FIELD(arg0, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0x14));
        break;
    }
    return var_r30;
}
#pragma pop

void TObjPlayer__sub_8002EF80(void) {
    lbl_805D4B90 = lbl_805D8258;
}

s32 calc_random_scaled__10TObjPlayerFv(void) {
    return (s32) (lbl_805D8248 * (lbl_805D8244 * (f32) rand()));
}

#pragma push
#pragma opt_common_subs off
void render_body__13TBoss2DeRolLeFPv(u8 *arg0) {
    Self_8002EFE8 *self = (Self_8002EFE8 *)arg0;
    s32 i;
    Model_8002EFE8 *model;
    s32 idx;
    f32 frame;
    f32 max;
    ((VObj_18_38992e *)(arg0))->m8(lbl_805D8278, lbl_805D8278);
    lbl_805D5660 = some_id_805c6f74;
    clear_global_flag_400__9TObjEneDDFv();
    push_matrix();
    post_translate_matrix(self->pos);
    rotate_matrix_y(0, self->rotY);
    rotate_matrix_x(0, self->rotX);
    rotate_matrix_z(0, self->rotZ);
    Vec_8002EFE8 scale = lbl_804359E4;
    check_v2_mode__9TObjEneDDFv();
    scale_current_matrix(&scale);
    for (i = 0; i < 10; i++) {
        TBoss2Joint__sub_8003688C(self->joints[i]);
    }
    idx = self->motionIdx;
    if (idx < 0) {
        idx = 0;
    } else if (idx >= 0x11) {
        idx = 0x10;
    }
    model = self->anims[self->motions[idx].anim].model;
    if (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E208 + 0xC0, 4) != 0) {
        max = model->frames - 1;
        self->frame = self->frame + self->speed;
        while (self->frame < TBoss2DeRolLe__data_805D827C) {
            self->frame = self->frame + max;
        }
        while (self->frame > max) {
            self->frame = self->frame - max;
        }
        frame = self->frame;
    } else {
        frame = self->fixedFrame;
        if (frame < TBoss2DeRolLe__data_805D827C) {
            frame = TBoss2DeRolLe__data_805D827C;
        } else if (frame > (f32)(model->frames - 1)) {
            frame = model->frames;
        }
    }
    fn_8002F5AC(self);
    set_global_state__16TObjEneRe7BeruraFi(TObjPlayer__sub_8002F61C);
    set_global_param__8TObjFishFi(self->x24);
    draw_model_motion(self->x34, model, frame);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    TObjLight__sub_801337F8(current_scene_light);
    pop_matrix();
}
#pragma pop

int TObjLight__sub_8002F238(void* p) { return get_target_info__9TObjEneDDFPv(p); }

}
