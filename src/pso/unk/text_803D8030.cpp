#include "types.h"
struct E_803D8030 { u8 pad[0x10]; };

extern "C" {
extern E_803D8030 *lbl_805D76D4;
extern E_803D8030 *lbl_805D76D0;
extern s32 lbl_805D76CC;
extern s32 lbl_805D76C8;
extern E_803D8030 *lbl_805D76C4;
extern E_803D8030 *lbl_805D76C0;
extern s32 lbl_805D76DC;
extern f32 lbl_805D76D8;
extern const f32 lbl_805E0EA0;
void fn_803D8030(E_803D8030 *p, s32 n, s32 x);
}

extern "C" {

#pragma push
#pragma scheduling off
void fn_803D8030(E_803D8030 *p, s32 n, s32 x) {
    lbl_805D76D4 = p;
    lbl_805D76D0 = p + n;
    lbl_805D76CC = n;
    lbl_805D76C8 = x;
    lbl_805D76C4 = p;
    lbl_805D76C0 = p + n;
    lbl_805D76DC = -1;
    lbl_805D76D8 = lbl_805E0EA0;
}
#pragma pop

}
