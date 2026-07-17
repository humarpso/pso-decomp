#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 fn_8003F3F8(void *arg0);
u8 TBoss3Volopt__sub_8003F458(void *arg0);
int is_photon_blast_active__11TCameraCtrlFPv(void* p);

int fn_8003F468(void) { return 0; }

}
