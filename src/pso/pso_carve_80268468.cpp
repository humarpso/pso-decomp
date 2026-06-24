#include "types.h"

extern "C" {

void fn_80268468(void* p);
void fn_80268478(void* p);
int fn_80268488(void* p);

void fn_80268468(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }
void fn_80268478(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
int fn_80268488(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
int fn_80268494(void) { return 0; }
int fn_802684BC(void) { return 0; }
int fn_8026853C(void) { return 0; }
int fn_802685C4(void) { return 0; }
int fn_80268650(void) { return 0; }
int fn_802686D4(void) { return 0; }
int fn_80268738(void) { return 0; }
int fn_80268794(void) { return 0; }
int fn_802687F8(void) { return 0; }
int fn_8026886C(void) { return 0; }
int fn_802688F8(void) { return 0; }
int fn_80268984(void) { return 0; }

}
