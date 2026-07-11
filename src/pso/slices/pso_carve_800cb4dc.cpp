#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800B98D8();
s32 TPhotonMylla__sub_80154CB4(u16);
void set_flag3c8_bit40__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit8__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit4__13TObjEneMe1GeeFPv(void* p);
void set_flag3c8_bit2__13TObjEneMe1GeeFPv(void* p);
void TObjEneMe1Gee__vt115(void);
int TObjEneMe1Gee__sub_800CB628(void* p);
int TObjEneMe1Gee__vt107(void);
int TObjEneMe1Gee__vt114(void);

int TObjEneMe1Gee__sub_800CB4DC(void) { return 0; }

}
