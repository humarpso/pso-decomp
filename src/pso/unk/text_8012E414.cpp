#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8012E414_lbl_804A5D10 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern RecoveredGlobal_8012E414_lbl_804A5D10 lbl_804A5D10;
extern const f32 lbl_805DAF74;
extern const f32 lbl_805DAF78;
u8 *TObjPlayer__sub_8012E414(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, u8 *arg5);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_8012E414_lbl_804A5D10_size[sizeof(RecoveredGlobal_8012E414_lbl_804A5D10) == 0x18 ? 1 : -1];
u8 *TObjPlayer__sub_8012E414(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4, u8 *arg5) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A5D10.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = get_field_d8__10TObjPlayerFPv(arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg3);
    copy_xyz__10TObjPlayerFPvPv(arg0 + 0x38, arg5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg4);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * ((lbl_805DAF74 * (lbl_805DAF78 * (f32) rand())) + lbl_805DAF74));
    return arg0;
}
#pragma pop

}
