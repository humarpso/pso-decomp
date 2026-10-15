#include "types.h"

struct RecoveredGlobal_8009A398_lbl_8048FE64 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 __ct__7TObjectFP7TObject();
s32 subtract_vector(void *, void *);
extern RecoveredGlobal_8009A398_lbl_8048FE64 bringer_projectile_actor_ops_table;
extern s32 bringer_tp_absorb_effect_name;
extern const f32 lbl_805D9860;
u8 *fn_8009A398(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
}

extern "C" {

typedef char RecoveredGlobal_8009A398_lbl_8048FE64_size[sizeof(RecoveredGlobal_8009A398_lbl_8048FE64) == 0x18 ? 1 : -1];
u8 *fn_8009A398(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = &bringer_projectile_actor_ops_table.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) bringer_tp_absorb_effect_name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x34), (void *) (arg3));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x40), (void *) (arg0 + 0x34));
    subtract_vector((void *) (arg0 + 0x40), (void *) (arg0 + 0x28));
    *(f32 *)((s8 *)arg0 + 0x4C) = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x40));
    *(f32 *)((s8 *)arg0 + 0x50) = (f32) lbl_805D9860;
    return arg0;
}

}
