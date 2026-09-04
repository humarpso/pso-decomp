#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);

extern M2C_UNK __vt__22TOHangceilingCave01Key[];

void *__dt__22TOHangceilingCave01KeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80167F14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOHangceilingCave01Key__ct(void *arg0);
void init_geometry__19TOHangceilingCave01FPv(void *);
void TOHangceilingCave01KeyQuick__sub_80168C6C(void *);

extern M2C_UNK __vt__22TOHangceilingCave01Key[];
extern void *lbl_805D2FEC;

void *TOHangceilingCave01Key__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FEC;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    return arg0;
}

}
#endif
#endif
