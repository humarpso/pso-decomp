#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Q_801681D0 { f32 w[4]; };

extern "C" {
extern Q_801681D0 lbl_804417EC;
extern s32 lbl_805D5550;
f32 TOHangceilingCave01Normal__sub_801681D0(f32 farg0);
}

extern "C" {

void *TOHangceilingCave01Normal__ct(void *arg0);
void *__dt__25TOHangceilingCave01NormalFv(void *arg0, s16 arg1);
void advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *arg0);
void TOHangceilingCave01KeyQuick__sub_80168C6C(void *);
void __dl__7TObjectFPv(void *);
void destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(void *, int);
void init_geometry__19TOHangceilingCave01FPv(void *);

extern M2C_UNK __vt__25TOHangceilingCave01Normal[];

void *__dt__25TOHangceilingCave01NormalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TOHangceilingCave01Normal;
        destroy_hanging_object__27TOHangceilingCave01KeyQuickFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__25TOHangceilingCave01Normal[];
extern void *lbl_805D2FE8;

void *TOHangceilingCave01Normal__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TOHangceilingCave01Normal;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FE8;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    return arg0;
}

extern f32 lbl_805DB650;

f32 TOHangceilingCave01Normal__sub_801681D0(f32 farg0) {
    Q_801681D0 q = lbl_804417EC;
    return farg0 * q.w[lbl_805D5550];
}

void advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + M2C_FIELD(arg0, f32 *, 0xC8));
    if (M2C_FIELD(arg0, f32 *, 0xC4) < M2C_FIELD(arg0, f32 *, 0xC0)) {
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB650;
    }
}

}
