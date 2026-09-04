#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TTecGiBartaFv(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK TObjPlayer__sub_8023A244(void *);
M2C_UNK advance_lifetime_or_destroy(void *);
M2C_UNK fn_8023A694(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__11TTecGiBartaFv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    fn_8023A694(arg0);
    advance_lifetime_or_destroy(arg0);
    TObjPlayer__sub_8023A244(arg0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80230378
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80230A98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecGiBarta__ct(void *, void *, void *, void *, void *);
void *TTecGiBarta__sub_80230CFC(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecGiBarta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecGiBarta__sub_80230CFC(o, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80230D98
#include "types.h"

extern "C" {

void render__11TTecGiBartaFv(void);

void render__11TTecGiBartaFv(void) {  }

}
#endif
#endif
