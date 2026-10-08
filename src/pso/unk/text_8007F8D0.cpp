#include "types.h"
extern "C" {
void TAdTrialModemChkGC__sub_8042EC14(int, int);
void fn_8042ED98(int, void *);
void fn_8042EF48(int);
extern u8 lbl_80438B40[];
extern u8 lbl_80438BBC[];
extern u8 lbl_80438BF0[];
extern u8 lbl_80438C48[];
extern u8 lbl_80438CB0[];
extern s32 lbl_805D4EB8;
extern s16 lbl_805D4EBC;
extern s16 lbl_805D4EBE;
extern s32 lbl_805D4EC0;
extern s32 lbl_805D4EC4;
void fn_8007F8D0(void);
}

extern "C" {

#pragma push
#pragma optimization_level 1
#pragma dont_inline on
void fn_8007F8D0(void) {
    s32 z = 0;
    u8 *p = (u8 *)0x80010000;
    lbl_805D4EB8 = z;
    lbl_805D4EBC = -1;
    lbl_805D4EC0 = z;
    lbl_805D4EC4 = z;
    lbl_805D4EBE = p[-0x55d0];
    p[-0x55d0] = z;
    TAdTrialModemChkGC__sub_8042EC14((int)p, z);
    fn_8042EF48(0);
    fn_8042ED98(4, lbl_80438B40);
    fn_8042ED98(1, lbl_80438BBC);
    fn_8042ED98(0, lbl_80438BF0);
    fn_8042ED98(2, lbl_80438C48);
    fn_8042ED98(3, lbl_80438CB0);
}
#pragma pop

}
