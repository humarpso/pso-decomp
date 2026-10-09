#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuestBgmCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__13TQuestBgmCtrl[];
extern void *lbl_805D35C8;
extern u32 TQuestBgmCtrl__bgm_issued_flag;
extern u32 TQuestBgmCtrl__bgm_forced_flag;
extern u32 TQuestBgmCtrl__area_bgm_index;
extern void * TQuestBgmCtrl__instance;

void *TQuestBgmCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TQuestBgmCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D35C8;
    TQuestBgmCtrl__bgm_issued_flag = 0;
    TQuestBgmCtrl__bgm_forced_flag = 0;
    TQuestBgmCtrl__area_bgm_index = 0;
    TQuestBgmCtrl__instance = arg0;
    return arg0;
}

}
