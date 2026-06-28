#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int fn_800BBA18(void*, void*);
void fn_80362080(void* p);
void fn_80362038(void);
void fn_803620B0(void);

void fn_80362038(void) {  }
void fn_8036203C(void *arg0) {
    s32 temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        if (!(temp_r4 & 2) && !(temp_r4 & 0x40)) {
            fn_800BBA18((void*)(arg0), (void*)(8));
        }
    }
}
void fn_80362080(void* p) { if (*(short*)((char*)p + 0x326) != 9) { fn_800BBA18(p, (void*)9); } }
void fn_803620B0(void) {  }

}
