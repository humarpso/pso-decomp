#include "types.h"
#include "pso/item/TItemProShield.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 get_slot_count__14TItemProShieldFv();
}

extern "C" {

void TItemProShield::sub_80117FEC() {
    u8 *arg0 = (u8 *)this;
    u8 temp_r0;
    u8 temp_r3;
    temp_r3 = get_slot_count__14TItemProShieldFv();
    switch (temp_r3) {
    case 34:
    case 35:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 1);
        break;
    case 22:
        ((TObjPlayer *)((u8 *)(arg0) + 0x178))->set_flags((int) (0x80));
        break;
    case 49:
        ((TItemEquipBase *)arg0)->set_equip_flag((int) (0x3A));
        ((TObjPlayer *)((u8 *)(arg0) + 0x178))->set_flags((int) (2));
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    case 48:
        ((TItemEquipBase *)arg0)->set_equip_flag((int) (0x28));
        break;
    case 42:
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    case 50:
        ((TItemEquipBase *)arg0)->set_equip_flag((int) (0x3A));
        *(s32 *)((s8 *)arg0 + 0x19C) = (s32) (*(s32 *)((s8 *)arg0 + 0x19C) | 2);
        break;
    }
    if ((temp_r3 == 0x27) || ((temp_r3 >= 0x33U) && (temp_r3 <= 0x39U)) || ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) || (temp_r3 == 0x52)) {
        ((TItemEquipBase *)arg0)->set_equip_flag((int) (0x22));
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
