#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292574_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80291F9C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_802925C4_lbl_80540968 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80292200_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80292604_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
void TLobby__sub_8006F910(void *, void *, s32);
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292574(u8 *arg0, s32 arg1);
extern M2C_UNK lbl_804DB1F0[];
s32 TLobby__sub_80291F9C(void);
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_802925C4_lbl_80540968 lbl_80540968;
void TLobby__sub_802925C4(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 is_value_out_of_range__6TLobbyFi(s32);
M2C_UNK TLobby__sub_80292164(void *);
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292200(s32 arg0);
f32 get_random_float__8TObjFishFv(f32);
void TObjCHTimeWin__sub_80071DF4(int);
s32 TLobby__sub_80293080();
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_80292604(s32 arg0);
}

extern "C" {

int TLobby__sub_80292268(void);
s32 check_ready_status__6TLobbyFv(void);
void draw_if_ready2__6TLobbyFv(void);
s32 TLobby__sub_80293080();
M2C_UNK create__20TObjChallenge4PRetryFPv(void*);
s32 is_multi_ready__6TLobbyFv();

extern u32 lbl_805D6580;

void draw_if_ready2__6TLobbyFv(void) {
    if ((TLobby__sub_80293080() != 0) && (is_multi_ready__6TLobbyFv() != 0) && ((u32) lbl_805D6580 != 0U)) {
        create__20TObjChallenge4PRetryFPv((void*)lbl_805D6580);
    }
}

extern M2C_UNK lbl_804DB1F0[];

s32 check_ready_status__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80291F9C();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

typedef char RecoveredGlobal_80291F9C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291F9C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
s32 TLobby__sub_80291F9C(void) {
    if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80291F9C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x20) != 0) {
        return M2C_FIELD(&(*(RecoveredGlobal_80291F9C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x24);
    }
    return 0;
}

typedef char RecoveredGlobal_80292200_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292200_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80292200(s32 arg0) {
    is_value_out_of_range__6TLobbyFi(arg0);
    get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80292200_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC)));
    TLobby__sub_80292164((void *) (arg0));
}

int TLobby__sub_80292268(void) { return 1; }
typedef char RecoveredGlobal_80292574_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292574_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80292574(u8 *arg0, s32 arg1) {
    TLobby__sub_8006F910((u8 *)&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_804DB1F0).value + 0x50, arg0, 0xC);
    M2C_FIELD(&(*(RecoveredGlobal_80292574_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x18) = (s32) (arg1 | 0xFF000000);
}
typedef char RecoveredGlobal_802925C4_lbl_80540968_size[sizeof(RecoveredGlobal_802925C4_lbl_80540968) == 0x20 ? 1 : -1];
void TLobby__sub_802925C4(s32 arg0) {
    strncpy((void *) (&lbl_80540968.value), (void *) (arg0), (int) (0x20));
    M2C_FIELD(&lbl_80540968.value, s8 *, 0x1F) = 0;
}
typedef char RecoveredGlobal_80292604_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292604_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80292604(s32 arg0) {
    if (TLobby__sub_80293080() != 0) {
        get_random_float__8TObjFishFv((f32) (arg0 - M2C_FIELD(&(*(RecoveredGlobal_80292604_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC)));
        M2C_FIELD(&(*(RecoveredGlobal_80292604_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0xC) = arg0;
        TObjCHTimeWin__sub_80071DF4(arg0);
    }
}

}
