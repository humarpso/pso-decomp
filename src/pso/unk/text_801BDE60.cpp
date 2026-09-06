#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * construct_player_instance__10TObjPlayerFPvisiPv(void *, M2C_UNK, s16, s32, void *);
M2C_UNK TItem__sub_80101CEC(void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_03;
u8 *TObjPlayer__sub_801BDEF8(s16 arg0, s32 arg1, u8 *arg2);
}

extern "C" {

u8 *TObjPlayer__sub_801BDEF8(s16 arg0, s32 arg1, u8 *arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    TItem__sub_80101CEC((void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xDB8));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_player_instance__10TObjPlayerFPvisiPv(temp_r3, tl_03, arg0, arg1, arg2));
    }
    return var_r0;
}

}
