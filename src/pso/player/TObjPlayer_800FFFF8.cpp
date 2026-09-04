#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80100068(void);
void TObjPlayer__sub_8010006C(void);
int TObjPlayer__sub_8010043C(void);
u16 TObjPlayer__sub_80100474(void* p);
int TObjPlayer__sub_8010047C(void);
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
M2C_UNK get_model_ids__9TItemLoadFUcPvPv(u8, u32 *, s32 *);
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

int TObjPlayer__sub_8010047C(void) { return 0; }

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
