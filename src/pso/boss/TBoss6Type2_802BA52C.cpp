#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cache_fish_params__11TBoss6Type2FPv(void *arg0);
void update_zako__11TBoss6Type2FPv(void* p);
int TBoss4Zako__sub_803D8910(void*, void*);
M2C_UNK TBoss6Type2__sub_802BA158();
int TBoss6Type2__sub_802BAB80(void*);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);

void cache_fish_params__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BA158();
    M2C_FIELD(arg0, s32 *, 0x560) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x564) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
    M2C_FIELD(arg0, s32 *, 0x568) = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x56C) = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
}

void update_zako__11TBoss6Type2FPv(void* p) { TBoss4Zako__sub_803D8910((char*)p + 0x38, (char*)p + 0x524); TBoss6Type2__sub_802BAB80(p); }

}
