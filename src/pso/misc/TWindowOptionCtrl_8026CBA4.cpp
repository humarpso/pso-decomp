#include "types.h"

struct V2_8026CBB8 { f32 x, y; };

struct Node_8026CC28 { u8 p0[0xC]; Node_8026CC28 *fC; u8 p10[0x44]; f32 f54; };

struct Grp_8026CC28 { u8 p0[0x14]; Node_8026CC28 *f14; };

struct Win_8026CC28 { u8 p0[0x10]; Grp_8026CC28 *f10; u8 p14[0x40]; f32 f54; };

extern "C" {
s32 is_split_screen(void);
s32 get_camera_id__11TCameraCtrlFv(void);
extern V2_8026CBB8 lbl_80450490[];
extern V2_8026CBB8 lbl_80477890[];
extern unsigned char lbl_8044FE00[];
V2_8026CBB8 *TWindowSubComCard__sub_8026CBB8(s32 idx);
s32 TWindowCtrlMain__sub_8024CE58(void);
void get_scale__20TWindowSubStatusDispFPv(void *);
extern f32 lbl_805D6418;
extern const f32 lbl_805DD2C8;
void TWindowCtrlMain__sub_8026CC28(Win_8026CC28 *w);
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
void TWindowCtrlMain__sub_8026CC28(Win_8026CC28 *w) {
    Node_8026CC28 *n;
    f32 lim;
    f32 t;
    if (TWindowCtrlMain__sub_8024CE58() != 0) {
        get_scale__20TWindowSubStatusDispFPv(w);
        lbl_805D6418 -= lbl_805DD2C8;
        lim = w->f54;
        for (n = w->f10->f14; n != NULL; n = n->fC) {
            t = n->f54;
            if (lim > t) {
                n->f54 = t - lbl_805DD2C8;
            }
        }
    }
}

}
