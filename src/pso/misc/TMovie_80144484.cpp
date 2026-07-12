#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_until_finished__6TMovieFv(void);

s32 TLobby__sub_800F8FB8();
M2C_UNK render_tick__Fv();
s32 fn_8037AAD4();

void render_until_finished__6TMovieFv(void) {
loop_1:
    if ((fn_8037AAD4() == 0) && (TLobby__sub_800F8FB8() == 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
