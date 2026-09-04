#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80104350(void);
void set_boss_buf_entry__6TLobbyFii(int a0, int a1);
int TLobby__sub_80104384(int a0);
s32 get_item_data__6TLobbyFUi(u32 arg0);
void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1);
void mark_selected__6TLobbyFv(void);
int get_drop_flag__6TLobbyFv(void);
s32 TItemData__sub_8010C8B4();
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK TItemData__sub_8010E59C(u32, s32);

extern M2C_UNK lbl_805D5430;

void TLobby__sub_80104350(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5430);
}

    extern int* lbl_805D54E8;
void set_boss_buf_entry__6TLobbyFii(int a0, int a1) { lbl_805D54E8[(unsigned short)(a1)] = a0; }

    extern int* lbl_805D54E8;
int TLobby__sub_80104384(int a0) {  return lbl_805D54E8[(unsigned short)(a0)]; }

s32 get_item_data__6TLobbyFUi(u32 arg0) {
    if (arg0 != 0U) {
        return TItemData__sub_8010C8B4();
    }
    return 0;
}

void forward_message__6TLobbyFiUi(s32 arg0, u32 arg1) {
    if (arg1 != 0U) {
        TItemData__sub_8010E59C(arg1, arg0);
    }
}

    extern int lbl_805D5448;
void mark_selected__6TLobbyFv(void) { lbl_805D5448 = 1; }

    extern int lbl_805D5448;
int get_drop_flag__6TLobbyFv(void) {  return lbl_805D5448; }

}
