#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct D_800DC420 { u8 pad[0x18]; s32 arr[1]; };

struct E_800DC448 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800DC448 { u8 pad[0x42c]; E_800DC448 *entries; };

struct O_800DC448 { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

typedef struct Parm_800DC4B4 {
    s32 a;
    f32 b;
} Parm_800DC4B4;

struct Base_800DC4B4 {
    char pad[0x18];
};

struct Obj_800DC4B4 : Base_800DC4B4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(void *, Parm_800DC4B4, s32, s32, s32);
    u8 pad1C[0x30 - 0x1C];
    u32 flags;
    u8 pad34[0x2FC - 0x34];
    f32 pos[3];
};

typedef struct Src_800DC4B4 {
    u8 pad0[0xAC];
    f32 pos[3];
} Src_800DC4B4;

extern "C" {
s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TBoss8Dragon__sub_8007A544(s32, M2C_UNK);
s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1);
extern s32 lbl_805D5254;
f32 TObjPlayer__sub_800DC434(M2C_UNK arg0, s32 arg1);
extern s32 lbl_805D5254;
s32 TObjPlayer__sub_800DC420(void *self, s32 i);
extern D_800DC448 *lbl_805D5258;
void TObjPlayer__sub_800DC448(O_800DC448 *self, s32 i);
u16 obj_getField1c(void *);
s32 is_split_screen();
s32 TObjEneDellBiter__sub_80087350(void *, int);
void trigger_hit_camera_shake__10TObjPlayerFPvUi(void *, void *);
void set_flag_20000__10TObjPlayerFPv(void *);
f32 fn_801315A0(void *, void *);
extern Parm_800DC4B4 lbl_8043C908[];
extern const f32 lbl_805D525C;
extern s32 lbl_805D526C;
extern s32 lbl_805D53A0;
void TObjPlayer__sub_800DC4B4(Src_800DC4B4 *arg0, Obj_800DC4B4 *obj, void *attacker);
}

extern "C" {

void TObjPlayer__sub_800DC444(void);
void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

s32 TObjPlayer__sub_800DC420(void *self, s32 i) {
    return (*(D_800DC420 * *)&lbl_805D5254)->arr[i];
}

f32 TObjPlayer__sub_800DC434(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD((lbl_805D5254 + (arg1 * 4)), f32 *, 0);
}

void TObjPlayer__sub_800DC444(void) {  }

extern M2C_UNK lbl_80494E10[];

void TObjPlayer__sub_800DC448(O_800DC448 *self, s32 i) {
    self->f34 = lbl_805D5258->entries[i].f8;
    self->f24 = lbl_805D5258->entries[i].fc;
}

s32 TObjPlayer__sub_800DC478(u8 *arg0, s32 arg1, f32 farg0) {
    f32 temp_f2;
    if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == arg1) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0xC0);
        if ((temp_f2 >= farg0) && (temp_f2 < (farg0 + M2C_FIELD(arg0, f32 *, 0xC8)))) {
            return 1;
        }
    }
    return 0;
}

void TObjPlayer__sub_800DC4B4(Src_800DC4B4 *arg0, Obj_800DC4B4 *obj, void *attacker) {
    if (obj == NULL) {
        return;
    }
    if ((void *)obj == attacker) {
        return;
    }
    if (obj->flags & 0x4000A00) {
        return;
    }
    if (fn_801315A0(arg0->pos, obj->pos) > lbl_805D525C * lbl_805D525C) {
        return;
    }
    Parm_800DC4B4 parm = lbl_8043C908[0];
    parm.b = lbl_805D526C;
    obj->v21(attacker, parm, 0, -1, -1);
    if (attacker != NULL) {
        if (obj->flags & 0x800) {
            set_flag_20000__10TObjPlayerFPv(attacker);
        }
        if (is_split_screen() == 0 && lbl_805D53A0 == obj_getField1c(obj)) {
            trigger_hit_camera_shake__10TObjPlayerFPvUi(attacker, obj);
        }
    }
    TObjEneDellBiter__sub_80087350(obj->pos, 0xFB);
    TObjEneDellBiter__sub_80087350(obj->pos, 0xFC);
}

s32 TObjPlayer__sub_800DC5F4(M2C_UNK arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TBoss8Dragon__sub_8007A544(arg1, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
    return 1;
}

void *TObjPlayer__sub_800DC7B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494E10;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); M2C_FIELD(arg0, M2C_UNK *, 0xE0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xE4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE4)); M2C_FIELD(arg0, M2C_UNK *, 0xE4) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
