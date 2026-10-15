#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_80177608 { s32 v[18]; };

struct Parm_80177608 { s32 a; s32 b; s32 c; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void disallow_rendering__7TObjectFv(void *);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect_with_rotation(void *, Parm_80177608 *, s32, int);
void __ct__7TObjectFP7TObject(void *, void *);
extern Tbl_80177608 switch_attack_sub_id_table;
extern Tbl_80177608 switch_attack_sub_init_table;
extern s32 __vt__17TOSwitchAttackSub[];
extern s32 lbl_805D317C;
extern const f32 lbl_805DBA04;
u8 *TOSwitchAttackSub__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, u32 arg4, f32 farg0);
}

extern "C" {

u8 *TOSwitchAttackSub__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, u32 arg4, f32 farg0) {
    Parm_80177608 p;
    Tbl_80177608 a;
    Tbl_80177608 b;
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)(arg0 + 0x18) = __vt__17TOSwitchAttackSub;
    *(s32 *)(arg0 + 0) = lbl_805D317C;
    disallow_rendering__7TObjectFv(arg0);
    *(s16 *)(arg0 + 0x1C) = arg2;
    *(s16 *)(arg0 + 0x1E) = arg3;
    *(void **)(arg0 + 0x20) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x24, arg1 + 0x38);
    a = switch_attack_sub_id_table;
    b = switch_attack_sub_init_table;
    if (arg4 < 18) {
        p.b = 0;
        p.a = 0;
        p.c = b.v[arg4];
        *(void **)(arg0 + 0x20) = spawn_particle_effect_with_rotation(arg0 + 0x24, &p, a.v[arg4], 0x40);
        if (*(void **)(arg0 + 0x20) != 0) {
            if ((s32) arg4 == 10) {
                set_position_xy__10TObjPlayerFPvff(*(void **)(arg0 + 0x20), lbl_805DBA04 * farg0, lbl_805DBA04 * farg0);
            } else {
                set_position_xy__10TObjPlayerFPvff(*(void **)(arg0 + 0x20), farg0, farg0);
            }
        }
    }
    return arg0;
}

}
