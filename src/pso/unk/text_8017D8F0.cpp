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

struct RecoveredGlobal_8017D8F0_lbl_804B5418 {
    M2C_UNK value;
    u8 remaining[0x130];
};

struct RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
void reset_photon_effect__10TObjPlayerFPv(s32);
u32 init_collision_body_parts(void *, s32, s32);
u8 * TOWreckAncient__ct(void *, s32);
extern RecoveredGlobal_8017D8F0_lbl_804B5418 TOWreckAncient__collision_body_templates;
extern RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06 __vt__16TOWreckAncient06;
extern s32 lbl_805D3208;
u8 *TOWreckAncient06__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8017D8F0_lbl_804B5418_size[sizeof(RecoveredGlobal_8017D8F0_lbl_804B5418) == 0x134 ? 1 : -1];
typedef char RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06_size[sizeof(RecoveredGlobal_8017D8F0___vt__16TOWreckAncient06) == 0x38 ? 1 : -1];
u8 *TOWreckAncient06__ct(u8 *arg0, s32 arg1) {
    TOWreckAncient__ct(arg0, 6);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__16TOWreckAncient06.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3208;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    init_collision_body_parts(arg0, (s32) ((u8 *)&TOWreckAncient__collision_body_templates.value + 0x108), 1);
    reset_photon_effect__10TObjPlayerFPv((s32) arg0);
    return arg0;
}

}
