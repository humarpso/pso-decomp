#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1);
void free_resources__17TOBarrierEnergy01Fv(void);
void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOBarrierEnergy01__data_805D5894);
        if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__data_805D5894);
            TOBarrierEnergy01__data_805D5894 = NULL;
        }
    }
    if ((u32) lbl_805D5890 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5890, 1);
        lbl_805D5890 = 0U;
    }
}

extern M2C_UNK __vt__17TOBarrierEnergy01[];

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOBarrierEnergy01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;

    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
