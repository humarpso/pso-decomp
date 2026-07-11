#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8028FF04(void);
void TAdSinglePlyChrSelectGC__sub_8028FF30(void* p);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028FD90();
int fn_80142F9C(void*);
int fn_8014394C(void*);

extern s32 lbl_805D6530;

void TAdSinglePlyChrSelectGC__sub_8028FF04(void) {
    if ((s32) lbl_805D6530 != 0) {
        TAdSinglePlyChrSelectGC__sub_8028FD90();
    }
}

void TAdSinglePlyChrSelectGC__sub_8028FF30(void* p) { fn_8014394C(p); fn_80142F9C(p); }

}
