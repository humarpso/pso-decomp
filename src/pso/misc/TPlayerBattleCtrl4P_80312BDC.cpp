#include "types.h"

extern "C" {

void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32 arg0, s32 arg1);
s32 construct__19TPlayerBattleCtrl4PFP7TObject(void *, void *);
u32 __nw__7TObjectFUl(int);
s32 strncpy(void *, void *, int);

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
        *(s32 *)((s8 *)TPlayerBattleCtrl4P__instance + 0x1C) = arg0;
    }
}

}
