#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80269100(void *arg0, s32 arg1);
M2C_UNK fn_80287580(s32, s32, M2C_UNK, f32);
s32 fn_80269064(void* p);
int fn_8026906C(void* p);

s32 fn_80269064(void* p) { return *(s32*)((char*)p + 0x18); }
int fn_8026906C(void* p) { return *(u16*)((char*)p + 0x0) & 0x80; }
int fn_80269078(void) { return 0; }
int TWindowMeseta__sub_802690B4(void) { return 0; }
void fn_80269100(void *arg0, s32 arg1) {
    fn_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
int fn_80269130(void) { return 0; }

}
