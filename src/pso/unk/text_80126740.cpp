#include "types.h"

extern "C" {
s32 set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805DAD80;
void fist_reset_attack_rate(u8 *arg0);
s32 set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E025C;
void s_rank_knuckle_equip(u8 *arg0);
extern s32 __vt__14TObjEneEpsilon[];
extern s32 TObjPlayer__sub_800D7C58[];
extern s32 init_and_activate__10TObjPlayerFPv[];
extern void *TObjEneEpsilon__class_name;
extern s32 lbl_804F26E0[];
void s_rank_knuckle_equip(u8 *arg0);
extern s32 lbl_804F26E0[];
void fist_reset_attack_rate(u8 *arg0);
u8 * baranz_launcher_ct(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_baranz_launcher(u8 *arg0);
}

extern "C" {

u8 *create_baranz_launcher(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(baranz_launcher_ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void fist_reset_attack_rate(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (*(s32 *)((s8 *)arg0 + 0xF0) + 0x7CC), (f32) (lbl_805DAD80));
}

}
