#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss1Dragon__sub_800210BC(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneRe7Berura__sub_803E4CE0(M2C_UNK *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();

extern M2C_UNK TBoss1Dragon__sub_8002116C[];
extern s32 TBoss1Dragon__data_805D4B28;
extern const f32 TBoss1Dragon__data_805D7F24;
extern const f32 TBoss1Dragon__data_805D7F28;

void TBoss1Dragon__sub_800210BC(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) TBoss1Dragon__data_805D4B28;
    TObjEneRe7Berura__sub_803E4CE0(TBoss1Dragon__sub_8002116C);
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    fn_803D9624(0, TBoss1Dragon__data_805D7F28, M2C_FIELD(arg0, f32 *, 0x5DC), TBoss1Dragon__data_805D7F28);
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x64));
    TOMonitorMachine01__sub_803D8B5C(0, TBoss1Dragon__data_805D7F24, TBoss1Dragon__data_805D7F24, TBoss1Dragon__data_805D7F24);
    draw__16TObjEneRe7BeruraFPv(arg0);
    fn_803D9B78();
    TObjEneRe7Berura__sub_803E4CE0(NULL);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r31;
}

}
