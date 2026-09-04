#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 run_step__9TItemDropFi(s32 arg0);

M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C();

s32 run_step__9TItemDropFi(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_8007C48C();
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800F93F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__9TItemDropFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_8049C658[];

void *destroy__9TItemDropFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9C68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct_object__9TItemDropFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_8049C658[];

void *ct_object__9TItemDropFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F9CA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__9TItemDropFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *, s32);

extern M2C_UNK lbl_8049C658[];

void *construct__9TItemDropFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FE2D8
#include "types.h"

extern "C" {

void TItemDrop__sub_800FE2D8(void);

void TItemDrop__sub_800FE2D8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105D0C
#include "types.h"

extern "C" {

void TItemDrop__sub_80105D0C(void);
void TItemDrop__sub_80105D10(void);

void TItemDrop__sub_80105D0C(void) {  }

    extern int lbl_805D5450;
void TItemDrop__sub_80105D10(void) { lbl_805D5450 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105D1C
#include "types.h"

extern "C" {

void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1);
int TItemData__sub_8010C638(void*, void*);
int TObjPlayer__sub_8011C030(void*);

void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1) { if (TObjPlayer__sub_8011C030(a1) == 1) { TItemData__sub_8010C638(a1, (void*)0); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80105E4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_drop_offset__9TItemDropFi(s32 arg0);
s32 get_instance__6TLobbyFv();
s32 TLobby__sub_8030A7B0();

extern s32 lbl_805D5550;

s32 calc_drop_offset__9TItemDropFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0 + (lbl_805D5550 * 0xA);
    if (TLobby__sub_8030A7B0() == 1) {
        var_r31 += 0x50;
    } else if (get_instance__6TLobbyFv() == 1) {
        var_r31 += 0x28;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801060F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_enabled__9TItemDropFv(void);
u8 is_not_special__9TItemDropFv(void);
u8 can_drop__9TItemDropFv(void);
s32 get_drop_flag__6TLobbyFv();
s32 TLobby__sub_8030A7B0();

u8 is_enabled__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 is_not_special__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 can_drop__9TItemDropFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((TLobby__sub_8030A7B0() != 1) && (get_drop_flag__6TLobbyFv() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010619C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1);
s8 TItemDrop__sub_80107790(s32, s32, s32, s32, s32);

extern void *TItemDrop__data_805D5460;

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 5) = TItemDrop__sub_80107790((s32)arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x14), 0, 5, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80106354
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_drop_table__9TItemDropFv(void);
u8 TObjPlayer__sub_8011C914(s32);

extern u8 *TItemDrop__data_805D5468;

void init_drop_table__9TItemDropFv(void) {
    s32 var_r31;
    s8 temp_r0;
    u8 *var_r30;
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r5;

    var_r31 = 0;
    var_r30 = TItemDrop__data_805D5468;
    do {
        temp_r3 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        temp_r5 = temp_r3;
        var_r31 += 1;
        temp_r4 = temp_r5 - 1;
        M2C_FIELD(var_r30, u8 *, 0) = temp_r4;
        temp_r0 = temp_r5 + 1;
        M2C_FIELD(var_r30, u8 *, 1) = temp_r4;
        M2C_FIELD(var_r30, u8 *, 2) = temp_r3;
        M2C_FIELD(var_r30, s8 *, 3) = temp_r0;
        M2C_FIELD(var_r30, s8 *, 4) = temp_r0;
        var_r30 += 5;
    } while (var_r31 != 0x10);
    while (var_r31 != 0x48) {
        *var_r30 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        var_r30 += 1;
        var_r31 += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80106498
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __dt__9TItemDropFv(void);
void run_task__9TItemDropFv(void);
M2C_UNK TItemDrop__sub_801063D8();
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void run_task__9TItemDropFv(void) {
    free__11TOBoss4RockFUi(TItemDrop__data_805D546C);
    TItemDrop__data_805D546C = 0;
    free__11TOBoss4RockFUi(TItemDrop__data_805D5468);
    TItemDrop__data_805D5468 = 0;
}

extern s32 TItemDrop__data_805D5468;
extern s32 TItemDrop__data_805D546C;

void __dt__9TItemDropFv(void) {
    TItemDrop__data_805D5468 = alloc_buffer__11TOBoss4RockFPv(0x88);
    TItemDrop__data_805D546C = alloc_buffer__11TOBoss4RockFPv(0xD);
    TItemDrop__sub_801063D8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010650C
#include "types.h"

extern "C" {

void TItemDrop__vt1(void);

void TItemDrop__vt1(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80106B3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2);
void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2);
void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void handle_type3__9TItemDropFPvPv(void* p, void* a1);
void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
M2C_UNK TItemDrop__sub_80106D0C(s32, void *);
s32 TItemDrop__sub_80107460(s32, s32, s32);
u8 TItemDrop__sub_80107790(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 can_drop__9TItemDropFv();
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
int set_stack_count__24TShopEquipmentListWindowFPvc(void*, void*);
M2C_UNK init__9TItemDataFv(void *);

extern s32 *TItemDrop__data_805D5464;

s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((can_drop__9TItemDropFv() == 1) && ((s32 *) TItemDrop__data_805D5464 != NULL) && (arg1 > 0) && (arg1 < 0x58)) {
        return TItemDrop__sub_80107460(arg0, *TItemDrop__data_805D5464 + (arg1 * 4), arg2);
    }
    return 0;
}

extern void *TItemDrop__data_805D5460;

void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r3;
    u8 call_res;

    TItemDrop__sub_80106D0C(arg0, arg2);
    call_res = (u8) TItemDrop__sub_80107790(arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x10), 0, 5, 1);
    M2C_FIELD(arg2, u8 *, 2) = (u8) (arg1 + call_res + M2C_FIELD(TItemDrop__data_805D5460, u8 *, 0x48));
    temp_r3 = M2C_FIELD(arg2, u8 *, 2);
    if (temp_r3 < 3U) {
        M2C_FIELD(arg2, u8 *, 2) = 0U;
    } else {
        M2C_FIELD(arg2, u8 *, 2) = (u8) (temp_r3 - 3);
    }
}

void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1) {
    if (((u8) M2C_FIELD(arg1, u8 *, 1) == 2) && (((u8) M2C_FIELD(arg1, u8 *, 4) >= 0x13U) || ((u8) M2C_FIELD(arg1, u8 *, 2) >= 0x1EU))) {
        init__9TItemDataFv(arg1);
    }
}

void handle_type3__9TItemDropFPvPv(void* p, void* a1) { if (*(unsigned char*)(a1) == 3) { set_stack_count__24TShopEquipmentListWindowFPvc(a1, (void*)1); } }

void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_UNK sp8;

    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 2) {
        initialize_mag_data__9TItemDataFPv(&sp8);
        M2C_FIELD(arg1, s8 *, 1) = 0;
        TItemData__sub_8010D510(arg1, &sp8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80106ED0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag__9TItemDropFPvPv(void *arg0, void *arg1);
s32 TItemData__sub_8010DF68(void *);
s32 is_enabled__9TItemDropFv();

extern u8 lbl_805DAAE0;

void set_flag__9TItemDropFPvPv(void *arg0, void *arg1) {
    u8 temp_r3;

    if ((is_enabled__9TItemDropFv() == 1) && ((u8) M2C_FIELD(arg1, u8 *, 0) == 0)) {
        if (TItemData__sub_8010DF68(arg1) != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (M2C_FIELD(arg1, u8 *, 4) | lbl_805DAAE0);
            return;
        }
        temp_r3 = M2C_FIELD(arg1, u8 *, 4);
        if (temp_r3 != 0) {
            M2C_FIELD(arg1, u8 *, 4) = (u8) (temp_r3 | lbl_805DAAE0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801071A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2);
s8 TItemDrop__sub_80107790(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 clamp_s32__10TObjPlayerFiii(s32, M2C_UNK, M2C_UNK);

extern void *TItemDrop__data_805D5460;

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2) {
    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 0) {
        M2C_FIELD(arg1, s8 *, 3) = TItemDrop__sub_80107790(arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0xC), clamp_s32__10TObjPlayerFiii(arg2, 0, 3), 9, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80107AE0
#include "types.h"

extern "C" {

s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p);
int TItemDrop__sub_80107B04(void);
int TLobby__sub_801D6DDC(void*);

s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p) { return (s8)(TLobby__sub_801D6DDC(p)); }
int TItemDrop__sub_80107B04(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F168
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK fn_8010F018();
M2C_UNK free__11TOBoss4RockFUi(s32);

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8010F018();
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 8));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F1B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2);
s32 alloc_buffer__11TOBoss4RockFPv(void *);
M2C_UNK fn_8010F0C0(void *);
M2C_UNK init_forward__10TObjPlayerFPv(void *);

u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2) {
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv((void *) (arg2));
    fn_8010F0C0((void *) (arg0));
    return arg0;
}

}
#endif
#endif
