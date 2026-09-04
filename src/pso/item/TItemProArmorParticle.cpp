#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmorParticle__vt42(void *arg0);
void TItemProArmorParticle__vt43(void *arg0);

M2C_UNK TItemEquipBase__sub_8010A940();

void TItemProArmorParticle__vt43(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        M2C_FIELD(arg0, s32 *, 0x198) = -1;
    }
    TItemEquipBase__sub_8010A940();
}

s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK TItemProArmor__vt42();
s32 alloc__13TItemProArmorFi(M2C_UNK);
M2C_UNK initialize__21TItemProArmorParticleFPvPvPvPvPv(s32, u32, s32, M2C_UNK, s32);

void TItemProArmorParticle__vt42(void *arg0) {
    s32 temp_r3;

    TItemProArmor__vt42();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U)) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            initialize__21TItemProArmorParticleFPvPvPvPvPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x78, M2C_FIELD(arg0, s32 *, 0x19C));
        }
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80364570
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__21TItemProArmorParticleFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TItemEffArmorParticle__ct(u32, s32, s32, s32, s32);

void create__21TItemProArmorParticleFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        TItemEffArmorParticle__ct(obj, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803645CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmorParticle__vt14(void *arg0);
M2C_UNK create__21TItemProArmorParticleFiiii(s32, s32, s32, s32);
s32 get_id__13TItemProArmorFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_802034B0();

extern s32 tl_05;

void TItemProArmorParticle__vt14(void *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x198)) {
            M2C_FIELD(arg0, s32 *, 0x198) = temp_r3;
            if (TObjPlayer__sub_802034B0() != 0) {
                create__21TItemProArmorParticleFiiii(tl_05, get_field_d8__10TObjPlayerFPv(arg0), get_id__13TItemProArmorFPv(arg0), M2C_FIELD(arg0, s32 *, 0x19C));
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364794
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TItemTimerEvent__ct(void *);

extern M2C_UNK lbl_804A05C8[];

void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
    M2C_FIELD(arg0, void **, 0x2C) = arg4;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803647D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TItemProArmorParticleFv(void *arg0, s16 arg1);
void __dt__13TItemProArmorFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__21TItemProArmorParticle[];

void *__dt__21TItemProArmorParticleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TItemProArmorParticle;
        __dt__13TItemProArmorFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
