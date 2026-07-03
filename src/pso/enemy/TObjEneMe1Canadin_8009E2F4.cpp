#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B98D8(void *);
s32 TPhotonMylla__sub_80154CB4(u16);
void TObjEneMe1CanadinLeader__sub_8009E238(void* p);
void TObjEneMe1CanadinLeader__sub_8009E248(void* p);
void TObjEneMe1CanadinLeader__sub_8009E26C(void* p);
void fn_8009E27C(void* p);
void fn_8009E28C(void* p);
void TObjEneMe1Canadin__vt115(void);
int TObjEneMe1CanadinLeader__sub_8009E36C(void* p);
int TObjEneMe1Canadin__vt107(void);
int TObjEneMe1Canadin__vt114(void);

int TObjEneMe1Canadin__vt114(void) { return 1; }
void TObjEneMe1Canadin__vt115(void) {  }

}
