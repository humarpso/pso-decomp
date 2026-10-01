#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80107DA4_lbl_8049EFB8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80107DF0_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80107DF0_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
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
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK set_chunk_material_color(void *);
extern RecoveredGlobal_80107DF0_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_80107DF0_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TItemEffArmor__data_805DAAEC;
void render__13TItemEffArmorFv(u8 *arg0);
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

typedef char RecoveredGlobal_80107DF0_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80107DF0_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80107DF0_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80107DF0_lbl_8058D4C0) == 0x10 ? 1 : -1];
void render__13TItemEffArmorFv(u8 *arg0) {
    f32 temp_f1;
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) ((u8 *)(arg0) + 0x2C));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x68)));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x28);
    TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TItemEffArmor__data_805DAAEC), (f32) (temp_f1));
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    copy_vec4__13TRaderMapCoreFPvPv(&lbl_8050BEC0.value, &lbl_8058D4C0.value);
    set_chunk_material_color((void *) ((u8 *)(arg0) + 0x38));
    notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x78));
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x70)), (int) (M2C_FIELD(arg0, s32 *, 0x74)), (f32) (M2C_FIELD(arg0, f32 *, 0x24)));
    copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0.value, &lbl_8050BEC0.value);
    some_id_805c6f74 = lbl_805D5660;
    TObjPlayer__sub_803D9B78();
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
