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

struct RecoveredGlobal_8017D39C_lbl_804B5418 {
    M2C_UNK value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TOWreckAncientBrakable__ct(void *, int);
extern RecoveredGlobal_8017D39C_lbl_804B5418 lbl_804B5418;
extern RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 __vt__24TOWreckAncientBrakable05;
extern s32 lbl_805D3214;
u8 *TOWreckAncientBrakable05__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8017D39C_lbl_804B5418_size[sizeof(RecoveredGlobal_8017D39C_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05_size[sizeof(RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05) == 0x38 ? 1 : -1];
u8 *TOWreckAncientBrakable05__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TOWreckAncientBrakable__ct((void *) (arg0), (int) (3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__24TOWreckAncientBrakable05.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3214;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&lbl_804B5418.value + 0x84), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    return arg0;
}

}
