#include "types.h"
struct Vec_80198E84 { f32 x; f32 y; f32 z; s32 w; u8 pad10[2]; s16 f12; };

extern "C" {
void TLobby__sub_8001FE7C(s32, int, void *, f32);
void free_if_valid__10TObjPlayerFi(int);
extern s32 lbl_804B8DAC[];
extern Vec_80198E84 lbl_8050DDAC[];
extern s32 lbl_805D5C60;
extern const f32 lbl_805DBF54;
extern const f32 lbl_805DBF58;
void fn_80198E84(void);
}

extern "C" {

void fn_80198E84(void) {
    s32 off;
    s32 i;
    s32 z;
    lbl_8050DDAC->f12 = 1;
    lbl_8050DDAC->x = lbl_805DBF54;
    lbl_8050DDAC->y = lbl_805DBF58;
    lbl_8050DDAC->z = lbl_805DBF54;
    lbl_8050DDAC->w = 0;
    TLobby__sub_8001FE7C(lbl_805D5C60, 1, lbl_8050DDAC, lbl_805DBF54);
    lbl_805D5C60 = 0;
    for (i = 0; i < 9; i++) {
        free_if_valid__10TObjPlayerFi(lbl_804B8DAC[i]);
        lbl_804B8DAC[i] = 0;
    }
}

}
