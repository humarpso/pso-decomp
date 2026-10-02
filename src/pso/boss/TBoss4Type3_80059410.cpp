#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80059450 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
};

struct RecoveredGlobal_80059450_lbl_80437854 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437860 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_8043786C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80059450_lbl_80437878 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Obj_80059EA8 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F04 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_80059F64 { u8 pad[0x38C]; void *target; u8 pad390[0x10]; s32 f3a0; u8 pad3a4[4]; s32 f3a8; u8 pad3ac[0xC]; u16 f3b8; u16 f3ba; };

struct Obj_8005A2A4 { u8 pad[0x404]; void *parts[13]; };

struct Obj_80059ABC { u8 pad[0x60]; s32 f60; };

struct Ply_80059ABC { u8 pad[0x38]; f32 f38; u8 pad3c[4]; f32 f40; };

struct Obj_8005A300 { u8 pad[0x38]; u8 f38[0x3CC]; u32 f404[13]; };

class TBoss4Type3_8005A398 { public: u8 pad[0x374]; s32 f374; };

union MemberAction_8005A398 { s32 words[3]; void (TBoss4Type3_8005A398::*action)(); };

struct Row_8005A398 { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; u8 pad[0x18]; };

struct Obj_8005A438 { u8 pad[0x3B0]; f32 f3b0; };

struct Pair_8005A438 { void *p; f32 f; };

struct Words_8005A438 { void *p; u32 w; };

typedef s32 M2C_UNK;
struct Vec_80059618 { f32 x, y, z; };

struct O_80059618 {
    u8 pad0[0x32C];
    s16 f32c;
    u8 pad32e[0x374 - 0x32E];
    s32 f374;
    u8 pad378[0x3BA - 0x378];
    u16 f3ba;
    u8 pad3bc[0x3E4 - 0x3BC];
    s32 f3e4;
    u8 pad3e8[0x480 - 0x3E8];
    Vec_80059618 f480;
};

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 TBoss4Type3__data_805D8C40;
extern const f32 lbl_805D8C90;
extern const f32 lbl_805D8C94;
extern const f32 lbl_805D8C98;
void TBoss4Type3__sub_80059FC4(u8 *arg0);
s32 TCameraCtrl__sub_8006D2B0(void *, void *, int);
extern RecoveredGlobal_80059450_lbl_80437854 lbl_80437854;
extern RecoveredGlobal_80059450_lbl_80437860 lbl_80437860;
extern RecoveredGlobal_80059450_lbl_8043786C lbl_8043786C;
extern RecoveredGlobal_80059450_lbl_80437878 lbl_80437878;
void TBoss4Type3__sub_80059450(u8 *arg0);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type3__sub_80059F04(Obj_80059F04 *self, s32 arg1, s32 arg2, s32 arg3);
void TBoss4DarkFalz__sub_8004B16C(void *, s32);
void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1);
void request_destroy__11TBoss4Type2FUi(void *p);
void TBoss4Type3__sub_8005A2A4(Obj_8005A2A4 *self);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void calc_grid_index__11TBoss4Type3FPv(void *arg0);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
Ply_80059ABC *get_player_by_client_id(u16);
extern const f64 lbl_80437890[];
extern const f32 lbl_805D8C7C;
void TBoss4Type3__sub_80059ABC(Obj_80059ABC *self, s32 arg1);
u32 TBoss4Type2__sub_800874F4(void *, s32);
void set_flags__11TBoss4Type2FPvUi(u32, u32);
extern s32 lbl_80437814[];
void TBoss4Type3__sub_8005A300(Obj_8005A300 *self);
void TBoss4Type3__sub_8005A150(void);
void TBoss4Type3__sub_8005A678(void *, s32);
extern Row_8005A398 lbl_80486C98[];
void TBoss4Type3__sub_8005A398(TBoss4Type3_8005A398 *self, s32 arg1);
void copy_pair__11TBoss4Type3FPvPv(void* p, void* q);
void TBoss4Type3__sub_8005A4F4(void *, void *, f32);
extern u8 lbl_80486FB0[];
extern u8 lbl_80486FBC[];
extern const f32 TBoss4Type3__data_805D8C34;
extern const f32 lbl_805D8C3C;
void TBoss4Type3__sub_8005A438(Obj_8005A438 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK create_yutai__11TBoss4Type3FPvPvPv(void *, s32, u16);
M2C_UNK fn_80052420(u16, s32);
u32 spawn_particle_effect(void *, s32);
void set_flags__11TBoss4Type2FPvUi(u32, u32);
Ply_80059ABC *get_player_by_client_id(u16);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
f32 TObjPlayer__sub_803E1A58(void *, void *);
extern const f32 lbl_805D8C64;
extern const f32 lbl_805D8C68;
extern const f32 lbl_805D8C6C;
void TBoss4Type3__sub_80059618(O_80059618 *o);
}

extern "C" {

void TBoss4Type3__vt0(void* p);
void TBoss4Type3__vt1(void* p);
void calc_grid_index__11TBoss4Type3FPv(void *arg0);
s32 get_random_scaled__11TBoss4Type3Fv(void);
void spawn_random_effect__11TBoss4Type3Fi(s32 arg0);
void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
f32 calc_boss4_scale__10TObjPlayerFi();
s32 is_split_screen();
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);

void TBoss4Type3__vt1(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_800599F4(p, (void*)0, (void*)2); } }
void TBoss4Type3__vt0(void* p) { *(s32*)((char*)p + 0x398) = 147; }

extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 lbl_805D53A0;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80059450_lbl_80437854_size[sizeof(RecoveredGlobal_80059450_lbl_80437854) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_80437860_size[sizeof(RecoveredGlobal_80059450_lbl_80437860) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_8043786C_size[sizeof(RecoveredGlobal_80059450_lbl_8043786C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80059450_lbl_80437878_size[sizeof(RecoveredGlobal_80059450_lbl_80437878) == 0x10 ? 1 : -1];
void TBoss4Type3__sub_80059450(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80059450, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80059450, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80059450, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80059450, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80059450, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80059450, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80059450, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_80059450, sp24) == 0x1C) ? 1 : -1];
    typedef char sp28_offset[(offsetof(Stack_80059450, sp28) == 0x20) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_80059450, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_80059450, sp30) == 0x28) ? 1 : -1];
    typedef char sp34_offset[(offsetof(Stack_80059450, sp34) == 0x2C) ? 1 : -1];
    Stack_80059450 stack;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x52C) == 1) {
        stack.sp2C = M2C_FIELD(&lbl_80437854.value, s32 *, 0);
        stack.sp30 = M2C_FIELD(&lbl_80437854.value, s32 *, 4);
        stack.sp34 = M2C_FIELD(&lbl_80437854.value, s32 *, 8);
        stack.sp20 = M2C_FIELD(&lbl_80437860.value, s32 *, 0);
        stack.sp24 = M2C_FIELD(&lbl_80437860.value, s32 *, 4);
        stack.sp28 = M2C_FIELD(&lbl_80437860.value, s32 *, 8);
        TCameraCtrl__sub_8006D2B0((void *) (&stack.sp20), (void *) (&stack.sp2C), (int) (0xFFFFU));
        return;
    }
    stack.sp14 = M2C_FIELD(&lbl_8043786C.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_8043786C.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_8043786C.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_80437878.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80437878.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80437878.value, s32 *, 8);
    TCameraCtrl__sub_8006D2B0((void *) (&stack.sp8), (void *) (&stack.sp14), (int) (0xFFFFU));
}
#pragma pop

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (is_split_screen() != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, u16 *, 0x3BA) != (s32) lbl_805D53A0) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x3D8) % 39;
    if (temp_r30 == 0) {
        spawn_effect__11TBoss4Type3Fsss(0x60, 0xF, (s16) M2C_FIELD(arg0, u16 *, 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        TBoss3Volopt__sub_8022675C(0x4003C133, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
}

void TBoss4Type3__sub_80059618(O_80059618 *o) {
    u8 *p;
    s32 i;
    u32 e;
    if (o->f3ba == 0xFFFF || o->f374 == 2 || o->f374 == 3 || o->f32c >= o->f3e4 ||
        (p = (u8 *)get_player_by_client_id(o->f3ba)) == NULL) {
        o->f3e4 = o->f32c;
        return;
    }
    fn_80052420(o->f3ba, o->f3e4 - o->f32c);
    o->f3e4 = o->f32c;
    create_yutai__11TBoss4Type3FPvPvPv(o, 2, o->f3ba);
    Vec_80059618 pos = *(Vec_80059618 *)(p + 0x2FC);
    Vec_80059618 tgt = o->f480;
    Vec_80059618 dir;
    VecCopy__FP3VecPC3Vec(&dir, &tgt);
    TBoss6Type1__sub_803D9370(&dir, &pos);
    if (TBoss6Kakusan__sub_803D8BD8(&dir) <= lbl_805D8C64) {
        return;
    }
    TNpcPlayer__sub_803D97B4(&dir);
    dir.x *= lbl_805D8C68;
    dir.y *= lbl_805D8C68;
    dir.z *= lbl_805D8C68;
    for (i = 0; i < 8; i++) {
        e = spawn_particle_effect(&pos, 0x38);
        if (e != 0) {
            set_flags__11TBoss4Type2FPvUi(e, 0x40);
        }
        TBoss4Zako__sub_803D8910(&pos, &dir);
        if (TObjPlayer__sub_803E1A58(&pos, &tgt) <= lbl_805D8C6C) {
            break;
        }
    }
}

void calc_grid_index__11TBoss4Type3FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
}

extern f32 lbl_805D8C80;

void TBoss4Type3__sub_80059ABC(Obj_80059ABC *self, s32 arg1) {
    Ply_80059ABC *p;
    if ((u16)arg1 != 0xFFFF) {
        p = get_player_by_client_id((u16)arg1);
        if (p != NULL) {
            self->f60 = TObjPlayer__sub_801423A4(self->f60, (s32)(lbl_80437890[0] * get_ad_end_text_start__10TObjPlayerFv(p->f38 - lbl_805D8C7C, p->f40)), 0x888);
            calc_grid_index__11TBoss4Type3FPv(self);
        }
    }
}

s32 get_random_scaled__11TBoss4Type3Fv(void) {
    return (s32) (lbl_805D8C80 * calc_boss4_scale__10TObjPlayerFi());
}

extern f32 lbl_805D8C8C;

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0) {
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * calc_boss4_scale__10TObjPlayerFi());
    TBoss4Type3__sub_80059F04((Obj_80059F04 *)(arg0), (s32)(0xF), (s32)(temp_r5), (s32)(temp_r5));
}

void TBoss4Type3__sub_80059EA8(Obj_80059EA8 *self, s32 arg1, s32 arg2) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((arg2 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3__sub_80059F04(Obj_80059F04 *self, s32 arg1, s32 arg2, s32 arg3) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((arg2 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((arg3 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

void TBoss4Type3__sub_80059F64(Obj_80059F64 *self, s32 arg1) {
    if (self->target != 0) {
        TBoss4DarkFalz__sub_8004B16C(self->target, (arg1 & 0x1F) | ((self->f3a0 & 0x1F) << 5) | ((self->f3a0 & 0x1F) << 10) | ((self->f3a8 & 0xF) << 15) | ((self->f3a8 & 0xF) << 19) | ((self->f3b8 & 0xF) << 23) | ((self->f3ba & 0xF) << 27));
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type3__sub_80059FC4(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r3;
    s32 var_r5;
    s32 var_r6;
    u8 *var_r31;
    u8 *var_r4;
    var_r31 = (u8 *)(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3B0);
    if ((temp_r0 == 2) || (temp_r0 == 3)) {
        temp_f1 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C90;
        M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1;
        if (temp_f1 > TBoss4Type3__data_805D8C34) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        }
    } else {
        var_r3 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        M2C_FIELD(var_r31, s32 *, 0x3B4) = (s32) (var_r3 + 1);
        temp_r0_2 = M2C_FIELD(var_r31, s32 *, 0x3B4);
        if (temp_r0_2 < 0x78) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
        } else if (temp_r0_2 < 0x96) {
            temp_f1_2 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C94;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_2;
            if (temp_f1_2 < TBoss4Type3__data_805D8C40) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
            }
        } else if (temp_r0_2 < 0x10E) {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C40;
        } else if (temp_r0_2 < 0x12C) {
            temp_f1_3 = M2C_FIELD(var_r31, f32 *, 0x3B0) + lbl_805D8C98;
            M2C_FIELD(var_r31, f32 *, 0x3B0) = temp_f1_3;
            if (temp_f1_3 > TBoss4Type3__data_805D8C34) {
                M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            }
        } else {
            M2C_FIELD(var_r31, f32 *, 0x3B0) = (f32) TBoss4Type3__data_805D8C34;
            M2C_FIELD(var_r31, s32 *, 0x3B4) = 0;
        }
        if (((TBoss4Type3__data_805D8C40 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) > TBoss4Type3__data_805D8C40)) || ((TBoss4Type3__data_805D8C34 == temp_f31) && (M2C_FIELD(var_r31, f32 *, 0x3B0) < TBoss4Type3__data_805D8C34))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003B02F;
            var_r5 = 0;
            var_r6 = 1;
            TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4003B02F)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
        if ((temp_f31 > TBoss4Type3__data_805D8C40) && (TBoss4Type3__data_805D8C40 == M2C_FIELD(var_r31, f32 *, 0x3B0))) {
            var_r3 = 0x40040000;
            var_r4 = (u8 *)(var_r31) + 0x38;
            var_r3 = 0x4003AD30;
            var_r5 = 0;
            var_r6 = 1;
            TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x4003AD30)), (M2C_UNK)((int) (var_r4)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (1)));
        }
    }
}
#pragma pop

void TBoss4Type3__sub_8005A2A4(Obj_8005A2A4 *self) {
    s32 i;
    for (i = 0; i < 13; i++) {
        if (self->parts[i] != 0) {
            request_destroy__11TBoss4Type2FUi(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}
void TBoss4Type3__sub_8005A300(Obj_8005A300 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        self->f404[i] = TBoss4Type2__sub_800874F4(self->f38, lbl_80437814[i]);
        if (self->f404[i] != 0) {
            set_flags__11TBoss4Type2FPvUi(self->f404[i], 0x40);
        }
    }
    for (; i < 13; i++) {
        self->f404[i] = 0;
    }
}
void TBoss4Type3__sub_8005A398(TBoss4Type3_8005A398 *self, s32 arg1) {
    MemberAction_8005A398 m;
    TBoss4Type3__sub_8005A150();
    self->f374 = arg1;
    TBoss4Type3__sub_8005A678(self, lbl_80486C98[self->f374].f4);
    m.words[0] = lbl_80486C98[self->f374].f8;
    m.words[1] = lbl_80486C98[self->f374].fc;
    m.words[2] = lbl_80486C98[self->f374].f10;
    if (m.action != 0) {
        (self->*(m.action))();
    }
}
void TBoss4Type3__sub_8005A438(Obj_8005A438 *self) {
    Pair_8005A438 b;
    Pair_8005A438 a;
    Words_8005A438 tmp;
    Pair_8005A438 *pb = &b;
    a.p = lbl_80486FB0;
    a.f = self->f3b0;
    b.p = lbl_80486FBC;
    b.f = TBoss4Type3__data_805D8C34 - a.f;
    if (a.f < lbl_805D8C3C) {
        tmp.p = lbl_80486FB0;
        tmp.w = *(u32 *)&a.f;
        copy_pair__11TBoss4Type3FPvPv(&a, pb);
        copy_pair__11TBoss4Type3FPvPv(pb, &tmp);
    }
    TBoss4Type3__sub_8005A4F4(self, a.p, a.f);
    TBoss4Type3__sub_8005A4F4(self, b.p, b.f);
}

}
