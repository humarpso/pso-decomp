#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DB994;
extern const f32 lbl_805DB998;
void TOSensorAncient01__vt14(u8 *arg0);
extern const f32 lbl_805DB988;
extern const f32 lbl_805DB98C;
extern const f32 lbl_805DB990;
void TOSensorAncient01__sub_8017585C(u8 *arg0);
u32 get_global_state__14TOKeyMachine01Fv();
void TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TOSensor__sub_8017546C(u8 *arg0);
u32 get_global_state__14TOKeyMachine01Fv();
void TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TOSensor__sub_80175514(u8 *arg0);
}

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
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);

void TOSensor__sub_80175468(void) {  }

extern M2C_UNK __vt__8TOSensor[];

void TOSensor__sub_8017546C(u8 *arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        TOTrapAncient01__sub_80226578(0x43C1C, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        TOTrapAncient01__sub_80226578(0x4004BC13, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        TOTrapAncient01__sub_80226578(0x46419, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

void TOSensor__sub_80175514(u8 *arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        TOTrapAncient01__sub_80226578(0x4411D, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        TOTrapAncient01__sub_80226578(0x4004C114, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        TOTrapAncient01__sub_80226578(0x4641A, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

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

#pragma push
#pragma opt_common_subs off
void TOSensorAncient01__sub_8017585C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xF4) & 1) {
        M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xF0) + lbl_805DB988);
        if (lbl_805DB98C < M2C_FIELD(arg0, f32 *, 0xF0)) {
            M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB98C;
            M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFFFFFFE);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xF0) - lbl_805DB988);
        if (M2C_FIELD(arg0, f32 *, 0xF0) < lbl_805DB990) {
            M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB990;
            M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) | 1);
        }
    }
}
#pragma pop

void TOSensorAncient01__vt15(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r4 + 0x28F);
    TOSensorAncient01__sub_8017585C((u8 *)((s32) arg0));
}
void TOSensorAncient01__vt14(u8 *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xEC) + lbl_805DB994);
    TOSensorAncient01__sub_8017585C((u8 *)((s32)(arg0)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (temp_r3 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DB998);
}

}
