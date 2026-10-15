#include "types.h"

struct SRock_80224544_8022448C;

struct RecoveredGlobal_8022559C_lbl_80513F50 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802259A0_lbl_80513F70
{
  s32 value;
  u8 remaining[0x67C];
};

struct RecoveredGlobal_802258C8_lbl_80513F70
{
  s32 value;
  u8 remaining[0x67C];
};

struct O_80225B90 { u8 pad[0x20]; char name[1]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct C14_80225550 { u8 bytes[0x14]; };

struct G_80225550 { s32 value; u8 remaining[0xC]; };

struct E_802255CC { u8 pad[0x10]; s32 f10; };

struct G_802255CC { s32 value; u8 remaining[0xC]; };

struct L_80225AD8 { u8 pad[0xcc]; s8 flags; u8 pad2[3]; };

struct L_80225B40 { u8 pad[0xcc]; s8 flags; u8 pad2[3]; };

struct Tag_80225828 { u8 b[0x228]; };

struct C14_80224B7C { u8 b[0x14]; };

struct Cnt_80224B7C { s32 n; };

struct Lst_80224B7C { C14_80224B7C *p; };

struct Ent_80224F7C { s32 id; s32 n; };

struct Hdr_80224F7C { u8 pad[0x14]; Ent_80224F7C *ents; };

struct Obj_80224F7C { u8 pad[4]; s8 v; };

struct Range_80225064 { s32 min; s32 max; };

struct Tbl_80225064 { u8 pad[0x18]; Range_80225064 *lo; Range_80225064 *hi; };

struct Item_80225064 { u8 f0; u8 f1; u8 f2; u8 f3; };

struct Ent_80224C68 { s32 id; s32 n; };

struct Rng_80224C68 { s32 lo; s32 hi; };

struct Hdr_80224C68 { u8 pad[8]; Ent_80224C68 *ents; u8 pad2[4]; Rng_80224C68 *rng; };

struct Obj_80224C68 { u8 pad[6]; u8 b6; u8 b7; u8 b8; u8 b9; };

struct Ent_80224DF0 { s32 id; s32 n; };

struct Rng_80224DF0 { s32 lo; s32 hi; };

struct Hdr_80224DF0 { u8 pad[4]; Ent_80224DF0 *ents; u8 pad2[4]; Rng_80224DF0 *rng; };

struct Obj_80224DF0 { u8 pad[6]; u8 b6; u8 b7; };

typedef struct Item_8022525C
{
  u8 b0;
  u8 b1;
  u8 b2;
  u8 pad3[7];
  u8 b12;
  u8 b13;
  u8 padC[8];
} Item_8022525C;

typedef struct Pool_8022525C
{
  u8 b[0x68];
} Pool_8022525C;

typedef struct Pair_8022525C
{
  s32 a;
  s32 b;
} Pair_8022525C;

typedef struct Ent_8022525C
{
  u8 id;
  u8 count;
} Ent_8022525C;

typedef struct Tier_8022525C
{
  Ent_8022525C *ents;
  u8 n;
} Tier_8022525C;

typedef struct Hdr_8022525C
{
  Tier_8022525C *tiers;
} Hdr_8022525C;

extern "C" {
extern unsigned char lbl_80513F70[];
void *TLobby__sub_8022598C(int a0);
s32 strncpy(void *, void *, int);
extern s32 lbl_805D6270;
void fill_list_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
s32 memset(void *, int, int);
extern RecoveredGlobal_8022559C_lbl_80513F50 shop_weapon_stock_generated_flags;
void clear_shop_weapon_flags(void);
int is_flag_set__6TLobbyFPv(void* p);
extern unsigned char lbl_80513F70[];
s32 find_free_slot__6TLobbyFv(void);
int is_flag_set__6TLobbyFPv(void* p);
void TLobby__sub_80225C8C(void* p);
extern unsigned char lbl_80513F70[];
void TLobby__sub_802258C8(void);
s32 is_name_too_long__6TLobbyFPv(O_80225B90 *o);
extern G_80225550 shop_weapon_stock_buffers;
void get_shop_weapon_stock_item(C14_80225550 *dst, s32 idx, s32 tbl);
extern G_80225550 shop_weapon_stock_buffers;
void clear_slot_field_f10__6TLobbyFii(s32 a, s32 b);
int get_short_mail_ctrl__6TLobbyFv(void);
void *TLobby__sub_8022598C(int a0);
s32 get_lobby_id__6TLobbyFPv(void* p);
void *find_short_mail_by_id__6TLobbyFUi(u32 id);
extern unsigned char lbl_80513F70[];
extern int lobby_short_mail_entry_count;
s32 move_words__6TLobbyFPvPvi(int, void *, void *);
void remove_entry_at__6TLobbyFi(s32 idx);
extern unsigned char lbl_80513F70[];
extern s32 lbl_805D6270;
extern int lobby_short_mail_entry_count;
void clear_lobby_flag__6TLobbyFv(void);
void clear_all_entries__6TLobbyFPv(void* _w0);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern u8 lbl_8044C478[];
extern s32 shop_tool_stock_buffers[];
extern u32 lobby_tool_random_rel;
extern int shop_tool_stock_level;
void load_tool_random_rel(void);
s32 free_nodes_with_id__6TLobbyFUi(u32);
s32 free__11TOBoss4RockFUi(u32);
extern G_80225550 shop_weapon_stock_buffers;
extern u32 lobby_weapon_random_tables_ptr;
void free_lobby_resources__6TLobbyFv(void);
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
s32 get_keyboard_mode__17TWindowSubComCardFv(void);
void send_simple_mail__9TProtocolFR12TChatMessage(void *, void *);
s32 init_guild_card_tag__6TLobbyFi(void *);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 strncpy(void *, void *, int);
extern u8 *TLobby__protocol_instance;
void send_simple_mail__6TLobbyFiPv(s32 arg0, void *arg1);
s32 memcmp(const void *, const void *, u32);
extern Cnt_80224B7C shop_weapon_stock_counts[];
extern G_80225550 shop_weapon_stock_buffers;
s32 is_duplicate_shop_weapon(C14_80224B7C *item, s32 tbl);
s8 roll_weapon_special_channel15(s32);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
s32 TLobby__sub_80224840(s32 arg0);
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void roll_shop_weapon_special(Obj_80224F7C *obj);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern char lbl_8044C7C0[];
extern char lbl_8044C7D8[];
extern char lbl_8044C7F0[];
extern char lbl_8044C80C[];
extern G_80225550 shop_weapon_stock_buffers;
extern s32 shop_difficulty_tier;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void load_weapon_random_tables(void);
u8 get_entry_field16__9TItemDataFv(void *);
s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0);
s32 rand();
extern s32 section_id_favored_grind_table[];
extern s32 lbl_805D6238;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void roll_shop_weapon_grind(Item_80225064 *it);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
s32 classify_level_bracket_wide__6TLobbyFi(s32 arg0);
s32 rand();
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern s32 shop_weapon_bonus_table[];
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
s32 get_level_bracket__6TLobbyFi(s32 arg0);
s32 rand();
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern s32 shop_weapon_bonus_table[];
void roll_shop_weapon_first_bonus(Obj_80224DF0 *obj);
void sort_shop_items(s32, s32, s32);
void generate_shop_technique_pool(s32);
void generate_shop_rare_tool_pool(s32);
void generate_shop_common_tool_pool(s32);
extern u32 lobby_tool_random_rel;
void generate_shop_inventory__6TLobbyFi(s32 idx);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void init__9TItemDataFv(void *);
s32 pop_byte__6TLobbyFPv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
void sort_shop_items(s32, s32, s32);
s32 get_level_tier__6TLobbyFi(s32 arg0);
s32 level_to_reward__6TLobbyFi(s32 arg0);
s32 is_duplicate_shop_weapon(C14_80224B7C *item, s32 tbl);
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj);
void roll_shop_weapon_first_bonus(Obj_80224DF0 *obj);
void roll_shop_weapon_special(Obj_80224F7C *obj);
void roll_shop_weapon_grind(Item_80225064 *it);
extern Pair_8022525C shop_weapon_group_subtype_table[];
extern Pair_8022525C shop_section_id_weapon_table_a[];
extern Pair_8022525C shop_section_id_weapon_table_b[];
extern s32 lbl_805D6238;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void generate_shop_weapon_stock(s32 tbl);
}

extern "C" {

s32 TLobby__sub_80224840(s32 arg0);
void TLobby__sub_80225238(int a0, int a1);
void TLobby__sub_80225C44(void* p);
void TLobby__sub_80225C64(void* p);
void TLobby__sub_80225C8C(void* p);
void TLobby__sub_80225CB8(void);
s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0);
s32 classify_level_bracket_wide__6TLobbyFi(s32 arg0);
void clear_lobby_flag__6TLobbyFv(void);
void free_all_rocks__6TLobbyFv(void);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 get_level_bracket__6TLobbyFi(s32 arg0);
s32 get_level_tier__6TLobbyFi(s32 arg0);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int is_flag_set__6TLobbyFPv(void* p);
s32 level_to_reward__6TLobbyFi(s32 arg0);
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1);
void try_close__6TLobbyFPv(void* p);
s32 free_nodes_with_id__6TLobbyFUi(u32);
int TLobby__sub_80225A08(void*);
s32 free__11TOBoss4RockFUi(u32);

u32 lobby_weapon_random_tables_ptr;
int shop_weapon_stock_level;

s32 classify_level_bracket_wide__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 5)) {
        return 0;
    }
    if ((arg0 >= 6) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 get_level_bracket__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 TLobby__sub_80224840(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 1;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 3;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 4;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 5;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 6;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x28)) {
        return 3;
    }
    if ((arg0 >= 0x29) && (arg0 <= 0x37)) {
        return 4;
    }
    if ((arg0 >= 0x38) && (arg0 <= 0x64)) {
        return 5;
    }
    if (arg0 >= 0x65) {
        return 5;
    }
    return -1;
}

extern s32 shop_difficulty_tier;

s32 get_level_tier__6TLobbyFi(s32 arg0) {
    if ((s32) shop_difficulty_tier != 3) {
        if ((arg0 >= 1) && (arg0 <= 0xA)) {
            return 0;
        }
        if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
            return 1;
        }
        if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
            return 2;
        }
        if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
            return 3;
        }
        if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
            return 4;
        }
        if (arg0 >= 0x65) {
            return 4;
        }
        return -1;
    }
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x63)) {
        return 4;
    }
    if ((arg0 >= 0x64) && (arg0 <= 0x96)) {
        return 5;
    }
    if (arg0 >= 0x97) {
        return 6;
    }
    return -1;
}

s32 level_to_reward__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0xA;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 0xC;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 0xC;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x64)) {
        return 0x10;
    }
    if (arg0 >= 0x65) {
        return 0x10;
    }
    return 0;
}

    extern int shop_weapon_stock_level;

#pragma push
#pragma optimization_level 1
struct G_80225550;
s32 is_duplicate_shop_weapon(C14_80224B7C *item, s32 tbl) {
    s32 n;
    C14_80224B7C *p;
    s32 i;
    if (shop_weapon_stock_counts[tbl].n == 0) {
        return 1;
    }
    n = 0;
    p = ((Lst_80224B7C *)&shop_weapon_stock_buffers)[tbl].p;
    for (i = 0; i < shop_weapon_stock_counts[tbl].n; i++, p++) {
        if (memcmp(item, p, 0x14) == 0) {
            return 0;
        }
        if (p->b[0] == item->b[0] && p->b[1] == item->b[1]) {
            n++;
        }
    }
    return (n <= 1) ? 1 : 0;
}
#pragma pop

#pragma push
#pragma optimization_level 1
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj) {
    u8 buf[0x68];
    Ent_80224C68 *e;
    Rng_80224C68 *r;
    s32 idx;
    s32 i;
    s32 n;
    s32 v;
    s32 x;
    s32 hi;
    s32 lo;
    reset_counter_64__6TLobbyFPv(buf);
    e = ((Hdr_80224C68 *)lobby_weapon_random_tables_ptr)->ents;
    r = ((Hdr_80224C68 *)lobby_weapon_random_tables_ptr)->rng;
    idx = classify_level_bracket_wide__6TLobbyFi(shop_weapon_stock_level);
    lo = r[idx].lo;
    hi = r[idx].hi;
    i = 0;
    idx *= 6;
    while (i++ < 6) {
        n = e[idx].n;
        while (n != 0) {
            push_shop_pool_entry(buf, e[idx].id);
            n--;
        }
        idx++;
    }
    shuffle_shop_pool_n_times(buf, 3);
    do {
        v = pop_byte__6TLobbyFPv(buf);
        if (v < 0) {
            v = 0;
            break;
        }
    } while (v == obj->b6);
    obj->b8 = v;
    obj->b9 = 0;
    switch (v) {
    case 0:
        obj->b9 = 0;
        break;
    default:
        x = (s32)((f32)(hi + 1) * ((1.0f / 32768.0f) * (f32)rand()));
        if (x < lo) {
            x = lo;
        }
        obj->b9 = shop_weapon_bonus_table[x];
        break;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void roll_shop_weapon_first_bonus(Obj_80224DF0 *obj) {
    u8 buf[0x68];
    Ent_80224DF0 *e;
    Rng_80224DF0 *r;
    s32 idx;
    s32 i;
    s32 n;
    s32 v;
    s32 x;
    s32 lo;
    s32 hi;
    reset_counter_64__6TLobbyFPv(buf);
    e = ((Hdr_80224DF0 *)lobby_weapon_random_tables_ptr)->ents;
    r = ((Hdr_80224DF0 *)lobby_weapon_random_tables_ptr)->rng;
    idx = get_level_bracket__6TLobbyFi(shop_weapon_stock_level);
    lo = r[idx].lo;
    hi = r[idx].hi;
    i = 0;
    idx *= 6;
    while (i++ < 6) {
        n = e[idx].n;
        while (n != 0) {
            push_shop_pool_entry(buf, e[idx].id);
            n--;
        }
        idx++;
    }
    shuffle_shop_pool_n_times(buf, 3);
    v = pop_byte__6TLobbyFPv(buf);
    if (v != -1) {
        obj->b6 = v;
        obj->b7 = 0;
    } else {
        obj->b6 = 0;
        obj->b7 = 0;
        v = 0;
    }
    switch (v) {
    case 0:
        obj->b7 = 0;
        break;
    default:
        x = (s32)((f32)(hi + 1) * ((1.0f / 32768.0f) * (f32)rand()));
        if (x < lo) {
            x = lo;
        }
        obj->b7 = shop_weapon_bonus_table[x];
        break;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void roll_shop_weapon_special(Obj_80224F7C *obj) {
    u8 buf[0x68];
    Ent_80224F7C *e;
    s32 idx;
    s32 i;
    s32 n;
    reset_counter_64__6TLobbyFPv(buf);
    e = ((Hdr_80224F7C *)lobby_weapon_random_tables_ptr)->ents;
    idx = TLobby__sub_80224840(shop_weapon_stock_level);
    i = 0;
    idx *= 3;
    while (i++ < 3) {
        n = e[idx].n;
        while (n != 0) {
            push_shop_pool_entry(buf, e[idx].id);
            n--;
        }
        idx++;
    }
    shuffle_shop_pool_n_times(buf, 3);
    switch (pop_byte__6TLobbyFPv(buf)) {
    case 1:
        obj->v = roll_weapon_special_channel15(0);
        break;
    case 2:
        obj->v = roll_weapon_special_channel15(1);
        break;
    case 0:
    default:
        obj->v = 0;
        break;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void roll_shop_weapon_grind(Item_80225064 *it) {
    Range_80225064 *lo;
    Range_80225064 *hi;
    s32 b;
    u8 v;
    u8 m;
    lo = ((Tbl_80225064 *)lobby_weapon_random_tables_ptr)->lo;
    hi = ((Tbl_80225064 *)lobby_weapon_random_tables_ptr)->hi;
    b = classify_level_bracket_narrow__6TLobbyFi(shop_weapon_stock_level);
    if (b != -1) {
        if (section_id_favored_grind_table[lbl_805D6238] != -1 && it->f1 == section_id_favored_grind_table[lbl_805D6238]) {
            v = (f32)(hi[b].max + 1) * ((1.0f / 32768.0f) * (f32)rand());
            if (v < hi[b].min) {
                v = hi[b].min;
            }
        } else {
            v = (f32)(lo[b].max + 1) * ((1.0f / 32768.0f) * (f32)rand());
            if (v < lo[b].min) {
                v = lo[b].min;
            }
        }
        it->f3 = v;
    }
    m = get_entry_field16__9TItemDataFv(it);
    if (it->f3 > m) {
        it->f3 = m;
    }
}
#pragma pop

void TLobby__sub_80225238(int a0, int a1) { shop_weapon_stock_level = a1; generate_shop_weapon_stock((s32)(a0)); }

typedef char RecoveredGlobal_8022559C_lbl_80513F50_size[sizeof(RecoveredGlobal_8022559C_lbl_80513F50) == 0x10 ? 1 : -1];

#pragma push
#pragma optimization_level 1
#pragma dont_inline on
typedef struct Ent_8022525C Ent_8022525C;
typedef struct Hdr_8022525C Hdr_8022525C;
typedef struct Item_8022525C Item_8022525C;
typedef struct Pair_8022525C Pair_8022525C;
typedef struct Pool_8022525C Pool_8022525C;
typedef struct Tier_8022525C Tier_8022525C;
s32 shop_weapon_stock_target_counts[4];
Cnt_80224B7C shop_weapon_stock_counts[4];
RecoveredGlobal_8022559C_lbl_80513F50 shop_weapon_stock_generated_flags;
G_80225550 shop_weapon_stock_buffers;
void generate_shop_weapon_stock(s32 tbl) {
  long long new_var;
  Item_8022525C item;
  Pool_8022525C pool;
  u8 *buf;
  s32 n;
  Ent_8022525C *e;
  s32 i;
  u8 c;
  s32 id;
  Tier_8022525C *t;
  Ent_8022525C *ents;
  if ((lobby_weapon_random_tables_ptr != 0) && (((s32 *)&shop_weapon_stock_generated_flags)[tbl] == 0))
  {
    ((s32 *)&shop_weapon_stock_generated_flags)[tbl] = 1;
    shop_weapon_stock_target_counts[tbl] = 0;
    ((s32 *)shop_weapon_stock_counts)[tbl] = 0;
    buf = ((u8 **)&shop_weapon_stock_buffers)[tbl];
    shop_weapon_stock_target_counts[tbl] = level_to_reward__6TLobbyFi(shop_weapon_stock_level);
    reset_counter_64__6TLobbyFPv(&pool);
    id = get_level_tier__6TLobbyFi(shop_weapon_stock_level);
    t = &((Hdr_8022525C *) lobby_weapon_random_tables_ptr)->tiers[id];
    i = 0;
    n = t->n;
    ents = t->ents;
    new_var = n * lbl_805D6238;
    e = ents + new_var;
    while ((i++) < n)
    {
      for (c = e->count; c != 0; c--)
      {
        push_shop_pool_entry(&pool, e->id);
      }
      e++;
    }
    shuffle_shop_pool_n_times(&pool, 4);
    while (((s32 *)shop_weapon_stock_counts)[tbl] < shop_weapon_stock_target_counts[tbl])
    {
      id = pop_byte__6TLobbyFPv(&pool);
      if (id == (-1))
      {
        continue;
      }
      init__9TItemDataFv(&item);
      if (id == 0x39)
      {
        if (shop_section_id_weapon_table_a[lbl_805D6238].a != (-1))
        {
          item.b0 = 0;
          item.b1 = shop_section_id_weapon_table_a[lbl_805D6238].a;
          item.b2 = shop_section_id_weapon_table_a[lbl_805D6238].b;
        }
      }
      else
        if (id == 0x3A)
      {
        if (shop_section_id_weapon_table_b[lbl_805D6238].a != (-1))
        {
          item.b0 = 0;
          item.b1 = shop_section_id_weapon_table_b[lbl_805D6238].a;
          item.b2 = shop_section_id_weapon_table_b[lbl_805D6238].b;
        }
      }
      else
      {
        item.b0 = 0;
        item.b1 = shop_weapon_group_subtype_table[id].a;
        item.b2 = shop_weapon_group_subtype_table[id].b;
      }
      roll_shop_weapon_grind((Item_80225064 *)(&item));
      roll_shop_weapon_special((Obj_80224F7C *)(&item));
      roll_shop_weapon_first_bonus((Obj_80224DF0 *)(&item));
      roll_shop_weapon_second_bonus((Obj_80224C68 *)(&item));
      item.b12 = 0;
      item.b13 = 0;
      if (is_duplicate_shop_weapon((C14_80224B7C *)(&item), (s32)(tbl)) == 1)
      {
        copy_item_data__6TLobbyFPvPv(buf + ((((s32 *)shop_weapon_stock_counts)[tbl]++) * 0x14), &item);
      }
    }
    sort_shop_items((s32)(buf), (s32)(((s32 *)shop_weapon_stock_counts)[tbl]), (s32)(2));
  }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void get_shop_weapon_stock_item(C14_80225550 *dst, s32 idx, s32 tbl) {
    C14_80225550 *arr = ((C14_80225550 **)&shop_weapon_stock_buffers)[tbl];
    *dst = arr[idx];
}
#pragma pop

void clear_shop_weapon_flags(void) {
    memset((void *) (&shop_weapon_stock_generated_flags.value), (int) (0), (int) (0x10));
}

#pragma push
#pragma optimization_level 1
void clear_slot_field_f10__6TLobbyFii(s32 a, s32 b) {
    E_802255CC *arr = ((E_802255CC **)&shop_weapon_stock_buffers)[b];
    if (a >= 0 && a <= 0xf) {
        if (arr[a].f10 != -1) {
            arr[a].f10 = -1;
        }
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void free_lobby_resources__6TLobbyFv(void) {
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (((u32 *)&shop_weapon_stock_buffers)[i] != 0) {
            free__11TOBoss4RockFUi(((u32 *)&shop_weapon_stock_buffers)[i]);
            ((u32 *)&shop_weapon_stock_buffers)[i] = 0;
        }
    }
    if (lobby_weapon_random_tables_ptr != 0) {
        free_nodes_with_id__6TLobbyFUi((u32)((void *)lobby_weapon_random_tables_ptr));
        lobby_weapon_random_tables_ptr = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void load_weapon_random_tables(void) {
    s32 i;
    s32 j;
    switch (shop_difficulty_tier) {
    case 0:
        lobby_weapon_random_tables_ptr = create_named_object(lbl_8044C7C0);
        break;
    case 1:
        lobby_weapon_random_tables_ptr = create_named_object(lbl_8044C7D8);
        break;
    case 2:
        lobby_weapon_random_tables_ptr = create_named_object(lbl_8044C7F0);
        break;
    case 3:
        lobby_weapon_random_tables_ptr = create_named_object(lbl_8044C80C);
        break;
    default:
        lobby_weapon_random_tables_ptr = create_named_object(lbl_8044C7C0);
        break;
    }
    for (j = 0; j < 4; j++) {
        ((s32 *)&shop_weapon_stock_buffers)[j] = 0;
    }
    if (is_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            ((s32 *)&shop_weapon_stock_buffers)[i] = alloc_buffer__11TOBoss4RockFPv(0x140);
        }
    } else {
        ((s32 *)&shop_weapon_stock_buffers)[0] = alloc_buffer__11TOBoss4RockFPv(0x140);
    }
    shop_weapon_stock_level = 0;
}
#pragma pop

}
