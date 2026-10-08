#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
u8 *__nw__7TObjectFUl(int);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *construct_item_list__20TWindowSubStatusDispFPviis(u8 *, s32, s32, s32);
extern M2C_UNK lbl_8044F55C[];
u8 *create_item_list_window(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void open_default__23TShopJudgmentItemWindowFi(s32 a);

extern s32 lbl_805D53A0;

u8 *create_item_list_window(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    u8 *var_r0;
    temp_r3 = get_camera_id__11TCameraCtrlFv();
    switch (temp_r3) {
    case 1:
        TShopJudgmentItemWindow__sub_80267F9C((void *) (lbl_8044F55C), arg1);
        break;
    case 2:
        TShopJudgmentItemWindow__sub_80267F9C((void *) ((u8 *)lbl_8044F55C + 8), arg1);
        break;
    case 3:
    case 4:
        TShopJudgmentItemWindow__sub_80267F9C((void *) ((u8 *)lbl_8044F55C + 0x10), arg1);
        break;
    }
    var_r0 = __nw__7TObjectFUl((int) (0x8C));
    if (var_r0 != NULL) {
        var_r0 = construct_item_list__20TWindowSubStatusDispFPviis(var_r0, arg0, arg1, arg2);
    }
    return var_r0;
}

void open_default__23TShopJudgmentItemWindowFi(s32 a) {
    create_item_list_window((s32)(a), (s32)(0x40), (s32)(lbl_805D53A0));
}

}
