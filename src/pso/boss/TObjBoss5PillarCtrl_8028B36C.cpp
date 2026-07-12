#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
int TObjBoss5PillarCtrl__sub_8028B36C(void* p);
int TObjBoss5PillarCtrl__sub_8028B38C(void* p);
int TObjBoss5Pillar__sub_8028B70C(void*);
int TObjBoss5Pillar__sub_8028B710(void*);

int TObjBoss5PillarCtrl__sub_8028B36C(void* p) { return TObjBoss5Pillar__sub_8028B70C(p); }
int TObjBoss5PillarCtrl__sub_8028B38C(void* p) { return TObjBoss5Pillar__sub_8028B710(p); }
void TObjBoss5PillarCtrl__sub_8028B3AC(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A819, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
