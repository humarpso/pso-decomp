#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_802752A0(s32 arg0);
s16 TWindowSubComCard__sub_80265BF8();
void* TWindowSubComCard__sub_80275234(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* TWindowSubComCard__sub_80275244(void* p);
void* TWindowSubComCard__sub_8027524C(void* p);
s16 TWindowSubComCard__sub_80275280(void* p);
void TWindowSubComCard__sub_80275288(void* p, s16 v);
void TWindowSubComCard__sub_80275290(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
int fn_80247ED8(void*);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TWindowSubComCard__sub_802752A0(s32 arg0) {
    TWindowSubComCard__sub_80275288((void *) (arg0), (int) (TWindowSubComCard__sub_80265BF8()));
}

}

}
