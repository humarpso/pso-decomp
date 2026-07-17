#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
int __dl__FPv();
int init_forward__10TObjPlayerFPv(void*);
int clear_id__10TObjPlayerFPv(void*);
int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*, void*);
int fn_8035510C(void* a0 = 0, void* a1 = 0);
int TAdPlyPltAnimCtrlGC__sub_80355168(void* a0 = 0);
void TObjPlayer__sub_80354F8C(void* p);
void reset_field4__10TObjPlayerFPv(void* p);
void* init_and_reset_forward__10TObjPlayerFPv(void* p);
void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1);
s32 TObjPlayer__sub_80354F7C(void* p);
void TObjPlayer__sub_80354F84(void* p, s32 v);
int TObjPlayer__sub_80354FB0(void* p);
int set_flag0_bits01__10TObjPlayerFPv(void* p);
int clear_lock_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8035501C(void* p);
int set_flag1__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

void init__19TAdPlyPltAnimCtrlGCFPvPv(void* p, void* a1) { TAdPlyPltAnimCtrlGC__sub_80355168(p); copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((char*)p + 0x24, a1); *(int*)((char*)p + 0x1c) = 1; }

}
