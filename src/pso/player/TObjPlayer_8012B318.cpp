#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
u8 TItemProShield__sub_8010B734();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
s32 TObjPlayer__sub_80121200();

void update_area_effect_objects__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    u8 temp_r3;

    temp_r3 = TItemProShield__sub_8010B734();
    switch ((s32) temp_r3) {
    case 6:
        if (TObjPlayer__sub_80121200() == 4) {
            TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x1F8)));
        }
        break;
    case 5:
        temp_r3_2 = TObjPlayer__sub_80121200();
        switch (temp_r3_2) {
        case 1:
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x208));
            return;
        case 2:
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x214));
            return;
        case 3:
            TBoss7Tentacle__sub_803D9BA0((void *) (arg0 + 0x1FC));
            break;
        }
        break;
    }
}

}
