#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800542B0(void * a0 = 0, s32 a1 = 0);
void TWindowSubSymbolChatPartsSet__sub_80052EA0(void* p, void* q);
void fn_80052EE8(void);
void fn_80052EEC(void* p);

void TWindowSubSymbolChatPartsSet__sub_80052EA0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void fn_80052EB4(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        fn_800542B0(arg0, 4);
    }
}
void fn_80052EE8(void) {  }
void fn_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
