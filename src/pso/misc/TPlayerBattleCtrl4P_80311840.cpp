#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TPlayerBattleCtrl4P__vt27(void *arg0);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_00;
extern M2C_UNK reset_random_enemies_mode__19TPlayerBattleCtrl4PFv[];

void TPlayerBattleCtrl4P__vt27(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode__19TPlayerBattleCtrl4PFv);
    }
    queue_destruction__7TObjectFv(arg0);
}

}
