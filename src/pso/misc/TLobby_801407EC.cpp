#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_boss3_scene__6TLobbyFv(void);
M2C_UNK TLobby__sub_8007BA20();
M2C_UNK TLobby__sub_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK update_current_floor__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80227F7C();
M2C_UNK fn_800F7B84();
M2C_UNK fn_80226254();

extern M2C_UNK lbl_804A7370[];

void cleanup_boss3_scene__6TLobbyFv(void) {
    TLobby__sub_80227F7C();
    TLobby__sub_8022743C();
    fn_80226254();
    TLobby__sub_800FD6A0(lbl_804A7370, 0x60);
    fn_800F7B84();
    update_current_floor__6TLobbyFv();
    TLobby__sub_8007BA20();
}

}
