#include "types.h"
#include "pso/unk/text_8012B524.h"
#include "pso/item/TUnk_804A4D70.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemProShield.h"

struct RecoveredGlobal_8012B524_lbl_804A4D70 { s32 value; u8 remaining[0xF4]; };
typedef char RecoveredGlobal_8012B524_lbl_804A4D70_size[sizeof(RecoveredGlobal_8012B524_lbl_804A4D70) == 0xF8 ? 1 : -1];

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 * TItemWeapon__ct(void *, void *);
extern RecoveredGlobal_8012B524_lbl_804A4D70 partisan_weapon_vtable;
extern const f32 lbl_805DAE88;
extern const f32 lbl_805DAEA4;

u8 *TItemWeaponPartisan__ct(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &partisan_weapon_vtable.value;
    *(s32 *)((s8 *)arg0 + 0x1F8) = 0;
    ((TUnk_804A4D70 *)arg0)->m_1fc = (f32) lbl_805DAEA4;
    *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DAEA4;
    ((TUnk_804A4D70 *)arg0)->m_204 = (f32) lbl_805DAEA4;
    *(f32 *)((s8 *)arg0 + 0x208) = (f32) lbl_805DAE88;
    ((TUnk_804A4D70 *)arg0)->m_20c = (f32) lbl_805DAE88;
    *(f32 *)((s8 *)arg0 + 0x210) = (f32) lbl_805DAE88;
    ((TUnk_804A4D70 *)arg0)->m_214 = (f32) lbl_805DAE88;
    *(f32 *)((s8 *)arg0 + 0x218) = (f32) lbl_805DAE88;
    ((TUnk_804A4D70 *)arg0)->m_21c = (f32) lbl_805DAE88;
    ((TObjPlayer *)arg0)->set_status_flags(2);
    if (((TItemProShield *)arg0)->get_slot_count() == 6) {
        ((TObjPlayer *)arg0)->set_status_flags(0x20);
    }
    return arg0;
}

u8 *create_partisan_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x220));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemWeaponPartisan__ct((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
