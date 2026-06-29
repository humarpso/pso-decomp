#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void fn_800D11FC(void* p);
void fn_800D11F8(void);
void fn_800D1264(void);

void fn_800D11F8(void) {  }
void fn_800D11FC(void* p) { if (*(short*)((char*)p + 0x326) != 16) { TObjEneDD__sub_800BBA18(p, (void*)16); } }
void fn_800D122C(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x11) && (temp_r0 != 0x12)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x11));
    }
}
void fn_800D1264(void) {  }

}
