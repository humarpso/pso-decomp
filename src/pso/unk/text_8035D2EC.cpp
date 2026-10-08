#include "types.h"

struct Obj_8035D3E0 { u8 pad[0x188]; s32 f188; };

struct Out_8035D3E0 { u8 pad[0x40]; s32 f40; s32 f44; u8 pad48[0x60 - 0x48]; f32 v60[4]; void *f70; };

extern "C" {
void *get_player_data__10TObjPlayerFi(int);
s32 is_active__14TBoss6PlotFalzFPv(void *);
s32 get_game_mode__6TLobbyFv(void);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
void *get_equip_field_d04__10TObjPlayerFPv(void *, int);
extern u8 lbl_80479BB4[][3];
s32 any_player_has_listed_equipment(void);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
void TObjPlayer__sub_8010941C(void);
void fn_8035D3E0(Obj_8035D3E0 *arg0, Out_8035D3E0 *arg1);
}

extern "C" {

s32 any_player_has_listed_equipment(void) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        void *pl = get_player_data__10TObjPlayerFi(i);
        if (pl != NULL && is_active__14TBoss6PlotFalzFPv(pl) != 0) {
            s32 j;
            for (j = 0; j < 10; j++) {
                u8 *e = lbl_80479BB4[j];
                s32 k;
                for (k = 0; k < 13; k++) {
                    void *it = get_equip_field_d04__10TObjPlayerFPv(pl, k);
                    if (it != NULL && e[0] == get_field_ec__12TOSwitchItemFPv(it) &&
                        e[1] == get_field_ed__10TObjPlayerFPv(it) &&
                        e[2] == get_slot_count__14TItemProShieldFPv(it)) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
void fn_8035D3E0(Obj_8035D3E0 *arg0, Out_8035D3E0 *arg1) {
    f32 sp8[4];
    arg1->f40 |= 0x1C;
    get_weapon_color__11TItemWeaponFPv(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->f44 = arg0->f188;
    arg1->f70 = (void *)TObjPlayer__sub_8010941C;
}

}
