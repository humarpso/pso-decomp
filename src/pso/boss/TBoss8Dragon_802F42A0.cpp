#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__12TBoss8DragonFPv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, int);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *, int);

extern u8 *TBoss8Dragon__data_805D6988;

void draw__12TBoss8DragonFPv(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r4;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    TObjBoss2Tunnel__sub_803D929C((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    TBoss7Tentacle__sub_803D9BA0((void *) (arg0 + 0x68));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r4 = (unsigned char *) (M2C_FIELD(TBoss8Dragon__data_805D6988, void **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r4, s32 *, 0x28);
    draw__16TObjEneRe7BeruraFPv((void *) (arg0), (int) (temp_r4));
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
    TObjPlayer__sub_803D9B78();
}

}
