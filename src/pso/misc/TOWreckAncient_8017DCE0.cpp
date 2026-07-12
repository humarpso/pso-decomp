#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base1_8017dce0 { char pad[0x18]; };
struct VObj1_8017dce0 : Base1_8017dce0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void draw_model__14TOWreckAncientFPv(u8 *arg0);
void TOWreckAncient__sub_8017DD54(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void draw_model__14TOWreckAncientFPv(u8 *arg0) {
    VObj1_8017dce0 *self = (VObj1_8017dce0 *)arg0;
    if (self->m8(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
    }
}

extern u32 lbl_805D5AF8;
extern u32 lbl_805D5AFC;

void TOWreckAncient__sub_8017DD54(void) {
    if ((u32) lbl_805D5AF8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AF8, 1);
        lbl_805D5AF8 = 0U;
    }
    if ((u32) lbl_805D5AFC != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AFC, 1);
        lbl_805D5AFC = 0U;
    }
}

}
