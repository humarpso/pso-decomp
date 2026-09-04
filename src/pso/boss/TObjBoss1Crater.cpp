#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TObjBoss1CraterFv(void *arg0, s16 arg1);
s32 is_count_below_limit__15TObjBoss1CraterFv(void);
void render__15TObjBoss1CraterFv(u8 *arg0);
void TBoss8Dragon__sub_800BC5A0(void *, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);

extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 some_id_805c6f74;

void render__15TObjBoss1CraterFv(u8 *arg0) {
    TObjPlayer__sub_803D9B2C();
    set_global_param__8TObjFishFi((void *) (lbl_805D4B54));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    some_id_805c6f74 |= 0x01000000;
    TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(lbl_805D4B50, void **, 0x42C), s32 *, 8)));
    some_id_805c6f74 &= 0xFEFFFFFF;
    TObjPlayer__sub_803D9B78();
}

extern M2C_UNK __vt__15TObjBoss1Crater[];

void *__dt__15TObjBoss1CraterFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss1Crater;
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xB4), 1); M2C_FIELD(arg0, M2C_UNK *, 0xB4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB0)); M2C_FIELD(arg0, M2C_UNK *, 0xB0) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjBoss1Crater__data_805D4B58;

s32 is_count_below_limit__15TObjBoss1CraterFv(void) {
    return TObjBoss1Crater__data_805D4B58 < 0x14;
}

}
