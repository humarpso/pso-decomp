#include "types.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8017E0D0_lbl_804B5418 {
    s32 value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017E0D0___vt__16TOWreckAncient03 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
u32 init_collision_body_parts(void *, s32, s32);
u8 * TOWreckAncient__ct(void *, s32);
extern RecoveredGlobal_8017E0D0_lbl_804B5418 TOWreckAncient__collision_body_templates;
extern RecoveredGlobal_8017E0D0___vt__16TOWreckAncient03 __vt__16TOWreckAncient03;
extern s32 TOWreckAncient03__name;
u8 *TOWreckAncient03__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8017E0D0_lbl_804B5418_size[sizeof(RecoveredGlobal_8017E0D0_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017E0D0___vt__16TOWreckAncient03_size[sizeof(RecoveredGlobal_8017E0D0___vt__16TOWreckAncient03) == 0x38 ? 1 : -1];
u8 *TOWreckAncient03__ct(u8 *arg0, s32 arg1) {
    TOWreckAncient__ct(arg0, 2);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__16TOWreckAncient03.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOWreckAncient03__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    init_collision_body_parts(arg0, (s32) ((u8 *)&TOWreckAncient__collision_body_templates.value + 0x58), 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
