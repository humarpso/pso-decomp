#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802C1754(u8 *arg0);
s32 TMainTask__sub_8001A430();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_803DA798(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_802C2FBC(void *, s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D67B4;
extern const f32 lbl_805DE4FC;

void TObjPlayer__sub_802C1754(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (TMainTask__sub_8001A430() == 0)) {
        TObjPlayer__sub_802C2FBC(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    TObjFish__sub_803DA798(lbl_805D67B4);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    TObjPlayer__sub_803D9B78();
}

}
