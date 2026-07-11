#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VtBase4 { void *vtable; };
struct VObj3 : VtBase4 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); };

void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK fn_802575C0(void *, M2C_UNK, f32);
extern f32 lbl_805DD388;
extern f32 lbl_805DD38C;

void fn_8026F71C(void *arg0) {
    VObj3 *temp_r3;
    f32 temp_f0;

    temp_r3 = (VObj3 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
    temp_f0 = lbl_805DD388;
    M2C_FIELD(temp_r3, f32 *, 0x20) = temp_f0;
    M2C_FIELD(temp_r3, f32 *, 0x24) = temp_f0;
    temp_r3->m3();
    fn_802575C0(temp_r3, 0xFF00FF15, lbl_805DD38C);
}

}
