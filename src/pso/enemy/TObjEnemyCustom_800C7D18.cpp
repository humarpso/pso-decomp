#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEnemyCustom__sub_800C7D18(void* p);
void update_state__15TObjEnemyCustomFPv(void *arg0);
int TObjEnemyCustom__sub_800C7DD0(void* p);
void TObjEnemyCustom__sub_800C7DF4(void);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);

int TObjEnemyCustom__sub_800C7D18(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 1); }

extern f32 lbl_805DA070;

void update_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805DA070);
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}

int TObjEnemyCustom__sub_800C7DD0(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void TObjEnemyCustom__sub_800C7DF4(void) {  }

}
