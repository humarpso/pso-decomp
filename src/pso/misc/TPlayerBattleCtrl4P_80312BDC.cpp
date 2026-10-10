#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32 arg0, s32 arg1);
M2C_UNK construct__19TPlayerBattleCtrl4PFP7TObject(void *, void *);
u32 __nw__7TObjectFUl(int);
M2C_UNK strncpy(void *, void *, int);

extern s32 tl_00;
extern u8 *TPlayerBattleCtrl4P__instance;

void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32 arg0, s32 arg1) {
    if ((void *) TPlayerBattleCtrl4P__instance == NULL) {
        u32 mem = __nw__7TObjectFUl((int) (0x2A0));
        if (mem != 0U) {
            construct__19TPlayerBattleCtrl4PFP7TObject((void *) mem, (void *) (tl_00));
        }
    }
    if ((void *) TPlayerBattleCtrl4P__instance != NULL) {
        strncpy((void *) (TPlayerBattleCtrl4P__instance + 0x38), (void *) (arg1), (int) (0x200));
        M2C_FIELD(TPlayerBattleCtrl4P__instance, s32 *, 0x1C) = arg0;
    }
}

}
