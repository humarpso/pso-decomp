#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 TBoss6Type2__sub_802BA220(u8 *arg0, u16 arg1);
}

extern "C" {

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int TBoss6PlotFalz__sub_802AAFCC(void*);
int is_falz_ready__11TBoss6Type2FPv(void* p);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
s32 TBoss6Type2__sub_802BA220(u8 *arg0, u16 arg1) {
    u8 *temp_r3;
    if ((arg1 == 0xFFFF) || (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF)) {
        return 0;
    }
    temp_r3 = (u8 *)(TPlayerBattleCtrl4P__sub_801BA74C(arg1));
    if (temp_r3 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0x55C) = arg1;
    M2C_FIELD(arg0, u8 **, 0x570) = (unsigned char *) ((void *) (temp_r3 + 0x85C));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x574), (void*)(temp_r3 + 0xCF4));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x57C), (void*)(temp_r3 + 0xA1C));
    copy_vec2__11TBoss6Type2FPvPv((void*)(arg0 + 0x584), (void*)(temp_r3 + 0xB88));
    M2C_FIELD(arg0, s32 *, 0x58C) = (s32) M2C_FIELD(temp_r3, s32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x590) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8B0);
    M2C_FIELD(arg0, s32 *, 0x594) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8AC);
    M2C_FIELD(arg0, s32 *, 0x598) = (s32) M2C_FIELD(temp_r3, s32 *, 0x8B4);
    copy_vec2__11TBoss6Type2FPvPv((void*)(temp_r3 + 0xCF4), (void*)(M2C_FIELD(arg0, u8 **, 0x560)));
    copy_vec2__11TBoss6Type2FPvPv((void*)(temp_r3 + 0xB88), (void*)(M2C_FIELD(arg0, u8 **, 0x564)));
    M2C_FIELD(temp_r3, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x568);
    M2C_FIELD(temp_r3, s32 *, 0x8B0) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x8AC) = 0;
    M2C_FIELD(temp_r3, s32 *, 0x8B4) = (s32) M2C_FIELD(arg0, s32 *, 0x56C);
    return 1;
}

}
