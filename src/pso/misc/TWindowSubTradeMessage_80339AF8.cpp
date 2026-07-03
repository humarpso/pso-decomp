#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void fn_802D29DC(void *);

extern M2C_UNK __vt__22TWindowSubTradeMessage[];
extern void *lbl_805D4278;

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubTradeMessage;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4278;
    M2C_FIELD(arg0, void **, 0x24) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    fn_802D29DC(arg0);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
