#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028EC24_lbl_8051C07C {
    s8 value;
    u8 remaining[0x17];
};

struct RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

extern "C" {
extern RecoveredGlobal_8028EC24_lbl_8051C07C lbl_8051C07C;
void TObjCMMainMenu__sub_8028EC24(void);
extern RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 TObjCMMainMenu__data_804DB9C8;
s32 TObjCMMainMenu__sub_8028EBCC(u8 *arg0);
void *load_resource_from_descriptor(void *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK init_default_view__11TCameraCtrlFv();
M2C_UNK TCameraCtrl__sub_8006A35C();
M2C_UNK select_active_controller__11TCameraCtrlFc(M2C_UNK);
M2C_UNK TCameraCtrl__ct(void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK set_ending_callback__6TLobbyFv();
M2C_UNK TKeyBoardControl__sub_80131F60();
M2C_UNK update_keyboard_menu__6TLobbyFv();
M2C_UNK init_menu_scene_lights(M2C_UNK *, M2C_UNK);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(M2C_UNK);
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK load_floor_sound_bank(M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindowCtrlMain__ct(void *);
M2C_UNK TWindowCtrlMain__sub_8024D7C0(M2C_UNK);
M2C_UNK fn_8028D940();
M2C_UNK TObjCMMainMenu__sub_8028D9F8();
M2C_UNK select_char_menu__14TObjCMMainMenuFv();
s32 get_current_char_flag__14TObjCMMainMenuFv();
M2C_UNK create__12TCharaMakingFPvPv(s32, s32);
void TObjCMMainMenu__sub_8028EC18(void);
void TObjCMMainMenu__sub_8028EC24(void);
void TObjCMMainMenu__sub_8028EC34(void);
M2C_UNK fn_80291178();
M2C_UNK fn_80291290();
M2C_UNK init_and_create__15TChCrCharSelectFv(s32);
M2C_UNK create_fade_effect__14TObjCMMainMenuFPvPv(M2C_UNK, M2C_UNK);
M2C_UNK register_texture_f256_ad_pic_2();
M2C_UNK register_texture_f256_backtext();
extern M2C_UNK lbl_80451290[];
extern M2C_UNK lbl_804A6F34[];
extern M2C_UNK lbl_804D3900[];
extern s32 tl_camera;
extern s32 tl_03;
extern void *lbl_805D6528;
void init_creation_menu_scene(void);
}

extern "C" {

void TObjCMMainMenu__sub_8028EC18(void);
void TObjCMMainMenu__sub_8028EC34(void);
u8 is_state_3__14TObjCMMainMenuFv(void);
u8 is_state_4__14TObjCMMainMenuFv(void);

extern s32 TObjCMMainMenu__data_805D659C;

typedef char RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];

void init_creation_menu_scene(void) {
    void *p;
    init_menu_scene_lights(lbl_804A6F34, 4);
    TCameraCtrl__sub_8006A35C();
    init_default_view__11TCameraCtrlFv();
    p = __nw__7TObjectFUl(0x1D4);
    if (p != NULL) {
        TCameraCtrl__ct(p, tl_camera);
    }
    select_active_controller__11TCameraCtrlFc(8);
    fn_80291290();
    register_texture_f256_ad_pic_2();
    register_texture_f256_backtext();
    update_keyboard_menu__6TLobbyFv();
    set_ending_callback__6TLobbyFv();
    TKeyBoardControl__sub_80131F60();
    TWindowCtrlMain__sub_8024D7C0(1);
    p = __nw__7TObjectFUl(0x1C);
    if (p != NULL) {
        TWindowCtrlMain__ct(p);
    }
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, lbl_804D3900, 0, 0, 0);
    }
    lbl_805D6528 = p;
    if (p != NULL) {
        fn_80291178();
        fn_8028D940();
        load_floor_sound_bank(0);
        play_area_music(lbl_80451290);
        if (get_current_char_flag__14TObjCMMainMenuFv() != 0) {
            TObjCMMainMenu__sub_8028EC34();
            TObjCMMainMenu__sub_8028EC24();
            TObjCMMainMenu__sub_8028D9F8();
            init_and_create__15TChCrCharSelectFv(tl_03);
            create_fade_effect__14TObjCMMainMenuFPvPv(0xF, 1);
        } else {
            TObjCMMainMenu__sub_8028EC18();
            select_char_menu__14TObjCMMainMenuFv();
            TObjCMMainMenu__sub_8028D9F8();
            create__12TCharaMakingFPvPv(tl_03, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) + 0x370);
            create_fade_effect__14TObjCMMainMenuFPvPv(0xF, 1);
        }
    }
}

s32 TObjCMMainMenu__sub_8028EBCC(u8 *arg0) {
    return M2C_FIELD(((u8 *)(&TObjCMMainMenu__data_804DB9C8.value) + (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + (M2C_FIELD(arg0, s32 *, 0x2C) * 4)), s32 *, 0) * 0x10)), s32 *, 0);
}

u8 is_state_4__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 4);
}

extern s32 TObjCMMainMenu__data_805D659C;

u8 is_state_3__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 3);
}

    extern int lbl_805D652C;
void TObjCMMainMenu__sub_8028EC18(void) { lbl_805D652C = 1; }

    extern int lbl_805D652C;

typedef char RecoveredGlobal_8028EC24_lbl_8051C07C_size[sizeof(RecoveredGlobal_8028EC24_lbl_8051C07C) == 0x18 ? 1 : -1];
void TObjCMMainMenu__sub_8028EC24(void) {
    lbl_8051C07C.value = 0;
}

void TObjCMMainMenu__sub_8028EC34(void) { lbl_805D652C = 0; }

}
