#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80107DA4_lbl_8049EFB8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u16 obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjLight__sub_80134548(int, f32, f32);
extern const f32 TItemEffArmor__data_805DAAEC;
extern const f32 lbl_805DAAF0;
extern const f32 lbl_805DAAF4;
void run_task__13TItemEffArmorFv(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80107DA4_lbl_8049EFB8 lbl_8049EFB8;
u8 *fn_80107DA4(u8 *arg0, u8 *arg1, s16 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80107DA4_lbl_8049EFB8_size[sizeof(RecoveredGlobal_80107DA4_lbl_8049EFB8) == 0x18 ? 1 : -1];
u8 *fn_80107DA4(u8 *arg0, u8 *arg1, s16 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8049EFB8.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    return arg0;
}

void run_task__13TItemEffArmorFv(u8 *arg0) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 0x139D);
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x6C));
    if (temp_r4 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2C), (void *) (temp_r4 + 0x38));
    }
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) + ((M2C_FIELD(arg0, f32 *, 0x24) * M2C_FIELD(arg0, f32 *, 0x58)) / lbl_805DAAF0));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        copy_pos__11TNowLoadingFPvPv(temp_r3, arg0 + 0x2C);
    }
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (TItemEffArmor__data_805DAAEC - (M2C_FIELD(arg0, f32 *, 0x24) / lbl_805DAAF0));
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x6C));
    if (temp_r3_2 != NULL) {
        TObjLight__sub_80134548((int) (obj_getField1c(temp_r3_2)), (f32) (M2C_FIELD(arg0, f32 *, 0x60)), (f32) (M2C_FIELD(arg0, f32 *, 0x5C)));
    }
    if (M2C_FIELD(arg0, f32 *, 0x5C) >= TItemEffArmor__data_805DAAEC) {
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) (lbl_805DAAF4 * M2C_FIELD(arg0, f32 *, 0x64));
    }
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + M2C_FIELD(arg0, f32 *, 0x64));
    if (lbl_805DAAF0 == M2C_FIELD(arg0, f32 *, 0x24)) {
        queue_destruction__7TObjectFv(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + TItemEffArmor__data_805DAAEC);
}

}
