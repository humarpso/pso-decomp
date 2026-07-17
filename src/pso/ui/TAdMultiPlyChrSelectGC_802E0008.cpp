#include "types.h"

extern "C" {

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p);
void TAdMultiPlyChrSelectGC__sub_802E001C(void* p, s32 v);

void set_state_ready__22TAdMultiPlyChrSelectGCFPv(void* p) { *(s32*)((char*)p + 0x4fc) = 1; }
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4ec); }
void TAdMultiPlyChrSelectGC__sub_802E001C(void* p, s32 v) { *(s32*)((char*)p + 0x4f8) = v; }

}
