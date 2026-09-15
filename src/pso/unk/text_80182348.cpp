#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK city_door_tick_opening(void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DBBF8;
extern const f32 lbl_805DBBFC;
void TObjCityDoor_Warp__sub_801823E4(u8 *arg0);
}

extern "C" {

void TObjCityDoor_Warp__sub_80182348(s32 arg0);
void spawn_boss3_volopt_effect(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
s32 is_rader_map_active();
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, M2C_UNK);

void TObjCityDoor_Warp__sub_80182348(s32 arg0) {
    update_technique_slot__10TTecRaFoieFi((s32)(TBoss3Volopt__sub_8022675C(0x42A05, arg0 + 0x38, 0, 0)), (s32)(-0x500), (M2C_UNK)(0));
}

void spawn_boss3_volopt_effect(s32 arg0) {
    if (is_rader_map_active() != 0) {
        s32 r = TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
        update_technique_slot__10TTecRaFoieFi((s32)(r), (s32)(-0x800), (M2C_UNK)(0));
    }
}
#pragma push
#pragma fp_contract on
void TObjCityDoor_Warp__sub_801823E4(u8 *arg0) {
    f32 temp_f1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    if ((temp_f1 >= lbl_805DBBF8) && (temp_f1 <= lbl_805DBBFC)) {
        update_technique_slot__10TTecRaFoieFi((s32)(TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x42A04)), (s32)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)))), (s32)((int) (-0x500)), (M2C_UNK)((int) (0)));
    }
    city_door_tick_opening((void *) (arg0));
}
#pragma pop

}
