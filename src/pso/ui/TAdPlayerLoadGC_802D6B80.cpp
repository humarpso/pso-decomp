#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TAdPlayerLoadGC__sub_800F9EF8(int);

extern M2C_UNK __vt__15TAdPlayerLoadGC[];
extern void *lbl_805D3F48;

void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdPlayerLoadGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    TAdPlayerLoadGC__sub_800F9EF8(0);
    return arg0;
}

}
