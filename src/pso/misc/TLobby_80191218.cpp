#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80191264(void);
void TLobby__sub_80191270(void);
void TObjHashiVersus2__sub_801912A4(void);
void TObjHashiVersus2__sub_801912B0(void);
void *create_npc__6TLobbyFPv(void *arg0);
void fn_8019127C(register M2C_UNK r3);
void *TLobby__sub_8019118C(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(M2C_UNK, M2C_UNK);

extern void *tl_05;

void *create_npc__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TLobby__sub_8019118C(o, tl_05, arg0);
    }
    return o;
}

    extern int lbl_805D3360;
void TLobby__sub_80191264(void) { lbl_805D3360 = -1; }

    extern int lbl_805D3360;
void TLobby__sub_80191270(void) { lbl_805D3360 = -1; }

void fn_8019127C(register M2C_UNK r3) {
    set_state_flags__10TObjPlayerFPvUi(r3, 0x8000);
}

    extern int lbl_805D5C08;
void TObjHashiVersus2__sub_801912A4(void) { lbl_805D5C08 = 1; }

    extern int lbl_805D5C08;
void TObjHashiVersus2__sub_801912B0(void) { lbl_805D5C08 = 0; }

}
