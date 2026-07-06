#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VObj_84Base { char pad[0x18]; };
struct VObj_84 : VObj_84Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s8 m31();
};

M2C_UNK obj_getField1c();
s32 fn_80099EF8();
void *fn_80102AC0(void *);
s32 fn_8011AF58();
M2C_UNK TObjPlayer__sub_801B8DE8(s32, s32, M2C_UNK);
u32 TObjPlayer__sub_801B8E68(s32, void *);
M2C_UNK fn_801B9F40(s32, void *, M2C_UNK);
M2C_UNK fn_801BE9A8(s32);
M2C_UNK fn_801BE9CC(s32);
M2C_UNK TObjPlayer__sub_801BF8EC(s32, s8, M2C_UNK);
u32 fn_801C675C(s32, s8);

void fn_801D859C(s32 arg0, void *arg1) {
    void *temp_r3;

    obj_getField1c();
    M2C_FIELD(arg1, s32 *, 0xC) = fn_8011AF58();
    temp_r3 = fn_80102AC0(arg1);
    if (temp_r3 != NULL) {
        s8 val = ((VObj_84 *)temp_r3)->m31();
        s32 val_ext = (s32)val;
        if (fn_801C675C(arg0 + 0xD04, val_ext) != 0U) {
            TObjPlayer__sub_801B8DE8(arg0, fn_80099EF8(), 1);
            TObjPlayer__sub_801BF8EC(arg0 + 0xD04, val_ext, 0);
        }
        if (TObjPlayer__sub_801B8E68(arg0, temp_r3) != 0U) {
            fn_801BE9CC(arg0);
            fn_801B9F40(arg0, temp_r3, 0);
            fn_801BE9A8(arg0);
        }
    }
}

}
