#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80100070_lbl_8049E8F8 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_80100070_lbl_8049E958 {
    M2C_UNK value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_80100070_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80100070_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void TObjPlayer__sub_8010047C(u8 *arg0, s16 arg1);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK get_model_ids__9TItemLoadFUcPvPv(int, u32 *, s32 *);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 TOSignCave03__sub_803DB510(void *);
s32 TObjPlayer__sub_803DED84(int);
extern RecoveredGlobal_80100070_lbl_8049E8F8 lbl_8049E8F8;
extern RecoveredGlobal_80100070_lbl_8049E958 lbl_8049E958;
extern RecoveredGlobal_80100070_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_80100070_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_80100070(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80100068(void);
void TObjPlayer__sub_8010006C(void);
int TObjPlayer__sub_8010043C(void);
u16 TObjPlayer__sub_80100474(void* p);
void apply_item_flags__10TObjPlayerFPvi(void *arg0, s32 arg1);
void draw_item_model__10TObjPlayerFPv(u8 *arg0);
s32 query_game_join_id__10TObjPlayerFv(void);
void submit_computer_command__10TObjPlayerFPv(void *arg0);
s32 PPCSync();
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 TItemData__sub_8010C52C(s32);
void TItem__sub_801005D8(void);
void TItem__sub_801005DC(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);
s32 TLobby__sub_80101AB0();
s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);
s32 TObjPlayer__sub_80087638(s32, s32);
s8 TObjPlayer__sub_80102C30();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK func_80141618__Fv();
s32 get_id__13TItemProArmorFPv(void *);
s16 get_packed_value__9TItemDataFPv(s32);
s32 is_usable__9TItemDataFPv(s32);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
s32 test_flag_2000000__10TObjPlayerFPv(u32);

void apply_item_flags__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if (is_usable__9TItemDataFPv(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x100);
        M2C_FIELD(arg0, s16 *, 0xE8) = get_packed_value__9TItemDataFPv(arg1);
    }
    if (TItemData__sub_8010C52C(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) | 0x400);
    }
}
void TObjPlayer__sub_80100068(void) {  }
void TObjPlayer__sub_8010006C(void) {  }

typedef char RecoveredGlobal_80100070_lbl_8049E8F8_size[sizeof(RecoveredGlobal_80100070_lbl_8049E8F8) == 0x60 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8049E958_size[sizeof(RecoveredGlobal_80100070_lbl_8049E958) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80100070_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80100070_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_80100070(u8 *arg0) {
    u8 *spC;
    s32 sp8;
    get_model_ids__9TItemLoadFUcPvPv((int)((int) (6U)), (u32 *)((void *) (&spC)), (s32 *)((void *) (&sp8)));
    if (spC != NULL) {
        lbl_805D5660 = some_id_805c6f74;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8050BEC0.value), (void *) (&lbl_8058D4C0.value));
        some_id_805c6f74 |= 0x10;
        set_depth_buffer_settings_id__FUl((M2C_UNK)((int) (3)));
        begin_effect_render__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi((s32)((int) (sp8)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((M2C_UNK)((int) (0)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
        TObjPlayer__sub_803DED84((int) ((u8 *)&lbl_8049E8F8.value + ((s8) M2C_FIELD(arg0, u8 *, 0xEA) * 0x10)));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(spC, s32 *, 4)));
        TObjPlayer__sub_803DED84((int) ((u8 *)&lbl_8049E958.value + ((s8) M2C_FIELD(arg0, u8 *, 0xEA) * 0x10)));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(spC, u8 **, 0x2C), s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        reset_transform_state__10TObjPlayerFv();
        func_80141618__Fv();
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BEC0.value));
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
}

void draw_item_model__10TObjPlayerFPv(u8 *arg0) {
    u32 spC;
    s32 sp8;

    get_model_ids__9TItemLoadFUcPvPv(M2C_FIELD(arg0, u8 *, 0xEF), &spC, &sp8);
    if (spC != 0U) {
        set_depth_buffer_settings_id__FUl(3);
        begin_effect_render__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(sp8);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(spC);
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        reset_transform_state__10TObjPlayerFv();
        func_80141618__Fv();
    }
}

int TObjPlayer__sub_8010043C(void) { return 0; }

u16 TObjPlayer__sub_80100474(void* p) { return *(u16*)((char*)p + 0xe8); }

void TObjPlayer__sub_8010047C(u8 *arg0, s16 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 0x100) {
        M2C_FIELD(arg0, s16 *, 0xE8) = arg1;
    }
}

s32 query_game_join_id__10TObjPlayerFv(void) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_80101AB0();
    if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
        return temp_r3;
    }
    return 0;
}
void submit_computer_command__10TObjPlayerFPv(void *arg0) {
    s32 a, b, c;
    TOComputerMachine01__sub_8023DDC8(M2C_FIELD(arg0, s32 *, 4), a, b, c, 1);
    PPCSync();
}

}
