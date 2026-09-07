#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8004885C_lbl_80484888 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern s32 lbl_805D4D14;
extern const f32 lbl_805D8850;
extern const f32 lbl_805D8854;
void TBoss3Volopt__sub_80048920(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80484888[];
extern u8 *tl_07;
extern const f32 lbl_805D8848;
u8 *TBoss3Volopt__sub_8004885C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4, f32 farg0, f32 farg1);
}

extern "C" {

void TBoss3Volopt__sub_800485C8(void);
void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1);
void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void *dt__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TBoss3Volopt__sub_800485C8(void) {  }

extern M2C_UNK lbl_80484870[];

void *dt__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484870;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;
extern M2C_UNK lbl_80484870[];

void *ct__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484870;
    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    return arg0;
}

extern M2C_UNK lbl_80484888[];

void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484888;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8004885C_lbl_80484888_size[sizeof(RecoveredGlobal_8004885C_lbl_80484888) == 0x18 ? 1 : -1];
u8 *TBoss3Volopt__sub_8004885C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4, f32 farg0, f32 farg1) {
    __ct__7TObjectFP7TObject(arg0, tl_07);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8004885C_lbl_80484888 *)&lbl_80484888).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg1);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    if (arg4 != NULL) {
        copy_xyz__10TObjPlayerFPvPv(arg0 + 0x38, arg4);
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D8848;
    M2C_FIELD(arg0, f32 *, 0x44) = farg1;
    return arg0;
}

void TBoss3Volopt__sub_80048920(u8 *arg0) {
  M2C_UNK (*temp_r12)();
  const f32 *new_var;
  if (!arg0)
  {
  }
  *((f32 *) (((s8 *) arg0) + 0x1C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x1C))) - lbl_805D8850);
  if ((*((f32 *) (((s8 *) arg0) + 0x1C))) <= (*(new_var = &lbl_805D8854)))
  {
    *((f32 *) (((s8 *) arg0) + 0x1C)) = (f32) (*new_var);
    temp_r12 = *((M2C_UNK (**)()) (((s8 *) arg0) + 0x24));
    if (temp_r12 != 0)
    {
      temp_r12();
    }
    else
    {
      queue_destruction__7TObjectFv(arg0);
    }
    lbl_805D4D14 = 1;
  }
}

}
