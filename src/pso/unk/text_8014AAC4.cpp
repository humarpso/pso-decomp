#include "types.h"

struct RecoveredGlobal_8014AAC4_lbl_8043F9C8 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8014AAC4_lbl_804A92A8 {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TObjNpcBase__ct(void *);
s32 init_npc_animation__10TObjPlayerFPvPvPv(void *, void *, void *, int);
s32 set_motion_interpolation_flag(void *);
extern RecoveredGlobal_8014AAC4_lbl_8043F9C8 town_npc_animation_init_data;
extern RecoveredGlobal_8014AAC4_lbl_804A92A8 npc_female_tall_dispatch_table;
extern s32 *npc_town_motion_data;
u8 *fn_8014AAC4(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8014AAC4_lbl_8043F9C8_size[sizeof(RecoveredGlobal_8014AAC4_lbl_8043F9C8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8014AAC4_lbl_804A92A8_size[sizeof(RecoveredGlobal_8014AAC4_lbl_804A92A8) == 0x178 ? 1 : -1];
u8 *fn_8014AAC4(u8 *arg0) {
    TObjNpcBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &npc_female_tall_dispatch_table.value;
    init_npc_animation__10TObjPlayerFPvPvPv((void *) (arg0), (void *) (&town_npc_animation_init_data.value), (void *) (*npc_town_motion_data), (int) (0));
    set_motion_interpolation_flag((void *) (arg0));
    return arg0;
}

}
