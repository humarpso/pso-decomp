#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TItemObject__ct(void *);
extern M2C_UNK lbl_804F0FF0[];
void clear_item_flags__10TObjPlayerFPvUi(void *, int);

void *fn_80352B18(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0FF0;
    clear_item_flags__10TObjPlayerFPvUi(arg0, 16);
    return arg0;
}

}
