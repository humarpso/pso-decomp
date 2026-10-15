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
void clear_slot_field_f10__6TLobbyFll(s32 a, s32 b);
int get_short_mail_ctrl__6TLobbyFv(void);
void *TLobby__sub_8022598C(int a0);
s32 get_lobby_id__6TLobbyFPv(void* p);
void *find_short_mail_by_id__6TLobbyFUi(u32 id);
extern unsigned char lbl_80513F70[];
extern int lobby_short_mail_entry_count;
s32 move_words__6TLobbyFPUll(int, void *, void *);
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
s32 free_nodes_with_id__6TLobbyFUl(u32);
s32 mem_free(u32);
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
s32 pop_byte__6TLobbyFv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFv(void *);
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
u8 get_entry_field16__9TItemDataFv(void *);
s32 classify_level_bracket_narrow__6TLobbyFl(s32 arg0);
s32 rand();
extern s32 section_id_favored_grind_table[];
extern s32 lbl_805D6238;
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern const f32 lbl_805DC738;
void roll_shop_weapon_grind(Item_80225064 *it);
s32 pop_byte__6TLobbyFv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFv(void *);
s32 classify_level_bracket_wide__6TLobbyFl(s32 arg0);
s32 rand();
extern u32 lobby_weapon_random_tables_ptr;
extern int shop_weapon_stock_level;
extern s32 shop_weapon_bonus_table[];
void roll_shop_weapon_second_bonus(Obj_80224C68 *obj);
s32 pop_byte__6TLobbyFv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFv(void *);
s32 get_level_bracket__6TLobbyFl(s32 arg0);
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
void generate_shop_inventory__6TLobbyFl(s32 idx);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void init__9TItemDataFv(void *);
s32 pop_byte__6TLobbyFv(void *);
void shuffle_shop_pool_n_times(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFv(void *);
void sort_shop_items(s32, s32, s32);
s32 get_level_tier__6TLobbyFl(s32 arg0);
s32 level_to_reward__6TLobbyFl(s32 arg0);
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
s32 classify_level_bracket_narrow__6TLobbyFl(s32 arg0);
s32 classify_level_bracket_wide__6TLobbyFl(s32 arg0);
void clear_lobby_flag__6TLobbyFv(void);
void free_all_rocks__6TLobbyFv(void);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 get_level_bracket__6TLobbyFl(s32 arg0);
s32 get_level_tier__6TLobbyFl(s32 arg0);
s32 get_lobby_id__6TLobbyFPv(void* p);
int get_short_mail_ctrl__6TLobbyFv(void);
int is_flag_set__6TLobbyFPv(void* p);
s32 level_to_reward__6TLobbyFl(s32 arg0);
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1);
void try_close__6TLobbyFPv(void* p);
s32 free_nodes_with_id__6TLobbyFUl(u32);
void TLobby__sub_80225A08(void*);
s32 mem_free(u32);

void play_sound_effect(s32, s32, s32, s32);
unsigned char lbl_80513F70[0x680];
s32 lbl_805D6270;
int lobby_short_mail_entry_count;

void try_close__6TLobbyFPv(void* p) { if (is_name_too_long__6TLobbyFPv((O_80225B90 *)(p)) == 0) { TLobby__sub_80225A08(p); } }

typedef struct RecoveredGlobal_802258C8_lbl_80513F70 RecoveredGlobal_802258C8_lbl_80513F70;
typedef char RecoveredGlobal_802258C8_lbl_80513F70_size[((sizeof(RecoveredGlobal_802258C8_lbl_80513F70)) == 0x680) ? (1) : (-1)];

void send_simple_mail__6TLobbyFiPv(s32 arg0, void *arg1) {
    Tag_80225828 t;
    s32 mode;
    init_guild_card_tag__6TLobbyFi(&t);
    if (TLobby__protocol_instance != 0) {
        mode = get_keyboard_mode__17TWindowSubComCardFv();
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&t.b[4], TLobby__protocol_instance + 0x1900);
        strncpy((void *)(&t.b[0xC]), (void *)(((void *)get_com_card_list__6TLobbyFPv((void*)((void *)mode)))), (int)(0x17));
        *(s32 *)&t.b[0x1C] = arg0;
        t.b[0x23] = 0;
        strncpy((void *)(&t.b[0x20]), (void *)(arg1), (int)(0xAB));
        t.b[0xCB] = 0;
        send_simple_mail__9TProtocolFR12TChatMessage(TLobby__protocol_instance, &t);
    }
}

void TLobby__sub_802258C8(void) {
  s32 var_r31;
  s32 *var_r30;
  var_r31 = 0;
  var_r30 = (s32 *) (&(*(RecoveredGlobal_802258C8_lbl_80513F70 *)&lbl_80513F70).value);
  do
  {
    if (((s32)is_flag_set__6TLobbyFPv((void*)(var_r30))) != 0)
    {
      TLobby__sub_80225C8C((void*)((int) var_r30));
    }
    var_r31 += 1;
    var_r30 = (s32 *) (((u8 *) var_r30) + 0xD0);
  }
  while (var_r31 < 8);
}

void *find_short_mail_by_id__6TLobbyFUi(u32 id) {
    s32 count = ((s32)get_short_mail_ctrl__6TLobbyFv());
    s32 i;
    for (i = 0; i < count; i++) {
        void *o = TLobby__sub_8022598C((int)(i));
        if (id == get_lobby_id__6TLobbyFPv((void*)(o))) {
            return o;
        }
    }
    return 0;
}

void *TLobby__sub_8022598C(int a0) {
  unsigned char *new_var;
  new_var = lbl_80513F70;
  if ((!new_var) && (!new_var))
  {
  }
  return ((char *) new_var) + (a0 * 0xd0);
}

typedef struct RecoveredGlobal_802259A0_lbl_80513F70 RecoveredGlobal_802259A0_lbl_80513F70;
typedef char RecoveredGlobal_802259A0_lbl_80513F70_size[((sizeof(RecoveredGlobal_802259A0_lbl_80513F70)) == 0x680) ? (1) : (-1)];
s32 find_free_slot__6TLobbyFv(void) {
  s32 var_r31;
  s32 *var_r30;
  var_r31 = 0;
  var_r30 = (s32 *) (&(*(RecoveredGlobal_802259A0_lbl_80513F70 *)&lbl_80513F70).value);
  loop_1:
  if (is_flag_set__6TLobbyFPv((void*)(var_r30)) == 0)
  {
    return var_r31;
  }
  var_r31 += 1;
  var_r30 = (s32 *) ((u8 *) ((s32 *) (((u8 *) var_r30) + 0xD0)));
  if (var_r31 >= 8)
  {
    remove_entry_at__6TLobbyFi((s32)(0));
    return 7;
  }
  goto loop_1;
}

void remove_short_mail_by_id(u32 id) {
    s32 count = get_short_mail_ctrl__6TLobbyFv();
    s32 i;
    for (i = 0; i < count; i++) {
        if (id == (u32)get_lobby_id__6TLobbyFPv(TLobby__sub_8022598C(i))) {
            remove_entry_at__6TLobbyFi(i);
            return;
        }
    }
}

void remove_entry_at__6TLobbyFi(s32 idx) {
    if (idx < 7) {
        L_80225AD8 *p = &((L_80225AD8 *)&lbl_80513F70)[idx];
        move_words__6TLobbyFPUll((int)p, p + 1, (void *)(((7 - idx) * sizeof(L_80225AD8)) >> 2));
    }
    ((L_80225AD8 *)&lbl_80513F70)[7].flags &= ~1;
    (*(s32 *)&lobby_short_mail_entry_count) = (*(s32 *)&lobby_short_mail_entry_count) - 1;
}

void clear_all_entries__6TLobbyFPv(void* _w0) {
    s32 i;
    L_80225B40 *p;
    lbl_805D6270 = 0;
    (*(s32 *)&lobby_short_mail_entry_count) = 0;
    clear_lobby_flag__6TLobbyFv();
    p = ((L_80225B40 *)&lbl_80513F70);
    for (i = 0; i < 8; i++) {
        p->flags &= ~1;
        p++;
    }
}

s32 is_name_too_long__6TLobbyFPv(O_80225B90 *o) {
    s32 i = 0;
    char *p = o->name;
    while (*p++ != 0) {
        if (i > 0xaa) {
            return 1;
        }
        i++;
    }
    return 0;
}

void fill_list_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r7;
    *(s32 *)((s8 *)arg0 + 0) = (s32) *(s32 *)((s8 *)arg1 + 8);
    temp_r7 = lbl_805D6270;
    lbl_805D6270 = temp_r7 + 1;
    *(s32 *)((s8 *)arg0 + 4) = temp_r7;
    *(s8 *)((s8 *)arg0 + 0xCC) = 0xB;
    strncpy((void *) (arg0 + 8), (void *) (arg1 + 0xC), (int) (0x17));
    *(s8 *)((s8 *)arg0 + 0x1F) = 0;
    strncpy((void *) (arg0 + 0x20), (void *) (arg1 + 0x20), (int) (0xAB));
    *(s8 *)((s8 *)arg0 + 0xCB) = 0;
}

void TLobby__sub_80225C44(void* p) { clear_all_entries__6TLobbyFPv((void*)(p)); }
void TLobby__sub_80225C64(void* p) { clear_all_entries__6TLobbyFPv((void*)(p)); }
void* get_com_card_list__6TLobbyFPv(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int is_flag_set__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 get_lobby_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lobby_short_mail_entry_count;
int get_short_mail_ctrl__6TLobbyFv(void) {  return lobby_short_mail_entry_count; }

extern u16 lbl_805D63FC;

void TLobby__sub_80225CB8(void) {
    lbl_805D63FC |= 1;
}

extern u16 lbl_805D63FC;

void clear_lobby_flag__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFE;
}

}
