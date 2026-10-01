#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 {
    M2C_UNK value;
    u8 remaining[0xC4];
};

struct Obj_8005ACBC { u8 pad[0x374]; s32 f374; u8 pad378[0x40]; u16 f3b8; u16 f3ba; };

struct S_8005AD50 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x378 - 0x1c];
    u8 f378[0x1c];
    s32 f394;
    u8 pad398[0x438 - 0x398];
    void *fx[3];
    u8 pad444[0x51c - 0x444];
    void *f51c;
    void *f520;
    void *f524;
    void *f528;
};

extern "C" {
extern RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 TBoss4Type3__data_80486FC8;
extern const f32 TBoss4Type3__data_805D8C40;
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1);
extern RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8 TBoss4Type3__data_80486FC8;
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C9C;
extern const f32 lbl_805D8CA0;
void TBoss4Type3__sub_8005A6A4(u8 *arg0);
s32 TBoss4Type3__sub_8005A398(void *, s32);
void TBoss4Type3__sub_8005ACBC(Obj_8005ACBC *self);
void queue_destruction__7TObjectFv(void *);
void fn_8004AA04(void *);
void TBoss4Type3__sub_8005A2A4(void *);
void __dt__11TBoss4Type3FPvs(void *, s16);
void init_state_1__8TObjFishFPv(void *);
void __dt__9TObjEnemyFv(void *, s32);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
extern u8 lbl_80487184[];
S_8005AD50 *TBoss4Type3__sub_8005AD50(S_8005AD50 *o, s16 flag);
}

extern "C" {

void TBoss4Type3__sub_8005A86C(void* p);
void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
void copy_pair__11TBoss4Type3FPvPv(void* p, void* q);
s32 create__11TBoss4Type3Fi(s32 arg0);
void draw__11TBoss4Type3FPv(void *arg0);
void init_effect__11TBoss4Type3FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);
s32 TBoss4Type3__ct(s32, s32, s32);
void TBoss4Type3__sub_8005A438(void *);
void TOHangerMachine01__sub_803D9C00(void *);
s32 TObjControl__ct(s32, s32);
void TObjPlayer__sub_80051E9C(int, f32);
void rotate_matrix_y(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(M2C_UNK);
void end_effect_render__13TParticleCtrlFv(void);
void toggle_particle_effect__10TObjPlayerFv(void *);

void copy_pair__11TBoss4Type3FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

typedef char RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8_size[sizeof(RecoveredGlobal_8005A678_TBoss4Type3__data_80486FC8) == 0xC8 ? 1 : -1];
void TBoss4Type3__sub_8005A678(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3F0) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
        M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(((u8 *)(&TBoss4Type3__data_80486FC8.value) + (arg1 * 0x14)), s32 *, 0);
    }
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8_size[sizeof(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8) == 0xC8 ? 1 : -1];
void TBoss4Type3__sub_8005A6A4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3FC) = 0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F4) + M2C_FIELD(arg0, f32 *, 0x3F8));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x400);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3F4);
        if (temp_f1 >= lbl_805D8C9C) {
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (temp_f1 - lbl_805D8C9C);
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3F4) >= lbl_805D8CA0) {
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) lbl_805D8CA0;
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3F4) >= lbl_805D8CA0) {
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__data_80486FC8).value + (M2C_FIELD(arg0, s32 *, 0x3F0) * 0x14)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(&(*(RecoveredGlobal_8005A6A4_TBoss4Type3__data_80486FC8 *)&TBoss4Type3__data_80486FC8).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3F0) * 0x14));
            M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
            M2C_FIELD(arg0, s32 *, 0x3FC) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3F4);
    if ((temp_f1_2 < TBoss4Type3__data_805D8C40) || (temp_f1_2 >= lbl_805D8C9C)) {
        M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) TBoss4Type3__data_805D8C40;
    }
}
#pragma pop

void draw__11TBoss4Type3FPv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv(arg0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    TBoss4Type3__sub_8005A438(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1152));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

extern const f32 lbl_805D8C68;

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C68);
}

void TBoss4Type3__sub_8005A86C(void* p) { draw__11TBoss4Type3FPv((void *)(p)); }

extern const f32 TBoss4Type3__data_805D8C34;

void TBoss4Type3__sub_8005ACBC(Obj_8005ACBC *self) {
    if (self->f374 != 3 && self->f374 != 2) {
        self->f3b8 = 0xFFFF;
        self->f3ba = 0xFFFF;
        TBoss4Type3__sub_8005A398(self, 3);
    }
}

void init_effect__11TBoss4Type3FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type3__data_805D8C34;
    TBoss3Volopt__sub_8022675C(0x4003B734, arg0 + 0x38, 0, 1, arg0);
}

extern s32 tl_04;

S_8005AD50 *TBoss4Type3__sub_8005AD50(S_8005AD50 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_80487184;
        fn_8004AA04(o->f378);
        TBoss4Type3__sub_8005A2A4(o);
        if (o->f51c != 0) {
            __dt__11TBoss4Type3FPvs(o->f51c, 1);
            o->f51c = 0;
        }
        if (o->f524 != 0) {
            queue_destruction__7TObjectFv(o->f524);
            o->f524 = 0;
        }
        if (o->f520 != 0) {
            __dt__11TBoss4Type3FPvs(o->f520, 1);
            o->f520 = 0;
        }
        if (o->f528 != 0) {
            queue_destruction__7TObjectFv(o->f528);
            o->f528 = 0;
        }
        for (i = 0; i < 3; i++) {
            init_state_1__8TObjFishFPv(o->fx[i]);
            o->fx[i] = 0;
        }
        TObjEneGibbles__sub_80156720(o);
        o->f394 = 0;
        __dt__9TObjEnemyFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

s32 create__11TBoss4Type3Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x530);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type3__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
