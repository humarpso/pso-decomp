#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012D8E4(void *arg0);
void setup_item_render__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
u8 TItemProShield__sub_8010B734();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 TObjPlayer__sub_80121200();

extern const f32 lbl_805DAF34;

void TObjPlayer__sub_8012D8E4(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAF34;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAF34;
    }
}

void setup_item_render__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3_2;
    s32 temp_r3_3;
    u8 temp_r3;

    temp_r3 = TItemProShield__sub_8010B734();
    switch ((s32) temp_r3) {
    case 5:
        temp_r3_2 = TObjPlayer__sub_80121200();
        switch (temp_r3_2) {
        case 1:
            TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            return;
        case 2:
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x1FC);
            return;
        }
        break;
    case 7:
        temp_r3_3 = TObjPlayer__sub_80121200();
        switch (temp_r3_3) {
        case 4:
            TOHangerMachine01__sub_803D9C00(arg0 + 0x1FC);
            return;
        case 2:
            TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
            break;
        }
        break;
    }
}

}
