#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012D558(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
u16 TObjPlayer__sub_80100474(void *);
M2C_UNK TObjPlayer__sub_8010047C(void *, u16);
u32 test_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s16 get_kill_count__10TObjPlayerFPv(s32);
M2C_UNK init_timer_event_with_value__10TObjPlayerFPvsif(s32, u32, s32, M2C_UNK, f32);
s32 alloc__13TItemProArmorFi(M2C_UNK);

void update_weapon_kill_count__10TObjPlayerFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1F8) < get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0))) {
        TObjPlayer__sub_8010047C(arg0, (u16) (TObjPlayer__sub_80100474(arg0) + 1));
        M2C_FIELD(arg0, s16 *, 0x1F8) = get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    }
    if ((TObjPlayer__sub_80100474(arg0) >= 0x59D8U) && (test_item_flags__10TObjPlayerFPvUi(arg0, 0x200) == 0U)) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x200);
    }
}

extern f32 lbl_805DAF20;

void TObjPlayer__sub_8012D558(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            init_timer_event_with_value__10TObjPlayerFPvsif(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DAF20);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x1F8) = get_kill_count__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
}

}
