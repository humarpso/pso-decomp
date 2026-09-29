#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * __ct__5THeapFUli(void *, s32, s32);
u8 *__nw__5THeapFUl(M2C_UNK);
extern int lbl_805D6094;
void TLobby__sub_802090C0(void);
void TItemDrop__sub_800FDDF4();
void TItemDrop__sub_800FDE7C(void *);
s32 TLobby__sub_80208F7C();
extern u8 lbl_8044BAD0[];
extern s32 lbl_805139F8[];
extern int lbl_805D6090;
extern s32 lbl_805D6098;
void TLobby__sub_8020901C(void);
}

extern "C" {

void free_heap__6TLobbyFv(void);
int get_destroy_event_obj__6TLobbyFv(void);
int get_team_state__6TLobbyFPv(void* p);
int TLobby__sub_80208E30(void*);
int __dt__5THeapFv(void*, void*);

int get_team_state__6TLobbyFPv(void* p) { return TLobby__sub_80208E30(p); }

    extern int lbl_805D6094;

void TLobby__sub_8020901C(void) {
    s32 i;
    for (i = 0; i < 0x12; i++) {
        lbl_805139F8[i] = 0;
    }
    (*(s32 *)&lbl_805D6090) = -1;
    lbl_805D6098 = 0;
    TItemDrop__sub_800FDE7C(lbl_8044BAD0);
    if (TLobby__sub_80208F7C() == 0) {
        TItemDrop__sub_800FDDF4();
        return;
    }
    TItemDrop__sub_800FDDF4();
}

void free_heap__6TLobbyFv(void) { __dt__5THeapFv((void*)(lbl_805D6094), (void*)1); lbl_805D6094 = 0; }

    extern int lbl_805D6090;

void TLobby__sub_802090C0(void) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__5THeapFUl(0x14));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__5THeapFUli(temp_r3, 0x8000, 0x20));
    }
    (*(u8 * *)&lbl_805D6094) = var_r0;
}

int get_destroy_event_obj__6TLobbyFv(void) {  return lbl_805D6090; }

}
