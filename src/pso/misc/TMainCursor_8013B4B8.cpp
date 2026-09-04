#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_chair__11TMainCursorFi(s32 arg0);
M2C_UNK get_cursor_state__11TMainCursorFv();
f32 get_pos__11TMainCursorFPv(s32);
M2C_UNK fn_801424DC(s32, f32, f32, f32, f32);
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK update_parts2__15TPlyPhotonChairFPv(s32);
M2C_UNK update_parts__15TPlyPhotonChairFPv(s32);

extern f32 TMainCursor__data_805DB0C0;
extern f32 lbl_805DB0C8;
extern f32 TMainCursor__data_805DB0CC;

void update_photon_chair__11TMainCursorFi(s32 arg0) {
    if (get_pos__11TMainCursorFPv(arg0 + 0x4C) > lbl_805DB0C8) {
        update_parts2__15TPlyPhotonChairFPv(arg0 + 0x4C);
        fn_801424DC(arg0 + 0x4C, TMainCursor__data_805DB0CC, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0, TMainCursor__data_805DB0C0);
        get_cursor_state__11TMainCursorFv();
        TObjFish__sub_803E46BC();
        update_parts__15TPlyPhotonChairFPv(arg0 + 0x4C);
    }
}

}
