#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase();
s32 is_split_screen();
s32 TCameraCtrl__sub_8006B368();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK init_area_lights();
void dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
void TLobby__sub_80226E44(s32);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK load_floor_sound_bank();
void create_mist_ctrl__6TLobbyFPvPv(void *, void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_804651C0[];
extern void *tl_05;
s32 TLobby__sub_80299C7C(void);
}

extern "C" {

s32 init_particle_model__6TLobbyFv(void);
s32 init_scene_delo2(void);
s32 load_dragon2_scene(void);
void refresh_lobby_state__6TLobbyFv(void);
void update_field_state__6TLobbyFv(void);
void update_floor_state_deferred__6TLobbyFv(void);
void update_scene_alt__6TLobbyFv(void);
void update_subsystems__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
M2C_UNK TLobby__sub_801403B4(M2C_UNK);
int TLobby__sub_80227248(void);
int TLobby__sub_8022743C(void);
M2C_UNK load_floor_sound_bank();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK init_area_lights();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create__15TBoss6EmptyWarpFv();
M2C_UNK create_boss8_demo_objects();
M2C_UNK create_instance__10TSceneSoraFPv(void*, s32);
M2C_UNK create_tasks__6TLobbyFv();
int fn_802F105C(void);
M2C_UNK fn_802F1084();
int fn_802FE9E0(void);
M2C_UNK fn_802FEA0C();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_scene_boss2_tunnel();
s32 is_split_screen();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);

void refresh_lobby_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern s32 tl_particlemodel;

s32 init_particle_model__6TLobbyFv(void) {
    void* obj;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if ((is_split_screen() == 0) && ((obj = (void*)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv((void*)(obj), (s32)(tl_particlemodel));
    }
    create__15TBoss6EmptyWarpFv();
    return 1;
}

void update_field_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802FE9E0(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern M2C_UNK lbl_804651A0[];

s32 load_dragon2_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    fn_802FEA0C();
    init_area_lights();
    create_tasks__6TLobbyFv();
    create_boss8_demo_objects();
    TObjBgmColCtrl__sub_802274B8(lbl_804651A0);
    return 1;
}

void update_subsystems__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); TLobby__sub_80227248(); fn_802F105C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

extern M2C_UNK lbl_804651B0[];
extern s32 tl_particlemodel;

s32 init_scene_delo2(void) {
    void *obj;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_scene_boss2_tunnel();
    init_area_lights();
    create_tasks__6TLobbyFv();
    fn_802F1084();
    TLobby__sub_801403B4(0);
    TObjBgmColCtrl__sub_802274B8(lbl_804651B0);
    if ((is_split_screen() == 0) && ((obj = (void *)__nw__7TObjectFUl(0x3C)) != 0)) {
        create_instance__10TSceneSoraFPv((void*)(obj), (s32)(tl_particlemodel));
    }
    return 1;
}

void update_floor_state_deferred__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

s32 TLobby__sub_80299C7C(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if ((get_main_phase() != 0xE) || (TCameraCtrl__sub_8006B368() == 0)) {
        switch (((s32)get_global_state__14TOKeyMachine01Fv())) {
        case 0x17:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x51);
            break;
        }
    }
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8((M2C_UNK *)(lbl_804651C0));
    } else {
        TLobby__sub_80226E44(5);
    }
    if ((is_not_split_screen__13TRaderMapCoreFv() == 0) && (((s32)get_global_state__14TOKeyMachine01Fv()) == 0x17)) {
        create_mist_ctrl__6TLobbyFPvPv(tl_05, NULL);
    }
    return 1;
}

void update_scene_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); TLobby__sub_8022743C(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); TLobby__sub_8007BA20(); }

}
