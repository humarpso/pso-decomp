#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK create_quest_bgm_object(s32, int);
extern s32 tl_05;

void fn_80350504(void) {
    create_quest_bgm_object(tl_05, (u8)get_slot_count__14TItemProShieldFPv());
}

}
