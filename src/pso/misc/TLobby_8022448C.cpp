#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct SRock_80224544_8022448C;

struct RecoveredGlobal_8022559C_lbl_80513F50 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802259A0_lbl_80513F70
{
  M2C_UNK value;
  u8 remaining[0x67C];
};

struct RecoveredGlobal_802258C8_lbl_80513F70
{
  M2C_UNK value;
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

extern "C" {
extern unsigned char lbl_80513F70[];
void *TLobby__sub_8022598C(int a0);
s32 strncpy(void *, void *, int);
extern s32 lbl_805D6270;
void TLobby__sub_80225BC8(u8 *arg0, u8 *arg1);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8022559C_lbl_80513F50 lbl_80513F50;
void TLobby__sub_8022559C(void);
int is_flag_set__6TLobbyFPv(void* p);
extern unsigned char lbl_80513F70[];
s32 TLobby__sub_802259A0(void);
int is_flag_set__6TLobbyFPv(void* p);
void TLobby__sub_80225C8C(void* p);
extern unsigned char lbl_80513F70[];
void TLobby__sub_802258C8(void);
s32 TLobby__sub_80225B90(O_80225B90 *o);
extern G_80225550 lbl_80513F60;
void TLobby__sub_80225550(C14_80225550 *dst, s32 idx, s32 tbl);
extern G_80225550 lbl_80513F60;
void TLobby__sub_802255CC(s32 a, s32 b);
int get_short_mail_ctrl__6TLobbyFv(void);
void *TLobby__sub_8022598C(int a0);
s32 get_lobby_id__6TLobbyFPv(void* p);
void *TLobby__sub_80225924(u32 id);
extern unsigned char lbl_80513F70[];
extern int lbl_805D6274;
s32 TLobby__sub_803DE7BC(int, void *, void *);
void TLobby__sub_80225AD8(s32 idx);
extern unsigned char lbl_80513F70[];
extern s32 lbl_805D6270;
extern int lbl_805D6274;
void clear_lobby_flag__6TLobbyFv(void);
void TLobby__sub_80225B40(void* _w0);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern u8 lbl_8044C478[];
extern M2C_UNK lbl_80513F20[];
extern u32 lbl_805D6260;
extern int lbl_805D6264;
void TLobby__sub_802245B4(void);
M2C_UNK TLobby__sub_800F957C(u32);
M2C_UNK free__11TOBoss4RockFUi(u32);
extern G_80225550 lbl_80513F60;
extern u32 lbl_805D6268;
void TLobby__sub_80225618(void);
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
s32 get_keyboard_mode__17TWindowSubComCardFv(void);
void fn_801DB878(void *, void *);
s32 init_guild_card_tag__6TLobbyFi(void *);
void* get_com_card_list__6TLobbyFPv(void* p);
s32 strncpy(void *, void *, int);
extern u8 *TLobby__data_805D5580;
void TLobby__sub_80225828(s32 arg0, void *arg1);
s32 memcmp(const void *, const void *, u32);
extern Cnt_80224B7C lbl_80513F40[];
extern G_80225550 lbl_80513F60;
s32 TLobby__sub_80224B7C(C14_80224B7C *item, s32 tbl);
s8 TLobby__sub_8010540C(s32);
s32 pop_byte__6TLobbyFPv(void *);
void TLobby__sub_8020EEFC(void *, s32);
void push_shop_pool_entry(void *, u8);
void reset_counter_64__6TLobbyFPv(void *);
s32 TLobby__sub_80224840(s32 arg0);
extern u32 lbl_805D6268;
extern int lbl_805D626C;
void TLobby__sub_80224F7C(Obj_80224F7C *obj);
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern char lbl_8044C7C0[];
extern char lbl_8044C7D8[];
extern char lbl_8044C7F0[];
extern char lbl_8044C80C[];
extern G_80225550 lbl_80513F60;
extern s32 lbl_805D6240;
extern u32 lbl_805D6268;
extern int lbl_805D626C;
void TLobby__sub_802256B8(void);
u8 get_entry_field16__9TItemDataFv(void *);
s32 classify_level_bracket_narrow__6TLobbyFi(s32 arg0);
s32 rand();
extern s32 lbl_804CA0B8[];
extern s32 lbl_805D6238;
extern u32 lbl_805D6268;
extern int lbl_805D626C;
extern const f32 lbl_805DC738;
void TLobby__sub_80225064(Item_80225064 *it);
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
M2C_UNK TLobby__sub_800F957C(u32);
int TLobby__sub_802244B0(void);
int TLobby__sub_8022525C(void);
int TLobby__sub_80225A08(void*);
M2C_UNK free__11TOBoss4RockFUi(u32);

    extern int lbl_805D6264;
void set_6264_and_call_2244B0__6TLobbyFii(int a0, int a1) { lbl_805D6264 = a1; TLobby__sub_802244B0(); }

extern M2C_UNK lbl_80513F20[];
extern u32 lbl_805D6260;

void free_all_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    M2C_UNK *var_r29 = lbl_80513F20;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (M2C_UNK)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6260 != 0U) {
        TLobby__sub_800F957C(lbl_805D6260);
        lbl_805D6260 = var_r30;
    }
}

void TLobby__sub_802245B4(void) {
    s32 i;
    (*(s32 *)&lbl_805D6260) = create_named_object(lbl_8044C478);
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513F20)[i] = 0;
    }
    if (is_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            ((s32 *)&lbl_80513F20)[i] = alloc_buffer__11TOBoss4RockFPv(0x168);
        }
    } else {
        ((s32 *)&lbl_80513F20)[0] = alloc_buffer__11TOBoss4RockFPv(0x168);
    }
    (*(s32 *)&lbl_805D6264) = 0;
}

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

extern s32 lbl_805D6240;

s32 get_level_tier__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6240 != 3) {
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

    extern int lbl_805D626C;

#pragma push
#pragma optimization_level 1
struct G_80225550;
s32 TLobby__sub_80224B7C(C14_80224B7C *item, s32 tbl) {
    s32 n;
    C14_80224B7C *p;
    s32 i;
    if (lbl_80513F40[tbl].n == 0) {
        return 1;
    }
    n = 0;
    p = ((Lst_80224B7C *)&lbl_80513F60)[tbl].p;
    for (i = 0; i < lbl_80513F40[tbl].n; i++, p++) {
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
void TLobby__sub_80224F7C(Obj_80224F7C *obj) {
    u8 buf[0x68];
    Ent_80224F7C *e;
    s32 idx;
    s32 i;
    s32 n;
    reset_counter_64__6TLobbyFPv(buf);
    e = ((Hdr_80224F7C *)lbl_805D6268)->ents;
    idx = TLobby__sub_80224840(lbl_805D626C);
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
    TLobby__sub_8020EEFC(buf, 3);
    switch (pop_byte__6TLobbyFPv(buf)) {
    case 1:
        obj->v = TLobby__sub_8010540C(0);
        break;
    case 2:
        obj->v = TLobby__sub_8010540C(1);
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
void TLobby__sub_80225064(Item_80225064 *it) {
    Range_80225064 *lo;
    Range_80225064 *hi;
    s32 b;
    u8 v;
    u8 m;
    lo = ((Tbl_80225064 *)lbl_805D6268)->lo;
    hi = ((Tbl_80225064 *)lbl_805D6268)->hi;
    b = classify_level_bracket_narrow__6TLobbyFi(lbl_805D626C);
    if (b != -1) {
        if (lbl_804CA0B8[lbl_805D6238] != -1 && it->f1 == lbl_804CA0B8[lbl_805D6238]) {
            v = (f32)(hi[b].max + 1) * (lbl_805DC738 * (f32)rand());
            if (v < hi[b].min) {
                v = hi[b].min;
            }
        } else {
            v = (f32)(lo[b].max + 1) * (lbl_805DC738 * (f32)rand());
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

void TLobby__sub_80225238(int a0, int a1) { lbl_805D626C = a1; TLobby__sub_8022525C(); }

typedef char RecoveredGlobal_8022559C_lbl_80513F50_size[sizeof(RecoveredGlobal_8022559C_lbl_80513F50) == 0x10 ? 1 : -1];

#pragma push
#pragma optimization_level 1
void TLobby__sub_80225550(C14_80225550 *dst, s32 idx, s32 tbl) {
    C14_80225550 *arr = ((C14_80225550 **)&lbl_80513F60)[tbl];
    *dst = arr[idx];
}
#pragma pop

void TLobby__sub_8022559C(void) {
    memset((void *) (&lbl_80513F50.value), (int) (0), (int) (0x10));
}

#pragma push
#pragma optimization_level 1
void TLobby__sub_802255CC(s32 a, s32 b) {
    E_802255CC *arr = ((E_802255CC **)&lbl_80513F60)[b];
    if (a >= 0 && a <= 0xf) {
        if (arr[a].f10 != -1) {
            arr[a].f10 = -1;
        }
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TLobby__sub_80225618(void) {
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (((u32 *)&lbl_80513F60)[i] != 0) {
            free__11TOBoss4RockFUi(((u32 *)&lbl_80513F60)[i]);
            ((u32 *)&lbl_80513F60)[i] = 0;
        }
    }
    if (lbl_805D6268 != 0) {
        TLobby__sub_800F957C((u32)((void *)lbl_805D6268));
        lbl_805D6268 = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TLobby__sub_802256B8(void) {
    s32 i;
    s32 j;
    switch (lbl_805D6240) {
    case 0:
        lbl_805D6268 = create_named_object(lbl_8044C7C0);
        break;
    case 1:
        lbl_805D6268 = create_named_object(lbl_8044C7D8);
        break;
    case 2:
        lbl_805D6268 = create_named_object(lbl_8044C7F0);
        break;
    case 3:
        lbl_805D6268 = create_named_object(lbl_8044C80C);
        break;
    default:
        lbl_805D6268 = create_named_object(lbl_8044C7C0);
        break;
    }
    for (j = 0; j < 4; j++) {
        ((s32 *)&lbl_80513F60)[j] = 0;
    }
    if (is_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            ((s32 *)&lbl_80513F60)[i] = alloc_buffer__11TOBoss4RockFPv(0x140);
        }
    } else {
        ((s32 *)&lbl_80513F60)[0] = alloc_buffer__11TOBoss4RockFPv(0x140);
    }
    lbl_805D626C = 0;
}
#pragma pop

void try_close__6TLobbyFPv(void* p) { if (TLobby__sub_80225B90((O_80225B90 *)(p)) == 0) { TLobby__sub_80225A08(p); } }

typedef struct RecoveredGlobal_802258C8_lbl_80513F70 RecoveredGlobal_802258C8_lbl_80513F70;
typedef char RecoveredGlobal_802258C8_lbl_80513F70_size[((sizeof(RecoveredGlobal_802258C8_lbl_80513F70)) == 0x680) ? (1) : (-1)];

void TLobby__sub_80225828(s32 arg0, void *arg1) {
    Tag_80225828 t;
    s32 mode;
    init_guild_card_tag__6TLobbyFi(&t);
    if (TLobby__data_805D5580 != 0) {
        mode = get_keyboard_mode__17TWindowSubComCardFv();
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&t.b[4], TLobby__data_805D5580 + 0x1900);
        strncpy((void *)(&t.b[0xC]), (void *)(((void *)get_com_card_list__6TLobbyFPv((void*)((void *)mode)))), (int)(0x17));
        *(s32 *)&t.b[0x1C] = arg0;
        t.b[0x23] = 0;
        strncpy((void *)(&t.b[0x20]), (void *)(arg1), (int)(0xAB));
        t.b[0xCB] = 0;
        fn_801DB878(TLobby__data_805D5580, &t);
    }
}

void TLobby__sub_802258C8(void) {
  s32 var_r31;
  M2C_UNK *var_r30;
  var_r31 = 0;
  var_r30 = (M2C_UNK *) (&(*(RecoveredGlobal_802258C8_lbl_80513F70 *)&lbl_80513F70).value);
  do
  {
    if (((s32)is_flag_set__6TLobbyFPv((void*)(var_r30))) != 0)
    {
      TLobby__sub_80225C8C((void*)((int) var_r30));
    }
    var_r31 += 1;
    var_r30 = (M2C_UNK *) (((u8 *) var_r30) + 0xD0);
  }
  while (var_r31 < 8);
}

void *TLobby__sub_80225924(u32 id) {
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
s32 TLobby__sub_802259A0(void) {
  s32 var_r31;
  M2C_UNK *var_r30;
  var_r31 = 0;
  var_r30 = (M2C_UNK *) (&(*(RecoveredGlobal_802259A0_lbl_80513F70 *)&lbl_80513F70).value);
  loop_1:
  if (is_flag_set__6TLobbyFPv((void*)(var_r30)) == 0)
  {
    return var_r31;
  }
  var_r31 += 1;
  var_r30 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) (((u8 *) var_r30) + 0xD0)));
  if (var_r31 >= 8)
  {
    TLobby__sub_80225AD8((s32)(0));
    return 7;
  }
  goto loop_1;
}

void TLobby__sub_80225AD8(s32 idx) {
    if (idx < 7) {
        L_80225AD8 *p = &((L_80225AD8 *)&lbl_80513F70)[idx];
        TLobby__sub_803DE7BC((int)p, p + 1, (void *)(((7 - idx) * sizeof(L_80225AD8)) >> 2));
    }
    ((L_80225AD8 *)&lbl_80513F70)[7].flags &= ~1;
    (*(s32 *)&lbl_805D6274) = (*(s32 *)&lbl_805D6274) - 1;
}

void TLobby__sub_80225B40(void* _w0) {
    s32 i;
    L_80225B40 *p;
    lbl_805D6270 = 0;
    (*(s32 *)&lbl_805D6274) = 0;
    clear_lobby_flag__6TLobbyFv();
    p = ((L_80225B40 *)&lbl_80513F70);
    for (i = 0; i < 8; i++) {
        p->flags &= ~1;
        p++;
    }
}

s32 TLobby__sub_80225B90(O_80225B90 *o) {
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

void TLobby__sub_80225BC8(u8 *arg0, u8 *arg1) {
    s32 temp_r7;
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 8);
    temp_r7 = lbl_805D6270;
    lbl_805D6270 = temp_r7 + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r7;
    M2C_FIELD(arg0, s8 *, 0xCC) = 0xB;
    strncpy((void *) (arg0 + 8), (void *) (arg1 + 0xC), (int) (0x17));
    M2C_FIELD(arg0, s8 *, 0x1F) = 0;
    strncpy((void *) (arg0 + 0x20), (void *) (arg1 + 0x20), (int) (0xAB));
    M2C_FIELD(arg0, s8 *, 0xCB) = 0;
}

void TLobby__sub_80225C44(void* p) { TLobby__sub_80225B40((void*)(p)); }
void TLobby__sub_80225C64(void* p) { TLobby__sub_80225B40((void*)(p)); }
void* get_com_card_list__6TLobbyFPv(void* p) { return (char*)p + 0x8; }
void TLobby__sub_80225C8C(void* p) { *(u8*)((char*)p + 0xcc) &= 0xfffffffd; }
int is_flag_set__6TLobbyFPv(void* p) { return *(u8*)((char*)p + 0xcc) & 0x1; }
s32 get_lobby_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D6274;
int get_short_mail_ctrl__6TLobbyFv(void) {  return lbl_805D6274; }

extern u16 lbl_805D63FC;

void TLobby__sub_80225CB8(void) {
    lbl_805D63FC |= 1;
}

extern u16 lbl_805D63FC;

void clear_lobby_flag__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFE;
}

}
