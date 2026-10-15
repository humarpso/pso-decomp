#include "types.h"

extern "C" {
s32 set_flags__10TObjPlayerFPvUi(void *, int);
s32 set_equip_flag__14TItemEquipBaseFPvUc(void *, int);
u8 get_slot_count__14TItemProShieldFPv();
void fn_80117FEC(u8 *arg0);
}

extern "C" {

void fn_80117FEC(u8 *arg0) {
    u8 temp_r0;
    u8 temp_r3;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch (temp_r3) {
    case 34:
    case 35:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 1);
        break;
    case 22:
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (0x80));
        break;
    case 49:
        set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (int) (0x3A));
        set_flags__10TObjPlayerFPvUi((void *) ((u8 *)(arg0) + 0x178), (int) (2));
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    case 48:
        set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (int) (0x28));
        break;
    case 42:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    case 50:
        set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (int) (0x3A));
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    }
    if ((temp_r3 == 0x27) || ((temp_r3 >= 0x33U) && (temp_r3 <= 0x39U)) || ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) || (temp_r3 == 0x52)) {
        set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (int) (0x22));
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
    }
    temp_r0 = *(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x18C)) + 0x1A);
    switch ((s32) temp_r0) {
    case 1:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 4);
        return;
    case 3:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 8);
    case 2:
    case 0:
        return;
    }
}

}
