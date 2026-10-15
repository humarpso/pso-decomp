#include "types.h"

extern "C" {
s32 obj_getField1c(int);
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 spawn_particle_effect(void *, int);
s32 TObjPlayer__sub_80117E50();
s32 get_player_by_client_id(int);
s32 is_item_area_enabled();
extern const f32 lbl_805DAAE8;
void fn_80107C9C(u8 *arg0);
}

extern "C" {

void fn_80107C9C(u8 *arg0) {
    s32 temp_r3;
    if (lbl_805DAAE8 <= (f32) *(s32 *)((s8 *)arg0 + 0x1C)) {
        temp_r3 = get_player_by_client_id((int) (*(u16 *)((s8 *)arg0 + 0x20)));
        if (temp_r3 != 0) {
            get_field_3e0__12TBoss3VoloptFPv();
            if (is_item_area_enabled() == 1) {
                obj_getField1c((int) (temp_r3));
                if (TObjPlayer__sub_80117E50() != 0) {
                    spawn_particle_effect((void *) (temp_r3 + 0x2FC), (int) (0x1BE));
                }
            }
        }
        *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (*(s32 *)((s8 *)arg0 + 0x1C) + 1);
}

}
