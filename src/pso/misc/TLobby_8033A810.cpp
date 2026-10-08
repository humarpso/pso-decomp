#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tbl_8033A844 { s32 v[5]; };

extern "C" {
s32 update_menu_cursor__6TLobbyFv();
s32 TLobby__sub_8023E4B4(void *, void *);
extern const s32 lbl_80477D18[];
extern const s32 lbl_80477D2C[];
extern const s32 lbl_805D5544;
extern u32 lbl_805D6D78;
void update_menu_cursor_selection__6TLobbyFv(void);
}

extern "C" {

void free_global_object__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6D78;

void free_global_object__6TLobbyFv(void) {
    if ((u32) lbl_805D6D78 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6D78);
        lbl_805D6D78 = 0U;
    }
}
void update_menu_cursor_selection__6TLobbyFv(void) {
    update_menu_cursor__6TLobbyFv();
    Tbl_8033A844 a = *(const Tbl_8033A844 *)lbl_80477D18;
    Tbl_8033A844 b = *(const Tbl_8033A844 *)lbl_80477D2C;
    s32 r4 = b.v[lbl_805D5544];
    lbl_805D6D78 = r4;
    TLobby__sub_8023E4B4((void *)a.v[lbl_805D5544], (void *)r4);
}

}
