#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProShield__vt42(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
M2C_UNK TItemEffShield__sub_8010A404(int, int, void *);
s32 TItemMag__sub_80102C4C();
s32 TItemProArmor__sub_80102C3C(void *);
u8 TItemProShield__sub_8010B734(void *);
M2C_UNK TObjPlayer__sub_8010A1D0(int, int, void *, int);
M2C_UNK construct_timer_event__10TObjPlayerFPv(int, int, void *, int);
s32 __nw__7TObjectFUl(int);
s32 alloc__13TItemProArmorFi(int);
M2C_UNK init_item_timer_event__10TObjPlayerFPv(int, int, void *, int);

void TItemProShield__vt42(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u8 temp_r3;

    if (TItemMag__sub_80102C4C() == 0) {
        TBoss3Volopt__sub_8022675C((int) (0x4000B20A), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x38), (int) (0), (int) (0));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = TItemProShield__sub_8010B734((void *) (arg0));
        switch ((s32) temp_r3) {
        case 39:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_2 = alloc__13TItemProArmorFi((int) (0x2C));
                if (temp_r3_2 != 0) {
                    init_item_timer_event__10TObjPlayerFPv((int) (temp_r3_2), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (TItemProArmor__sub_80102C3C((void *) (arg0))), (int) (0x1C2));
                }
                temp_r3_3 = alloc__13TItemProArmorFi((int) (0x2C));
                if (temp_r3_3 != 0) {
                    construct_timer_event__10TObjPlayerFPv((int) (temp_r3_3), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (TItemProArmor__sub_80102C3C((void *) (arg0))), (int) (0x1C2));
                }
            }
            break;
        case 26:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
                temp_r3_4 = __nw__7TObjectFUl((int) (0x2C));
                if (temp_r3_4 != 0) {
                    TItemEffShield__sub_8010A404((int) (temp_r3_4), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (TItemProArmor__sub_80102C3C((void *) (arg0))));
                }
            }
            break;
        }
        if ((temp_r3 >= 0x53U) && (temp_r3 <= 0x82U)) {
            temp_r3_5 = __nw__7TObjectFUl((int) (0x30));
            if (temp_r3_5 != 0) {
                TObjPlayer__sub_8010A1D0((int) (temp_r3_5), (int) (M2C_FIELD(arg0, u32 *, 0x174)), (void *) (TItemProArmor__sub_80102C3C((void *) (arg0))), (int) (temp_r3));
            }
        }
    }
}

}
