#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load_state__9TItemLoadFPv(u8 *arg0);
void update_ring__9TItemLoadFi(s32 arg0);
s32 TObjPlayer__sub_8001BEF8(void *, int);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
M2C_UNK free_texture__9TItemLoadFPv();
s32 get_ring_lobby__9TItemLoadFPv();
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);

void update_ring__9TItemLoadFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_ring_lobby__9TItemLoadFPv();
    if (temp_r3 != 2) {
        if (temp_r3 == 3) {
            clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 1);
        } else {
            set_flags__10TObjPlayerFPvUi(arg0 + 0x1C, 1);
        }
        update_load_state__9TItemLoadFPv((u8 *)(arg0));
    }
}

void update_load_state__9TItemLoadFPv(u8 *arg0) {
    free_texture__9TItemLoadFPv();
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1C, 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 4;
}

}
