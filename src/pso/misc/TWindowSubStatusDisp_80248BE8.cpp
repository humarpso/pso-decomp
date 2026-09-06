#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * fn_80249004(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, int);
u8 *TWindowSubStatusDisp__sub_80248BE8(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1);
void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b);
void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
M2C_UNK draw_selected_list_entry(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

extern s32 lbl_805D53A0;

u8 *TWindowSubStatusDisp__sub_80248BE8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TShopJudgmentItemWindow__sub_80267F9C((void *) (arg1), (int) (0x5));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x8C));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(fn_80249004(temp_r3, arg0, arg2));
    }
    return var_r0;
}

void refresh_with_default_list__20TWindowSubStatusDispFii(s32 a, s32 b) {
    TWindowSubStatusDisp__sub_80248BE8((s32)(a), (s32)(b), lbl_805D53A0);
}

void render_status_and_children__20TWindowSubStatusDispFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    draw_selected_list_entry(arg0, temp_r3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u32 *, 0x80), temp_r3);
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, u32 *, 0x84), temp_r3, arg0 + 0x68);
    }
}

extern M2C_UNK lbl_804CE7E8[];

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7E8;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
