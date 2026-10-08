#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjPlayer__sub_801093B4(void *);
void forward_item_effect_callback__10TObjPlayerFii(M2C_UNK arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_801093B4(void *);
void spawn_weapon_impact_effect(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3);
}

extern "C" {

void spawn_heaven_effect__10TObjPlayerFiUiUsi(s32 arg0, u32 arg1, u16 arg2, s32 arg3);
M2C_UNK TItemEffHeaven__ct(u32, s32, u32, u16, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

void spawn_heaven_effect__10TObjPlayerFiUiUsi(s32 arg0, u32 arg1, u16 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && ((u16) arg2 != 0xFFFF) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x4C)) != 0U)) {
        TItemEffHeaven__ct(obj, arg0, arg1, arg2, arg3);
    }
}
void forward_item_effect_callback__10TObjPlayerFii(M2C_UNK arg0, s32 arg1) {
    TObjPlayer__sub_801093B4((void *) (arg1));
}
void spawn_weapon_impact_effect(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    TObjPlayer__sub_801093B4((void *) (arg3));
}

}
