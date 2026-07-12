#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TWindowSubComCardListFv(void *arg0);
M2C_UNK run_task__11TWindowMenuFv();
s32 TWindowSubComCard__sub_8007341C(void *);
M2C_UNK TWindowSubComCard__sub_80265C10(void *, M2C_UNK);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK fn_80275360(void *);

void run_task__21TWindowSubComCardListFv(void *arg0) {
    run_task__11TWindowMenuFv();
    if ((TWindowSubComCard__sub_8007341C(arg0) == 0) && (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0)) {
        TWindowSubComCard__sub_80265C10(arg0, 0);
        fn_80275360(arg0);
    }
}

}
