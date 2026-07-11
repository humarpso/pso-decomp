#include "types.h"

extern "C" {

void TCameraCtrl__sub_801A3C24(void);
void TCameraCtrl__sub_801A3C30(int a0);
void TCameraCtrl__sub_801A3C38(int a0);

    extern short lbl_805D4E08;
void TCameraCtrl__sub_801A3C24(void) { lbl_805D4E08 = 0; }

    extern int lbl_805D4E04;
void TCameraCtrl__sub_801A3C30(int a0) { lbl_805D4E04 = a0; }

    extern short lbl_805D4E08;
void TCameraCtrl__sub_801A3C38(int a0) { lbl_805D4E08 = a0; }

}
