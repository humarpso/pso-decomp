#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__16TAdGuideButtonGCFv(void* p);

int get_state_flag__9TMainTaskFv(void*);
int TAdWarningBaseGC__sub_8032D514(void*, void*, void*);
int render__16TAdWarningBaseGCFi(void*, void*);

void render__16TAdGuideButtonGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { render__16TAdWarningBaseGCFi(p, (void*)0); TAdWarningBaseGC__sub_8032D514(p, (void*)0, *(void**)((char*)p + 0x1a0)); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x8032D8E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern M2C_UNK __vt__16TAdGuideButtonGC[];
extern u32 lbl_805D6D04;

void *__dt__16TAdGuideButtonGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdGuideButtonGC;
        if ((u32) lbl_805D6D04 != 0U) {
            lbl_805D6D04 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
