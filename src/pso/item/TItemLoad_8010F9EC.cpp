#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ring_state__9TItemLoadFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);
M2C_UNK clear_id__10TObjPlayerFPv(void *);

extern s32 lbl_805D5498;

void reset_ring_state__9TItemLoadFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1C, 4) != 0) {
        lbl_805D5498 = 0;
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    clear_id__10TObjPlayerFPv(arg0 + 0x1C);
}

}
