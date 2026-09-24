#include "types.h"

struct V2_8026CBB8 { f32 x, y; };

extern "C" {
s32 is_split_screen(void);
s32 get_camera_id__11TCameraCtrlFv(void);
extern V2_8026CBB8 lbl_80450490[];
extern V2_8026CBB8 lbl_80477890[];
extern unsigned char lbl_8044FE00[];
V2_8026CBB8 *TWindowSubComCard__sub_8026CBB8(s32 idx);
}

extern "C" {

void* get_option_entry__17TWindowOptionCtrlFi(int a0);

    extern unsigned char lbl_8044FE00[];
void* get_option_entry__17TWindowOptionCtrlFi(int a0) {  return (char*)lbl_8044FE00 + a0 * 8; }
V2_8026CBB8 *TWindowSubComCard__sub_8026CBB8(s32 idx) {
    if (is_split_screen() != 0) {
        return (get_camera_id__11TCameraCtrlFv() == 2) ? &lbl_80477890[idx] : &lbl_80450490[idx];
    }
    return (V2_8026CBB8 *)((char *)lbl_8044FE00 + idx * 8);
}

}
