#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdStorySelectGC.h"

TAdStorySelectGC::~TAdStorySelectGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x8019DC14
#include "types.h"

extern "C" {

int TAdStorySelectGC__sub_8019DC14(void);

    extern int lbl_805D67C0;
int TAdStorySelectGC__sub_8019DC14(void) {  return lbl_805D67C0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DC1C
#include "types.h"

extern "C" {

int get_story_select__16TAdStorySelectGCFv(void);

    extern int lbl_805D5C7C;
int get_story_select__16TAdStorySelectGCFv(void) {  return lbl_805D5C7C; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DC24
#include "types.h"

extern "C" {

void register_area_warp_object__16TAdStorySelectGCFPv(void* a0);
int TObjFish__sub_8001ED9C(void*, void*);

    extern int lbl_805D5C78;
void register_area_warp_object__16TAdStorySelectGCFPv(void* a0) { TObjFish__sub_8001ED9C((void*)(lbl_805D5C78), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80207D44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdStorySelectGC__sub_80207D44(s32 arg0);

extern s32 lbl_805D3628;

s32 TAdStorySelectGC__sub_80207D44(s32 arg0) {
    if ((s32) lbl_805D3628 == -1) {
        lbl_805D3628 = arg0;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C3284
#include "types.h"

extern "C" {

void render__16TAdStorySelectGCFv(void);
void TObjPathObj__vt11(void);
void TObjPathObj__vt12(void);

void render__16TAdStorySelectGCFv(void) {  }

}
#endif
#endif
