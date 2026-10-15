#include "types.h"

struct RecoveredGlobal_8028EC24_lbl_8051C07C {
    s8 value;
    u8 remaining[0x17];
};

struct RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 {
    s32 value;
    u8 remaining[0x9C];
};

extern "C" {
extern RecoveredGlobal_8028EC24_lbl_8051C07C character_creation_name_buffer;
void TObjCMMainMenu__sub_8028EC24(void);
extern RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 TObjCMMainMenu__data_804DB9C8;
s32 TObjCMMainMenu__sub_8028EBCC(u8 *arg0);
void *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
s32 init_default_view__11TCameraCtrlFv();
s32 reset_view_state__11TCameraCtrlFv();
s32 select_active_controller__11TCameraCtrlFc(s32);
s32 TCameraCtrl__ct(void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 set_ending_callback__6TLobbyFv();
s32 TKeyBoardControl__sub_80131F60();
s32 update_keyboard_menu__6TLobbyFv();
s32 init_menu_scene_lights(s32 *, s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 play_area_music(s32 *);
s32 load_floor_sound_bank(s32);
void *__nw__7TObjectFUl(s32);
s32 TWindowCtrlMain__ct(void *);
s32 reset_all__15TWindowCtrlMainFPv(s32);
s32 fn_8028D940();
s32 TObjCMMainMenu__sub_8028D9F8();
s32 select_char_menu__14TObjCMMainMenuFv();
s32 get_current_char_flag__14TObjCMMainMenuFv();
s32 create__12TCharaMakingFPvPv(s32, s32);
void TObjCMMainMenu__sub_8028EC18(void);
void TObjCMMainMenu__sub_8028EC24(void);
void TObjCMMainMenu__sub_8028EC34(void);
s32 fn_80291178();
s32 fn_80291290();
s32 init_and_create__15TChCrCharSelectFv(s32);
s32 create_fade_effect__14TObjCMMainMenuFPvPv(s32, s32);
s32 register_texture_f256_ad_pic_2();
s32 register_texture_f256_backtext();
extern s32 lbl_80451290[];
extern s32 default_scene_light_config[];
extern s32 creation_menu_resource_descriptor[];
extern s32 tl_camera;
extern s32 tl_03;
extern void *creation_menu_main_obj;
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
    init_menu_scene_lights(default_scene_light_config, 4);
    reset_view_state__11TCameraCtrlFv();
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
    reset_all__15TWindowCtrlMainFPv(1);
    p = __nw__7TObjectFUl(0x1C);
    if (p != NULL) {
        TWindowCtrlMain__ct(p);
    }
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, creation_menu_resource_descriptor, 0, 0, 0);
    }
    creation_menu_main_obj = p;
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
    return *(s32 *)((s8 *)((u8 *)(&TObjCMMainMenu__data_804DB9C8.value) + (*(s32 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0x24) + (*(s32 *)((s8 *)arg0 + 0x2C) * 4)) + 0) * 0x10)) + 0);
}

u8 is_state_4__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 4);
}

extern s32 TObjCMMainMenu__data_805D659C;

u8 is_state_3__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 3);
}

    extern int creation_dressing_room_mode_flag;
void TObjCMMainMenu__sub_8028EC18(void) { creation_dressing_room_mode_flag = 1; }

    extern int creation_dressing_room_mode_flag;

typedef char RecoveredGlobal_8028EC24_lbl_8051C07C_size[sizeof(RecoveredGlobal_8028EC24_lbl_8051C07C) == 0x18 ? 1 : -1];
void TObjCMMainMenu__sub_8028EC24(void) {
    character_creation_name_buffer.value = 0;
}

void TObjCMMainMenu__sub_8028EC34(void) { creation_dressing_room_mode_flag = 0; }

}
