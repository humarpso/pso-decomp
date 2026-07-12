#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
extern const f32 lbl_805DB580;

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
    virtual s32 m8(f32, f32);
};

void draw_model__11TODragonflyFPv(u8 *arg0) {
    if (((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9624(0, lbl_805DB580, M2C_FIELD(arg0, f32 *, 0xF0), lbl_805DB580);
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        TObjPlayer__sub_803D9B78();
    }
}

}
