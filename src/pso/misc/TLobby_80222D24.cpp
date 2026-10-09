#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma fp_contract on
#pragma fp_contract on
extern "C" {
s32 create_named_object(s32);
extern M2C_UNK lbl_804CA288[];
extern s32 current_language;
extern s32 lbl_805D6238;
extern u32 lbl_805D6258;
void create_named_lobby_object__6TLobbyFv(void);
s32 is_split_screen();
s32 TShopGenerator__sub_80222DAC(s32 arg0);
}

extern "C" {

void free_singleton__6TLobbyFv(void);
void free_nodes_with_id__6TLobbyFUi(void*);

extern u32 lbl_805D6258;

void free_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6258 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6258);
        lbl_805D6258 = 0U;
    }
}
void create_named_lobby_object__6TLobbyFv(void) {
    if (((s32) lbl_805D6238 < 0) || ((s32) lbl_805D6238 > 9)) {
        lbl_805D6238 = 0;
    }
    (*(s32 *)&lbl_805D6258) = create_named_object(lbl_804CA288[current_language]);
}
#pragma push
#pragma scheduling off
s32 TShopGenerator__sub_80222DAC(s32 arg0) {
    return ((is_split_screen() - 1) == 0) ? arg0 : 0;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma pop

}
