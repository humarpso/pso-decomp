#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_load_state__9TItemLoadFPv(u8 *arg0);
M2C_UNK request_load__9TItemLoadFPvi(void *, void *);
u32 load_data__9TItemLoadFPvi(void *, int);
M2C_UNK TItemLoad__sub_801107DC(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern s32 lbl_805D5494;
extern s32 lbl_805D5498;

void advance_load_state__9TItemLoadFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x1C), (int) (4)) == 0) {
        if ((s32) lbl_805D5498 != 1) {
            lbl_805D5498 = 1;
            set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x1C), (int) (4));
            goto block_3;
        }
    } else {
block_3:
        if (load_data__9TItemLoadFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x20))) != 0U) {
            TItemLoad__sub_801107DC((void *) (arg0));
            request_load__9TItemLoadFPvi((void *) (arg0), (void *) (lbl_805D5494));
            M2C_FIELD(arg0, s32 *, 0x18) = 2;
        }
    }
}

}
