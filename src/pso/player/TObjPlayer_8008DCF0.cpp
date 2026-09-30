#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Row_8008ED48 { u32 *p[11]; };

extern "C" {
extern Row_8008ED48 lbl_805006F8[];
void TObjPlayer__sub_8008ED48(void *arg0, s32 arg1);
}

extern "C" {

void update_dragon_boss_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);

extern const f32 lbl_805D9620;

void update_dragon_boss_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) ((((u32) M2C_FIELD(arg0, u32 *, 0x388) >> 0x18U) & 1) ? 0 : 5);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9620);
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        return;
    }
}
void TObjPlayer__sub_8008ED48(void *arg0, s32 arg1) {
    s32 i;
    s32 j;
    u32 *e;
    for (i = 0; i < arg1; i++) {
        for (j = 0; (e = lbl_805006F8[i].p[j]) != NULL; j++) {
            *e &= ~8;
        }
    }
    for (; i < 4; i++) {
        for (j = 0; (e = lbl_805006F8[i].p[j]) != NULL; j++) {
            *e |= 8;
        }
    }
}

}
