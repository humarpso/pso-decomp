#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(int, f32, f32, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *, int);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8014F140(void *);
s32 TNpcPlayer__sub_8014F950(void *);
M2C_UNK TNpcPlayer__sub_8014FAB0(s32);
M2C_UNK try_update_target_flag__10TNpcPlayerFPvi(void *, void *, f32);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
M2C_UNK TNpcPlayer__sub_8014FEAC(s32);
u16 get_npc_type__10TNpcPlayerFPv(void *);
s32 get_condition__10TNpcPlayerFPv(s32);
s32 get_action_state__10TNpcPlayerFPv(void *);
extern const f64 lbl_8043FFD8;
void TNpcPlayer__sub_801506DC(u8 *arg0);
}

extern "C" {

void init_state__10TNpcPlayerFPv(void *arg0);
void render__10TNpcPlayerFv(void);
void update_condition_flags__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8014FAB0(s32);
M2C_UNK TNpcPlayer__sub_8014FEAC(s32);
M2C_UNK TNpcPlayer__sub_80150050(void *);
M2C_UNK TNpcPlayer__sub_801528B8(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_801528C8(void *, M2C_UNK);
s16 TNpcPlayer__sub_801528F4(void *, M2C_UNK);
M2C_UNK TNpcPlayer__sub_80152900(void *, M2C_UNK, M2C_UNK);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
s32 get_condition__10TNpcPlayerFPv(s32);
M2C_UNK reset_fields_8c__10TNpcPlayerFPv(s32);

void render__10TNpcPlayerFv(void) {  }

extern const f32 lbl_805DB240;

#pragma push
#pragma fp_contract on
void TNpcPlayer__sub_801506DC(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r3_2;
    s32 temp_r5;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94);
    M2C_FIELD(arg0, f32 *, 0x58) = TObjPlayer__sub_80141CF8((void *) (temp_r5 + 0x38), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38), (int) (temp_r5));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        try_update_target_flag__10TNpcPlayerFPvi((void *) (M2C_FIELD(arg0, u8 **, 0x78)), (void *) (get_npc_type__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x74)))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    } else {
        check_and_set_reached__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    }
    TNpcPlayer__sub_8014FAB0((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))));
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xDC);
    temp_r3 = (u8 *)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x98) = (s32) (lbl_8043FFD8 * get_ad_end_text_start__10TObjPlayerFv((int) (temp_r3), (f32) (temp_f3 - M2C_FIELD(temp_r3, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0xE4) - M2C_FIELD(temp_r3, f32 *, 0x40)), (f32) (temp_f3)));
    TNpcPlayer__sub_8014F140((void *) (M2C_FIELD(arg0, u8 **, 0x78)));
    if (TNpcPlayer__sub_8014F950((void *) (M2C_FIELD(arg0, u8 **, 0x78))) != 0) {
        if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x40) {
            TNpcPlayer__sub_8014E33C((void *)((void *) (arg0)), (M2C_UNK)((int) (0xE)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x80) {
            TNpcPlayer__sub_8014E33C((void *)((void *) (arg0)), (M2C_UNK)((int) (0xF)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x200) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x80);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_2 & 0xFFFEFFFF);
                } else {
                    TNpcPlayer__sub_8014E33C((void *)((void *) (arg0)), (M2C_UNK)((int) (0x11)));
                }
            }
        } else {
            TNpcPlayer__sub_8014E33C((void *)((void *) (arg0)), (M2C_UNK)((int) (0x10)));
        }
    }
    if (((s32)TNpcPlayer__sub_8014FEAC((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))))) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 1U) {
            if (get_action_state__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x78))) & 0x80) {
                M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
                M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x8D) = (u8) (M2C_FIELD(arg0, u8 *, 0x8D) + 1);
            if ((s8) M2C_FIELD(arg0, u8 *, 0x8D) > 0x1E) {
                M2C_FIELD(arg0, u8 *, 0x8D) = 0x1EU;
            }
            M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) + 1);
        }
    } else {
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        VecCopy__FP3VecPC3Vec((void *) (temp_r3_3 + 0x9C), (void *) (M2C_FIELD(temp_r3_3, u8 **, 0x94) + 0x44));
        M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
        M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
    }
}
#pragma pop

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0) {
    TNpcPlayer__sub_8014FEAC(M2C_FIELD(arg0, s32 *, 0x74));
    TNpcPlayer__sub_8014FAB0(M2C_FIELD(arg0, s32 *, 0x74));
    if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 2) {
        if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 0xA) == 0) {
            TNpcPlayer__sub_8014E33C(arg0, 9);
        }
        TNpcPlayer__sub_801528C8(arg0 + 0x5C, 0xA);
    } else {
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 0xA);
    }
    if (check_and_set_reached__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74), lbl_805DB240) != 0) {
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 8) {
            if (TNpcPlayer__sub_801528F4(arg0 + 0x5C, 9) == 0) {
                TNpcPlayer__sub_8014E33C(arg0, 0xC);
            }
            TNpcPlayer__sub_801528C8(arg0 + 0x5C, 8);
            TNpcPlayer__sub_80152900(arg0 + 0x5C, 9, 0x2BC);
            return;
        }
        TNpcPlayer__sub_801528B8(arg0 + 0x5C, 9);
    }
}

void init_state__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r0;

    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74));
    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {
    case 0:
        TNpcPlayer__sub_80150050(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    case 1:
        return;
    }
}

}
