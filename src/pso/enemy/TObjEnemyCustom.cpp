#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void update_camera_if_active__15TObjEnemyCustomFv(void);
M2C_UNK TCameraCtrl__sub_80069DA8();
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__15TObjEnemyCustom[];

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEnemyCustom;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D5198;

void update_camera_if_active__15TObjEnemyCustomFv(void) {
    if ((s32) lbl_805D5198 != 0) {
        TCameraCtrl__sub_80069DA8();
    }
}

}
