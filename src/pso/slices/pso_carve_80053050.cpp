#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80053CEC(void * a0 = 0, s32 a1 = 0);
s32 fn_80053504(void);
int fn_8005354C(void*);
void fn_80053050(void* p);
void fn_8005307C(void* p);

void fn_80053050(void* p) { if (*(int*)((char*)p + 0x398) == 0) { fn_8005354C(p); } }
void fn_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }
void fn_80053088(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        fn_80053CEC(arg0, 4);
        return;
    }
    fn_80053504();
}

}
