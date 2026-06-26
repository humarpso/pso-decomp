#include "types.h"

extern "C" {

s16 fn_802495FC(void* p);
int fn_80249604(void* p);
int TWindowChoiceSetting__sub_80249610(void* p);

s16 fn_802495FC(void* p) { return *(s16*)((char*)p + 0x74); }
int fn_80249604(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }
int TWindowChoiceSetting__sub_80249610(void* p) { return (*(u16*)((char*)p + 0x70) >> 5) & 0x1; }
int fn_8024961C(void) { return 0; }

}
