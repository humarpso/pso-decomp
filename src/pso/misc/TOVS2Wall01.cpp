#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_48 { u8 bytes[0x48]; };

struct M2CCopy_4C { u8 bytes[0x4c]; };

struct RecoveredGlobal_8017BC10_lbl_8044311C {
    M2C_UNK value;
    u8 remaining[0x48];
};

extern "C" {
M2C_UNK TObjChip__sub_80180BD4(void *, int, void *);
s32 TObjFish__sub_8001EDB0(int, void *);
s32 get_bml_model(int, void *);
u32 __nw__7TObjectFUl(int);
extern s32 TOVS2Wall01__data_805D5AE8;
extern RecoveredGlobal_8017BC10_lbl_8044311C lbl_8044311C;
extern s32 tl_05;
void TOVS2Wall01__sub_8017BC10(u8 *arg0, s32 arg1);
}

extern "C" {

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK init__11TOVS2Wall01Fi();

void TOVS2Wall01__vt4(void *arg0, s16 *arg1, s32 arg2) {
    s32 temp_r0;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) *arg1;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 1) {
        if ((temp_r0 >= 1) || (temp_r0 < 0)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0;
        if (arg2 != 0) {
            init__11TOVS2Wall01Fi();
        }
    }
}
typedef char RecoveredGlobal_8017BC10_lbl_8044311C_size[sizeof(RecoveredGlobal_8017BC10_lbl_8044311C) == 0x4C ? 1 : -1];
void TOVS2Wall01__sub_8017BC10(u8 *arg0, s32 arg1) {
    struct CopyStack_8017BC10 { u8 bytes[0x4C]; };
    CopyStack_8017BC10 copy_storage_8017BC10;
    u8 *temp_r5;
    u8 *chip;
    temp_r5 = (u8 *)((void *)((u8 *)(&lbl_8044311C.value) + -4));
    *(M2CCopy_4C *)(copy_storage_8017BC10.bytes) = *(const M2CCopy_4C *)((s32) temp_r5 + 4);
    (*(f32 *)(copy_storage_8017BC10.bytes + 0xC)) = M2C_FIELD(arg0, f32 *, 0x2FC);
    (*(f32 *)(copy_storage_8017BC10.bytes + 0x10)) = M2C_FIELD(arg0, f32 *, 0x300);
    (*(f32 *)(copy_storage_8017BC10.bytes + 0x14)) = M2C_FIELD(arg0, f32 *, 0x304);
    (*(f32 *)(copy_storage_8017BC10.bytes + 0x38)) = M2C_FIELD(arg0, f32 *, 0x3C);
    (*(s32 *)(copy_storage_8017BC10.bytes + 0x40)) = get_bml_model((int) (TOVS2Wall01__data_805D5AE8), (void *) (arg1));
    (*(s32 *)(copy_storage_8017BC10.bytes + 0x44)) = TObjFish__sub_8001EDB0((int) (TOVS2Wall01__data_805D5AE8), (void *) (arg1));
    chip = (u8 *) __nw__7TObjectFUl((int) (0x234));
    if (chip != NULL) {
        TObjChip__sub_80180BD4((void *) chip, (int) (tl_05), (void *) ((copy_storage_8017BC10.bytes)));
    }
}

}
