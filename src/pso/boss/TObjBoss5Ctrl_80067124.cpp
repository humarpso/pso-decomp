#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss5Ctrl__sub_80067124(void);
M2C_UNK play_sound_once__19TObjBoss5PillarCtrlFPv(void*);

extern void *lbl_805D4DE0;

void TObjBoss5Ctrl__sub_80067124(void) {
    void *sp4;
    sp4 = lbl_805D4DE0;
    if (sp4 != NULL && (u32) M2C_FIELD(sp4, u32 *, 0x28) != 0U) {
        play_sound_once__19TObjBoss5PillarCtrlFPv(M2C_FIELD(sp4, void **, 0x28));
    }
}

}
