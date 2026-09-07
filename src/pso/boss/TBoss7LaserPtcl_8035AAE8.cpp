#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl_size[sizeof(RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl) == 0x18 ? 1 : -1];

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss8Dragon__sub_8008741C(s32, s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
void update_position__15TBoss7LaserPtclFPv(void *);
extern M2C_UNK __vt__15TBoss7LaserPtcl[];
extern s32 lbl_805D4410;
extern const f32 lbl_805E010C;
u8 *TBoss7LaserPtcl__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

void TBoss7LaserPtcl__sub_8035AD64(void);
void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1);
void TBoss7LaserPtcl__sub_8035AF0C(void);
void TBoss7LaserPtcl__sub_8035AF10(void);
void TBoss7LaserPtcl__sub_8035AF14(void);
void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1);
void render__15TBoss7LaserPtclFv(void);
void TBoss7LaserPtcl__sub_8035AA98(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__15TBoss7LaserPtclFv(void) {  }

extern M2C_UNK __vt__15TBoss7LaserPtcl[];

void *__dt__15TBoss7LaserPtclFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss7LaserPtcl;
        TBoss7LaserPtcl__sub_8035AA98(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBoss7LaserPtcl__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035ACBC___vt__15TBoss7LaserPtcl *)&__vt__15TBoss7LaserPtcl).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4410;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805E010C;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg3);
    update_position__15TBoss7LaserPtclFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = TBoss8Dragon__sub_8008741C((s32) arg2, 0x204, 0x40);
    M2C_FIELD(arg0, s32 *, 0x48) = TBoss8Dragon__sub_8008741C((s32) arg2, 0x205, 0x40);
    return arg0;
}

void TBoss7LaserPtcl__sub_8035AD64(void) {  }

extern M2C_UNK lbl_804F1C88[];

void *TBoss7LaserPtcl__sub_8035ADFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1C88;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TBoss7LaserPtcl__sub_8035AF0C(void) {  }
void TBoss7LaserPtcl__sub_8035AF10(void) {  }
void TBoss7LaserPtcl__sub_8035AF14(void) {  }

}
