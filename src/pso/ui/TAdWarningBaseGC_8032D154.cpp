#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdWarningBaseGC__sub_8032D154(void);
void* TAdWarningBaseGC__sub_8032D110(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_00;

void TAdWarningBaseGC__sub_8032D154(void) {
    void* obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TAdWarningBaseGC__sub_8032D110(obj, tl_00);
    }
}

}
