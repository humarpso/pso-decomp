#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__14TWindowBreakInFv(void* p);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80246980(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void run_task__14TWindowBreakInFv(void* p) { TWindowSubStatusDisp__sub_80246980(p); initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80246B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TWindowBreakInFv(s32 arg0);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);

void render__14TWindowBreakInFv(s32 arg0) {
    s32 tmp = draw_default_entry__9TWindowDDFi();
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, tmp);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80246C00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TWindowBreakInFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__14TWindowBreakIn[];

void *__dt__14TWindowBreakInFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowBreakIn;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
