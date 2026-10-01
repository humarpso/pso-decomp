#include "types.h"
extern "C" {
void *get_player_data__10TObjPlayerFi(int);
void *obj_getField1c(void *);
s32 TBoss4Type3__sub_8005254C(void *);
s32 get_game_mode__6TLobbyFv(void);
u8 get_field_ec__12TOSwitchItemFPv(void *);
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv(void *);
void *get_equip_field_d04__10TObjPlayerFPv(void *, int);
extern u8 lbl_80479B4C[][3];
s32 fn_8035C9E8(void);
}

extern "C" {

s32 fn_8035C9E8(void) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        void *pl = get_player_data__10TObjPlayerFi(i);
        if (pl != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(pl)) != 0) {
            s32 j;
            for (j = 0; j < 3; j++) {
                u8 *e = lbl_80479B4C[j];
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

}
