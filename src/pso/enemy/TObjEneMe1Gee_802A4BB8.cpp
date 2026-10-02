#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A4CC4_lbl_804DCFF8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
M2C_UNK TObjPlayer__sub_802A445C(void *, M2C_UNK);
u32 find_entity_by_id(u16);
M2C_UNK TNeedleShoot__sub_802A4668(void *);
M2C_UNK TNeedleShoot__sub_802A4694(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
void update_missile__13TObjEneMe1GeeFPv(void *arg0);
u16 obj_getField1c(void *);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern RecoveredGlobal_802A4CC4_lbl_804DCFF8 lbl_804DCFF8;
extern s32 lbl_805D3DE0;
u8 *TObjEneMe1Gee__sub_802A4CC4(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
void TObjEneMe1Gee__sub_802A4D4C(void);
int TObjEneMe1Gee__sub_800CC2BC(void);
extern u32 lbl_805D6660;
void cache_result_805D6660__13TObjEneMe1GeeFv(void);
}

extern "C" {

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();

extern u32 lbl_805D6660;

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0) {
    if ((u32) lbl_805D6660 == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    TObjPlayer__sub_803D9B2C();
    begin_effect_render__13TParticleCtrlFv();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x6C));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA4)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xA0)));
    TObjFish__sub_8001EDB0((void *) (lbl_805D6660), (int) (1));
    set_global_param__8TObjFishFi();
    TObjFish__sub_8001EDC4((void *) (lbl_805D6660), (int) (1));
    TObjBoss2Tunnel__sub_803DB470();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}
void update_missile__13TObjEneMe1GeeFPv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x34));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) == 1) {
        TNeedleShoot__sub_802A4694(arg0);
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        TObjPlayer__sub_802A445C(arg0, 1);
        return;
    }
    TNeedleShoot__sub_802A4668(arg0);
}
u8 *TObjEneMe1Gee__sub_802A4CC4(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    TNeedleShoot__ct(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804DCFF8.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3DE0;
    M2C_FIELD(arg0, f32 *, 0xBC) = farg1;
    M2C_FIELD(arg0, f32 *, 0xAC) = farg0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0x96;
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x34) = obj_getField1c(temp_r3);
    }
    return arg0;
}
void TObjEneMe1Gee__sub_802A4D4C(void) {  }
void cache_result_805D6660__13TObjEneMe1GeeFv(void) { (*(int *)&lbl_805D6660) = TObjEneMe1Gee__sub_800CC2BC(); }

typedef char RecoveredGlobal_802A4CC4_lbl_804DCFF8_size[sizeof(RecoveredGlobal_802A4CC4_lbl_804DCFF8) == 0x28 ? 1 : -1];

}
