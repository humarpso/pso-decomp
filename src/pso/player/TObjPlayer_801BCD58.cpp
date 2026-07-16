#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801BCD58(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80019248();
int TObjPlayer__sub_801BCD28(void* p);
void TObjPlayer__sub_801BCD50(void);
void TObjPlayer__sub_801BCD54(void);
int TObjPlayer__sub_801BEF60(void*, int);
M2C_UNK TObjPlayer__sub_803518E0(void *, void *, int);
s32 obj_getField1c(void *);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TObjPlayer__sub_801BCD58(u8 *arg0, s32 arg1) {
    if (TObjPlayer__sub_80019248() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (arg1 & 3);
        TObjPlayer__sub_803518E0((void *) (arg0 + 0x550), (void *) (obj_getField1c((void *) (arg0))), (int) ((s16) M2C_FIELD(arg0, s32 *, 0x3D0)));
        return;
    }
    TObjPlayer__sub_801BEF60((void *) (arg0 + 0x550), (int) (0));
}

}

}
