#include "types.h"

struct RecoveredGlobal_8035A860_lbl_804F1C58 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 count_tree_nodes__15TObjBoss2TunnelFv(void *);
s32 mem_alloc(int);
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
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804F1C58.value;
    *(s32 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805E00E8;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x2C) = count_tree_nodes__15TObjBoss2TunnelFv((void *) (arg2));
    *(s32 *)((s8 *)arg0 + 0x28) = mem_alloc((int) (*(s32 *)((s8 *)arg0 + 0x2C) * 0x30));
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    return arg0;
}
#pragma push
#pragma fp_contract on
void calc_laser_ray_hit_point(u8 *arg0, u8 *arg1) {
    f32 temp_f2;
    f32 temp_f2_2;
    if (arg1 != NULL) {
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x24);
        temp_f2_2 = (lbl_805E00F0 - temp_f2) / (lbl_805DE9F0 - temp_f2);
        *(f32 *)((s8 *)arg1 + 0) = (f32) ((*(f32 *)((s8 *)arg0 + 0x38) * temp_f2_2) + *(f32 *)((s8 *)arg0 + 0x20));
        *(f32 *)((s8 *)arg1 + 4) = (f32) ((*(f32 *)((s8 *)arg0 + 0x3C) * temp_f2_2) + *(f32 *)((s8 *)arg0 + 0x24));
        *(f32 *)((s8 *)arg1 + 8) = (f32) ((*(f32 *)((s8 *)arg0 + 0x40) * temp_f2_2) + *(f32 *)((s8 *)arg0 + 0x28));
    }
}
#pragma pop

}
