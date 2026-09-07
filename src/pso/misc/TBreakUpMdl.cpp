#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00_size[sizeof(RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80096F54_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80096F54_lbl_8058D490_size[sizeof(RecoveredGlobal_80096F54_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00_size[sizeof(RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80096FD8_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80096FD8_lbl_8058D490_size[sizeof(RecoveredGlobal_80096FD8_lbl_8058D490) == 0x30 ? 1 : -1];

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjPlayer__sub_803D7CA4(int);
M2C_UNK TCameraCtrl__sub_803D8934(int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 TBreakUpMdl__sub_80096CE0(u8 *arg0, u8 *arg1, s32 arg2);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TCameraCtrl__sub_803D8934(int, int, int);
M2C_UNK TObjPlayer__sub_803D99F8(void *, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 TBreakUpMdl__sub_80096D94(u8 *arg0, u8 *arg1, s32 arg2);
s32 TBreakUpMdl__sub_80096CE0(u8 *arg0, u8 *arg1, s32 arg2);
void TBreakUpMdl__sub_80096EBC(void *, s32);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D97F0(u32);
M2C_UNK TObjPlayer__sub_803D9B78();
extern M2C_UNK TBreakUpMdl__data_8048FA00[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
u8 *TBreakUpMdl__sub_80096F54(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 TBreakUpMdl__sub_80096CE0(u8 *arg0, u8 *arg1, s32 arg2);
void TBreakUpMdl__sub_80096EBC(void *, s32);
void TObjPlayer__sub_803D7B68(s32, f32);
s32 TObjPlayer__sub_803D97F0(u32);
M2C_UNK TObjPlayer__sub_803D9B78();
extern M2C_UNK TBreakUpMdl__data_8048FA00[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
u8 *TBreakUpMdl__sub_80096FD8(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
}

extern "C" {

void TObjEneDf2Bringer__vt103(void* p);
void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1);
void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1);
void copy__11TBreakUpMdlFPvPv(void* p, void* q);
int TObjEneDf2Bringer__sub_800994F8(void*);
void __dl__7TObjectFPv(void *);
M2C_UNK __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);
int get_target_info__9TObjEneDDFPv(void*);

extern M2C_UNK __vt__11TBreakUpMdl[];

void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBreakUpMdl;
        free__11TOBoss4RockFUi((void *)(M2C_FIELD(arg0, void **, 0x34)));
        M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK TBreakUpMdl__data_8048FA00[];

#pragma push
#pragma fp_contract on
s32 TBreakUpMdl__sub_80096CE0(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r31;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r29;
    u8 *var_r28;
    var_r28 = (u8 *)(arg1);
    var_r29 = arg2;
    do {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D7CA4((int) (var_r28));
        temp_r30 = M2C_FIELD(var_r28, s32 *, 0);
        if (!(temp_r30 & 8)) {
            temp_r31 = (u8 *)(M2C_FIELD(arg0, s32 *, 4) + (var_r29 * 0x1C));
            temp_r4 = (long) (temp_r31 + 4);
            TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
            VecCopy__FP3VecPC3Vec((void *) (temp_r31 + 0x10), (void *) (temp_r31 + 4));
            clamp_velocity__15TObjBoss2TunnelFPv(temp_r31 + 0x10);
            var_r29 += 1;
            *(s32 *)temp_r31 = M2C_FIELD(var_r28, s32 *, 4);
        }
        if (!(temp_r30 & 0x10)) {
            var_r29 = TBreakUpMdl__sub_80096CE0(arg0, M2C_FIELD(var_r28, u8 **, 0x2C), var_r29);
        }
        TObjPlayer__sub_803D9B78();
        var_r28 = (u8 *)(M2C_FIELD(var_r28, u8 **, 0x30));
    } while (var_r28 != NULL);
    return var_r29;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 TBreakUpMdl__sub_80096D94(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r31;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r29;
    u8 *var_r28;
    var_r28 = (u8 *)(arg1);
    var_r29 = arg2;
    do {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (var_r28 + 8));
        TObjPlayer__sub_803D99F8((void *) (var_r28 + 0x14), (int) (0));
        TBoss7Tentacle__sub_803D9BA0((void *) (var_r28 + 0x20));
        temp_r30 = M2C_FIELD(var_r28, s32 *, 0);
        if (!(temp_r30 & 8)) {
            temp_r31 = (u8 *)(M2C_FIELD(arg0, s32 *, 4) + (var_r29 * 0x1C));
            temp_r4 = (long) (temp_r31 + 4);
            TCameraCtrl__sub_803D8934((int) (0), (int) (temp_r4), (int) (temp_r4));
            VecCopy__FP3VecPC3Vec((void *) (temp_r31 + 0x10), (void *) (temp_r31 + 4));
            clamp_velocity__15TObjBoss2TunnelFPv(temp_r31 + 0x10);
            var_r29 += 1;
            *(s32 *)temp_r31 = M2C_FIELD(var_r28, s32 *, 4);
        }
        if (!(temp_r30 & 0x10)) {
            var_r29 = TBreakUpMdl__sub_80096D94(arg0, M2C_FIELD(var_r28, u8 **, 0x2C), var_r29);
        }
        TObjPlayer__sub_803D9B78();
        var_r28 = (u8 *)(M2C_FIELD(var_r28, u8 **, 0x30));
    } while (var_r28 != NULL);
    return var_r29;
}
#pragma pop

void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = TBreakUpMdl__data_8048FA00;
        free__11TOBoss4RockFUi((void *)(M2C_FIELD(arg0, s32 *, 4)));
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TBreakUpMdl__sub_80096F54(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &(*(RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00 *)&TBreakUpMdl__data_8048FA00).value;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    TBreakUpMdl__sub_80096EBC(arg0, arg1);
    TObjPlayer__sub_803D7B68(arg2, farg0);
    TObjPlayer__sub_803D97F0((u32) &lbl_8058D490.value);
    TBreakUpMdl__sub_80096CE0((u8 *)(arg0), (u8 *)((void *) arg1), (s32)(0));
    TObjPlayer__sub_803D9B78();
    return arg0;
}

u8 *TBreakUpMdl__sub_80096FD8(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &(*(RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00 *)&TBreakUpMdl__data_8048FA00).value;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    TBreakUpMdl__sub_80096EBC(arg0, arg1);
    TObjPlayer__sub_803D7B68(arg2, farg0);
    TObjPlayer__sub_803D97F0((u32) &(*(RecoveredGlobal_80096FD8_lbl_8058D490 *)&lbl_8058D490).value);
    TBreakUpMdl__sub_80096CE0((u8 *)(arg0), (u8 *)((void *) arg1), (s32)(0));
    TObjPlayer__sub_803D9B78();
    return arg0;
}

void copy__11TBreakUpMdlFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

void TObjEneDf2Bringer__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDf2Bringer__sub_800994F8(p); } }

}
