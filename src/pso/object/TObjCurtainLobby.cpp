#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035BACC_lbl_804F1D98 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8035BACC_lbl_804F1D98_size[sizeof(RecoveredGlobal_8035BACC_lbl_804F1D98) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_8035BACC_lbl_804F1D98 lbl_804F1D98;
extern u32 TObjCurtainLobby__data_805D6F58;
extern s32 lbl_805D6F5C;
void TObjCurtainLobby__sub_8035BACC(void);
}

extern "C" {

void close_dialog_window__16TObjCurtainLobbyFv(void);
void *create__16TObjCurtainLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjCurtainLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjCurtainLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjCurtainLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjCurtainLobby__data_805D6F58;

void close_dialog_window__16TObjCurtainLobbyFv(void) {
    if ((u32) TObjCurtainLobby__data_805D6F58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCurtainLobby__data_805D6F58, 1);
        TObjCurtainLobby__data_805D6F58 = 0U;
    }
}
void TObjCurtainLobby__sub_8035BACC(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F1D98.value, 0, 0, 0));
    }
    (*(s32 *)&TObjCurtainLobby__data_805D6F58) = var_r0;
    lbl_805D6F5C = get_lobby_type__6TLobbyFv();
}

}
