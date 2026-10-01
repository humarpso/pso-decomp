#include "pso/player/TObjPlayer.h"
extern "C" void TObjPlayer__sub_8001622C(TObjPlayer*, const float*);

extern "C" {
s32 TObjPlayer__sub_80019248(void *);
s32 obj_testFlags30(void *, u32);
s32 get_player_count__10TObjPlayerFv(void);
void create_font__13TOCtrlDubchikFiiii(s32, s32, s32, s32);
extern s32 lbl_804340B0[];
}

extern "C" void TObjPlayer__sub_8001622C(TObjPlayer *self, const float *pos) {
    if (obj_testFlags30(self, 0x02000000) == 0 && TObjPlayer__sub_80019248(self) == 0 && pos != NULL) {
        if (get_player_count__10TObjPlayerFv() == 0 || *(u16 *)((s8 *)self + 0x1C) >= 0x1000) {
            create_font__13TOCtrlDubchikFiiii((s32)pos, 0xFFFF0000, 0x14, (s32)lbl_804340B0);
        }
    }
}

void TObjPlayer::show_miss_for_collider(int collider) {
    TObjPlayer__sub_8001622C(this, (const float*)(m_a4 + collider*0x2C + 0x1C));
}
