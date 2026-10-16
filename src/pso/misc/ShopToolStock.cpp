#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/item/TItemData.h"
#include "pso/misc/TWindowSubComCard.h"

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
int get_short_mail_ctrl__6TLobbyFv(void);
void *TLobby__sub_8022598C(int a0);
s32 get_lobby_id__6TLobbyFPv(void* p);
void *find_short_mail_by_id__6TLobbyFUi(u32 id);
extern unsigned char lbl_80513F70[];
extern int lobby_short_mail_entry_count;
void remove_entry_at__6TLobbyFi(s32 idx);
extern unsigned char lbl_80513F70[];
extern s32 lbl_805D6270;
extern int lobby_short_mail_entry_count;
void clear_lobby_flag__6TLobbyFv(void);
void clear_all_entries__6TLobbyFPv(void* _w0);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 mem_alloc(s32);
extern u8 lbl_8044C478[];
extern s32 shop_tool_stock_buffers[];
extern u32 lobby_tool_random_rel;
extern int shop_tool_stock_level;
void load_tool_random_rel(void);
s32 mem_free(u32);
extern G_80225550 shop_weapon_stock_buffers;
extern u32 lobby_weapon_random_tables_ptr;
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
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
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
s32 TLobby__sub_80224840(s32 arg0);
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void roll_shop_weapon_special(Obj_80224F7C *obj);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 mem_alloc(s32);
extern char lbl_8044C7C0[];
extern char lbl_8044C7D8[];
extern char lbl_8044C7F0[];
extern char lbl_8044C80C[];
extern G_80225550 shop_weapon_stock_buffers;
extern s32 shop_difficulty_tier;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
void load_weapon_random_tables(void);
s32 rand();
extern s32 section_id_favored_grind_table[];
extern s32 lbl_805D6238;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern const f32 lbl_805DC738;
void roll_shop_weapon_grind(Item_80225064 *it);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
s32 rand();
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern s32 shop_weapon_bonus_table[];
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
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
void copy_item_data__6TLobbyFPvPv(void *, void *);
void init__9TItemDataFv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void sort_shop_items(s32, s32, s32);
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
void clear_lobby_flag__6TLobbyFv(void);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int is_flag_set__6TLobbyFPv(void* p);
void try_close__6TLobbyFPv(void* p);
int TLobby__sub_80225A08(void*);
s32 mem_free(u32);

u32 lobby_tool_random_rel;
int shop_tool_stock_level;

    extern int shop_tool_stock_level;
void TLobby::set_6264_and_call_2244B0(int a0, int a1) { shop_tool_stock_level = a1; TLobby::generate_shop_inventory(a0); }

extern s32 shop_tool_stock_buffers[];
extern u32 lobby_tool_random_rel;

s32 shop_tool_stock_counts[4];
s32 lbl_80513F00[4];
s32 shop_tool_flags[4];
s32 shop_tool_stock_buffers[4];
void TLobby::generate_shop_inventory(s32 idx) {
    if (lobby_tool_random_rel != 0) {
        if (shop_tool_flags[idx] == 0) {
            shop_tool_flags[idx] = 1;
            shop_tool_stock_counts[idx] = 0;
            lbl_80513F00[idx] = 0;
            generate_shop_common_tool_pool(idx);
            generate_shop_rare_tool_pool(idx);
            generate_shop_technique_pool(idx);
            sort_shop_items(shop_tool_stock_buffers[idx], shop_tool_stock_counts[idx], 2);
        }
    }
}

void TLobby::free_all_rocks() {
    s32 var_r28 = 3;
    s32 *var_r29 = shop_tool_stock_buffers;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            mem_free(v);
            var_r29[var_r31] = (s32)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lobby_tool_random_rel != 0U) {
        TLobby::free_nodes_with_id(lobby_tool_random_rel);
        lobby_tool_random_rel = var_r30;
    }
}

void load_tool_random_rel(void) {
    s32 i;
    (*(s32 *)&lobby_tool_random_rel) = create_named_object(lbl_8044C478);
    for (i = 0; i < 4; i++) {
        ((s32 *)&shop_tool_stock_buffers)[i] = 0;
    }
    if (is_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            ((s32 *)&shop_tool_stock_buffers)[i] = mem_alloc(0x168);
        }
    } else {
        ((s32 *)&shop_tool_stock_buffers)[0] = mem_alloc(0x168);
    }
    (*(s32 *)&shop_tool_stock_level) = 0;
}

}
