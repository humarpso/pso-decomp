#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT { char pad[0x18]; };
struct VObj_CE : Base_VT {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    PADV
    virtual void m87();
    PADV4
    PADV
    PADV
    virtual void m95();
};

extern "C" {

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
M2C_UNK TObjEneBm5GibonU__sub_800D086C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D08E4(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE *)arg0)->m95();
        set_field_378__9TObjEneDDFPvi(arg0, 8);
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        M2C_FIELD(arg0, s32 *, 0x518) = 0;
        TObjEneBm5GibonU__sub_800D17E8(M2C_FIELD(arg0, s32 *, 0x46C));
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 8);
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504(arg0);
        TObjEneBm5GibonU__sub_800D0FDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, TObjEneBm5GibonU__data_805DA178) != 0) {
            TBoss3Volopt__sub_8022675C((void *)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x3AA22), arg0 + 0x38, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
        if (temp_r0 == 0x1E) {
            TObjEneBm5GibonU__sub_800D08E4(arg0);
        } else if (temp_r0 == 0x28) {
            TObjEneBm5GibonU__sub_800D086C(arg0);
        }
        ((VObj_CE *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

}
