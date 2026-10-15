#ifndef PSO_ENEMY_TOBJENEBM5WOLF_H
#define PSO_ENEMY_TOBJENEBM5WOLF_H

#include "types.h"
#include <stddef.h>

struct TObjEneBm5Wolf
{
    void roaming_state(int event);
    void choose_roaming_destination();

    u8 _pad0[0x38];
    f32 position[3];
    u8 _pad44[0x1C];
    s32 facing;
    u8 _pad64[0x54];
    s16 requestedAction;
    u8 _padBA[0xE];
    f32 playbackSpeed;
    u8 _padCC[0x25A];
    s16 m_326;
    u8 _pad328[0x28];
    u32 m_350;
    u8 _pad354[0x3C];
    void* target;
    f32 destination[3];
    f32 destinationDirection[3];
    f32 destinationDistance;
    u8 _pad3B0[0x10];
    void* m_3c0;
    u8 _pad3C4[0x8];
    void* m_3cc;
    u8 _pad3D0[0x8];
    u32 m_3d8;
    u8 _pad3DC[0x4];
    u16 m_3e0;
    u8 _pad3E2[0x2];
    s32 turnOffset;
    void* m_3e8;
    u8 _pad3EC[0x8];
    f32 groupAnchor[3];
    f32 desiredSpeed;
    f32 currentSpeed;
    u32 m_408;
    u8 _pad40C[0x4];
    u32 m_410;
    u32 m_414;
    u16 m_418;
    u8 _pad41A[0x2];
    s32 roamingSubstate;
    s32 roamingTimer;
    s32 randomPhase;
    u32 m_428;
    u32 m_42c;
    u32 m_430;
    f32 stoppingDistance;
    u8 _pad438[0x30];
    s32 nearTarget;
    static void advance_spawn_timer();
    void despawn_state(s32 msg);
    void update_dying_state(s32 arg1);
    void hurt_state(s32 arg1);
    void action(s32 arg1);
    void repositioning_state(s32 arg1);
    void update_lunge(s32 arg1);
    void circling_state(s32 arg1);
    void chasing_state(s32 arg1);
    static void empty_state();
    void standing_state(s32 arg1);
    void alerted_state(s32 arg1);
    void sleeping_state(s32 arg1);
    void apply_mourning_jellen();
    void apply_mourning_zalure();
    void play_proximity_effect();
    void set_attack_flag();
    void set_anim_state();
    void turn_pose_to_target();
    void update_with_default_state();
    void apply_position_to_node_list();
    static void release_global_805D5120();
    static void *create(void *arg0);
    static void load_resources();
    void reset_fields();
    void*reset();
    void push_list_node(void **arg1, void **arg2);
    void unlink_list_node(void ***arg1, void **arg2);
    static void register_global_objects();
};

typedef char WolfOffset_position[offsetof(TObjEneBm5Wolf, position) == 0x38 ? 1 : -1];
typedef char WolfOffset_facing[offsetof(TObjEneBm5Wolf, facing) == 0x60 ? 1 : -1];
typedef char WolfOffset_requestedAction[offsetof(TObjEneBm5Wolf, requestedAction) == 0xB8 ? 1 : -1];
typedef char WolfOffset_playbackSpeed[offsetof(TObjEneBm5Wolf, playbackSpeed) == 0xC8 ? 1 : -1];
typedef char WolfOffset_m_326[offsetof(TObjEneBm5Wolf, m_326) == 0x326 ? 1 : -1];
typedef char WolfOffset_m_350[offsetof(TObjEneBm5Wolf, m_350) == 0x350 ? 1 : -1];
typedef char WolfOffset_target[offsetof(TObjEneBm5Wolf, target) == 0x390 ? 1 : -1];
typedef char WolfOffset_destination[offsetof(TObjEneBm5Wolf, destination) == 0x394 ? 1 : -1];
typedef char WolfOffset_destinationDirection[offsetof(TObjEneBm5Wolf, destinationDirection) == 0x3A0 ? 1 : -1];
typedef char WolfOffset_destinationDistance[offsetof(TObjEneBm5Wolf, destinationDistance) == 0x3AC ? 1 : -1];
typedef char WolfOffset_m_3c0[offsetof(TObjEneBm5Wolf, m_3c0) == 0x3C0 ? 1 : -1];
typedef char WolfOffset_m_3d8[offsetof(TObjEneBm5Wolf, m_3d8) == 0x3D8 ? 1 : -1];
typedef char WolfOffset_turnOffset[offsetof(TObjEneBm5Wolf, turnOffset) == 0x3E4 ? 1 : -1];
typedef char WolfOffset_groupAnchor[offsetof(TObjEneBm5Wolf, groupAnchor) == 0x3F4 ? 1 : -1];
typedef char WolfOffset_desiredSpeed[offsetof(TObjEneBm5Wolf, desiredSpeed) == 0x400 ? 1 : -1];
typedef char WolfOffset_currentSpeed[offsetof(TObjEneBm5Wolf, currentSpeed) == 0x404 ? 1 : -1];
typedef char WolfOffset_roamingSubstate[offsetof(TObjEneBm5Wolf, roamingSubstate) == 0x41C ? 1 : -1];
typedef char WolfOffset_roamingTimer[offsetof(TObjEneBm5Wolf, roamingTimer) == 0x420 ? 1 : -1];
typedef char WolfOffset_randomPhase[offsetof(TObjEneBm5Wolf, randomPhase) == 0x424 ? 1 : -1];
typedef char WolfOffset_stoppingDistance[offsetof(TObjEneBm5Wolf, stoppingDistance) == 0x434 ? 1 : -1];
typedef char WolfOffset_nearTarget[offsetof(TObjEneBm5Wolf, nearTarget) == 0x468 ? 1 : -1];

#endif
