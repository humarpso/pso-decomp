#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmor__sub_80117578(s32 arg0, u32 arg1);
void TItemProArmor__sub_801175CC(void* a0);
M2C_UNK TItemProArmor__sub_8011751C(void *, s32, u32);
void *__nw__7TObjectFUl(M2C_UNK);

void TItemProArmor__sub_80117578(s32 arg0, u32 arg1) {
    void *temp_r3;
    if ((arg0 != 0) && (arg1 != 0U)) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != NULL) {
            TItemProArmor__sub_8011751C(temp_r3, arg0, arg1);
        }
    }
}

    extern int tl_05;
void TItemProArmor__sub_801175CC(void* a0) { TItemProArmor__sub_80117578((s32)((void*)(tl_05)), (u32)((void*)(*(int*)((char*)a0 + 0xf0)))); }

}
