#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_window_quantity(void *arg0);
void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1);
void run_task__15TWindowQuantityFv(void* p);
void set_position__15TWindowQuantityFPvi(void *arg0, s32 arg1);
void *TWindowQuantity__ct(void *, void *);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);

void set_position__15TWindowQuantityFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}

void run_task__15TWindowQuantityFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__15TWindowQuantity[];

void *__dt__15TWindowQuantityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowQuantity;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *create_window_quantity(void *arg0) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = TWindowQuantity__ct(o, arg0);
    }
    return o;
}

}
