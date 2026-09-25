#include "types.h"
extern "C" {
void TLobby__sub_8001FE7C(void *, int);
extern void *lbl_805D5CA8;
extern s32 lbl_805D5CAC;
extern s32 lbl_805D5CB0;
extern s32 lbl_8050DDC8[6];
void fn_801A0520(void);
}

extern "C" {

void fn_801A0520(void) {
    s32 i;
    TLobby__sub_8001FE7C(lbl_805D5CA8, 1);
    lbl_805D5CA8 = 0;
    lbl_805D5CAC = 0;
    lbl_805D5CB0 = 0;
    for (i = 0; i < 6; i++) {
        lbl_8050DDC8[i] = 0;
    }
}

}
