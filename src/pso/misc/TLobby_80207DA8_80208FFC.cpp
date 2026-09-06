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
}

extern "C" {

void free_heap__6TLobbyFv(void);
int get_destroy_event_obj__6TLobbyFv(void);
int get_team_state__6TLobbyFPv(void* p);
int TLobby__sub_80208E30(void*);
int __dt__5THeapFv(void*, void*);

int get_team_state__6TLobbyFPv(void* p) { return TLobby__sub_80208E30(p); }

    extern int lbl_805D6094;
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
