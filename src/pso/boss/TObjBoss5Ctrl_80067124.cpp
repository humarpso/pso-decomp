#include "types.h"
#include "pso/TObjBoss5Ctrl.h"

extern "C" {

s32 play_sound_once__19TObjBoss5PillarCtrlFv(void*);

extern void *boss5_ctrl_instance;

void TObjBoss5Ctrl::play_pillar_sound() {
    void *sp4;
    sp4 = boss5_ctrl_instance;
    if (sp4 != NULL && (u32) *(u32 *)((s8 *)sp4 + 0x28) != 0U) {
        play_sound_once__19TObjBoss5PillarCtrlFv(*(void **)((s8 *)sp4 + 0x28));
    }
}

}
