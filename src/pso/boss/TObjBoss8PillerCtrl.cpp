#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjBoss8PillerCtrl__sub_8035C034(void);
void render__19TObjBoss8PillerCtrlFv(void);

void TObjBoss8PillerCtrl__sub_8035C034(void) {  }
void render__19TObjBoss8PillerCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8035C1B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TObjBoss8PillerCtrlFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__19TObjBoss8PillerCtrl[];

void *__dt__19TObjBoss8PillerCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjBoss8PillerCtrl;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { __dl__FPv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
