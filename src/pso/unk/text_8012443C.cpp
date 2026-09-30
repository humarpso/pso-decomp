#include "types.h"
typedef struct Obj_8012443C { u8 pad[0x200]; s32 f200; } Obj_8012443C;

extern "C" {
void play_particle_effect_once__10TObjPlayerFv();
u32 get_player_list__10TObjPlayerFv();
void TObjPlayer__sub_803D9214(s32, s32);
void TObjPlayer__sub_8012443C(Obj_8012443C *arg0);
}

extern "C" {

void TObjPlayer__sub_8012443C(Obj_8012443C *arg0) {
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        TObjPlayer__sub_803D9214(0, arg0->f200);
        return;
    case 2:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    case 3:
        TObjPlayer__sub_803D9214(0, -arg0->f200);
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    case 6:
        play_particle_effect_once__10TObjPlayerFv();
        break;
    case 0:
    case 5:
        break;
    }
}

}
