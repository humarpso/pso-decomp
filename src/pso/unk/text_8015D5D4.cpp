#include "types.h"
#include "pso/TObject.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/map/FloorArea.h"

extern "C" {
s32 play_sound_effect(s32, void *, s32, s32);
extern "C" void vfunc_17__13TUnk_804B0BB8Fv();
extern "C" void vfunc_16__13TUnk_804B0BB8Fv();
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_20__13TUnk_804B0BB8Fv();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_12__13TUnk_804B9870Fv();
extern "C" void vfunc_9__13TUnk_804B9870Fv();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void destroy_ancient_door_base__13TUnk_804B0BB8Fs();
extern "C" void vfunc_18__13TUnk_804B0BB8Fv();
extern "C" void init_door_switch_binding__13TUnk_804B0BB8Fv();
extern "C" void play_proximity_sound__13TUnk_804B0BB8Fv();
extern "C" void reset_motion_fields__13TUnk_804AF8A0Fv();
extern "C" void render__13TUnk_804AFBF8Fv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void run_task__13TUnk_804B0BB8Fv();
extern "C" void update_door_switch_state__13TUnk_804B0BB8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
void *lbl_804B0BB8[21] = {
    (void *)0x0, (void *)0x0, (void *)&destroy_ancient_door_base__13TUnk_804B0BB8Fs, (void *)&run_task__13TUnk_804B0BB8Fv,
    (void *)&render__13TUnk_804AFBF8Fv, (void *)&render_shadows__7TObjectFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804AF8A0Fv, (void *)&vfunc_9__13TUnk_804B9870Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__13TUnk_804B9870Fv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&update_door_switch_state__13TUnk_804B0BB8Fv, (void *)&play_proximity_sound__13TUnk_804B0BB8Fv,
    (void *)&vfunc_16__13TUnk_804B0BB8Fv, (void *)&vfunc_17__13TUnk_804B0BB8Fv, (void *)&vfunc_18__13TUnk_804B0BB8Fv, (void *)&init_door_switch_binding__13TUnk_804B0BB8Fv,
    (void *)&vfunc_20__13TUnk_804B0BB8Fv,
};

void TUnk_804B0BB8::play_door_sound() {
    u8 *arg0 = (u8 *)this;
    if (!(*(s32 *)(arg0 + 0xD0) & 1)) {
        switch ((u32)get_current_floor_area()) {
        case AREA_PIONEER2_EP1:
        case AREA_PIONEER2_EP2:
            play_sound_effect(0x42A04, (u8 *)&this->position, 0, 0);
            break;
        case AREA_FOREST1:
        case AREA_FOREST2:
            play_sound_effect(0x4BC07, (u8 *)&this->position, 0, 0);
            break;
        case AREA_CAVE1:
        case AREA_CAVE2:
        case AREA_CAVE3:
            play_sound_effect(0x42807, (u8 *)&this->position, 0, 0);
            break;
        case AREA_MINE1:
        case AREA_MINE2:
            play_sound_effect(0x4004BC00, (u8 *)&this->position, 0, 0);
            break;
        case AREA_RUINS1:
        case AREA_RUINS2:
        case AREA_RUINS3:
            play_sound_effect(0x4004BC07, (u8 *)&this->position, 0, 0);
            break;
        case AREA_BATTLE1:
        case AREA_BATTLE2:
            play_sound_effect(0x4004BC00, (u8 *)&this->position, 0, 0);
            break;
        }
    }
}

}
