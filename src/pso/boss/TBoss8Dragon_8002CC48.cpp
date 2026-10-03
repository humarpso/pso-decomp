#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8002D41C_lbl_80482060 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8002D41C_lbl_80482060_size[sizeof(RecoveredGlobal_8002D41C_lbl_80482060) == 0x18 ? 1 : -1];

struct UV_8002D4C0 { s16 u, v; };

struct Vtx_8002D4C0 { s16 pad; s16 u; s16 v; };

struct Hdr_8002D4C0 { u8 pad[4]; s16 count; };

struct Obj_8002D4C0 { f32 x; u8 pad[4]; f32 z; };

typedef struct Ent_8002CE78 {
    f32 *dst;
    f32 base;
    f32 ofs;
    u8 padC[4];
} Ent_8002CE78;

typedef struct Obj_8002CE78 {
    u8 pad0[0x1C];
    s32 active;
    u8 pad20[0x14];
    f32 unk34;
    s32 unk38;
} Obj_8002CE78;

struct Trail_8002CC48 {
    u8 pad0[0x28];
    u8 pos[0x34 - 0x28];
    f32 f34;
    f32 f38;
    u8 pad3C[0x40 - 0x3C];
    s32 f40;
    s32 state;
    u8 pad48[0x4C - 0x48];
    s32 f4C;
};

extern "C" {
extern const f32 lbl_805D81D0;
s32 TBoss8Dragon__sub_8002D308(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_v2_mode__9TObjEneDDFv(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80482060[];
extern s32 lbl_805D2698;
extern s32 lbl_805D4B7C;
extern s32 lbl_805D4B80;
extern const f32 lbl_805D8198;
extern const f32 lbl_805D81A0;
u8 *TBoss8Dragon__sub_8002D41C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
extern int lbl_805D4B6C;
extern Hdr_8002D4C0 *lbl_805D4B70;
extern const f32 lbl_805D81D8;
extern const f32 lbl_805D81DC;
extern const f32 lbl_805D81E0;
void TBoss8Dragon__sub_8002D4C0(Obj_8002D4C0 *self);
void TBoss8Dragon__sub_8002D4C0(Obj_8002D4C0 *self);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void set_chunk_material_override_pair(s32, s32, s32, s32);
void draw_chunk_object(void *);
extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 lbl_805D4B74;
extern int lbl_805D4B78;
extern s32 lbl_805D4B7C;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8198;
void TBoss8Dragon__sub_8002CE78(Obj_8002CE78 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv();
s32 get_state__12TBoss8DragonFv(void);
extern const f32 lbl_805D8178;
extern const f32 lbl_805D817C;
extern const f32 lbl_805D8180;
void update_dragon_trail_piece(Trail_8002CC48 *self);
}

extern "C" {

void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1);
void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1);
void free_resources__12TBoss8DragonFv(void);
s32 get_state__12TBoss8DragonFv(void);
void set_field_1c__12TBoss8DragonFPv(void* p);
void set_field_3c__12TBoss8DragonFPv(void* p);
void spawn_child_object__12TBoss8DragonFPv(void *arg0);
void *TBoss8Dragon__sub_8002CD8C(void *, void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
int destroy__12TBoss8DragonFPvs(void*, void*);
int free__11TOBoss4RockFUi(void*);

extern s32 lbl_805D4B7C;

void update_dragon_trail_piece(Trail_8002CC48 *self) {
    switch (self->state) {
    case 0:
        self->f34 += lbl_805D8178;
        if (self->f34 >= self->f38) {
            self->f34 = self->f38;
            self->state = 1;
        }
        VecCopy__FP3VecPC3Vec(self->pos, ((void *(*)(void *))get_state__12TBoss8DragonFv)(self));
        break;
    case 1:
        self->f40++;
        if (self->f40 > self->f4C) {
            self->state = 2;
        }
        break;
    case 2:
        self->f34 -= lbl_805D817C;
        if (self->f34 < lbl_805D8180) {
            queue_destruction__7TObjectFv();
        }
        break;
    }
}

s32 get_state__12TBoss8DragonFv(void) {
    return lbl_805D4B7C;
}

extern M2C_UNK lbl_80482048[];

void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482048;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct Obj_8002D4C0;
void TBoss8Dragon__sub_8002CE78(Obj_8002CE78 *arg0) {
    Ent_8002CE78 *p;
    s32 i;
    if (arg0->active != 0) {
        set_global_param__8TObjFishFi(lbl_805D4B54);
        TBoss8Dragon__sub_8002D4C0((Obj_8002D4C0 *)((struct Obj_8002D4C0 *)lbl_805D4B7C));
        for (p = (Ent_8002CE78 *)lbl_805D4B78, i = 0; i < lbl_805D4B74; i++, p++) {
            *p->dst = p->base + p->ofs;
        }
        push_matrix();
        post_translate_matrix((void *)lbl_805D4B7C);
        translate_matrix(0, lbl_805D8198, arg0->unk34, lbl_805D8198);
        if (arg0->unk38 != 0) {
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            some_id_805c6f74 |= 0x800;
            set_chunk_material_override_pair(0xFF00, 0x100, lbl_805D7780, lbl_805D7784);
            draw_chunk_object(*(void **)(*(u8 **)(lbl_805D4B50 + 0x42C) + 0x38));
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        } else {
            draw_chunk_object(*(void **)(*(u8 **)(lbl_805D4B50 + 0x42C) + 0x38));
        }
        pop_matrix();
        for (p = (Ent_8002CE78 *)lbl_805D4B78, i = 0; i < lbl_805D4B74; i++, p++) {
            *p->dst = p->base;
        }
    }
}

s32 TBoss8Dragon__sub_8002D308(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x34) >= lbl_805D81D0;
}

void set_field_3c__12TBoss8DragonFPv(void* p) { set_field_1c__12TBoss8DragonFPv((void*)((void*)(p))); *(int*)((char*)p + 0x3c) = 1; }
void set_field_1c__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern const f32 lbl_805D81A0;

void spawn_child_object__12TBoss8DragonFPv(void *arg0) {
    void *o;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D81A0;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        TBoss8Dragon__sub_8002CD8C(o, M2C_FIELD(arg0, void **, 0x10), 30);
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
}

extern M2C_UNK lbl_80482060[];

void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482060;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D4B60;
    extern int lbl_805D4B64;
    extern int lbl_805D4B68;
    extern int lbl_805D4B6C;
    extern int lbl_805D4B78;

u8 *TBoss8Dragon__sub_8002D41C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8002D41C_lbl_80482060 *)&lbl_80482060).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2698;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    (*(u8 * *)&lbl_805D4B7C) = arg2;
    lbl_805D4B80 = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D8198;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D81A0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return arg0;
}

void TBoss8Dragon__sub_8002D4C0(Obj_8002D4C0 *self) {
    s32 cnt;
    s16 n;
    s16 *p = (s16 *)((u8 *)lbl_805D4B70 + 6);
    UV_8002D4C0 *src = (*(UV_8002D4C0 * *)&lbl_805D4B6C);
    s32 i = 0;
    s16 du = (s16)(lbl_805D81D8 * (lbl_805D81DC * self->x));
    s16 dv = (s16)(lbl_805D81D8 * (lbl_805D81E0 * self->z));
    cnt = lbl_805D4B70->count & 0x3FFF;
    for (; i < cnt; i++) {
        n = *p++;
        s32 j;
        if (n < 0) {
            n = -n;
        }
        for (j = 0; j < n; j++) {
            Vtx_8002D4C0 *v = (Vtx_8002D4C0 *)p;
            v->u = src->u + du;
            v->v = src->v + dv;
            src++;
            p += 3;
        }
    }
}

void free_resources__12TBoss8DragonFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D4B78)); lbl_805D4B78 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D4B6C)); lbl_805D4B6C = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B64), (void*)1); lbl_805D4B64 = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B68), (void*)1); lbl_805D4B68 = 0; destroy__12TBoss8DragonFPvs((void*)(lbl_805D4B60), (void*)1); lbl_805D4B60 = 0; }

}
