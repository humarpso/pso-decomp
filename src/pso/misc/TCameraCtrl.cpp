#include "types.h"

extern "C" {

int TCameraCtrl__sub_8006B330(void);
int TCameraCtrl__sub_8006B338(void);
void TCameraCtrl__sub_8006B340(int a0, int a1);
void TCameraCtrl__sub_8006B34C(int a0, int a1);
u16 TCameraCtrl__sub_8006B358(void* p);
s32 TCameraCtrl__sub_8006B360(void* p);
int TCameraCtrl__sub_8006B368(void);

    extern int lbl_805D34B8;
int TCameraCtrl__sub_8006B330(void) {  return lbl_805D34B8; }

    extern int lbl_805D4E04;
int TCameraCtrl__sub_8006B338(void) {  return lbl_805D4E04; }

    extern short lbl_805D2838;
    extern short lbl_805D283A;
void TCameraCtrl__sub_8006B340(int a0, int a1) { lbl_805D2838 = a0; lbl_805D283A = a1; }

    extern short lbl_805D4DFA;
    extern short lbl_805D4DFC;
void TCameraCtrl__sub_8006B34C(int a0, int a1) { lbl_805D4DFA = a0; lbl_805D4DFC = a1; }

u16 TCameraCtrl__sub_8006B358(void* p) { return *(u16*)((char*)p + 0x20); }
s32 TCameraCtrl__sub_8006B360(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int lbl_805D5ED8;
int TCameraCtrl__sub_8006B368(void) {  return lbl_805D5ED8; }

}
