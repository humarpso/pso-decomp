#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80082080_lbl_8048E194 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80082080_lbl_8048E194_size[sizeof(RecoveredGlobal_80082080_lbl_8048E194) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80082080_lbl_8048E194 lbl_8048E194;
extern u32 lbl_805D4ED0;
void TLobby__sub_80082080(void);
}

extern "C" {

void *TObjPlayer__sub_800820D0(void *arg0, s16 arg1);
int TObjPlayer__sub_800822B0(void);
int TObjPlayer__sub_800822B8(void);
f32 TObjPlayer__sub_800822C0(void);
f32 TObjPlayer__sub_800822C8(void);
void destroy_global_singleton__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void request_destroy__11TBoss4Type2FUi(void *);

extern u32 lbl_805D4ED0;

void destroy_global_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D4ED0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4ED0, 1);
        lbl_805D4ED0 = 0U;
    }
}

extern M2C_UNK lbl_8048E1A4[];

void TLobby__sub_80082080(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_8048E194.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D4ED0) = var_r0;
}

void *TObjPlayer__sub_800820D0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E1A4;
        if (M2C_FIELD(arg0, void **, 0x350) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x350)); }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TObjPlayer__sub_800822B0(void) { return 1; }
int TObjPlayer__sub_800822B8(void) { return 1; }

extern f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C0(void) {
    return lbl_805D9378;
}

extern f32 lbl_805D9378;

f32 TObjPlayer__sub_800822C8(void) {
    return lbl_805D9378;
}

}
