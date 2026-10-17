#include "pso/TOSwitchAttackSub.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/TParticleCtrl.h"

extern "C" {
f32 horizontal_distance_squared(const f32*, const f32*);
void *get_player_by_client_id(s32 i);
u8 is_current_floor_switch_set(int);
extern u8* camera_ctrl_instance;
extern void* local_client_id;
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
    if (particle != 0 && (player = (u8 *)get_player_by_client_id((s32)local_client_id)) != 0 && camera_ctrl_instance != 0) {
        playerDistance = horizontal_distance_squared((const f32*)(player + 0x38), (const f32*)(camera_ctrl_instance + 0x178));
        if (lbl_805DBA00 * horizontal_distance_squared(position, (const f32*)(camera_ctrl_instance + 0x178)) < playerDistance) {
            ((TParticleCtrl *)particle)->enable();
            return;
        }
        ((TParticleCtrl *)particle)->clear_active_flag();
    }
}

TOSwitchAttackSub::~TOSwitchAttackSub() {
    if (particle != nullptr) queue_destruction__7TObjectFv(particle);
}
