#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80364258_80364258 { s32 f0; };

struct RecoveredGlobal_8032B904_lbl_80477278 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8032B904_lbl_80477278_size[sizeof(RecoveredGlobal_8032B904_lbl_80477278) == 0x10 ? 1 : -1];

extern "C" {
void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *);
void TWindow__close(void *);
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
extern const f32 lbl_805DF780;
void TAdEnterPasswordGC__sub_8032B5B0(u8 *arg0);
u32 TAdEnterSerialAccessGC__sub_8032AD30(s32, s32);
s32 TAdEnterSerialAccessGC__sub_8032AE54(M2C_UNK, s32);
M2C_UNK TAdEnterSerialAccessGC__sub_802AEBA8(void *);
M2C_UNK TLevelSelect__sub_802AEBE4(int, void *);
M2C_UNK set_active__22TAdEnterSerialAccessGCFPv(int);
s32 TAdEnterSerialAccessGC__sub_8032AE1C(void *);
extern RecoveredGlobal_8032B904_lbl_80477278 lbl_80477278;
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
void TAdEnterPasswordGC__sub_8032B904(s32 arg0);
}

extern "C" {

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0);
int request_transition__18TAdEnterPasswordGCFPv(void* p);
int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(u32);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int set_mode_0x14__21TAdMultiChgGameModeGCFv(void*);

void TAdEnterPasswordGC__sub_8032B5B0(u8 *arg0) {
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
    if ((f32) temp_r4 > lbl_805DF780) {
        lbl_805D6CA4 = M2C_FIELD(arg0, s32 *, 0x20);
    }
}

int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p) { return set_mode_0x14__21TAdMultiChgGameModeGCFv(p); }
int request_transition__18TAdEnterPasswordGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern M2C_UNK __vt__18TAdEnterPasswordGC[];

void TAdEnterPasswordGC__sub_8032B904(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = TAdEnterSerialAccessGC__sub_8032AE54(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x34) = TAdEnterSerialAccessGC__sub_8032AE1C((void *) (arg0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TAdEnterSerialAccessGC__sub_802AEBA8(M2C_FIELD(arg0, void **, 0x2C));
        TLevelSelect__sub_802AEBE4((int) (M2C_FIELD(arg0, u32 *, 0x2C)), (void *) (&lbl_80477278.value));
        set_active__22TAdEnterSerialAccessGCFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
    }
    (*(u32 *)&lbl_805D6CA0) = TAdEnterSerialAccessGC__sub_8032AD30(arg0, 2);
    lbl_805D6CA4 = 1;
}

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdEnterPasswordGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D6CB8;

void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r0 < 0x18) {
        ((struct Elt80364258_80364258 *)(arg0 + 0x20))[temp_r0].f0 = arg1;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) + 1);
    }
}

s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0) {
    if ((u32) lbl_805D6CB8 != 0U) {
        if (get_confirm_state__20TAdSnAkPassConfirmGCFPv(lbl_805D6CB8) != 0) {
            return 0;
        }
        TAdEnterPasswordGC__sub_8032BC94((u8 *)(lbl_805D6CB8), (s32)(arg0));
        return 1;
    }
    return 0;
}

}
