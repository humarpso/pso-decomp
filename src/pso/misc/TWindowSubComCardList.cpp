#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TWindowSubComCardListFv(void *arg0);
M2C_UNK run_task__11TWindowMenuFv();
s32 is_visible__17TWindowSubComCardFPv(void *);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, M2C_UNK);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubComCardList__sub_80275360(void *);

void run_task__21TWindowSubComCardListFv(void *arg0) {
    run_task__11TWindowMenuFv();
    if ((is_visible__17TWindowSubComCardFPv(arg0) == 0) && (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0)) {
        set_selected_index__17TWindowSubComCardFPvs(arg0, 0);
        TWindowSubComCardList__sub_80275360(arg0);
    }
}

}
