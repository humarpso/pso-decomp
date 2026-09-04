#include "types.h"

extern "C" {

void TCameraCtrl__sub_801A3C24(void);
void TCameraCtrl__sub_801A3C30(int a0);
unsigned char TLobby__sub_801A3C40(void);
void set_mode__11TCameraCtrlFi(int a0);

    extern short lbl_805D4E08;
void TCameraCtrl__sub_801A3C24(void) { lbl_805D4E08 = 0; }

    extern int lbl_805D4E04;
void TCameraCtrl__sub_801A3C30(int a0) { lbl_805D4E04 = a0; }

    extern short lbl_805D4E08;
void set_mode__11TCameraCtrlFi(int a0) { lbl_805D4E08 = a0; }

    extern unsigned char lbl_805D4DF8;
unsigned char TLobby__sub_801A3C40(void) {  return lbl_805D4DF8; }

}
