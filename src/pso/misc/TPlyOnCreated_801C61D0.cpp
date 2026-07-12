#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TPlyOnCreated__sub_801C61D0(void *arg0, void *arg1);
void TPlyOnCreated__sub_801C6220(void *arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__ct__13TPlyOnCreatedFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

void * TPlyOnCreated__sub_801C61D0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__13TPlyOnCreatedFv(o, arg0, arg1);
    }
    return o;
}

void TPlyOnCreated__sub_801C6220(void *arg0) {
    M2C_UNK (*temp_r12)();
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C));
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0xCFC) == 0)) {
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x20);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

}
