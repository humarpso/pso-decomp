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
M2C_UNK TLobby__sub_801403B4(M2C_UNK);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK load_floor_sound_bank();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create_instance__10TSceneSoraFPv(s32, s32);
extern M2C_UNK lbl_804651C8[];
extern s32 tl_particlemodel;

s32 initialize_boss_scene(void) {
    s32 temp_r3;
    u32 temp_new;

    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    if (is_split_screen() == 0) {
        temp_new = __nw__7TObjectFUl(0x3C);
        if (temp_new != 0U) {
            create_instance__10TSceneSoraFPv(temp_new, tl_particlemodel);
        }
    }
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_804651C8);
    } else {
        TLobby__sub_80226E44(6);
    }
    if ((get_main_phase() != 0xE) || (TCameraCtrl__sub_8006B368() == 0)) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        switch (temp_r3) {
        case 28:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x54);
            break;
        case 29:
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x55);
            break;
        }
    }
    return 1;
}

}
