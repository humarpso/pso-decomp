#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0);
void handle_decide__22TWindowSubCustomSelectFPv(void *arg0);
s32 is_active__22TWindowSubCustomSelectFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0) {
    if (is_active__22TWindowSubCustomSelectFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 2);
    }
}

void handle_decide__22TWindowSubCustomSelectFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x7C), 2);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80277A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window__15TWindowAdditionFPvs(void *, int);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__22TWindowSubCustomSelect[];

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubCustomSelect;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x80), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x7C), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
