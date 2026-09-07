#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8035C22C_lbl_804799DC {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject();
void TObjBoss8PillerCtrl__sub_8035C034(void *, void *);
extern RecoveredGlobal_8035C22C_lbl_804799DC lbl_804799DC;
extern M2C_UNK __vt__19TObjBoss8PillerCtrl[];
extern s32 lbl_805D4430;
extern const f32 lbl_805E017C;
u8 *TObjBoss8PillerCtrl__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s16 arg3);
}

extern "C" {

void *__dt__19TObjBoss8PillerCtrlFv(void *arg0, s16 arg1);
void render__19TObjBoss8PillerCtrlFv(void);
void __dl__7TObjectFPv(void *);
void __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);

void TObjBoss8PillerCtrl__sub_8035C034(void * _w0, void * _w1) {  }
void render__19TObjBoss8PillerCtrlFv(void) {  }

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
typedef char RecoveredGlobal_8035C22C_lbl_804799DC_size[sizeof(RecoveredGlobal_8035C22C_lbl_804799DC) == 0x14C ? 1 : -1];
typedef char RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl_size[sizeof(RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl) == 0x18 ? 1 : -1];
u8 *TObjBoss8PillerCtrl__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s16 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035C22C___vt__19TObjBoss8PillerCtrl *)&__vt__19TObjBoss8PillerCtrl).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4430;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg2));
    TObjBoss8PillerCtrl__sub_8035C034((void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x1C)));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805E017C;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_804799DC.value;
    return arg0;
}

}
