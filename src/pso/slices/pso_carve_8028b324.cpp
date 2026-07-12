#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int update_pillar__19TObjBoss5PillarCtrlFPv(void* p);
int forward_pillar_2B710__19TObjBoss5PillarCtrlFPv(void* p);
int TObjBoss5Pillar__sub_8028B70C(void*);
int TObjBoss5Pillar__sub_8028B710(void*);

int TObjBoss5PillarCtrl__sub_8028B324(void) { return 0; }

}
