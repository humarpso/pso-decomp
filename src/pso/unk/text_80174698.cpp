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

struct RecoveredGlobal_80174698_lbl_804B3BA8 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_80174698___vt__13TORockCaveM02 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(s32);
void refresh_collision_body_centers(void *);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * TORockCave__ct(void *);
extern RecoveredGlobal_80174698_lbl_804B3BA8 lbl_804B3BA8;
extern RecoveredGlobal_80174698___vt__13TORockCaveM02 __vt__13TORockCaveM02;
extern s32 lbl_805D3118;
extern u8 *lbl_805D5A80;
extern const f32 lbl_805DB970;
u8 *TORockCaveM02__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80174698_lbl_804B3BA8_size[sizeof(RecoveredGlobal_80174698_lbl_804B3BA8) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_80174698___vt__13TORockCaveM02_size[sizeof(RecoveredGlobal_80174698___vt__13TORockCaveM02) == 0x40 ? 1 : -1];
u8 *TORockCaveM02__ct(u8 *arg0, s32 arg1) {
    TORockCave__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TORockCaveM02.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3118;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model(lbl_805D5A80, 1);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D5A80, 1);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DB970;
    TObjEneGibbles__sub_80156780(arg0, (s32) ((u8 *)&lbl_804B3BA8.value + 0x2C), 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    return arg0;
}

}
