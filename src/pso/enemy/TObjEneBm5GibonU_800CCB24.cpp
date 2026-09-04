#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800CCC4C { char pad[0x18]; };
struct VObj_CE_800CCC4C : Base_VT_800CCC4C {
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

void TObjEneBm5GibonU__sub_800CFE30(void);
void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2);
void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1);
void advance_anim_frame__16TObjEneBm5GibonUFv(void);
int get_attack_state__16TObjEneBm5GibonUFPv(void* p);
void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
int TObjEneBm5GibonU__sub_800CCC6C(void*);
M2C_UNK TObjEneBm5GibonU__sub_800D086C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D08E4(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D0FDC(void *, s32);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D17E8(s32);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
s32 get_target_info__9TObjEneDDFPv();
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

int get_attack_state__16TObjEneBm5GibonUFPv(void* p) { return TObjEneBm5GibonU__sub_800CCC6C(p); }

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void action__16TObjEneBm5GibonUFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        ((VObj_CE_800CCC4C *)arg0)->m95();
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
        ((VObj_CE_800CCC4C *)arg0)->m87();
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        break;
    }
}

void TObjEneBm5GibonU__sub_800CFE30(void) {  }

void TObjEneBm5GibonU__sub_800D095C(void *arg0, s32 arg1, s16 arg2) {
    M2C_FIELD(arg0, s32 *, 0x510) = arg1;
    M2C_FIELD(arg0, s16 *, 0x514) = arg2;
}

}
