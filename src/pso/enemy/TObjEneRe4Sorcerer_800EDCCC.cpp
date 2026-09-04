#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A_800EDCCC { char pad[0x18]; };
struct V_A_800EDCCC : Base_A_800EDCCC {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m93();
};

extern "C" {

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0);
void create_effect__18TObjEneRe4SorcererFPv(u8 *arg0);
void handle_state__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1);
void state_wait__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1);
void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneEpsilon__sub_800B96A4();
M2C_UNK TObjEneRe4Sorcerer__sub_800EF95C(void *, f32);
s32 TObjPlayer__sub_801423A4(s32, s32, M2C_UNK);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 clamp_frame_index__9TObjEneDDFi(s32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK create__9TTecRestaFPvPvPv(void *, void *, s32);
M2C_UNK fn_800B98C0(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u8 *get_spell_data__18TObjEneRe4SorcererFPv();
s32 is_alive__9TObjEneDDFPv(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
s32 try_attack__18TObjEneRe4SorcererFiff(f32, f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f32 lbl_805DA7C0;
extern const f32 lbl_805DA7C4;
extern const f32 lbl_805DA7C8;

void state_wait__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFFFFFFD);
        ((V_A_800EDCCC *) arg0)->m93();
        fn_800B98C0(arg0);
        return;
    case 3:
        if (try_attack__18TObjEneRe4SorcererFiff(lbl_805DA7C0, lbl_805DA7C0) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x3EC) & 1) {
                TObjEneRe4Sorcerer__sub_800EF95C(arg0, lbl_805DA7C4);
            } else {
                TObjEneRe4Sorcerer__sub_800EF95C(arg0, lbl_805DA7C8);
            }
            TObjEneDD__sub_800BBA18(arg0, 2);
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) > 0x5A) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E4) + 1);
        break;
    }
}

void handle_state__18TObjEneRe4SorcererFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        break;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) >= 2) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x4E4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E4) + 1);
        break;
    }
}

void create_effect__18TObjEneRe4SorcererFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E8) == 0) {
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A812), arg0, arg0 + 0x38, 0, 0);
        return;
    }
    TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003AB13), arg0, arg0 + 0x38, 0, 0);
}

extern u8 *lbl_805D52DC;

s32 cast_resta__18TObjEneRe4SorcererFPv(u8 *arg0) {
    u8 *var_r31;

    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x390)) != 0) {
        if (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x3E4)) != 0U) {
            var_r31 = get_spell_data__18TObjEneRe4SorcererFPv();
        } else {
            var_r31 = arg0 + 0x38;
        }
        create__9TTecRestaFPvPvPv(arg0, var_r31, clamp_frame_index__9TObjEneDDFi(M2C_FIELD(lbl_805D52DC, s32 *, 0x20)));
        return 1;
    }
    return 0;
}

extern const f64 TObjEneRe4Sorcerer__data_8043D408;

void turn_to_target__18TObjEneRe4SorcererFPv(void *arg0) {
    TObjEneEpsilon__sub_800B96A4();
    update_velocity__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TObjEneRe4Sorcerer__data_8043D408 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), 0xA00);
}

}
