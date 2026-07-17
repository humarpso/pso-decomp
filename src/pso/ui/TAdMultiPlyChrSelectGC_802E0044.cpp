#include "types.h"

extern "C" {

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1);

s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4e8); }

    extern int lbl_805D67E4;
int get_card_instance__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D67E4; }

s32 get_selection__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x4f8); }

    extern int TAdMultiPlyChrSelectGC__data_805D67DC;
void set_select_mode__22TAdMultiPlyChrSelectGCFii(int a0, int a1) { TAdMultiPlyChrSelectGC__data_805D67DC = a1; }

}
