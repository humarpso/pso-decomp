#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdScrollWinGC__sub_803274D0(void *arg0);
void TAdScrollWinGC__sub_80327504(void* p);
int TWindowSubComCard__sub_80244A14(void*);

void TAdScrollWinGC__sub_803274D0(void *arg0) {
    TAdScrollWinGC__sub_80327504();
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
}

void TAdScrollWinGC__sub_80327504(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindowSubComCard__sub_80244A14(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
