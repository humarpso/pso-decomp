#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdSelectTxtGC.h"

TAdSelectTxtGC::~TAdSelectTxtGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802A1668
#include "types.h"

extern "C" {

void reset_state__14TAdSelectTxtGCFPv(void* a0);

    extern const float lbl_805DDDF8;
void reset_state__14TAdSelectTxtGCFPv(void* a0) { *(short*)((char*)a0 + 0x8) = 0; *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x2) = 0; *(short*)((char*)a0 + 0x0) = 0; *(short*)((char*)a0 + 0xe) = 0; *(short*)((char*)a0 + 0xc) = 0; *(short*)((char*)a0 + 0xa) = 0; *(float*)((char*)a0 + 0x10) = lbl_805DDDF8; *(float*)((char*)a0 + 0x14) = lbl_805DDDF8; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x18) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A16A8
#include "types.h"

extern "C" {

void TAdSelectTxtGC__sub_802A16A8(void* p);
s32 TAdSelectTxtGC__sub_802A16C0(void* p);
void render__14TAdSelectTxtGCFv(void);

void TAdSelectTxtGC__sub_802A16A8(void* p) { *(u8*)((char*)p + 0x0) = 0; *(u8*)((char*)p + 0x1) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 TAdSelectTxtGC__sub_802A16C0(void* p) { return *(s32*)((char*)p + 0x3e8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A16C8
#include "types.h"

extern "C" {

void TAdSelectTxtGC__sub_802A16A8(void* p);
s32 TAdSelectTxtGC__sub_802A16C0(void* p);
void render__14TAdSelectTxtGCFv(void);

void render__14TAdSelectTxtGCFv(void) {  }

}
#endif
#endif
