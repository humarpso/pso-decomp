#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u32 lbl_805D6178;

void fn_80211648(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) lbl_805D6178 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void*)lbl_805D6178) != 0)) {
        queue_destruction__7TObjectFv(lbl_805D6178);
    }
}

}
