#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjDoorKeyBase { char pad[0x18]; };
struct TObjDoorKeyVObj : TObjDoorKeyBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__11TObjDoorKeyFv(void *arg0);
M2C_UNK TObjDoorKey__sub_8018FBB8(void *);
M2C_UNK TObjDoorKey__sub_8018FCD8(void *);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(void *);
M2C_UNK enable__13TParticleCtrlFPv(void *);

extern const f32 lbl_805DBE00;
extern const f32 lbl_805DBE04;

void render__11TObjDoorKeyFv(void *arg0) {
    s32 temp_r0;

    if (((TObjDoorKeyVObj*)arg0)->m8(lbl_805DBE00, lbl_805DBE04) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xF8));
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xD4);
        switch (temp_r0) {
        case 0:
            TObjDoorKey__sub_8018FCD8(arg0);
            return;
        case 1:
            TObjDoorKey__sub_8018FBB8(arg0);
            return;
        }
    }
}

}
