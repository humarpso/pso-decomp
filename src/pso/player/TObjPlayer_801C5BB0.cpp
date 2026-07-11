#include "types.h"

extern "C" {

void set_vec4_const__10TObjPlayerFPv(void* a0);
void TObjPlayer__sub_801C5BC8(void* p);
void TObjPlayer__sub_801C5C0C(void* p);
int TAdRicoRing__sub_8001BEE8(void*, void*);
int fn_8001BED8(void*, void*);
int fn_801C6F40(void*, void*);
int fn_80227234(void*);

    extern const float lbl_805DC320;
void set_vec4_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x1c) = lbl_805DC320; *(float*)((char*)a0 + 0x20) = lbl_805DC320; *(float*)((char*)a0 + 0x24) = lbl_805DC320; *(float*)((char*)a0 + 0x28) = lbl_805DC320; }

void TObjPlayer__sub_801C5BC8(void* p) { TAdRicoRing__sub_8001BEE8(p, (void*)1); fn_801C6F40(p, (void*)-1); fn_80227234((void*)0); }

void TObjPlayer__sub_801C5C0C(void* p) { fn_8001BED8(p, (void*)1); fn_80227234((void*)1); }

}
