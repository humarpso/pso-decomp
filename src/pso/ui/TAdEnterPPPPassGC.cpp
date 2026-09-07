#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80339480_lbl_804EF500 {
    M2C_UNK value;
    u8 remaining[0x94];
};

struct RecoveredGlobal_803392F4_lbl_80477C20 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TWindow__close(void *);
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
extern const f32 lbl_805DF9E8;
void TAdEnterPPPPassGC__sub_80338FC0(u8 *arg0);
s32 is_state_active__6TLobbyFv(void);
s32 TLobby__sub_8014618C(void);
void TLobby__sub_80146CB8(s32);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_80339480_lbl_804EF500 lbl_804EF500;
void TAdEnterPPPPassGC__sub_80339480(s32 arg0);
s32 TAdEnterSerialAccessGC__sub_802AEBA8(int);
s32 TLevelSelect__sub_802AEBE4(int, void *);
s32 set_active__22TAdEnterSerialAccessGCFPv(int);
s32 TAdEnterSerialAccessGC__sub_8032AD30(void *, int);
s32 TAdEnterSerialAccessGC__sub_8032AE1C(void *);
s32 TAdEnterSerialAccessGC__sub_8032AE54(void *, int);
extern RecoveredGlobal_803392F4_lbl_80477C20 lbl_80477C20;
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
void TAdEnterPPPPassGC__sub_803392F4(u8 *arg0);
}

extern "C" {

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1);
int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p);
int request_transition__17TAdEnterPPPPassGCFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int reset_mode_state__21TAdMultiChgGameModeGCFv(void*);

void TAdEnterPPPPassGC__sub_80338FC0(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u8 **, 0x30) = NULL;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x34) = NULL;
    }
    if ((void *) lbl_805D6CA0 != NULL) {
        queue_destruction__7TObjectFv(lbl_805D6CA0);
        lbl_805D6CA0 = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24) + 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r4;
    if ((f32) temp_r4 > lbl_805DF9E8) {
        lbl_805D6CA4 = M2C_FIELD(arg0, s32 *, 0x20);
    }
}

int forward_chg_game_mode__17TAdEnterPPPPassGCFPv(void* p) { return reset_mode_state__21TAdMultiChgGameModeGCFv(p); }
int request_transition__17TAdEnterPPPPassGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern M2C_UNK __vt__17TAdEnterPPPPassGC[];

typedef char RecoveredGlobal_80339480_lbl_804EF500_size[sizeof(RecoveredGlobal_80339480_lbl_804EF500) == 0x98 ? 1 : -1];

typedef char RecoveredGlobal_803392F4_lbl_80477C20_size[sizeof(RecoveredGlobal_803392F4_lbl_80477C20) == 0x20 ? 1 : -1];
void TAdEnterPPPPassGC__sub_803392F4(u8 *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = TAdEnterSerialAccessGC__sub_8032AE54((void *) (arg0), (int) (3));
    M2C_FIELD(arg0, s32 *, 0x34) = TAdEnterSerialAccessGC__sub_8032AE1C((void *) (arg0));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp_r3 != 0U) {
        TAdEnterSerialAccessGC__sub_802AEBA8((int) (temp_r3));
        TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, u32 *, 0x2C)), (void *) ((u8 *)&lbl_80477C20.value + 0x10));
        set_active__22TAdEnterSerialAccessGCFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
    }
    (*(s32 *)&lbl_805D6CA0) = TAdEnterSerialAccessGC__sub_8032AD30((void *) (arg0), (int) (3));
    lbl_805D6CA4 = 1;
}

void TAdEnterPPPPassGC__sub_80339480(s32 arg0) {
    if ((TLobby__sub_8014618C() != 0) && (is_state_active__6TLobbyFv() != 0)) {
        TLobby__sub_80146CB8(arg0);
        return;
    }
    memset((void *) (&lbl_804EF500.value), (int) (0), (int) (0x20));
    strncpy((s32) &lbl_804EF500.value, arg0, 0x1F);
}

void *__dt__17TAdEnterPPPPassGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdEnterPPPPassGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
