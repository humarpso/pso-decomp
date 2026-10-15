#include "types.h"

struct RecoveredGlobal_80149CE0_lbl_8043F810 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80149CE0_lbl_804A8640 {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TObjNpcBase__ct(void *);
s32 init_npc_animation__10TObjPlayerFPvPvPvPv(void *, void *, void *, int);
s32 set_motion_interpolation_flag(void *);
extern RecoveredGlobal_80149CE0_lbl_8043F810 npc_female_base_action_table;
extern s32 lbl_804A8640[];
extern s32 *npc_town_motion_data;
u8 *construct_female_base__17TObjNpcFemaleBaseFPv(u8 *arg0);
}

extern "C" {

void TObjNpcFemaleBase__sub_80149C7C(void);
void *destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

    extern int lbl_805D5758;
    extern int lbl_805D5D78;
void TObjNpcFemaleBase__sub_80149C7C(void) { lbl_805D5758 = lbl_805D5D78; }

extern s32 lbl_804A8640[];

void *destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A8640;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80149CE0_lbl_8043F810_size[sizeof(RecoveredGlobal_80149CE0_lbl_8043F810) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80149CE0_lbl_804A8640_size[sizeof(RecoveredGlobal_80149CE0_lbl_804A8640) == 0x178 ? 1 : -1];
u8 *construct_female_base__17TObjNpcFemaleBaseFPv(u8 *arg0) {
    TObjNpcBase__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80149CE0_lbl_804A8640 *)&lbl_804A8640).value;
    init_npc_animation__10TObjPlayerFPvPvPvPv((void *) (arg0), (void *) (&npc_female_base_action_table.value), (void *) (*npc_town_motion_data), (int) (0));
    set_motion_interpolation_flag((void *) (arg0));
    return arg0;
}

}
