#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TRaderMapCore__sub_801FB6A8(void);
M2C_UNK TRaderMapCore__ct(void *, s32);
s32 TRaderMapCore__sub_8030A808();
u32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_8030A730();

extern s32 tl_radermap;
extern s32 tl_clipout;

void TRaderMapCore__sub_801FB6A8(void) {
    void *obj;
    if ((TRaderMapCore__sub_8030A808() != 1) || (fn_8030A730() != 1)) {
        if (TRaderMapCore__sub_8030A808() == 1) {
            if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
                TRaderMapCore__ct(obj, tl_clipout);
            }
        } else if ((obj = (void *) __nw__7TObjectFUl(0x1A4)) != 0) {
            TRaderMapCore__ct(obj, tl_radermap);
        }
    }
}

}
