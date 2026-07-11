#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);
void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);

int TObjEneMe1Canadin__sub_8009EDD4(void) { return 0; }

}
