#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80351F3C(void);
int get_lobby_type__6TLobbyFv(void);
s32 is_connected__6TLobbyFv(void);
s32 is_lobby_obj_active__6TLobbyFv(void);
void *TLobby__sub_80351FDC(void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D6EC0;

s32 is_connected__6TLobbyFv(void) {
    if ((void *) lbl_805D6EC0 != NULL) {
        return ((u32) M2C_FIELD(lbl_805D6EC0, u32 *, 0x1C) >> 2U) & 1;
    }
    return 0;
}

extern void *lbl_805D6EC0;

s32 is_lobby_obj_active__6TLobbyFv(void) {
    if ((void *) lbl_805D6EC0 != NULL) {
        return ((u32) M2C_FIELD(lbl_805D6EC0, u32 *, 0x1C) >> 1U) & 1;
    }
    return 0;
}

    extern int lbl_805D6EC4;
int get_lobby_type__6TLobbyFv(void) {  return lbl_805D6EC4; }

extern void *lbl_805D6EC0;

void TLobby__sub_80351F3C(void) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TLobby__sub_80351FDC(o);
    }
    lbl_805D6EC0 = o;
}

}
