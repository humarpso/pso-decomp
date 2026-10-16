#include "types.h"
#include "pso/unk/TUnk_8049EFB8.h"

extern "C" {
s32 obj_getField1c(int);
s32 get_field_3e0__12TBoss3VoloptFv();
s32 spawn_particle_effect(void *, int);
s32 TObjPlayer__sub_80117E50();
s32 get_player_by_client_id(int);
s32 is_item_area_enabled();
extern const f32 lbl_805DAAE8;
}

extern "C" {

void TUnk_8049EFB8::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 player;
    if (lbl_805DAAE8 <= (f32) *(s32 *)&this->unk_1C) {
        player = get_player_by_client_id((int) (this->m_20));
        if (player != 0) {
            get_field_3e0__12TBoss3VoloptFv();
            if (is_item_area_enabled() == 1) {
                obj_getField1c((int) (player));
                if (TObjPlayer__sub_80117E50() != 0) {
                    spawn_particle_effect((void *) (player + 0x2FC), (int) (0x1BE));
                }
            }
        }
        *(s32 *)&this->unk_1C = 0;
    }
    *(s32 *)&this->unk_1C = (s32) (*(s32 *)&this->unk_1C + 1);
}

}
