#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt12(void *arg0);
void TPlayerBattleCtrl4P__vt13(void *arg0);
void TPlayerBattleCtrl4P__vt14(void *arg0);
void TPlayerBattleCtrl4P__vt15(void* p);
M2C_UNK TDuelEffectCtrl__ct(void *, void *, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_80310BA8(void *);
int TPlayerBattleCtrl4P__sub_803112A4(void*, void*);
M2C_UNK TPlayerBattleCtrl4P__sub_803112AC(void *, M2C_UNK);
M2C_UNK TWindow__close(void *);
void *__nw__7TObjectFUl(M2C_UNK);
int TPlayerBattleCtrl4P__sub_80311618(void*);

void TPlayerBattleCtrl4P__vt15(void* p) { TPlayerBattleCtrl4P__sub_80311618(p); TPlayerBattleCtrl4P__sub_803112A4((void*)(p), (void*)((void*)1)); }

void TPlayerBattleCtrl4P__vt14(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20);
    if ((u32) temp_r3 != 0U) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    TPlayerBattleCtrl4P__sub_803112AC(arg0, 2);
}

void TPlayerBattleCtrl4P__vt13(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        TPlayerBattleCtrl4P__sub_803112A4((void*)(arg0), (void*)(8));
    }
}

void TPlayerBattleCtrl4P__vt12(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24C) - 1);
    if ((TPlayerBattleCtrl4P__sub_80310BA8(arg0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x24C) >= 0)) {
        if (M2C_FIELD(arg0, void **, 0x20) != (void *) 0) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        {
            void *temp = __nw__7TObjectFUl(0x28);
            if (temp != 0) {
                TDuelEffectCtrl__ct(temp, arg0, 0);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x240) = 0x96;
        TPlayerBattleCtrl4P__sub_803112A4((void*)(arg0), (void*)(7));
        }
    }
}

}
