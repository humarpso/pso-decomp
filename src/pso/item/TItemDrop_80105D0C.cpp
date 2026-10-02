#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80107840_lbl_8049EF88
{
  M2C_UNK value;
  u8 remaining[0x14];
};

struct Pair_80106F4C { u8 type; u8 level; };

struct Obj_80106F4C { u8 pad[6]; Pair_80106F4C e[3]; };

struct RareItem_80106A90 { u8 b[4]; };

struct RareTable_80106A90 { u8 pad[4]; s32 count; s8 *types; RareItem_80106A90 *items; };

struct Tbl_80106E04 {
    u8 pad[0x34];
    u8 *chance;
    u8 *rate;
};

struct TItemDrop_80107900 {
    s32 name;
    u8 pad4[0x14];
    void *vt;
    s32 unk1C;
    s32 *list;
};

struct Item_8010663C { u8 type; u8 sub; u8 pad2[0xE]; u32 id; };

struct Tbl_8010663C { u8 pad[0x18]; s32 f18; u8 *chance; u8 *kind; };

extern "C" {
M2C_UNK clear_item_if_player_picked_up__9TItemDropFPvPv(void *, void *);
M2C_UNK TItemDrop__sub_80105EA4(void *, void *);
void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void handle_type3__9TItemDropFPvPv(void* p, void* a1);
void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
M2C_UNK TItemDrop__sub_80106D0C(s32, void *);
void set_flag__9TItemDropFPvPv(void *arg0, void *arg1);
M2C_UNK TItemDrop__sub_80106FC8(void *, void *, void *);
s32 TItemDrop__sub_80107460(s32 arg0, u8 *arg1, u8 *arg2);
void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void handle_type3__9TItemDropFPvPv(void* p, void* a1);
s8 TItemDrop__sub_80107640(s32, s32, u8, s32, M2C_UNK);
u8 TItemDrop__sub_801076CC(s32, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK init__9TItemDataFv(void *);
M2C_UNK TObjPlayer__sub_8011C234(u8, void *);
extern void *TItemDrop__data_805D5460;
void TItemDrop__sub_8010738C(s32 arg0, s32 arg1, void *arg2);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TItemDrop__sub_80107A68(s32 arg0);
u32 TAdSinglePlyChrSelectGC__sub_8007C3E0(void *);
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DAAD8;
M2C_UNK item_drop_rng_below(s32 arg0, u32 arg1);
u32 TItemDrop__sub_801065F8(u8 *arg0, M2C_UNK arg1, u32 arg2);
M2C_UNK calc_random_ratio__10TObjPlayerFv(void *);
void TItemDrop__sub_801065B4(u8 *arg0, u32 arg1);
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK __dl__FPv(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(int);
M2C_UNK TItemDrop__sub_8010F168(int, int);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80107840_lbl_8049EF88 lbl_8049EF88;
extern s32 TItemDrop__data_805D5458;
extern s32 TItemDrop__data_805D545C;
u8 *TItemDrop__sub_80107840(u8 *arg0, s16 arg1);
u32 TItemDrop__sub_801065F8(u8 *arg0, M2C_UNK arg1, u32 arg2);
u8 TItemDrop__sub_80107790(s32 rng, s32 base, s32 off, s32 count, s32 stride);
void TItemDrop__sub_80106F4C(void *self, Obj_80106F4C *o);
s32 can_drop__9TItemDropFv();
s32 TItemDrop__sub_80107460(s32 arg0, u8 *arg1, u8 *arg2);
extern s32 *TItemDrop__data_805D5464;
s32 TItemDrop__sub_80106A90(s32 arg0, s32 arg1, u8 *arg2);
void TItemDrop__sub_801065B4(u8 *arg0, u32 arg1);
u32 TItemDrop__sub_801065F8(u8 *arg0, M2C_UNK arg1, u32 arg2);
s32 TItemData__sub_8010DF68(void *);
u8 TObjPlayer__sub_8011C974(u8);
extern void *TItemDrop__data_805D5460;
void TItemDrop__sub_80106E04(s32 rng, u8 *item, s32 idx);
M2C_UNK clear_item_if_player_picked_up__9TItemDropFPvPv(void *, void *);
M2C_UNK TItemDrop__sub_80105EA4(void *, void *);
void TItemDrop__sub_801061E0(void *, u8, u8 *);
void TItemDrop__sub_801065B4(u8 *arg0, u32 arg1);
void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2);
void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void TItemDrop__sub_80107210(s32 rng, s32 level, u8 *item);
void TItemDrop__sub_8010738C(s32 arg0, s32 arg1, void *arg2);
u16 TItemDrop__sub_801075B4(void *, s32, s32, s32, s32);
M2C_UNK init__9TItemDataFv(void *);
extern void *TItemDrop__data_805D5460;
extern const f32 lbl_805DAADC;
void generate_drop_item__9TItemDropFPviPv(u8 *self, s32 idx, u8 *item);
s32 run_step__9TItemDropFi(s32, u32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 fn_8010F210(void *);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void __ct__7TObjectFP7TObject(void *, void *);
s32 __cvt_fp2unsigned(f32);
s32 rand();
extern M2C_UNK __vt__9TItemDrop[];
extern RecoveredGlobal_80107840_lbl_8049EF88 lbl_8049EF88;
extern s32 lbl_805D2B7C;
extern s32 TItemDrop__data_805D5458;
extern s32 TItemDrop__data_805D545C;
extern s32 TItemDrop__data_805D5474;
extern const f32 lbl_805DAAD4;
extern const f32 lbl_805DAAD8;
extern const f32 lbl_805DAAE4;
TItemDrop_80107900 *TItemDrop__ct(TItemDrop_80107900 *self, void *parent, s8 arg2);
s32 is_not_special__9TItemDropFv(u8 *);
u32 TItemDrop__sub_801065F8(u8 *arg0, M2C_UNK arg1, u32 arg2);
void generate_drop_item__9TItemDropFPviPv(u8 *self, s32 idx, u8 *item);
s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2);
u16 TItemDrop__sub_801075B4(void *, s32, s32, s32, s32);
M2C_UNK init__9TItemDataFv(void *);
extern void *TItemDrop__data_805D5460;
void TItemDrop__sub_8010663C(u8 *self, s32 area, s32 idx, Item_8010663C *item);
}

extern "C" {

int TItemDrop__sub_80107B04(void);
void TItemDrop__vt1(void);
void __dt__9TItemDropFv(void);
void apply_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2);
void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2);
s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2);
s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p);
void handle_type3__9TItemDropFPvPv(void* p, void* a1);
void init_rare_item_data__9TItemDropFPvPv(void *arg0, void *arg1);
void run_task__9TItemDropFv(void);
void set_flag__9TItemDropFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
s32 TItemData__sub_8010DF68(void *);
M2C_UNK TItemDrop__sub_801063D8();
M2C_UNK TItemDrop__sub_80106D0C(s32, void *);
int TLobby__sub_801D6DDC(void*);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 can_drop__9TItemDropFv();
s32 clamp_s32__10TObjPlayerFiii(s32, M2C_UNK, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK init__9TItemDataFv(void *);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
s32 is_enabled__9TItemDropFv();
int set_stack_count__24TShopEquipmentListWindowFPvc(void*, void*);

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

void TItemDrop__vt1(void) {  }

extern s32 *TItemDrop__data_805D5464;

void TItemDrop__sub_801065B4(u8 *arg0, u32 arg1) {
    if (arg1 < 0x10U) {
        calc_random_ratio__10TObjPlayerFv((void *) (M2C_FIELD(((u8 *)(M2C_FIELD(arg0, u8 **, 0x20)) + (arg1 * 4)), s32 *, 0)));
        return;
    }
    calc_random_ratio__10TObjPlayerFv((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x40)));
}

u32 TItemDrop__sub_801065F8(u8 *arg0, M2C_UNK arg1, u32 arg2) {
    u8 *var_r3;
    if (arg2 < 0x10U) {
        var_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
        var_r3 = (u8 *)(M2C_FIELD(var_r3, M2C_UNK *, (arg2 * 4)));
        return (u32)item_drop_rng_below((s32)((int) (var_r3)), (u32)(arg1));
    }
    var_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x40));
    return (u32)item_drop_rng_below((s32)((int) (var_r3)), (u32)(arg1));
}

void TItemDrop__sub_8010663C(u8 *self, s32 area, s32 idx, Item_8010663C *item) {
    s32 r;
    u8 kind;
    if (item == NULL) {
        return;
    }
    init__9TItemDataFv(item);
    if (area > 0x58) {
        return;
    }
    if (TItemDrop__sub_801065F8(self, 0x64, 0) >= ((Tbl_8010663C *)TItemDrop__data_805D5460)->chance[area]) {
        return;
    }
    if (drop_item__9TItemDropFiii((s32)self, area, (s32)item) != 0) {
        return;
    }
    if (is_not_special__9TItemDropFv(self) == 1) {
        r = TItemDrop__sub_801065F8(self, 3, 1);
    } else {
        r = TItemDrop__sub_801065F8(self, 2, 1) + 1;
    }
    switch (r) {
    case 0:
        kind = 5;
        break;
    case 1:
        kind = 4;
        break;
    case 2:
        kind = ((Tbl_8010663C *)TItemDrop__data_805D5460)->kind[area];
        break;
    default:
        return;
    }
    switch (kind) {
    case 0:
        item->type = 0;
        break;
    case 1:
        item->sub = item->type = 1;
        break;
    case 2:
        item->type = 1;
        item->sub = 2;
        break;
    case 3:
        item->type = 1;
        item->sub = 3;
        break;
    case 4:
        item->type = 3;
        break;
    case 5:
        item->type = 4;
        item->id = TItemDrop__sub_801075B4(self, ((Tbl_8010663C *)TItemDrop__data_805D5460)->f18, area, 0, 1);
        break;
    default:
        return;
    }
    if (item->type != 4) {
        generate_drop_item__9TItemDropFPviPv(self, idx, (u8 *)item);
    }
}

void generate_drop_item__9TItemDropFPviPv(u8 *self, s32 idx, u8 *item) {
    f32 f;
    if (item == NULL) {
        return;
    }
    switch (item[0]) {
    case 0:
        TItemDrop__sub_80107210((s32)self, idx, item);
        break;
    case 1:
        if (item[1] == 3) {
            f = lbl_805DAADC + (f32)(*(u8 **)((u8 *)TItemDrop__data_805D5460 + 0x4C))[idx];
            TItemDrop__sub_801061E0(self, (u8)(s32)(f * ((f32 (*)(u8 *, u32))TItemDrop__sub_801065B4)(self, 0xE)), item);
            if (item[2] == 0xFF) {
                init__9TItemDataFv(item);
            }
        } else {
            calc_drop_rarity__9TItemDropFiiPv((s32)self, idx, item);
        }
        break;
    case 3:
        TItemDrop__sub_8010738C((s32)self, idx, item);
        break;
    case 4:
        *(u32 *)(item + 0x10) = TItemDrop__sub_801075B4(self, *(s32 *)((u8 *)TItemDrop__data_805D5460 + 0x24), idx, 0, 1);
        break;
    case 2:
        apply_item_data__9TItemDropFPvPv(self, item);
        break;
    default:
        init__9TItemDataFv(item);
        item[0] = 5;
        break;
    }
    TItemDrop__sub_80105EA4(self, item);
    clear_item_if_player_picked_up__9TItemDropFPvPv(self, item);
}

s32 TItemDrop__sub_80106A90(s32 arg0, s32 arg1, u8 *arg2) {
    s32 target;
    s32 i;
    if ((*(RareTable_80106A90 * *)&TItemDrop__data_805D5464) != NULL && can_drop__9TItemDropFv() == 1) {
        target = arg1 + 1;
        for (i = 0; i != (*(RareTable_80106A90 * *)&TItemDrop__data_805D5464)->count; i++) {
            if (target == (*(RareTable_80106A90 * *)&TItemDrop__data_805D5464)->types[i]) {
                if (TItemDrop__sub_80107460(arg0, (u8 *)&(*(RareTable_80106A90 * *)&TItemDrop__data_805D5464)->items[i], arg2) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 drop_item__9TItemDropFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((can_drop__9TItemDropFv() == 1) && ((s32 *) TItemDrop__data_805D5464 != NULL) && (arg1 > 0) && (arg1 < 0x58)) {
        return TItemDrop__sub_80107460((s32)(arg0), (u8 *)(*TItemDrop__data_805D5464 + (arg1 * 4)), (u8 *)(arg2));
    }
    return 0;
}

extern void *TItemDrop__data_805D5460;

void calc_drop_rarity__9TItemDropFiiPv(s32 arg0, s32 arg1, void *arg2) {
    u8 temp_r3;
    u8 call_res;

    TItemDrop__sub_80106D0C(arg0, arg2);
    call_res = (u8) TItemDrop__sub_80107790((s32)((s32)(arg0)), (s32)((s32)(M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x10))), (s32)((s32)(0)), (s32)((M2C_UNK)(5)), (s32)((M2C_UNK)(1)));
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

extern u8 lbl_805DAAE0;

void TItemDrop__sub_80106E04(s32 rng, u8 *item, s32 idx) {
    u8 *chance;
    if (item[0] == 0 && TItemData__sub_8010DF68(item) == 0) {
        chance = ((Tbl_80106E04 *)TItemDrop__data_805D5460)->chance;
        if (chance[idx] != 0 && TItemDrop__sub_801065F8((u8 *)((u8 *)rng), (M2C_UNK)(100), (u32)(9)) < ((Tbl_80106E04 *)TItemDrop__data_805D5460)->rate[idx]) {
            item[4] = TObjPlayer__sub_8011C974((u8)(s32)((f32)chance[idx] * ((f32 (*)(u8 *, u32)) TItemDrop__sub_801065B4)((u8 *)rng, 10)));
        }
    }
}

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

extern void *TItemDrop__data_805D5460;

void TItemDrop__sub_80106F4C(void *self, Obj_80106F4C *o) {
    s32 i;
    s32 j;
    for (i = 0; i != 3; i++) {
        for (j = 0; j != i; j++) {
            if (o->e[j].type == 0) {
                o->e[i].type = 0;
            } else if (o->e[i].type == o->e[j].type) {
                o->e[i].type = 0;
            }
        }
        if (o->e[i].type == 0) {
            o->e[i].level = 0;
        }
    }
}

struct Tbl_801070A4 {
    u8 pad[0x28];
    s32 levels;
    s8 *kinds;
    s32 types;
};

void TItemDrop__sub_801070A4(s32 rng, Obj_80106F4C *item, s32 idx) {
    s32 i;
    s32 kind[1];

    if (item->pad[0] == 0) {
        for (i = 0; i != 3; i++) {
            kind[0] = ((Tbl_801070A4 *)TItemDrop__data_805D5460)->kinds[i * 10 + idx];
            if (kind[0] != -1) {
                item->e[i].type = TItemDrop__sub_80107790(rng, ((Tbl_801070A4 *)TItemDrop__data_805D5460)->types, idx, 6, 10);
                item->e[i].level = (s8)TItemDrop__sub_801076CC(rng, ((Tbl_801070A4 *)TItemDrop__data_805D5460)->levels, kind[0], 0x17, 6) * 5 - 10;
            }
            if (item->e[i].type == 5) {
                item->e[i].level = (s8)item->e[i].level / 5;
                item->e[i].level = item->e[i].level * 5;
            }
        }
        TItemDrop__sub_80106F4C((void *)rng, item);
    }
}

void calc_drop_item__9TItemDropFiPvi(s32 arg0, void *arg1, s32 arg2) {
    if ((u8) M2C_FIELD(arg1, u8 *, 0) == 0) {
        M2C_FIELD(arg1, s8 *, 3) = TItemDrop__sub_80107790((s32)((s32)(arg0)), (s32)((s32)(M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0xC))), (s32)((s32)(clamp_s32__10TObjPlayerFiii(arg2, 0, 3))), (s32)((M2C_UNK)(9)), (s32)((M2C_UNK)(4)));
    }
}

#pragma push
#pragma fp_contract on
void TItemDrop__sub_8010738C(s32 arg0, s32 arg1, void *arg2) {
    u8 var_r3;
    init__9TItemDataFv(arg2);
    var_r3 = ((M2C_UNK (*)(s32, s32, s32, M2C_UNK, M2C_UNK))TItemDrop__sub_801076CC)(arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x3C), arg1, 0x1C, 0xA);
    switch (var_r3) {
    case 0x1A:
        var_r3 = 0x73;
        break;
    }
    TObjPlayer__sub_8011C234(var_r3, arg2);
    if ((u8) M2C_FIELD(arg2, u8 *, 1) == 2) {
        M2C_FIELD(arg2, u8 *, 4) = ((u8)TItemDrop__sub_80107790((s32)(arg0), (s32)(M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x40)), (s32)(arg1), (s32)(0x13), (s32)(0xA)));
        M2C_FIELD(arg2, s8 *, 2) = TItemDrop__sub_80107640(arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x44), M2C_FIELD(arg2, u8 *, 4), arg1, 0xA);
        init_rare_item_data__9TItemDropFPvPv((void *)(arg0), (void *)(arg2));
    }
    handle_type3__9TItemDropFPvPv((void*)(arg0), (void*)(arg2));
}
#pragma pop

s32 TItemDrop__sub_80107460(s32 arg0, u8 *arg1, u8 *arg2) {
    s32 var_r5;
    u32 temp_r3;
    u8 temp_r0;
    u8 temp_r31;
    u32 tmp;
    if ((arg1 != NULL) && (arg2 != NULL)) {
        temp_r31 = M2C_FIELD(arg1, u8 *, 0);
        if (temp_r31 != 0) {
            temp_r3 = TItemDrop__sub_801065F8((u8 *)((void *) (arg0)), (M2C_UNK)((int) (-1)), (u32)((int) (6)));
            var_r5 = ((temp_r31 >> 3U) & 0x1F) - 4;
            if (var_r5 < 0) {
                var_r5 = 0;
            }
            if (temp_r3 < (u32) ((2 << var_r5) * ((temp_r31 & 7) + 7))) {
                M2C_FIELD(arg2, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 1);
                M2C_FIELD(arg2, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 2);
                M2C_FIELD(arg2, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 3);
                temp_r0 = M2C_FIELD(arg2, u8 *, 0);
                switch ((s32) temp_r0) {
                case 0:
                    tmp = TItemDrop__sub_801065F8((u8 *)((void *) (arg0)), (M2C_UNK)((int) (0xA)), (u32)((int) (7)));
                    TItemDrop__sub_80106FC8((void *) (arg0), (void *) (arg2), (void *) (tmp));
                    set_flag__9TItemDropFPvPv((void *) (arg0), (void *) (arg2));
                    break;
                case 1:
                    TItemDrop__sub_80106D0C((s32)((void *) (arg0)), (void *)((void *) (arg2)));
                    break;
                case 2:
                    apply_item_data__9TItemDropFPvPv((void *) (arg0), (void *) (arg2));
                    break;
                case 3:
                    init_rare_item_data__9TItemDropFPvPv((void *) (arg0), (void *) (arg2));
                    handle_type3__9TItemDropFPvPv((void*)((void *) (arg0)), (void*)((void *) (arg2)));
                    break;
                }
                TItemDrop__sub_80105EA4((void *) (arg0), (void *) (arg2));
                clear_item_if_player_picked_up__9TItemDropFPvPv((void *) (arg0), (void *) (arg2));
                return 1;
            }
            goto block_18;
        }
    }
block_18:
    return 0;
}

u8 TItemDrop__sub_801076CC(s32 rng, s32 base, s32 off, M2C_UNK count, M2C_UNK stride) {
    u16 *p = (u16 *)base;
    u32 total = 0;
    u32 r;
    u8 i;

    for (i = 0; i != count; i++) {
        total += p[off + i * stride];
    }
    if (total == 0) {
        return 0xFF;
    }
    r = TItemDrop__sub_801065F8((u8 *)rng, total, 3);
    for (i = 0; i != count; i++) {
        u16 w = p[off + i * stride];
        if (w != 0) {
            if (r < w) {
                return i;
            }
            r -= w;
        }
    }
    return 0xFF;
}

typedef struct RecoveredGlobal_80107840_lbl_8049EF88 RecoveredGlobal_80107840_lbl_8049EF88;

u8 TItemDrop__sub_80107790(s32 rng, s32 base, s32 off, s32 count, s32 stride) {
    u8 *p = (u8 *)(base + off);
    u32 total = 0;
    u32 r;
    u8 i;
    for (i = 0; i != count; i++) {
        total += p[i * stride];
    }
    if (total == 0) {
        return 0xFF;
    }
    r = TItemDrop__sub_801065F8((u8 *)((u8 *)rng), (M2C_UNK)(total), (u32)(2));
    for (i = 0; i != count; i++) {
        u8 w = p[i * stride];
        if (w != 0) {
            if (r < w) {
                return i;
            }
            r -= w;
        }
    }
    return 0xFF;
}

u8 *TItemDrop__sub_80107840(u8 *arg0, s16 arg1) {
  s32 var_r30;
  s32 var_r31;
  if (arg0 != 0)
  {
    *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &lbl_8049EF88.value;
    var_r31 = (int) (*((s32 *) (((s8 *) arg0) + 0x1C)));
    TItemDrop__sub_8010F168(var_r31, (int) 1);
    *((s32 *) (((s8 *) arg0) + 0x1C)) = 0;
    safe_free__23TAdSinglePlyChrSelectGCFUi((int) TItemDrop__data_805D5458);
    TItemDrop__data_805D5458 = 0;
    safe_free__23TAdSinglePlyChrSelectGCFUi((int) TItemDrop__data_805D545C);
    var_r31 = 0;
    var_r30 = 0;
    TItemDrop__data_805D545C = 0;
    do
    {
      __dl__FPv((int) (*((M2C_UNK *) (((s8 *) (*((s32 *) (((s8 *) arg0) + 0x20)))) + var_r31))));
      var_r30 += 1;
      var_r31 += 4;
    }
    while (var_r30 != 0x11);
    free__11TOBoss4RockFUi((s32)((int) (*((s32 *) (((s8 *) arg0) + 0x20)))));
    *((s32 *) (((s8 *) arg0) + 0x20)) = 0;
    __dt__7TObjectFv((void *) arg0, (int) 0);
    if (arg1 > 0)
    {
      __dl__7TObjectFPv((void *) arg0);
    }
  }
  return arg0;
}

TItemDrop_80107900 *TItemDrop__ct(TItemDrop_80107900 *self, void *parent, s8 arg2) {
    s32 i;
    u32 a;
    u32 b;
    s32 obj;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &lbl_8049EF88.value;
    self->name = lbl_805D2B7C;
    TItemDrop__data_805D5474 = arg2;
    self->list = (s32 *)alloc_buffer__11TOBoss4RockFPv(0x44);
    for (i = 0; i != 0x11; i++) {
        a = __cvt_fp2unsigned(lbl_805DAAD8 * (lbl_805DAAE4 * (f32)rand()));
        b = __cvt_fp2unsigned(lbl_805DAAD4 * (lbl_805DAAE4 * (f32)rand()));
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0xE8);
        if (obj != 0) {
            obj = run_step__9TItemDropFi(obj, a | b);
        }
        self->list[i] = obj;
    }
    TItemDrop__data_805D545C = alloc__22TQuestVmDownLoadServerFPv(0xC00);
    TItemDrop__data_805D5458 = alloc__22TQuestVmDownLoadServerFPv(0xC00);
    self->unk1C = fn_8010F210(__vt__9TItemDrop);
    return self;
}

u8 *TItemDrop__sub_80107A68(s32 arg0) {
    u8 temp_r0;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r0;
    temp_r3 = (u8 *)(get_char_index__23TAdSinglePlyChrSelectGCFUi(0U));
    if (temp_r3 != NULL) {
        temp_r0 = M2C_FIELD(temp_r3, u8 *, 0x3A0);
        if (((s8) temp_r0 >= 0) && ((s8) temp_r0 < 0xA)) {
            temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0x24));
            var_r0 = (u8 *)(temp_r3_2);
            if (var_r0 != NULL) {
                var_r0 = (u8 *)(TItemDrop__ct((TItemDrop_80107900 *)(temp_r3_2), (void *)(arg0), (s8)((s8) temp_r0)));
            }
            return var_r0;
        }
    }
    return NULL;
}

s8 get_bool_from_1d6ddc__9TItemDropFPv(void* p) { return (s8)(TLobby__sub_801D6DDC(p)); }
int TItemDrop__sub_80107B04(void) { return 0; }
M2C_UNK item_drop_rng_below(s32 arg0, u32 arg1) {
    __cvt_fp2unsigned((f32) (((f32) arg1 * (f32) TAdSinglePlyChrSelectGC__sub_8007C3E0((void *) (arg0))) / lbl_805DAAD8));
}

}
