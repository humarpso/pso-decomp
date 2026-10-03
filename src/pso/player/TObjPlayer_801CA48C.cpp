#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_death_pose__10TObjPlayerFPv(u8 *arg0);
s32 TBoss1Dragon__sub_80143960(void *, M2C_UNK);
u32 resolve_move_collision__10TObjPlayerFPv(void *);
M2C_UNK calc_death_sink_offset(void *);
M2C_UNK restart_death_pose__10TObjPlayerFPv(void *);
M2C_UNK add_death_sink_progress(void *, f32);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);

extern const f32 lbl_805DC37C;

void update_death_pose__10TObjPlayerFPv(u8 *arg0) {
    if ((TBoss1Dragon__sub_80143960(arg0, 0x20) != 0) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        restart_death_pose__10TObjPlayerFPv(arg0);
    }
    add_death_sink_progress(arg0 + 0x5FC, lbl_805DC37C);
    calc_death_sink_offset(arg0 + 0x5FC);
    if (resolve_move_collision__10TObjPlayerFPv(arg0) == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
