#include "types.h"

extern "C" {

void play_pillar_sound__13TObjBoss5CtrlFv(void);
s32 play_sound_once__19TObjBoss5PillarCtrlFPv(void*);

extern void *boss5_ctrl_instance;

void play_pillar_sound__13TObjBoss5CtrlFv(void) {
    void *sp4;
    sp4 = boss5_ctrl_instance;
    if (sp4 != NULL && (u32) *(u32 *)((s8 *)sp4 + 0x28) != 0U) {
        play_sound_once__19TObjBoss5PillarCtrlFPv(*(void **)((s8 *)sp4 + 0x28));
    }
}

}
