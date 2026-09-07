#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019F9E4_lbl_804A7438 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_8019F9E4_lbl_804A7438 lbl_804A7438;
extern const f32 lbl_805DC030;
extern const f32 lbl_805DC034;
extern const f32 lbl_805DC038;
void fn_8019F9E4(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8019F9E4_lbl_804A7438_size[sizeof(RecoveredGlobal_8019F9E4_lbl_804A7438) == 0x10 ? 1 : -1];
void fn_8019F9E4(u8 *arg0) {
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DC030, lbl_805DC034) != 0) {
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&lbl_804A7438.value), (f32) (lbl_805DC038 * M2C_FIELD(arg0, f32 *, 0xAC)));
    }
}

}
