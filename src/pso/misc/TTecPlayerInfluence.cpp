#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
};

extern "C" {
void TTecPlayerInfluence__sub_80237258(void* p);
void run_task__19TTecPlayerInfluenceFv(void *arg0);
void queue_destruction__7TObjectFv(void *);
void TTecPlayerInfluence__sub_802371FC(u8 *arg0);
}

extern "C" {

void TTecPlayerInfluence__vt5(void);
void TTecRaBarta__vt7(void *arg0);
void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void TTecPlayerInfluence__sub_802371FC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x68) > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void TTecPlayerInfluence__sub_80237258(void* p) { *(f32*)((char*)p + 0xbc) = *(f32*)((char*)p + 0x3c); }

extern M2C_UNK __vt__19TTecPlayerInfluence[];

void run_task__19TTecPlayerInfluenceFv(void *arg0) {
    TTecPlayerInfluence__sub_80237258((void*)(arg0));
    ((VObj_18 *)(arg0))->m4();
}

void *__dt__19TTecPlayerInfluenceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TTecPlayerInfluence;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, void **, 0xDC)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TTecPlayerInfluence__vt5(void) {  }

void TTecRaBarta__vt7(void *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        return;
    case 2:
    case 3:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

}
