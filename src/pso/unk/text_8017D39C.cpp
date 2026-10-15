#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8017D39C_lbl_804B5418 {
    s32 value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TOWreckAncientBrakable__ct(void *, int);
extern RecoveredGlobal_8017D39C_lbl_804B5418 TOWreckAncient__collision_body_templates;
extern RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05 __vt__24TOWreckAncientBrakable05;
extern s32 TOWreckAncientBrakable05__name;
u8 *TOWreckAncientBrakable05__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8017D39C_lbl_804B5418_size[sizeof(RecoveredGlobal_8017D39C_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05_size[sizeof(RecoveredGlobal_8017D39C___vt__24TOWreckAncientBrakable05) == 0x38 ? 1 : -1];
u8 *TOWreckAncientBrakable05__ct(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    TOWreckAncientBrakable__ct((void *) (arg0), (int) (3));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__24TOWreckAncientBrakable05.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOWreckAncientBrakable05__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&TOWreckAncient__collision_body_templates.value + 0x84), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0xB8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)((s8 *)arg0 + 0xB8) = -1;
    }
    return arg0;
}

}
