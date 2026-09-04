#include "types.h"

extern "C" {

int TObjNewFloorWin__sub_8007410C(void);
void set_flag_40__16TAdChrSelASlotGCFPv(void* p);
int close_active_window__11TWindowCtrlFv(void*);
int fn_800740DC(void* p);

void set_flag_40__16TAdChrSelASlotGCFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

    extern int lbl_805D5FD8;
int TObjNewFloorWin__sub_8007410C(void) {  return lbl_805D5FD8; }

}
