#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__18TChallenge4PResultFii(int arg0, s32 arg1);
M2C_UNK TChallenge4PResult__ct(void *, s32, int, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
u32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_01;

void create__18TChallenge4PResultFii(int arg0, s32 arg1) {
    void *temp;

    if (TPlayerBattleCtrl4P__sub_801BA74C(arg0) != 0U) {
        temp = (void *) __nw__7TObjectFUl(0x7C);
        if (temp != NULL) {
            TChallenge4PResult__ct(temp, tl_01, arg0, arg1);
        }
    }
}

}
