#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 spawn_particle_effect(s32, s32);
void set_display_mode__15TObjEneSlimeOneFPvi(void *, s32);
void fn_800EB778(void *, s32);
void TObjEneSlimeOne__sub_800EC7F4(void *, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern const f32 lbl_805DA67C;
void fn_800E95F4(u8 *arg0);
s32 create_particle_emitter(void *, int);
void set_display_mode__15TObjEneSlimeOneFPvi(void *, s32);
void TObjEneSlimeOne__sub_800EC7F4(void *, s32);
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA708;
void fn_800E9538(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA70C;
void fn_800E95A4(u8 *arg0);
}

extern "C" {

void fn_800E9538(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3E8) = create_particle_emitter((void *) (arg0 + 0x38), (int) (0xE1));
    M2C_FIELD(arg0, f32 *, 0x3A4) = (f32) lbl_805DA708;
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) lbl_805DA6B4;
    TObjEneSlimeOne__sub_800EC7F4((void *)((int) (M2C_FIELD(arg0, s32 *, 0x388))), (s32)((int) (7)));
    set_display_mode__15TObjEneSlimeOneFPvi((void *)((void *) (arg0)), (s32)((int) (0)));
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_800E95A4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3A0) + lbl_805DA70C;
    M2C_FIELD(arg0, f32 *, 0x3A0) = temp_f1;
    if (temp_f1 < lbl_805DA6B4) {
        M2C_FIELD(arg0, f32 *, 0x3A0) = (f32) lbl_805DA6B4;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void fn_800E95F4(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3F0));
    if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0)) {
        fn_800EB778(M2C_FIELD(arg0, u8 **, 0x3F0), (s32) M2C_FIELD(arg0, u16 *, 0x1C));
    }
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, s32 *, 0x390) = 5;
    refresh_lobby_state__10TObjPlayerFPv(arg0);
    TBoss3Volopt__sub_8022675C(0x4003A81B, (u32) (arg0 + 0x38), 0, 0);
    spawn_particle_effect((s32) (arg0 + 0x2FC), 0xFE);
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, u8 **, 0x388), 5);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 0);
}

}
