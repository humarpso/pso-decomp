#include "types.h"

extern "C" {

int TCameraCtrl__sub_8003CFF4(void);
int TCameraCtrl__sub_8003D1E8(void);
void fn_8003CFEC(int a0);

    extern int lbl_805D4C20;
void fn_8003CFEC(int a0) { lbl_805D4C20 = a0; }

    extern int lbl_805D4C20;
int TCameraCtrl__sub_8003CFF4(void) {  return lbl_805D4C20; }

    extern int lbl_805D4C24;
int TCameraCtrl__sub_8003D1E8(void) {  return lbl_805D4C24; }

}
