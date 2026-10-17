#include "types.h"
#include "pso/object/TObjWarpBoss03.h"

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
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_8019F9E4_lbl_804A7438 lbl_804A7438;
extern const f32 lbl_805DC030;
extern const f32 lbl_805DC034;
extern const f32 lbl_805DC038;
typedef char RecoveredGlobal_8019F9E4_lbl_804A7438_size[sizeof(RecoveredGlobal_8019F9E4_lbl_804A7438) == 0x10 ? 1 : -1];
void TObjWarpBoss03::sub_8019F9E4() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DC030, lbl_805DC034) != 0) {
        TObjRoomId__sub_80141CF4(arg0 + 0x38, &lbl_804A7438.value, (f32) (lbl_805DC038 * *(f32 *)((s8 *)arg0 + 0xAC)));
    }
}

}
