#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800C5374(void *arg0);
void TObjPlayer__sub_800C53B4(void);
int TObjPlayer__sub_800C53B8(void* p);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);

void TObjPlayer__sub_800C5374(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
    }
    obj_clearFlags30(arg0, 0x240000);
}
void TObjPlayer__sub_800C53B4(void) {  }
int TObjPlayer__sub_800C53B8(void* p) { return obj_clearFlags30(p, 256); }

}
