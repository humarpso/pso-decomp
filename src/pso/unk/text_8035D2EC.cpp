#include "types.h"
#include "pso/item/TItem.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/item/TItemProShield.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

struct Obj_8035D3E0 { u8 pad[0x188]; s32 f188; };

struct Out_8035D3E0 { u8 pad[0x40]; s32 f40; s32 f44; u8 pad48[0x60 - 0x48]; f32 v60[4]; void *f70; };

extern "C" {
void *get_player_data__10TObjPlayerFi(int);
void *get_equip_field_d04__10TObjPlayerFv(void *, int);
extern u8 listed_equipment_table[][3];
s32 any_player_has_listed_equipment(void);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
void fn_8035D3E0(Obj_8035D3E0 *arg0, Out_8035D3E0 *arg1);
}

extern "C" {

s32 any_player_has_listed_equipment(void) {
    s32 n = TLobby::get_game_mode();
    s32 i;
    for (i = 0; i < n; i++) {
        void *pl = get_player_data__10TObjPlayerFi(i);
        if (pl != NULL && ((TBoss6PlotFalz *)pl)->is_active() != 0) {
            s32 j;
            for (j = 0; j < 10; j++) {
                u8 *e = listed_equipment_table[j];
                s32 k;
                for (k = 0; k < 13; k++) {
                    void *it = get_equip_field_d04__10TObjPlayerFv(pl, k);
                    if (it != NULL && e[0] == ((TItem *)it)->get_field_ec() &&
                        e[1] == ((TItem *)it)->get_field_ed() &&
                        e[2] == ((TItemProShield *)it)->get_slot_count()) {
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
    arg1->f70 = (void *)TObjPlayer::forward_item_effect_callback;
}

}
