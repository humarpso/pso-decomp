#include "types.h"

extern "C" {

int fn_800740DC(void* p);
void set_flag_40__16TAdChrSelASlotGCFPv(void* p);
int close_active_window__11TWindowCtrlFv(void*);

void set_flag_40__16TAdChrSelASlotGCFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x40; }

}
