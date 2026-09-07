#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801739F8_lbl_804B3BA8 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_801739F8___vt__14TORockCaveBL02 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(s32);
void TObjPlayer__sub_80154E3C(void *);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * TORockCaveBrakable__ct(void *);
extern RecoveredGlobal_801739F8_lbl_804B3BA8 lbl_804B3BA8;
extern RecoveredGlobal_801739F8___vt__14TORockCaveBL02 __vt__14TORockCaveBL02;
extern s32 lbl_805D3138;
extern u8 *lbl_805D5A80;
extern const f32 lbl_805DB970;
u8 *TORockCaveBL02__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_801739F8_lbl_804B3BA8_size[sizeof(RecoveredGlobal_801739F8_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_801739F8___vt__14TORockCaveBL02_size[sizeof(RecoveredGlobal_801739F8___vt__14TORockCaveBL02) == 0x50 ? 1 : -1];
u8 *TORockCaveBL02__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TORockCaveBrakable__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TORockCaveBL02.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3138;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D5A80, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D5A80, 0);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DB970;
    TObjEneGibbles__sub_80156780(arg0, (s32) ((u8 *)&lbl_804B3BA8.value + 0x58), 1);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    return arg0;
}

}
