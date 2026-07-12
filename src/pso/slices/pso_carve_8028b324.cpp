#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int fn_8028B36C(void* p);
int fn_8028B38C(void* p);
int fn_8028B70C(void*);
int fn_8028B710(void*);

int fn_8028B324(void) { return 0; }
int fn_8028B36C(void* p) { return fn_8028B70C(p); }
int fn_8028B38C(void* p) { return fn_8028B710(p); }
void fn_8028B3AC(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A819, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
