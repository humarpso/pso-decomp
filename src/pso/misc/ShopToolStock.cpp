#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/item/TItemData.h"
#include "pso/misc/TWindowSubComCard.h"

struct SRock_80224544_8022448C;

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct G_80225550 { s32 value; u8 remaining[0xC]; };

struct C14_80224B7C { u8 b[0x14]; };

struct Obj_80224F7C { u8 pad[4]; s8 v; };

struct Item_80225064 { u8 f0; u8 f1; u8 f2; u8 f3; };

struct Obj_80224C68 { u8 pad[6]; u8 b6; u8 b7; u8 b8; u8 b9; };

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
int is_flag_set__6TLobbyFPv(void* p);
void TLobby__sub_80225C8C(void* p);
extern G_80225550 shop_weapon_stock_buffers;
int get_short_mail_ctrl__6TLobbyFv(void);
s32 get_lobby_id__6TLobbyFPv(void* p);
extern int lobby_short_mail_entry_count;
void clear_lobby_flag__6TLobbyFv(void);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 mem_alloc(s32);
extern u8 lbl_8044C478[];
extern s32 shop_tool_stock_buffers[];
extern u32 lobby_tool_random_rel;
extern int shop_tool_stock_level;
void load_tool_random_rel(void);
s32 mem_free(u32);
extern u32 lobby_weapon_random_tables_ptr;
void* get_com_card_list__6TLobbyFPv(void* p);
s32 is_duplicate_shop_weapon(C14_80224B7C *item, s32 tbl);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
s32 TLobby__sub_80224840(s32 arg0);
extern int shop_weapon_stock_level;
void roll_shop_weapon_special(Obj_80224F7C *obj);
s32 rand();
extern s32 lbl_805D6238;
void roll_shop_weapon_grind(Item_80225064 *it);
extern s32 shop_weapon_bonus_table[];
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj);
void roll_shop_weapon_first_bonus(Obj_80224DF0 *obj);
void sort_shop_items(s32, s32, s32);
void generate_shop_technique_pool(s32);
void generate_shop_rare_tool_pool(s32);
void generate_shop_common_tool_pool(s32);
u32 lobby_tool_random_rel;
int shop_tool_stock_level;

void TLobby::set_6264_and_call_2244B0(int a0, int a1) { shop_tool_stock_level = a1; TLobby::generate_shop_inventory(a0); }

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
