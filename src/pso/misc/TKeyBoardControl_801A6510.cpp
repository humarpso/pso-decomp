#include "types.h"

struct Kb_801A6910 {
    u32 f0;
    u8 pad4[4];
    u32 f8;
    u8 padC[0x48 - 0xC];
    u32 f48;
    u32 f4C;
};

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
s32 TKeyBoardControl__sub_8013239C(void *, u8);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
s32 read_input__16TKeyBoardControlFi(u8);
void fn_801A69E4(u8, u32 *);
extern u32 lbl_804C233C[];
extern u32 lbl_804C2354[];
extern u8 TKeyBoardControl__data_80506270[];
s32 TKeyBoardControl__sub_801A6910(Kb_801A6910 *self);
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
s32 TKeyBoardControl__sub_801A6910(Kb_801A6910 *self) {
    s32 i;
    u8 n;
    s32 j;
    self->f0 = 0;
    self->f8 = 0;
    for (i = 0; i < 6; i++) {
        if (read_input__16TKeyBoardControlFi(lbl_804C2354[i]) != 0) {
            self->f0 |= lbl_804C233C[i];
        }
    }
    n = get_key_state_2__16TKeyBoardControlFPv(TKeyBoardControl__data_80506270);
    for (j = 0; j < n; j++) {
        fn_801A69E4(TKeyBoardControl__sub_8013239C(TKeyBoardControl__data_80506270, j), &self->f8);
    }
    self->f48 = self->f0;
    self->f4C = self->f8;
    return 0;
}

}
