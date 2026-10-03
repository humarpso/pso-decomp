#include "pso/TOSwitchAttackSub.h"

extern "C" {
void queue_destruction__7TObjectFv(void*);
void clear_active_flag__13TParticleCtrlFPv(void*);
void enable__13TParticleCtrlFPv(void*);
f32 horizontal_distance_squared(const f32*, const f32*);
u8* get_player_by_client_id(void*);
u8 is_current_floor_switch_set(int);
extern u8* lbl_805D4DF0;
extern void* lbl_805D53A0;
extern const f32 lbl_805DBA00;
}

void TOSwitchAttackSub::run_task() {
    f32 playerDistance;
    u8* player;
    if (is_current_floor_switch_set(stopSwitchId) == 1) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (is_current_floor_switch_set(requiredSwitchId) == 0) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (particle != 0 && (player = get_player_by_client_id(lbl_805D53A0)) != 0 && lbl_805D4DF0 != 0) {
        playerDistance = horizontal_distance_squared((const f32*)(player + 0x38), (const f32*)(lbl_805D4DF0 + 0x178));
        if (lbl_805DBA00 * horizontal_distance_squared(position, (const f32*)(lbl_805D4DF0 + 0x178)) < playerDistance) {
            enable__13TParticleCtrlFPv(particle);
            return;
        }
        clear_active_flag__13TParticleCtrlFPv(particle);
    }
}

TOSwitchAttackSub::~TOSwitchAttackSub() {
    if (particle != nullptr) queue_destruction__7TObjectFv(particle);
}
