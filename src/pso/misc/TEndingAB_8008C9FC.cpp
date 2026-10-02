#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(s32, M2C_UNK);
extern s32 TEndingAB__data_805D4F10;
extern const f32 lbl_805D9580;
void TEndingAB__sub_8008CB54(u8 *arg0);
extern s32 lbl_805D5550;
extern s32 lbl_805D4F14;
s32 set_global_param__8TObjFishFi(s32);
void TEndingAB__sub_8008CC5C(void);
}

extern "C" {

void advance_fade_sequence__9TEndingABFPv(void *arg0);
M2C_UNK update_flag890_state__10TObjPlayerFi(s32);

extern s32 TEndingAB__data_805D4F10;

void advance_fade_sequence__9TEndingABFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;

    switch ((s32) TEndingAB__data_805D4F10) {
    case 1:
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 > (s32) ((temp_r4 * 3) - temp_r4)) {
            TEndingAB__data_805D4F10 = 2;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 2:
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_2;
        if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0xD)) {
            TEndingAB__data_805D4F10 = 3;
            return;
        }
        break;
    case 3:
        temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_3;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3_3 > (s32) ((temp_r4_2 * 0xE) - temp_r4_2)) {
            TEndingAB__data_805D4F10 = 4;
            update_flag890_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
            return;
        }
        break;
    case 4:
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x1C) + 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r3_4;
        if (temp_r3_4 > (s32) (M2C_FIELD(arg0, s32 *, 0xEC) * 0x18)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            TEndingAB__data_805D4F10 = 1;
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
            if (temp_r0 > 5) {
                M2C_FIELD(arg0, s32 *, 0x28) = 5;
                TEndingAB__data_805D4F10 = 5;
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x28) = 5;
        break;
    }
}
#pragma push
#pragma fp_contract on
void TEndingAB__sub_8008CB54(u8 *arg0) {
    switch ((s32) TEndingAB__data_805D4F10) {
    case 1:
    case 3:
        break;
    case 2:
        begin_screen_draw(1);
        TWindowSubStatusDisp__sub_803DF160((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 2, -1);
        get_player__20TWindowSubStatusDispFv();
        set_depth_buffer_settings_2__Fv();
        begin_screen_draw(1);
        TWindowSubStatusDisp__sub_803DF160(0, -1);
        draw_textured_quad_at_depth(arg0 + 0x2C, lbl_805D9580);
        draw_textured_quad_at_depth(arg0 + 0x4C, lbl_805D9580);
        get_player__20TWindowSubStatusDispFv();
        fn_80141A30();
        break;
    case 4:
    case 5:
        begin_screen_draw(1);
        TWindowSubStatusDisp__sub_803DF160((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 3, -1);
        get_player__20TWindowSubStatusDispFv();
        set_depth_buffer_settings_2__Fv();
        begin_screen_draw(1);
        TWindowSubStatusDisp__sub_803DF160(1, -1);
        draw_textured_quad_at_depth(arg0 + 0x6C, lbl_805D9580);
        draw_textured_quad_at_depth(arg0 + 0x8C, lbl_805D9580);
        get_player__20TWindowSubStatusDispFv();
        fn_80141A30();
        break;
    }
}
#pragma pop

void TEndingAB__sub_8008CC5C(void) {
    switch (lbl_805D5550) {
    case 0:
    case 1:
        set_global_param__8TObjFishFi(lbl_805D4F14);
        break;
    case 2:
        set_global_param__8TObjFishFi(lbl_805D4F14);
        break;
    case 3:
        set_global_param__8TObjFishFi(lbl_805D4F14);
        break;
    }
}

}
