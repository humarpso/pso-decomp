#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_death_sequence__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802B9BBC(int, int);
s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BF904(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
s32 update_action_state__11TBoss6Type2FPv(void *);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
s32 update_zako__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void start_death_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r31;
    u8 *var_r3;

    var_r3 = arg0;
    temp_r31 = var_r3;
    temp_r0 = M2C_FIELD(var_r3, s32 *, 0x4C8);
    M2C_FIELD(var_r3, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(var_r3, s32 *, 0x460) = temp_r0;
    temp_r0_2 = M2C_FIELD(var_r3, s32 *, 0x47C);
    switch (temp_r0_2) {
    case 15:
        var_r3 = (unsigned char *) ((void *)0x68522);
        break;
    case 16:
        var_r3 = (unsigned char *) ((void *)0x68521);
        break;
    case 17:
        var_r3 = (unsigned char *) ((void *)0x68523);
        break;
    }
    TBoss3Volopt__sub_8022675C((int) (var_r3), (void *) (temp_r31 + 0x38), (int) (0), (int) (1));
    TBoss6Type2__sub_802B9BBC((int) (temp_r31), (int) (0xD));
}

}

}
