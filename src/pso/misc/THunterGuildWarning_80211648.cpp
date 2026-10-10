#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_destruction__19THunterGuildWarningFv(void);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK queue_destruction__7TObjectFv(u32);

extern u32 THunterGuildWarning__instance;

void queue_destruction__19THunterGuildWarningFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((u32) THunterGuildWarning__instance != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void*)THunterGuildWarning__instance) != 0)) {
        queue_destruction__7TObjectFv(THunterGuildWarning__instance);
    }
}

}
