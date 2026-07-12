#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8016A0E0 { char pad[0x18]; };
struct VObj_8016A0E0 : Base_8016A0E0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(void *);
};

extern "C" {

s32 TObjPlayer__sub_800196EC();
void *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK bswap_6x05_switch_flag__5TOKeyFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TSwitch__sub_80229258(u16, s32);
M2C_UNK TSwitch__sub_80229318(u16, s32);

void handle_6x05_write_switch_flag(void *arg0) {
    void *temp_r3;

    bswap_6x05_switch_flag__5TOKeyFPv();
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        ((VObj_8016A0E0 *)temp_r3)->m25(arg0);
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0xB) & 2) && ((s8) M2C_FIELD(arg0, u8 *, 0xA) == TObjPlayer__sub_800196EC())) {
        TBoss3Volopt__sub_8022675C(0x4005281F, 0, 0, 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xB) & 1) {
        TSwitch__sub_80229318(M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s8 *, 0xA));
        return;
    }
    TSwitch__sub_80229258(M2C_FIELD(arg0, u16 *, 8), M2C_FIELD(arg0, s8 *, 0xA));
}

}
