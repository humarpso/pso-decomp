#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803646F0_lbl_8047A020 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_803646F0___vt__21TItemProArmorParticle {
    M2C_UNK value;
    u8 remaining[0xCC];
};

extern "C" {
u8 get_slot_count__14TItemProShieldFPv(void *);
u8 * TItemProArmor__ct(void *, void *);
extern RecoveredGlobal_803646F0_lbl_8047A020 lbl_8047A020;
extern M2C_UNK __vt__21TItemProArmorParticle[];
extern s32 lbl_805D4478;
u8 *TItemProArmorParticle__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void TItemProArmorParticle__vt14(void *arg0);
void TItemProArmorParticle__vt42(void *arg0);
void TItemProArmorParticle__vt43(void *arg0);
void *__dt__21TItemProArmorParticleFv(void *arg0, s16 arg1);
void create__21TItemProArmorParticleFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
M2C_UNK TItemEffArmorParticle__ct(u32, s32, s32, s32, s32);
M2C_UNK TItemEquipBase__sub_8010A940();
M2C_UNK TItemProArmor__vt42();
void TItemTimerEvent__ct(void *);
s32 is_item_area_enabled();
void __dt__13TItemProArmorFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 alloc__13TItemProArmorFi(M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_id__13TItemProArmorFPv(void *);

void create__21TItemProArmorParticleFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        TItemEffArmorParticle__ct(obj, arg0, arg1, arg2, arg3);
    }
}

extern s32 tl_05;

void TItemProArmorParticle__vt14(void *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x198)) {
            M2C_FIELD(arg0, s32 *, 0x198) = temp_r3;
            if (is_item_area_enabled() != 0) {
                create__21TItemProArmorParticleFiiii((s32)(tl_05), (s32)(get_field_d8__10TObjPlayerFPv(arg0)), (s32)(get_id__13TItemProArmorFPv(arg0)), (s32)(M2C_FIELD(arg0, s32 *, 0x19C)));
            }
        }
    }
}

void TItemProArmorParticle__vt43(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        M2C_FIELD(arg0, s32 *, 0x198) = -1;
    }
    TItemEquipBase__sub_8010A940();
}

void TItemProArmorParticle__vt42(void *arg0) {
    s32 temp_r3;

    TItemProArmor__vt42();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U)) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            initialize__21TItemProArmorParticleFPvPvPvPvPv((void *)(temp_r3), (void *)(M2C_FIELD(arg0, u32 *, 0x174)), (void *)(get_id__13TItemProArmorFPv(arg0)), (void *)(0x78), (void *)(M2C_FIELD(arg0, s32 *, 0x19C)));
        }
    }
}

extern M2C_UNK lbl_804A05C8[];

typedef char RecoveredGlobal_803646F0_lbl_8047A020_size[sizeof(RecoveredGlobal_803646F0_lbl_8047A020) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_803646F0___vt__21TItemProArmorParticle_size[sizeof(RecoveredGlobal_803646F0___vt__21TItemProArmorParticle) == 0xD0 ? 1 : -1];
u8 *TItemProArmorParticle__ct(u8 *arg0, u8 *arg1) {
    u8 temp_r0;
    TItemProArmor__ct(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803646F0___vt__21TItemProArmorParticle *)&__vt__21TItemProArmorParticle).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4478;
    M2C_FIELD(arg0, s32 *, 0x198) = -1;
    temp_r0 = get_slot_count__14TItemProShieldFPv(arg0) - 0x29;
    if (temp_r0 < 0xCU) {
        M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(&lbl_8047A020.value, M2C_UNK *, ((temp_r0 * 4) & 0x3FC));
        if (temp_r0 < 5U) {
            M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1A0) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x19C) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    }
    return arg0;
}

void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
    M2C_FIELD(arg0, void **, 0x2C) = arg4;
    return arg0;
}

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
