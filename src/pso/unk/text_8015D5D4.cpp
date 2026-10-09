#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, void *, s32, s32);
void play_door_sound(u8 *arg0);
}

extern "C" {

extern "C" void TBoss3Volopt__sub_8015D7B0();
extern "C" void TBoss3Volopt__sub_8015D8E0();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TODoorAncient01__sub_8015DDE0();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjRoomId__sub_801A1E2C();
extern "C" void TParticleCtrl__sub_801A2124();
extern "C" void apply_object_set_data();
extern "C" void classify_actor_view_detail();
extern "C" void destroy_ancient_door_base__15TODoorAncient01FPvs();
extern "C" void fn_8015D714();
extern "C" void init_door_switch_binding();
extern "C" void play_proximity_sound__12TBoss3VoloptFPv();
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void render__5TOKeyFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void run_switch_door_task();
extern "C" void update_door_switch_state();
extern "C" void update_object_view_visibility();
void *lbl_804B0BB8[21] = {
    (void *)0x0, (void *)0x0, (void *)&destroy_ancient_door_base__15TODoorAncient01FPvs, (void *)&run_switch_door_task,
    (void *)&render__5TOKeyFv, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C, (void *)&TObjPlayer__sub_80019568, (void *)&update_door_switch_state, (void *)&play_proximity_sound__12TBoss3VoloptFPv,
    (void *)&TBoss3Volopt__sub_8015D8E0, (void *)&TBoss3Volopt__sub_8015D7B0, (void *)&fn_8015D714, (void *)&init_door_switch_binding,
    (void *)&TODoorAncient01__sub_8015DDE0,
};

void play_door_sound(u8 *arg0) {
    if (!(*(s32 *)(arg0 + 0xD0) & 1)) {
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 0:
        case 18:
            play_sound_effect(0x42A04, arg0 + 0x38, 0, 0);
            break;
        case 1:
        case 2:
            play_sound_effect(0x4BC07, arg0 + 0x38, 0, 0);
            break;
        case 3:
        case 4:
        case 5:
            play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            play_sound_effect(0x4004BC00, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            play_sound_effect(0x4004BC07, arg0 + 0x38, 0, 0);
            break;
        case 16:
        case 17:
            play_sound_effect(0x4004BC00, arg0 + 0x38, 0, 0);
            break;
        }
    }
}

}
