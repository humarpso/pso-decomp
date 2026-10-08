#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Item_80105EA4 { u8 type; u8 b1; u8 b2; };

struct Names_80105DB0 { char *n[4]; };

extern "C" {
s32 get_game_play_mode();
s32 get_instance__6TLobbyFv();
s32 get_drop_table_mode_flags(void);
void *memset(void *dst, int c, u32 n);
void init_drop_table__9TItemDropFv(void);
extern u8 *TItemDrop__data_805D5468;
extern u8 *TItemDrop__data_805D546C;
void count_unit_star_buckets__9TItemDropFv(void);
s32 get_task_id__14TFontSmallTaskFPv(void *p);
s32 calc_drop_offset__9TItemDropFi(s32 arg0);
s32 get_drop_table_mode_flags(void);
void TItemDrop__vt0(void);
extern u8 TLobby__data_805011D8[];
extern s32 lbl_805D2B78;
extern s32 TItemDrop__data_805D5470;
extern s32 TItemDrop__data_805D5474;
void refresh_drop_table_if_changed__9TItemDropFv(void);
u8 can_drop__9TItemDropFv(void);
u8 get_bool_from_1d6ddc__9TItemDropFPv(void *);
u8 TItemDrop__sub_80107B04(void *);
s32 is_rare_item__9TItemDataFPv(void *);
M2C_UNK init__9TItemDataFv(void *);
u8 TLobby__sub_801D6F94(void *);
u8 TLobby__sub_801D6FFC(void *);
u8 fn_801D7168(void *);
u8 fn_801D719C(void *);
u8 fn_801D71D0(void *);
u8 fn_801D7204(void *);
u8 get_rule_field_0__6TLobbyFPv(void *);
s32 get_game_play_mode();
extern M2C_UNK lbl_8050EA40[];
void apply_drop_restrictions(M2C_UNK arg0, Item_80105EA4 *it);
s32 sprintf(void *, void *, ...);
extern Names_80105DB0 item_drop_difficulty_name_table;
extern char lbl_8043E0E4[];
extern s32 TItemDrop__data_805D5470;
extern s32 TItemDrop__data_805D5474;
extern s32 lbl_805D5550;
extern char lbl_805DAAC8;
extern char lbl_805DAACC;
extern char lbl_805DAAD0;
void format_drop_table_filename(void *out, s32 arg1);
void init_drop_table__9TItemDropFv(void);
u32 roll_channel_below__9TItemDropFPviUi(void *, u8, s32);
void set_unit_modifier__9TItemDataFPvs(u8 *, s16);
M2C_UNK init__9TItemDataFv(void *);
u8 *lookup_item_pmt_record(u8 *);
extern u8 *TItemDrop__data_805D5468;
extern u8 *TItemDrop__data_805D546C;
void select_unit_drop__9TItemDropFv(void *self, u8 kind, u8 *item);
}

extern "C" {

void unload_item_drop_globals(void);
void TItemDrop__sub_80105D10(void);
s32 calc_drop_offset__9TItemDropFi(s32 arg0);
u8 can_drop__9TItemDropFv(void);
void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1);
void init_drop_table__9TItemDropFv(void);
u8 is_enabled__9TItemDropFv(void);
u8 is_not_special__9TItemDropFv(void);
void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1);
int set_packed_value__9TItemDataFPvUs(void*, void*);
s8 select_weighted_byte__9TItemDropFiiiii(s32, s32, s32, s32, s32);
s32 get_game_play_mode();
int is_unsealable_item(void*);
u8 get_item_star_count(s32);
s32 get_drop_flag__6TLobbyFv();
s32 get_instance__6TLobbyFv();

void unload_item_drop_globals(void) {  }

    extern int lbl_805D5450;
void TItemDrop__sub_80105D10(void) { lbl_805D5450 = 0; }

void clear_item_if_player_picked_up__9TItemDropFPvPv(void* p, void* a1) { if (is_unsealable_item(a1) == 1) { set_packed_value__9TItemDataFPvUs(a1, (void*)0); } }

extern s32 lbl_805D5550;

s32 get_drop_table_mode_flags(void) {
    s32 f = 0;
    if (get_game_play_mode() == 1) {
        f |= 1;
    } else {
        f &= ~1;
    }
    if (get_instance__6TLobbyFv() == 1) {
        f |= 2;
    } else {
        f &= ~2;
    }
    return f;
}

void format_drop_table_filename(void *out, s32 arg1) {
    Names_80105DB0 names = item_drop_difficulty_name_table;
    char *s1;
    char *s2;
    s32 n;
    if (TItemDrop__data_805D5470 & 1) {
        s1 = &lbl_805DAAC8;
        n = 0;
    } else {
        s1 = &lbl_805DAACC;
        n = TItemDrop__data_805D5474;
    }
    sprintf(out, lbl_8043E0E4, arg1, s1, (TItemDrop__data_805D5470 & 2) ? &lbl_805DAAD0 : &lbl_805DAACC, names.n[lbl_805D5550], n);
}

s32 calc_drop_offset__9TItemDropFi(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0 + (lbl_805D5550 * 0xA);
    if (get_game_play_mode() == 1) {
        var_r31 += 0x50;
    } else if (get_instance__6TLobbyFv() == 1) {
        var_r31 += 0x28;
    }
    return var_r31;
}

void apply_drop_restrictions(M2C_UNK arg0, Item_80105EA4 *it) {
    void *p;
    u8 m;
    u8 t;
    if (it == NULL) {
        return;
    }
    if (((s32 (*)(void))can_drop__9TItemDropFv)() == 0 && is_rare_item__9TItemDataFPv(it) != 0) {
        init__9TItemDataFv(it);
        return;
    }
    if (get_game_play_mode() == 1) {
        if (it->type == 1) {
            if (it->b1 == 3) {
                if ((u8)M2C_FIELD(it, s8 *, 2) >= 0x33 && (u8)M2C_FIELD(it, s8 *, 2) <= 0x38) {
                    init__9TItemDataFv(it);
                }
            }
        } else if (it->type == 4) {
            init__9TItemDataFv(it);
        }
    }
    p = lbl_8050EA40;
    if (get_rule_field_0__6TLobbyFPv(lbl_8050EA40) == TItemDrop__sub_80107B04(p)) {
        return;
    }
    if (it->type == 0 || it->type == 1) {
        switch (fn_801D71D0(p)) {
        case 2:
            init__9TItemDataFv(it);
            return;
        case 3:
            if (is_rare_item__9TItemDataFPv(it) == 1) {
                init__9TItemDataFv(it);
            }
            return;
        }
    }
    if (it->type == 2) {
        if (fn_801D719C(p) == 1) {
            init__9TItemDataFv(it);
        }
    } else if (it->type == 3) {
        if (fn_801D7168(p) == 2) {
            init__9TItemDataFv(it);
        } else if (it->b1 == 2) {
            switch (fn_801D7204(p)) {
            case 0:
                return;
            case 1:
                init__9TItemDataFv(it);
                break;
            default:
                m = get_bool_from_1d6ddc__9TItemDropFPv(p);
                if (m != 0) {
                    it->b2 = it->b2 % m;
                } else {
                    it->b2 = 0;
                }
                break;
            }
        } else if (it->b1 == 9) {
            if (TLobby__sub_801D6F94(p) == 1) {
                init__9TItemDataFv(it);
                return;
            }
            return;
        }
    } else if (it->type == 4) {
        if (TLobby__sub_801D6FFC(p) == 1) {
            init__9TItemDataFv(it);
        }
    }
}

u8 is_enabled__9TItemDropFv(void) {
    return (u8) (get_game_play_mode() != 1);
}

u8 is_not_special__9TItemDropFv(void) {
    return (u8) (get_game_play_mode() != 1);
}

u8 can_drop__9TItemDropFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_game_play_mode() != 1) && (get_drop_flag__6TLobbyFv() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

extern void *TItemDrop__data_805D5460;

void set_drop_index__9TItemDropFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 5) = select_weighted_byte__9TItemDropFiiiii((s32)arg0, M2C_FIELD(TItemDrop__data_805D5460, s32 *, 0x14), 0, 5, 1);
}

extern u8 *TItemDrop__data_805D5468;

void select_unit_drop__9TItemDropFv(void *self, u8 kind, u8 *item) {
    u8 *p;
    u32 n;
    s32 i;
    u32 pick;
    s32 r;
    u8 *data;
    s16 v;
    u8 cnt;
    if (kind >= 0xD) {
        return;
    }
    init__9TItemDataFv(item);
    item[0] = 1;
    item[1] = 3;
    init_drop_table__9TItemDropFv();
    cnt = TItemDrop__data_805D546C[kind];
    if (cnt == 0) {
        return;
    }
    pick = roll_channel_below__9TItemDropFPviUi(self, cnt, 0xB);
    n = 0;
    for (i = 0; i < 0x88; i++) {
        if (TItemDrop__data_805D5468[i] == kind) {
            if (n == pick) {
                if (i < 0x50) {
                    item[2] = i / 5;
                    r = (u8)(i % 5);
                    data = lookup_item_pmt_record(item);
                    if (data == NULL) {
                        return;
                    }
                    v = *(s16 *)(data + 0xC);
                    switch (r) {
                    case 0:
                        set_unit_modifier__9TItemDataFPvs(item, -(v * 2));
                        break;
                    case 1:
                        set_unit_modifier__9TItemDataFPvs(item, -v);
                        break;
                    case 2:
                        break;
                    case 3:
                        set_unit_modifier__9TItemDataFPvs(item, v);
                        break;
                    case 4:
                        set_unit_modifier__9TItemDataFPvs(item, v * 2);
                        break;
                    }
                } else if (kind < 0x88) {
                    item[2] = i - 0x40;
                }
                return;
            }
            n++;
        }
    }
}

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
        temp_r3 = get_item_star_count(var_r31 + 0x2AF);
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
        *var_r30 = get_item_star_count(var_r31 + 0x2AF);
        var_r30 += 1;
        var_r31 += 1;
    }
}
void count_unit_star_buckets__9TItemDropFv(void) {
    s32 i;
    u8 v;
    memset(TItemDrop__data_805D546C, 0, 0xD);
    init_drop_table__9TItemDropFv();
    for (i = 0; i < 0x88; i++) {
        v = TItemDrop__data_805D5468[i];
        if (v < 0xD) {
            TItemDrop__data_805D546C[v]++;
        }
    }
}
void refresh_drop_table_if_changed__9TItemDropFv(void) {
    if (lbl_805D2B78 != calc_drop_offset__9TItemDropFi(get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8)) ||
        TItemDrop__data_805D5470 != get_drop_table_mode_flags()) {
        TItemDrop__data_805D5474 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
        TItemDrop__vt0();
    }
}

}
