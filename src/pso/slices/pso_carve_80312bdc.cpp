#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TPlayerBattleCtrl4P__ct(void *, void *);
extern void *tl_00;

void *fn_80312BDC(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2A0);
    if (o != NULL) {
        TPlayerBattleCtrl4P__ct(o, tl_00);
    }
    return o;
}

}
