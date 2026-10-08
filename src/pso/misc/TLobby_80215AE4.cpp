#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
    int create_named_object(void*);
    extern unsigned char lbl_8044BD3C[];
extern u32 lbl_805D61C0;
void load_judge_item(void);
}

extern "C" {

void update_all__6TLobbyFi(s32 arg0);
void free_window__6TLobbyFv(void);
M2C_UNK TLobby__sub_80215720(s32);
M2C_UNK roll_item_grind_bonus__6TLobbyFPv(s32);
M2C_UNK TLobby__sub_8021599C(s32);
s32 is_slot_match__6TLobbyFPv();
void free_nodes_with_id__6TLobbyFUi(void*);

extern u32 lbl_805D61C0;
extern s32 lbl_805D61C4;
extern s32 lbl_805D61C8;

void update_all__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D61C0 != 0U) {
        lbl_805D61C8 = 0;
        lbl_805D61C4 = is_slot_match__6TLobbyFPv();
        TLobby__sub_8021599C(arg0);
        roll_item_grind_bonus__6TLobbyFPv(arg0);
        TLobby__sub_80215720(arg0);
    }
}

extern u32 lbl_805D61C0;

void free_window__6TLobbyFv(void) {
    if ((u32) lbl_805D61C0 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D61C0);
        lbl_805D61C0 = 0U;
    }
}
void load_judge_item(void) { (*(int *)&lbl_805D61C0) = create_named_object(lbl_8044BD3C); }

}
