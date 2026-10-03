#include "types.h"

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 save_position__17TWindowSubComCardFPv(void *);
s32 calc_text_size__15TWindowFukidasiFPvPv(void *, void *);
s32 sync_display_pos__15TWindowFukidasiFPv(void *);
s32 refresh_rect_placement__15TWindowFukidasiFPv(void *);
s32 set_flag2c_bit100__15TWindowFukidasiFPv(void *);
s32 TWindowFukidasi__sub_80252C38(void *);
s32 reset_float_field__15TWindowHelpItemFPv();
extern const f32 TWindowFukidasi__data_805DCCE8;
void complete_speech_balloon(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 fn_80252CBC(void);
s32 is_speech_balloon_ready(u8 *arg0);
}

extern "C" {

void complete_speech_balloon(u8 *arg0) {
    s32 t;
    *(s8 *)(arg0 + 0x70) = 4;
    *(u8 *)(arg0 + 0x71) |= 0x40;
    calc_text_size__15TWindowFukidasiFPvPv(arg0, arg0 + 0x38);
    refresh_rect_placement__15TWindowFukidasiFPv(arg0);
    TWindowFukidasi__sub_80252C38(arg0);
    set_flag2c_bit100__15TWindowFukidasiFPv(arg0);
    save_position__17TWindowSubComCardFPv(arg0);
    *(f32 *)(arg0 + 0x80) = TWindowFukidasi__data_805DCCE8;
    sync_display_pos__15TWindowFukidasiFPv(arg0);
    *(s32 *)(arg0 + 0x5C) = 0x186A0;
    t = *(u8 *)(arg0 + 0x72);
    switch (t) {
    case 0:
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        reset_float_field__15TWindowHelpItemFPv();
        break;
    case 1:
    case 2:
        break;
    }
}
s32 is_speech_balloon_ready(u8 *arg0) {
    s32 t = *(u8 *)(arg0 + 0x72);
    switch (t) {
    case 0:
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        return fn_80252CBC();
    case 1:
    case 2:
        break;
    }
    return 0;
}

}
