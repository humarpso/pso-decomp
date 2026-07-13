#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_8032E770(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032EAE4(void *);
s32 TBoss6Type2__sub_8032EBB4(void *);
s32 TBoss6Type2__sub_8032ECE0(void *);
s32 TBoss6Type2__sub_8032F5FC(void *);
s32 TBoss6Type2__sub_8032F690();
s32 TBoss6Type2__sub_803301B8(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032F824();
s32 TBoss6Type2__sub_8032FB84();
int TBoss6Type2__sub_8032E7B4(void*, void*);
void TBoss6Type2__sub_80336FB8(void* p);
void TBoss6Type2__sub_80337108(void);
void TBoss6Type2__sub_80337160(void);
void TBoss6Type2__sub_803371B4(void* p);

void TBoss6Type2__sub_803370A4(void *arg0) {
    TBoss6Type2__sub_8032F690();
    TBoss6Type2__sub_8032F5FC(arg0);
    TBoss6Type2__sub_8032ECE0(arg0);
    TBoss6Type2__sub_8032EBB4(arg0);
    TBoss6Type2__sub_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) != 0) {
        TBoss6Type2__sub_803301B8(arg0, 1);
    }
}
void TBoss6Type2__sub_80337108(void) {  }
void update_attack_state__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032F824();
    TBoss6Type2__sub_8032ECE0(arg0);
    TBoss6Type2__sub_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) == 0) {
        TBoss6Type2__sub_803301B8(arg0, 2);
    }
}
void TBoss6Type2__sub_80337160(void) {  }
void advance_phase_counter__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032FB84();
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) >= 4) {
        TBoss6Type2__sub_803301B8(arg0, 1);
    }
}
void TBoss6Type2__sub_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
