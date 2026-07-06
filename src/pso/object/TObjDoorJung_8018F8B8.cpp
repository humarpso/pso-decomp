#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TObjDoorJungFv(u8 *arg0);
M2C_UNK fn_80154764(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_801F9AC4(void *, M2C_UNK, u16, M2C_UNK, M2C_UNK);

extern s32 lbl_805D58F8;

struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

void run_task__12TObjDoorJungFv(u8 *arg0) {
    if ((s32) lbl_805D58F8 != 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        fn_80154764((M2C_UNK)arg0, 0, 8);
    } else {
        ((VObj *)arg0)->m12();
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        fn_801F9AC4(arg0 + 0x38, 0xFF00FF00, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
        return;
    }
    fn_801F9AC4(arg0 + 0x38, 0xFFFF0000, (u16) M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
}

}
