#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_803AA35C(s32);
f32 fn_8023F7C4(void* p);
s32 fn_8023F7CC(void* p);
void fn_8023F7D4(void* p, s32 v);

f32 fn_8023F7C4(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 fn_8023F7CC(void* p) { return *(s32*)((char*)p + 0x280); }
void fn_8023F7D4(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
void fn_8023F7DC(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        fn_803AA35C(0);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 1:
        fn_803AA35C(1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 2:
        fn_803AA35C(2);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    }
}

}
