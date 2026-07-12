#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1);
int __dl__FPv();
int init_forward__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8001BF40(void*);
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
int TObjPlayer__sub_8001BED8(void*, int);
int TAdRicoRing__sub_8001BEE8(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

s32 TObjPlayer__sub_80354F7C(void* p) { return *(s32*)((char*)p + 0x4); }
void TObjPlayer__sub_80354F84(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_80354F8C(void* p) { fn_8035510C(p, (void*)3); }
int TObjPlayer__sub_80354FB0(void* p) { return TAdRicoRing__sub_8001BEE8(p, 2); }
int set_flag0_bits01__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BED8(p, 3); }
int clear_lock_flag__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8(p, 1); }
int TObjPlayer__sub_8035501C(void* p) { return TAdRicoRing__sub_8001BEE8(p, 3); }
int set_flag1__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BED8(p, 1); }
void reset_field4__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8001BF40(p); *(int*)((char*)p + 0x4) = 0; }
s32 TObjPlayer__sub_80355098(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* init_and_reset_forward__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv(p); reset_field4__10TObjPlayerFPv(p); return p; }

}
