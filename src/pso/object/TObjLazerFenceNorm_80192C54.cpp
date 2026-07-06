#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFenceNormBase { char pad[0x18]; };
struct LazerFenceNormVObj : LazerFenceNormBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__18TObjLazerFenceNormFv(void *arg0);
M2C_UNK fn_80192B5C(void *);
M2C_UNK fn_80192C00(void *);

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    if (((LazerFenceNormVObj*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
        switch (temp_r0) {
        case 0:
            fn_80192B5C(arg0);
            return;
        case 1:
            fn_80192C00(arg0);
            break;
        }
    }
}

}
