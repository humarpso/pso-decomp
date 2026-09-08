#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_28 { u8 bytes[0x28]; };

struct RecoveredGlobal_80074FAC_lbl_8043878C {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
u16 TCameraCtrl__sub_80068958();
M2C_UNK TObjTombstone__sub_800753DC(void *);
M2C_UNK get_camera_no__11TCameraCtrlFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
f32 TObjPlayer__sub_803E1A58(void *, void *);
extern f32 TObjTombstone__data_805D9174;
extern f32 TObjTombstone__data_805D9178;
extern f32 TObjTombstone__data_805D917C;
extern const f32 lbl_805D9180;
extern f32 TObjTombstone__data_805D9184;
void TObjTombstone__sub_80075340(u8 *arg0);
void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);
extern RecoveredGlobal_80074FAC_lbl_8043878C lbl_8043878C;
extern RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250 TObjTombstone__data_8048D250;
void TObjTombstone__sub_80074FAC(void);
}

extern "C" {

s32 check_owner__13TObjTombstoneFPv(void *arg0);
void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q);
void handle_6x96(void);
s32 TLobby__sub_80293080();
s32 TObjPlayer__sub_800196EC();
s32 is_flag_set__6TLobbyFv();
s32 is_not_split_screen__13TRaderMapCoreFv();

void copy_matrix__13TObjTombstoneFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

typedef char RecoveredGlobal_80074FAC_lbl_8043878C_size[sizeof(RecoveredGlobal_80074FAC_lbl_8043878C) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250_size[sizeof(RecoveredGlobal_80074FAC_TObjTombstone__data_8048D250) == 0x28 ? 1 : -1];
void TObjTombstone__sub_80074FAC(void) {
    M2CCopy_28 sp8;
    sp8 = *(const M2CCopy_28 *)((s32) ((u8 *)(&lbl_8043878C.value) + -4) + 4);
    copy_matrix__13TObjTombstoneFPvPv((void*)(&TObjTombstone__data_8048D250.value), (void*)(&sp8));
}

void handle_6x96(void) {  }
s32 check_owner__13TObjTombstoneFPv(void *arg0) {
    s32 var_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r3 = TLobby__sub_80293080();
    } else {
        var_r3 = is_flag_set__6TLobbyFv();
    }
    if ((var_r3 == 0) || ((s8) M2C_FIELD(arg0, u8 *, 0xC2) != TObjPlayer__sub_800196EC())) {
        return 1;
    }
    return 0;
}
void TObjTombstone__sub_80075340(u8 *arg0) {
    f32 temp_f1;
    u32 temp_r3;
    get_camera_no__11TCameraCtrlFv();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (TCameraCtrl__sub_80068958()));
    if (temp_r3 != 0U) {
        temp_f1 = TObjPlayer__sub_803E1A58((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
        if (temp_f1 <= lbl_805D9180) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9178;
        } else if (temp_f1 >= TObjTombstone__data_805D917C) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
        } else {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((TObjTombstone__data_805D917C - temp_f1) / TObjTombstone__data_805D9184);
        }
        TObjTombstone__sub_800753DC((void *) (arg0));
    }
}

}
