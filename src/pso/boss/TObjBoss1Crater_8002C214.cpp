#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TObjBoss1CraterFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803DA798(void *);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 some_id_805c6f74;

void render__15TObjBoss1CraterFv(u8 *arg0) {
    TObjPlayer__sub_803D9B2C();
    TObjFish__sub_803DA798((void *) (lbl_805D4B54));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    some_id_805c6f74 |= 0x01000000;
    TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), s32 *, 8)));
    some_id_805c6f74 &= 0xFEFFFFFF;
    TObjPlayer__sub_803D9B78();
}

}
