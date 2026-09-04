#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOSensorAncient01__vt15(void *arg0);
void TOSensorAncient01__vt23(void);
void *TOSensor__ct(void *arg0);
void TOSensor__sub_80175468(void);
void TOSensor__vt14(void);
void TOSensor__vt15(void);
void *__dt__8TOSensorFv(void *arg0, s16 arg1);
void render__8TOSensorFv(void);
void TOKey__ct(void *);
void TORockCave__sub_80175460(void);
void TORockCave__sub_80175464(void);
M2C_UNK TOSensorAncient01__sub_8017585C(s32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);

void TOSensor__sub_80175468(void) {  }

extern M2C_UNK __vt__8TOSensor[];

void *__dt__8TOSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOSensor;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__8TOSensor[];
extern void *lbl_805D3140;

void *TOSensor__ct(void *arg0) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOSensor;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 80), (void *)((char *)arg0 + 56));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3140;
    return arg0;
}

void TOSensor__vt14(void) {  }
void TOSensor__vt15(void) {  }
void render__8TOSensorFv(void) {  }

void TOSensorAncient01__vt23(void) {  }

void TOSensorAncient01__vt15(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r4 + 0x28F);
    TOSensorAncient01__sub_8017585C((s32) arg0);
}

}
