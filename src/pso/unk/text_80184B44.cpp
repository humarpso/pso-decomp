#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_28 { u8 bytes[0x28]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_80184B44_lbl_804440B0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80184B44_lbl_804B5E48 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
extern RecoveredGlobal_80184B44_lbl_804440B0 lbl_804440B0;
extern RecoveredGlobal_80184B44_lbl_804B5E48 lbl_804B5E48;
extern const f32 lbl_805DBC1C;
u8 *fn_80184B44(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80184B44_lbl_804440B0_size[sizeof(RecoveredGlobal_80184B44_lbl_804440B0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80184B44_lbl_804B5E48_size[sizeof(RecoveredGlobal_80184B44_lbl_804B5E48) == 0x38 ? 1 : -1];
u8 *fn_80184B44(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, f32 farg0) {
    struct CopyStack_80184B44 { u8 bytes[0x2C]; };
    CopyStack_80184B44 copy_storage_80184B44;
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5E48.value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    if (get_anim_frame__25TObjCity_Season_EasterEggFPv((void *) (arg0)) != 0U) {
        temp_r4 = (u8 *)&lbl_804440B0.value - 4;
        *(M2CCopy_2C *)(copy_storage_80184B44.bytes) = *(const M2CCopy_2C *)((s32) temp_r4 + 4);
        (*(f32 *)(copy_storage_80184B44.bytes + 0xC)) = farg0;
        init_collision_body_parts((void *) (arg0), (void *) ((copy_storage_80184B44.bytes)), (int) (1));
        reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DBC1C;
    return arg0;
}

}
