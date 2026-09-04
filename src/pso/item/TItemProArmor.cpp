#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TItemProArmor__sub_801178B4(u8 *arg0);
void TItemProArmor__sub_801178D4(u8 *arg0);
}

extern "C" {

void *TItemProArmor__sub_80117650(void *arg0);
void *TItemProArmor__sub_80117730(void *arg0, s16 arg1);
int TItemProArmor__sub_8011781C(void);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);
void TItemProArmor__sub_80117D00(void);
void TItemProArmor__sub_80117D04(void);
void TItemProArmor__vt14(void *arg0);
void *__dt__13TItemProArmorFv(void *arg0, s16 arg1);
void apply_to_player__13TItemProArmorFPv(void *arg0);
void *ct__13TItemProArmorFPv(void *arg0);
void *init_item_object__13TItemProArmorFPv(void *arg0);
void *init_vtable__13TItemProArmorFPv(void *arg0);
void update_armor__13TItemProArmorFPv(void* p);
void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1);
s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemObject__ct(void *);
s32 TItemObject__sub_80115D84(void *);
void TItemTimerEvent__ct(void *);
M2C_UNK TObjPlayer__sub_8010069C();
int TObjPlayer__sub_80108164(void);
M2C_UNK TObjPlayer__sub_8011F710(s32, s32);
void __dt__11TItemObjectFv(void *, int);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
int get_flag_40__8TItemMagFPv(void*);
s32 get_item_field_6__10TObjPlayerFPv(s32);
int obj_getField1c(void*);

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_80117650(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
    return arg0;
}

void apply_to_player__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_item_field_6__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TObjPlayer__sub_8011F710(temp_r3, TItemObject__sub_80115D84(arg0));
    }
}

extern M2C_UNK lbl_8049FF88[];

void *TItemProArmor__sub_80117730(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FF88;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FF88[];

void *init_item_object__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FF88;
    return arg0;
}

int TItemProArmor__sub_8011781C(void) { return 0; }

void TItemProArmor__sub_801178A8(void* p, void* q) { *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x192); }

void TItemProArmor__sub_801178B4(u8 *arg0) {
    u8 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x192);
    if (temp_r4 < 4U) {
        M2C_FIELD(arg0, u8 *, 0x192) = (u8) (temp_r4 + 1);
    }
}

u8 TItemProArmor__sub_801178CC(void* p) { return *(u8*)((char*)p + 0x192); }

void TItemProArmor__sub_801178D4(u8 *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x195) < (u8) M2C_FIELD(arg0, u8 *, 0x193)) {
        M2C_FIELD(arg0, u8 *, 0x193) = 0U;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0x196) < (u8) M2C_FIELD(arg0, u8 *, 0x194)) {
        M2C_FIELD(arg0, u8 *, 0x194) = 0U;
    }
}

void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x192);
    TItemData__sub_8010CE70(arg1, M2C_FIELD(arg0, u8 *, 0x193));
    TItemData__sub_8010CE1C(arg1, M2C_FIELD(arg0, u8 *, 0x194));
}

void TItemProArmor__vt14(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x190) & 1) {
        TObjPlayer__sub_8010069C();
    }
}

void update_armor__13TItemProArmorFPv(void* p) { if (get_flag_40__8TItemMagFPv(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); TObjPlayer__sub_80108164(); } }

void TItemProArmor__sub_80117D00(void) {  }
void TItemProArmor__sub_80117D04(void) {  }

extern M2C_UNK __vt__13TItemProArmor[];

void *__dt__13TItemProArmorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TItemProArmor;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804A0668[];

void *init_vtable__13TItemProArmorFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0668;
    return arg0;
}

extern M2C_UNK lbl_804A0688[];

void *ct__13TItemProArmorFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0688;
    return arg0;
}

}
