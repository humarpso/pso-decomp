#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneDarkGunCenter__sub_800A0E7C(void);
void TObjEneDarkGunCenter__sub_800A0E80(void);
void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

void TObjEneDarkGunCenter__sub_800A0E7C(void) {  }
void TObjEneDarkGunCenter__sub_800A0E80(void) {  }

extern M2C_UNK __vt__20TObjEneDarkGunCenter[];

void *__dt__20TObjEneDarkGunCenterFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjEneDarkGunCenter;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
