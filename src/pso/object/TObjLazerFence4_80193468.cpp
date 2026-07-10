#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFence4Base { char pad[0x18]; };
struct LazerFence4VObj : LazerFence4Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__15TObjLazerFence4Fv(void *arg0);
M2C_UNK draw__15TObjLazerFence4FPv(void *);
M2C_UNK TObjLazerFence4__sub_801932E4(void *);

extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;

void render__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    if (((LazerFence4VObj*)arg0)->m8(lbl_805DBE70, lbl_805DBE74) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 0:
            TObjLazerFence4__sub_801932E4(arg0);
            return;
        case 1:
            draw__15TObjLazerFence4FPv(arg0);
            break;
        }
    }
}

}
