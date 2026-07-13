#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjGyaranzoMissileFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjFish__sub_8001EDB0(void *, int);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TObjFish__sub_803DA798();
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D51FC;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA2C4;

void render__19TObjGyaranzoMissileFv(u8 *arg0) {
    TObjFish__sub_8001EDB0((void *) (lbl_805D51FC), (int) (6));
    TObjFish__sub_803DA798();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805DA2C4), (f32) (M2C_FIELD(arg0, f32 *, 0xD4) * TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0xCC)))), (f32) (lbl_805DA2C4));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_8001EDC4((void *) (lbl_805D51FC), (int) (6));
    TObjFish__sub_803E46BC();
    TObjPlayer__sub_803D9B78();
}

}
