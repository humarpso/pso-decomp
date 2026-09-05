#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 get_part_count_plus__12TBoss8DragonFPvi(void *, s32);
s32 get_enemy_entity();
extern u8 *lbl_805D6978;
s32 TBoss8Dragon__sub_802F3348(s32 arg0);
u16 get_part_count_plus__12TBoss8DragonFPvi(void *, s32);
extern u8 *lbl_805D6978;
u16 TBoss8Dragon__sub_802F3388(s32 arg0);
}

extern "C" {

s32 TBoss8Dragon__sub_802F3348(s32 arg0) {
    if ((void *) lbl_805D6978 == NULL) {
        return 0;
    }
    get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, arg0);
    return get_enemy_entity();
}
u16 TBoss8Dragon__sub_802F3388(s32 arg0) {
    if ((void *) lbl_805D6978 == NULL) {
        return 0xFFFFU;
    }
    return get_part_count_plus__12TBoss8DragonFPvi(lbl_805D6978, arg0);
}

}
