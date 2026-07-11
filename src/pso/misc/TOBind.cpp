#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__6TOBindFv(void *arg0);
M2C_UNK TOBind__sub_80158608(void *);
M2C_UNK TOBind__sub_8015860C(void *);
s32 TQuestThread__sub_801F5EAC(s32, s32);
s32 fn_80080750();
M2C_UNK TObjPlayer__sub_80154764(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D5EE8;

void run_task__6TOBindFv(void *arg0) {
    if (fn_80080750() == 1) {
        TOBind__sub_80158608(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) != 1) {
        if (TQuestThread__sub_801F5EAC(lbl_805D5EE8, M2C_FIELD(arg0, s32 *, 0xB4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = 1;
            TObjPlayer__sub_80154764(arg0, 0, 1);
        }
        TOBind__sub_8015860C(arg0);
    }
}

}
