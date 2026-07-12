#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestBgmCtrl__sub_8017E8F8();
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80350440(void *, void *, u32);
extern void *tl_05;

void create_quest_bgm_object(s32 arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = arg1;
    if (var_r31 >= 7U) {
        var_r31 = 0U;
    }
    if (TQuestBgmCtrl__sub_8017E8F8() == 0) {
        void *obj = __nw__7TObjectFUl(0x1C);
        if (obj != 0) {
            fn_80350440(obj, tl_05, var_r31);
        }
    }
}

}
