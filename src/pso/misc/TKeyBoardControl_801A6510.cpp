#include "types.h"
extern "C" {
s32 TKeyBoardControl__sub_803DEB74(int);
extern s32 lbl_8050E208[];
extern s32 lbl_8050E568[];
extern s32 lbl_805D34C8;
extern s8 lbl_805D5D08;
extern s8 lbl_805D5D09;
extern s8 lbl_805D5D0A;
extern s8 lbl_805D5D0C[4];
void TKeyBoardControl__sub_801A6854(void);
}

extern "C" {

void TKeyBoardControl__sub_801A6854(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        lbl_8050E568[i] = 0;
    }
    lbl_8050E208[0] = TKeyBoardControl__sub_803DEB74(0);
    lbl_8050E208[1] = TKeyBoardControl__sub_803DEB74(6);
    lbl_8050E208[2] = TKeyBoardControl__sub_803DEB74(0xC);
    lbl_8050E208[3] = TKeyBoardControl__sub_803DEB74(0x12);
    lbl_805D5D08 = 0;
    lbl_805D5D09 = 0;
    lbl_805D5D0A = 0;
    for (i = 0; i < 4; i++) {
        lbl_805D5D0C[i] = 0;
    }
    lbl_805D34C8 = 1;
}

}
