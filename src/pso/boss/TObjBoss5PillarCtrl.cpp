#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjBoss5PillarCtrl__sub_8028B324(void);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void* p);
void play_sound_once__19TObjBoss5PillarCtrlFPv(void *arg0);
void render__19TObjBoss5PillarCtrlFv(void);
void run_task__19TObjBoss5PillarCtrlFv(void);
int update_pillar__19TObjBoss5PillarCtrlFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int TObjBoss5Pillar__sub_8028B70C(void*);
int TObjBoss5Pillar__sub_8028B710(void*);

void render__19TObjBoss5PillarCtrlFv(void) {  }
void run_task__19TObjBoss5PillarCtrlFv(void) {  }

int TObjBoss5PillarCtrl__sub_8028B324(void) { return 0; }

int update_pillar__19TObjBoss5PillarCtrlFPv(void* p) { return TObjBoss5Pillar__sub_8028B70C(p); }
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void* p) { return TObjBoss5Pillar__sub_8028B710(p); }
void play_sound_once__19TObjBoss5PillarCtrlFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A819, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
