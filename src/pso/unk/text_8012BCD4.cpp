#include "types.h"
#include "pso/unk/text_8012BCD4.h"
#include "pso/unk/TUnk_804A4F60.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8012BCD4_lbl_804A4F60 { s32 value; u8 remaining[0xF4]; };
typedef char RecoveredGlobal_8012BCD4_lbl_804A4F60_size[sizeof(RecoveredGlobal_8012BCD4_lbl_804A4F60) == 0xF8 ? 1 : -1];

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 * TItemWeapon__ct(void *, void *);
extern RecoveredGlobal_8012BCD4_lbl_804A4F60 psycho_wand_weapon_vtable;
extern const f32 lbl_805DAEC8;

u8 *psycho_wand_ct(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &psycho_wand_weapon_vtable.value;
    ((TObjPlayer *)(arg0 + 0x208))->construct_target_cursor_records();
    ((TObjPlayer *)arg0)->set_status_flags(0x22);
    *(s32 *)((s8 *)arg0 + 0x278) = 0;
    ((TUnk_804A4F60 *)arg0)->m_274 = (f32) lbl_805DAEC8;
    *(s16 *)((s8 *)arg0 + 0x1F8) = -1;
    ((TUnk_804A4F60 *)arg0)->m_204 = (f32) lbl_805DAEC8;
    *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DAEC8;
    ((TUnk_804A4F60 *)arg0)->m_1fc = (f32) lbl_805DAEC8;
    ((TUnk_804A4F60 *)arg0)->m_264 = 0;
    *(s32 *)((s8 *)arg0 + 0x208) = 0;
    return arg0;
}

u8 *create_psycho_wand(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x27c));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(psycho_wand_ct((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
