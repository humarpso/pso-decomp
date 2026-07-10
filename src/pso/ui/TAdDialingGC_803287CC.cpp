#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__12TAdDialingGCFPv(void *arg0);
M2C_UNK TAdDialingGC__sub_80328874();
M2C_UNK handle_state__12TAdDialingGCFPv();
M2C_UNK fn_803285C0();

void update__12TAdDialingGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            fn_803285C0();
        }
        break;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            TAdDialingGC__sub_80328874();
            return;
        }
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 2) {
            handle_state__12TAdDialingGCFPv();
        }
        break;
    }
}

}
