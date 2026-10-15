#include "types.h"

struct RecoveredGlobal_801250F8_lbl_804A2260 {
    s32 value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_state_80125154__10TObjPlayerFPv(u8 *arg0);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_801250F8_lbl_804A2260 lbl_804A2260;
extern const f32 lbl_805DAD40;
u8 *TObjPlayer__sub_801250F8(u8 *arg0, u8 *arg1, s32 _w2);
}

extern "C" {

typedef char RecoveredGlobal_801250F8_lbl_804A2260_size[sizeof(RecoveredGlobal_801250F8_lbl_804A2260) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_801250F8(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A2260.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x100022);
    *(f32 *)((s8 *)arg0 + 0x1E4) = (f32) lbl_805DAD40;
    *(s32 *)((s8 *)arg0 + 0x1F8) = 0;
    return arg0;
}

u8 *create_state_80125154__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_801250F8((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
