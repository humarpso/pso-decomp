#include "types.h"

extern "C" {

u32 baranz_launcher_create_shot(void *arg0, s32 arg1, s32 arg2, f32 farg0);
void baranz_launcher_node_callback(void* p);
s32 spawn_slot_emitter__18TItemShootParticleFPvii(u32, s32, s32);
u32 spawn_shoot_particle__10TObjPlayerFUlllf(void *, s32, s32, f32);
u32 create_shoot_model__10TObjPlayerFUiiif();
int get_player_list__10TObjPlayerFv(void*);
int rotate_matrix_y(void*, void*);
s32 set_parent__7TObjectFP7TObject(u32, u32);

u32 baranz_launcher_create_shot(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;
    void *temp_r4;

    temp_r31 = create_shoot_model__10TObjPlayerFUiiif();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUlllf(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        temp_r4 = *(void **)((s8 *)arg0 + 0x188);
        if (temp_r4 != NULL) {
            *(s32 *)((s8 *)temp_r4 + 0) = (s32) (*(s32 *)((s8 *)temp_r4 + 0) & 0xFFFFFFFD);
            *(s32 *)((s8 *)temp_r4 + 0x14) = 0x4000;
        }
        spawn_slot_emitter__18TItemShootParticleFPvii(temp_r30, 0x1BB, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

void baranz_launcher_node_callback(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { rotate_matrix_y((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
