#include "types.h"
#include "pso/unk/text_800D98D8.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss4Type3.h"

struct RecoveredGlobal_800D98D8_lbl_80500F8C {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800D98D8_lbl_80500FA4 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
extern RecoveredGlobal_800D98D8_lbl_80500F8C TObjEneMe3ShinowaMirage_motion_trail_points;
extern RecoveredGlobal_800D98D8_lbl_80500FA4 lbl_80500FA4;
typedef char RecoveredGlobal_800D98D8_lbl_80500F8C_size[sizeof(RecoveredGlobal_800D98D8_lbl_80500F8C) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800D98D8_lbl_80500FA4_size[sizeof(RecoveredGlobal_800D98D8_lbl_80500FA4) == 0xC ? 1 : -1];
void TObjEneMe3ShinowaMirage__sub_800D98D8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5) {
    *(s32 *)((s8 *)(&lbl_80500FA4.value) + 0) = arg3;
    *(s32 *)((s8 *)(&lbl_80500FA4.value) + 4) = arg3;
    VecCopy((Vec *)&TObjEneMe3ShinowaMirage_motion_trail_points.value, (const Vec *)arg4);
    VecCopy((Vec *)((u8 *)&TObjEneMe3ShinowaMirage_motion_trail_points.value + 0xC), (const Vec *)arg5);
    ((TBoss4Type3 *)arg0)->draw_motion_trail(arg1, arg2, (s32) &lbl_80500FA4.value, (s32) &TObjEneMe3ShinowaMirage_motion_trail_points.value);
}

}
