#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmor__vt14(void *arg0);

M2C_UNK TObjPlayer__sub_8010069C();

void TItemProArmor__vt14(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x190) & 1) {
        TObjPlayer__sub_8010069C();
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80102C3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

u16 get_id__13TItemProArmorFPv(void* p) { return *(u16*)((char*)p + 0xe4); }

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116F68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_80116F68(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FBC0[];

void *TItemProArmor__sub_80116F68(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FBC0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011709C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_8011709C(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FC90[];

void *TItemProArmor__sub_8011709C(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FC90;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmor__sub_80117130(void *arg0);
M2C_UNK TObjPlayer__sub_8022D27C(M2C_UNK, M2C_UNK, s32);

void TItemProArmor__sub_80117130(void *arg0) {
    TObjPlayer__sub_8022D27C(0xE, 0, M2C_FIELD(arg0, s32 *, 0xF0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_80117160(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049FD48[];

void *TItemProArmor__sub_80117160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801171B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FD48[];

void *init__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011724C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_stat_value__13TItemProArmorFPv(void* p);
s16 calc_scaled_offset__13TItemProArmorFv(void);
u8 TItemObject__sub_80115D84();
int obj_getS16_2BA(void*);

int get_stat_value__13TItemProArmorFPv(void* p) { return obj_getS16_2BA(*(void**)((char*)p + 0xf0)); }

extern s32 lbl_805D5550;

s16 calc_scaled_offset__13TItemProArmorFv(void) {
    return (s16) ((lbl_805D5550 * 0x32) + TItemObject__sub_80115D84());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801172A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 calc_armor_value__13TItemProArmorFv(void);
u8 TItemObject__sub_80115D84();

extern s32 lbl_805D5550;

s16 calc_armor_value__13TItemProArmorFv(void) {
    return (s16) ((lbl_805D5550 * 0x19) + TItemObject__sub_80115D84());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801172D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_armor_stat__13TItemProArmorFPv(void *arg0);
s32 get_stat_value__13TItemProArmorFPv(void *);
s32 calc_scaled_offset__13TItemProArmorFv(void *);
s32 calc_armor_value__13TItemProArmorFv(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_800112A4(s32, s32);

void apply_armor_stat__13TItemProArmorFPv(void *arg0) {
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 0:
        var_r31 = calc_armor_value__13TItemProArmorFv(arg0);
        break;
    case 1:
        var_r31 = calc_scaled_offset__13TItemProArmorFv(arg0);
        break;
    case 2:
        var_r31 = get_stat_value__13TItemProArmorFPv(arg0);
        break;
    }
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), var_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117368
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049FE00[];

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FE00;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801173C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FE00[];

void *construct__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FE00;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117454
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_lifetime__13TItemProArmorFPv(void *arg0);
void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1);
M2C_UNK TItemTimerEvent__sub_8011E068(u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void tick_lifetime__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x1E);
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r3 - 1);
}

extern M2C_UNK lbl_8049FEB8[];

void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FEB8;
        TItemTimerEvent__sub_8011E068(M2C_FIELD(arg0, u16 *, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117578
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__13TItemProArmorFiUi(s32 arg0, u32 arg1);
void create_armor__13TItemProArmorFPv(void* a0);
M2C_UNK TItemProArmor__sub_8011751C(void *, s32, u32);
void *__nw__7TObjectFUl(M2C_UNK);

void create__13TItemProArmorFiUi(s32 arg0, u32 arg1) {
    void *temp_r3;
    if ((arg0 != 0) && (arg1 != 0U)) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != NULL) {
            TItemProArmor__sub_8011751C(temp_r3, arg0, arg1);
        }
    }
}

    extern int tl_05;
void create_armor__13TItemProArmorFPv(void* a0) { create__13TItemProArmorFiUi((s32)((void*)(tl_05)), (u32)((void*)(*(int*)((char*)a0 + 0xf0)))); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801175F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117650
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_80117650(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_80117650(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801176E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_to_player__13TItemProArmorFPv(void *arg0);
s32 TItemObject__sub_80115D84(void *);
s32 get_item_field_6__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_8011F710(s32, s32);

void apply_to_player__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_item_field_6__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TObjPlayer__sub_8011F710(temp_r3, TItemObject__sub_80115D84(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117730
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemProArmor__sub_80117730(void *arg0, s16 arg1);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_item_object__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_8049FF88[];

void *init_item_object__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FF88;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801178A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);

void TItemProArmor__sub_801178A8(void* p, void* q) { *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x192); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801178CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);

u8 TItemProArmor__sub_801178CC(void* p) { return *(u8*)((char*)p + 0x192); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117908
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemData__sub_8010CE1C(void *, u8);
s32 TItemData__sub_8010CE70(void *, u8);
void TItemProArmor__sub_801178A8(void* p, void* q);
u8 TItemProArmor__sub_801178CC(void* p);

void write_item_data__13TItemProArmorFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x192);
    TItemData__sub_8010CE70(arg1, M2C_FIELD(arg0, u8 *, 0x193));
    TItemData__sub_8010CE1C(arg1, M2C_FIELD(arg0, u8 *, 0x194));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117B58
#include "types.h"

extern "C" {

void update_armor__13TItemProArmorFPv(void* p);
int get_flag_40__8TItemMagFPv(void*);
int TObjPlayer__sub_80108164(void);

int obj_getField1c(void*);

void update_armor__13TItemProArmorFPv(void* p) { if (get_flag_40__8TItemMagFPv(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); TObjPlayer__sub_80108164(); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117D00
#include "types.h"

extern "C" {

void TItemProArmor__sub_80117D00(void);
void TItemProArmor__sub_80117D04(void);

void TItemProArmor__sub_80117D00(void) {  }
void TItemProArmor__sub_80117D04(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117D08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TItemProArmorFv(void *arg0, s16 arg1);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80117D60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable__13TItemProArmorFPv(void *arg0);
void *ct__13TItemProArmorFPv(void *arg0);
void TItemTimerEvent__ct(void *);

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
#endif
#if PSO_CLASS_PACKAGE == 0x80364300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc__13TItemProArmorFi(s32 arg0);
M2C_UNK heap_alloc__5THeapFUl(s32, s32);

extern s32 obj_heap;

void alloc__13TItemProArmorFi(s32 arg0) {
    heap_alloc__5THeapFUl(obj_heap, arg0);
}

}
#endif
#endif
