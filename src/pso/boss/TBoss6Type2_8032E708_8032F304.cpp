#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss6Type2__sub_8032F304(void);
int TBoss6Type2__sub_8032F360(void);
void TBoss6Type2__sub_8032F5C4(void *arg0);
void update_segment_angles__11TBoss6Type2FPv(void *arg0);
void TBoss6Type2__sub_8032F2F0(void* p, void* q);
M2C_UNK sync_hp__11TBoss6Type2FPv(s32);

int TBoss6Type2__sub_8032F304(void) { return 0; }
int TBoss6Type2__sub_8032F360(void) { return 0; }

void TBoss6Type2__sub_8032F5C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 & ~0xA00);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x38C);
    sync_hp__11TBoss6Type2FPv((s32) arg0);
}

void update_segment_angles__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x3B4);
    M2C_FIELD(arg0, s16 *, 0x39E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x398) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x396) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x396) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x398) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x39E) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x396);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x39A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x398);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x39E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x39C);
}

}
