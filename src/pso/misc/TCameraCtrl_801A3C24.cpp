#include "types.h"

extern "C" {

void TCameraCtrl__sub_801A3C24(void);
void TCameraCtrl__sub_801A3C30(int a0);
unsigned char TLobby__sub_801A3C40(void);
void set_mode__11TCameraCtrlFi(int a0);

    extern short TCameraCtrl__camera_mode;
void TCameraCtrl__sub_801A3C24(void) { TCameraCtrl__camera_mode = 0; }

    extern int TCameraCtrl__camera_id;
void TCameraCtrl__sub_801A3C30(int a0) { TCameraCtrl__camera_id = a0; }

    extern short TCameraCtrl__camera_mode;
void set_mode__11TCameraCtrlFi(int a0) { TCameraCtrl__camera_mode = a0; }

    extern unsigned char lbl_805D4DF8;
unsigned char TLobby__sub_801A3C40(void) {  return lbl_805D4DF8; }

}
