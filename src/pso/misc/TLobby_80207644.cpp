#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80207798_lbl_80513920 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct RecoveredGlobal_802077CC_lbl_80513920 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

extern "C" {
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
s32 TLobby__sub_80207798(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern RecoveredGlobal_80207798_lbl_80513920 lbl_80513920;
s32 TLobby__sub_802077CC(s32 arg0, u8 *arg1);
}

extern "C" {

struct Buf12_80207718_80207644 { s32 a, b, c; };

void TLobby__sub_80207644(void);
s32 get_player_floor__6TLobbyFi(s32 idx);
void reset_story_select_state__6TLobbyFv(void);
void sync_story_select__6TLobbyFv(void);
M2C_UNK set_state__16TAdStorySelectGCFi(void*);

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void TLobby__sub_80207644(void) { lbl_805D6060 = lbl_805D362C; }

    extern int lbl_805D362C;
    extern int lbl_805D6060;
void sync_story_select__6TLobbyFv(void) { lbl_805D362C = lbl_805D6060; }

s32 get_player_floor__6TLobbyFi(s32 idx) {
    struct Buf12_80207718_80207644 buf;

    if (TLobby__sub_802077CC((s32)(idx), (u8 *)(&buf)) == 1) {
        return buf.a;
    }
    return -1;
}

extern s32 lbl_805D3628;

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80207798_lbl_80513920_size[sizeof(RecoveredGlobal_80207798_lbl_80513920) == 0xD8 ? 1 : -1];
s32 TLobby__sub_80207798(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    u8 *temp_r4;
    if (arg0 > 0x11) {
        return 0;
    }
    temp_r0 = arg0 * 0xC;
    M2C_FIELD(((u8 *)(&lbl_80513920.value) + temp_r0), s32 *, 0) = arg1;
    temp_r4 = (u8 *)(&lbl_80513920.value) + temp_r0;
    M2C_FIELD(temp_r4, s32 *, 4) = arg2;
    M2C_FIELD(temp_r4, s32 *, 8) = arg3;
    return 1;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_802077CC_lbl_80513920_size[sizeof(RecoveredGlobal_802077CC_lbl_80513920) == 0xD8 ? 1 : -1];
s32 TLobby__sub_802077CC(s32 arg0, u8 *arg1) {
    s32 temp_r6;
    u8 *temp_r5;
    if (arg0 > 0x11) {
        return 0;
    }
    temp_r6 = arg0 * 0xC;
    temp_r5 = (u8 *)(&(*(RecoveredGlobal_802077CC_lbl_80513920 *)&lbl_80513920).value) + temp_r6;
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_802077CC_lbl_80513920 *)&lbl_80513920).value) + temp_r6), s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    return 1;
}
#pragma pop

void reset_story_select_state__6TLobbyFv(void) {
    if ((s32) lbl_805D3628 != -1) {
        set_state__16TAdStorySelectGCFi((void*)lbl_805D3628);
        lbl_805D3628 = -1;
    }
}

}
