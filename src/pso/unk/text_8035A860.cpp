#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8035A860_lbl_804F1C58 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 count_tree_nodes__15TObjBoss2TunnelFPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8035A860_lbl_804F1C58 lbl_804F1C58;
extern const f32 lbl_805E00E8;
u8 *fn_8035A860(u8 *arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DE9F0;
extern const f32 lbl_805E00F0;
void calc_laser_ray_hit_point(u8 *arg0, u8 *arg1);
}

extern "C" {

typedef char RecoveredGlobal_8035A860_lbl_804F1C58_size[sizeof(RecoveredGlobal_8035A860_lbl_804F1C58) == 0x18 ? 1 : -1];
u8 *fn_8035A860(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804F1C58.value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805E00E8;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = count_tree_nodes__15TObjBoss2TunnelFPv((void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x28) = alloc_buffer__11TOBoss4RockFPv((int) (M2C_FIELD(arg0, s32 *, 0x2C) * 0x30));
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}
#pragma push
#pragma fp_contract on
void calc_laser_ray_hit_point(u8 *arg0, u8 *arg1) {
    f32 temp_f2;
    f32 temp_f2_2;
    if (arg1 != NULL) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x24);
        temp_f2_2 = (lbl_805E00F0 - temp_f2) / (lbl_805DE9F0 - temp_f2);
        M2C_FIELD(arg1, f32 *, 0) = (f32) ((M2C_FIELD(arg0, f32 *, 0x38) * temp_f2_2) + M2C_FIELD(arg0, f32 *, 0x20));
        M2C_FIELD(arg1, f32 *, 4) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3C) * temp_f2_2) + M2C_FIELD(arg0, f32 *, 0x24));
        M2C_FIELD(arg1, f32 *, 8) = (f32) ((M2C_FIELD(arg0, f32 *, 0x40) * temp_f2_2) + M2C_FIELD(arg0, f32 *, 0x28));
    }
}
#pragma pop

}
