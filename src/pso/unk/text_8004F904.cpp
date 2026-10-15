#include "types.h"

struct V_8004F904 { f32 x, y, z; };

struct O_8004F904 { u8 pad[0xF0]; V_8004F904 arr[2]; };

extern "C" {
void request_destroy__11TBoss4Type2FUi(u32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
u32 create_particle_emitter(void *, int);
void update_particle_emitters__11TBoss4Type2FPv(u8 *arg0);
}

extern "C" {

void update_particle_emitters__11TBoss4Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 *var_r29;
    s32 var_r28;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u8 *temp_r4;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xE4);
    if (temp_r0 > 0x104) {
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x90);
        if (temp_r3 != 0) {
            request_destroy__11TBoss4Type2FUi(temp_r3);
            *(u32 *)((s8 *)arg0 + 0x90) = 0U;
        }
    } else if ((temp_r0 >= 0xA0) && ((u32) *(u32 *)((s8 *)arg0 + 0x90) == 0)) {
        *(u32 *)((s8 *)arg0 + 0x90) = create_particle_emitter((void *) (arg0 + 0xD4), (int) (0x178));
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x90);
        if (temp_r3_2 != 0) {
            set_flags__11TBoss4Type2FPvUi((void *) temp_r3_2, 0x40U);
        }
    }
    if (((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0x104) && ((u32) *(u32 *)((s8 *)arg0 + 0x94) == 0)) {
        *(u32 *)((s8 *)arg0 + 0x94) = create_particle_emitter((void *) (arg0 + 0xD4), (int) (0x179));
        temp_r3_3 = *(u32 *)((s8 *)arg0 + 0x94);
        if (temp_r3_3 != 0) {
            set_flags__11TBoss4Type2FPvUi((void *) temp_r3_3, 0x40U);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0xB4) {
        temp_r3_4 = *(u32 *)((s8 *)arg0 + 0x98);
        if (temp_r3_4 == 0) {
            *(u32 *)((s8 *)arg0 + 0x98) = create_particle_emitter((void *) (arg0 + 0x10C), (int) (0x146));
            temp_r3_5 = *(u32 *)((s8 *)arg0 + 0x98);
            if (temp_r3_5 != 0) {
                set_flags__11TBoss4Type2FPvUi((void *) temp_r3_5, 0x40U);
            }
        } else {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_4, arg0 + 0x10C);
        }
    }
    var_r29 = (u32 *)((u8 *)(arg0 + 0x9C));
    for (var_r28 = 0; var_r28 < 2; var_r28++) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0x2D) {
            temp_r3_6 = *var_r29;
            if (temp_r3_6 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_6);
                *var_r29 = 0;
            }
        } else {
            temp_r3_7 = *var_r29;
            temp_r4 = (u8 *)&((O_8004F904 *)arg0)->arr[var_r28];
            if (temp_r3_7 == 0) {
                *var_r29 = create_particle_emitter((void *) (temp_r4), (int) (0x147));
                temp_r3_8 = *var_r29;
                if (temp_r3_8 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) temp_r3_8, 0x40U);
                }
            } else {
                copy_pos__11TNowLoadingFPvPv((void *) temp_r3_7, temp_r4);
            }
        }
        var_r29 = (u32 *)((u8 *)(arg0 + 0xA0));
    }
}

}
