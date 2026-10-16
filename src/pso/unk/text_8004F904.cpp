#include "types.h"
#include "pso/object/TObjDFDemo5.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"

struct V_8004F904 { f32 x, y, z; };

struct O_8004F904 { u8 pad[0xF0]; V_8004F904 arr[2]; };

extern "C" {
u32 create_particle_emitter(void *, int);
}

extern "C" {

void TObjDFDemo5::update_particle_emitters() {
    u8 *arg0 = (u8 *)this;
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
            TBoss4Type2::request_destroy(temp_r3);
            *(u32 *)((s8 *)arg0 + 0x90) = 0U;
        }
    } else if ((temp_r0 >= 0xA0) && ((u32) *(u32 *)((s8 *)arg0 + 0x90) == 0)) {
        *(u32 *)((s8 *)arg0 + 0x90) = create_particle_emitter((void *) (arg0 + 0xD4), (int) (0x178));
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x90);
        if (temp_r3_2 != 0) {
            ((TBoss4Type2 *)temp_r3_2)->set_flags(0x40U);
        }
    }
    if (((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0x104) && ((u32) *(u32 *)((s8 *)arg0 + 0x94) == 0)) {
        *(u32 *)((s8 *)arg0 + 0x94) = create_particle_emitter((void *) (arg0 + 0xD4), (int) (0x179));
        temp_r3_3 = *(u32 *)((s8 *)arg0 + 0x94);
        if (temp_r3_3 != 0) {
            ((TBoss4Type2 *)temp_r3_3)->set_flags(0x40U);
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0xB4) {
        temp_r3_4 = *(u32 *)((s8 *)arg0 + 0x98);
        if (temp_r3_4 == 0) {
            *(u32 *)((s8 *)arg0 + 0x98) = create_particle_emitter((void *) (arg0 + 0x10C), (int) (0x146));
            temp_r3_5 = *(u32 *)((s8 *)arg0 + 0x98);
            if (temp_r3_5 != 0) {
                ((TBoss4Type2 *)temp_r3_5)->set_flags(0x40U);
            }
        } else {
            ((TNowLoading *)temp_r3_4)->copy_pos(arg0 + 0x10C);
        }
    }
    var_r29 = (u32 *)((u8 *)(arg0 + 0x9C));
    for (var_r28 = 0; var_r28 < 2; var_r28++) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xE4) >= 0x2D) {
            temp_r3_6 = *var_r29;
            if (temp_r3_6 != 0) {
                TBoss4Type2::request_destroy(temp_r3_6);
                *var_r29 = 0;
            }
        } else {
            temp_r3_7 = *var_r29;
            temp_r4 = (u8 *)&((O_8004F904 *)arg0)->arr[var_r28];
            if (temp_r3_7 == 0) {
                *var_r29 = create_particle_emitter((void *) (temp_r4), (int) (0x147));
                temp_r3_8 = *var_r29;
                if (temp_r3_8 != 0) {
                    ((TBoss4Type2 *)temp_r3_8)->set_flags(0x40U);
                }
            } else {
                ((TNowLoading *)temp_r3_7)->copy_pos(temp_r4);
            }
        }
        var_r29 = (u32 *)((u8 *)(arg0 + 0xA0));
    }
}

}
