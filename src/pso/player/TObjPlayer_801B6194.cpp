#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1);
s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2);
s16 *fn_801D93C4();

s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC), M2C_FIELD(fn_801D93C4(), s16 *, 0xC));
}

void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 4), M2C_FIELD(fn_801D93C4(), s16 *, 4));
}

void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA), M2C_FIELD(fn_801D93C4(), s16 *, 0xA));
}

void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 2), M2C_FIELD(fn_801D93C4(), s16 *, 2));
}

void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 6), M2C_FIELD(fn_801D93C4(), s16 *, 6));
}

void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 8), M2C_FIELD(fn_801D93C4(), s16 *, 8));
}

void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs(arg1, (s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0)), *fn_801D93C4());
}

}
