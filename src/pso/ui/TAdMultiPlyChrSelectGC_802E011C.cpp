#include "types.h"

extern "C" {

int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void);
s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p);

    extern int lbl_805D69E8;
int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D69E8; }

s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0xa0); }

}
