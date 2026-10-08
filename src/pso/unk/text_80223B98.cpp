#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_80224404_lbl_80513F20 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802243D4_lbl_80513F10 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct E_8022444C { u8 pad[0x10]; s32 f10; };

struct Item_802242F8 { u8 b[0x14]; };

struct Pair_802242F8 { s32 a; s32 b; };

struct Tbl_802242F8 { u8 *base; u8 count; };

struct Tbl_802242F8;
struct Tbl_80223EE0 { u8 *base; u8 count; };

struct Ent_80223EE0 { u8 kind; u8 a; u8 b; };

struct Obj_80223EE0 { u8 pad[2]; s8 lv; };

struct RecoveredGlobal_80224404_lbl_80513F20;
struct Obj_80223EE0;
struct Ent_8022403C { u8 id; u8 n; };

struct Tbl_8022403C { u8 pad[8]; Ent_8022403C *base; u8 count; };

struct Ctr_8022403C { u8 buf[0x74]; };

struct Ent_80224190 { u8 id; u8 n; };

struct Tbl_80224190 { Ent_80224190 *base; u8 count; };

struct Ctr_80224190 { u8 buf[0x74]; };

extern "C" {
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
void TLobby__sub_80224404(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_802243D4_lbl_80513F10 shop_tool_flags;
void clear_shop_tool_flags(void);
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
void mark_shop_tool_sold_out(s32 a, s32 b);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void init__9TItemDataFv(void *);
s32 classify_tool_shop_level_bracket(s32 arg0);
extern Pair_802242F8 lbl_8044C398[];
extern s32 lbl_80513EF0[];
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
extern Tbl_802242F8 **lobby_tool_random_rel;
extern s32 lbl_805D6264;
void generate_shop_common_tool_pool(s32 arg0);
s32 TLobby__sub_80223D48(s32 arg0);
s32 rand();
extern Tbl_802242F8 **lobby_tool_random_rel;
extern s32 lbl_805D6264;
void roll_shop_technique_level(Obj_80223EE0 *arg0, s32 arg1);
s32 fn_80223B98(s32 arg0);
s32 TLobby__sub_80223D48(s32 arg0);
void reset_counter_64__6TLobbyFPv(void *);
void push_shop_pool_entry(void *, u8);
void shuffle_shop_pool_n_times(void *, s32);
s32 pop_byte__6TLobbyFPv(void *);
void init__9TItemDataFv(void *);
void copy_item_data__6TLobbyFPvPv(void *, void *);
void roll_shop_technique_level(Obj_80223EE0 *arg0, s32 arg1);
s32 TLobby__sub_80223DD8(Item_802242F8 *, s32);
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
extern s32 lbl_80513EF0[];
extern s32 lbl_8044C418[];
extern Tbl_802242F8 **lobby_tool_random_rel;
extern s32 lbl_805D6264;
void generate_shop_technique_pool(s32 arg0);
s32 fn_80223C28(s32 arg0);
s32 TLobby__sub_80223D48(s32 arg0);
void reset_counter_64__6TLobbyFPv(void *);
void push_shop_pool_entry(void *, u8);
void shuffle_shop_pool_n_times(void *, s32);
s32 pop_byte__6TLobbyFPv(void *);
void init__9TItemDataFv(void *);
void copy_item_data__6TLobbyFPvPv(void *, void *);
s32 TLobby__sub_80223E64(Item_802242F8 *, s32);
extern RecoveredGlobal_80224404_lbl_80513F20 lbl_80513F20;
extern s32 lbl_80513EF0[];
extern Pair_802242F8 lbl_8044C398[];
extern Tbl_802242F8 **lobby_tool_random_rel;
extern s32 lbl_805D6264;
void generate_shop_rare_tool_pool(s32 arg0);
}

extern "C" {

s32 fn_80223B98(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 4;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 5;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 5;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 7;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 fn_80223C28(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 2;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 2;
    }
    if (arg0 >= 0x65) {
        return 2;
    }
    return -1;
}

s32 classify_tool_shop_level_bracket(s32 arg0) {
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
    if (arg0 >= 0x64) {
        return 5;
    }
    return -1;
}

s32 TLobby__sub_80223D48(s32 arg0) {
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
typedef char RecoveredGlobal_80224404_lbl_80513F20_size[sizeof(RecoveredGlobal_80224404_lbl_80513F20) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_802243D4_lbl_80513F10_size[sizeof(RecoveredGlobal_802243D4_lbl_80513F10) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80224404_lbl_80513F20;

void roll_shop_technique_level(Obj_80223EE0 *arg0, s32 arg1) {
    Tbl_80223EE0 *t = ((Tbl_80223EE0 **)lobby_tool_random_rel)[2];
    s32 idx = TLobby__sub_80223D48(lbl_805D6264);
    Ent_80223EE0 *e;
    s32 level;
    idx *= t->count;
    e = &((Ent_80223EE0 *)t->base)[idx + arg1];
    level = lbl_805D6264;
    if (level > 99) {
        level = 99;
    }
    switch (e->kind) {
    case 0:
        arg0->lv = 0;
        break;
    case 1: {
        s8 v = level / e->a - 1;
        if (v < 0) {
            v = 0;
        }
        if (v > 14) {
            v = 14;
        }
        arg0->lv = v;
        break;
    }
    case 2: {
        s32 lo;
        s8 v = (s8)((f32)e->b * ((1.0f / 32768.0f) * (f32)rand()));
        lo = e->a - 1;
        if (v < lo) {
            v = lo;
        }
        if (v < 0) {
            v = 0;
        }
        if (v > 14) {
            v = 14;
        }
        arg0->lv = v;
        break;
    }
    }
}

void generate_shop_technique_pool(s32 arg0) {
    Item_802242F8 it;
    Ctr_8022403C ctr;
    Ent_8022403C *e;
    s32 n;
    Item_802242F8 *arr;
    Tbl_8022403C *t;
    s32 i;
    s32 c;
    u8 k;
    arr = ((Item_802242F8 **)&lbl_80513F20)[arg0];
    n = fn_80223B98(lbl_805D6264);
    if (n > 0) {
        reset_counter_64__6TLobbyFPv(&ctr);
        i = TLobby__sub_80223D48(lbl_805D6264);
        t = ((Tbl_8022403C **)lobby_tool_random_rel)[1];
        e = &t->base[i * t->count];
        c = 0;
        while (c++ < t->count) {
            k = e->n;
            while (k-- != 0) {
                push_shop_pool_entry(&ctr, e->id);
            }
            e++;
        }
        shuffle_shop_pool_n_times(&ctr, 5);
        i = 0;
        while (i < n) {
            s32 b = pop_byte__6TLobbyFPv(&ctr);
            if (b != -1) {
                init__9TItemDataFv(&it);
                it.b[0] = 3;
                it.b[1] = 2;
                it.b[4] = lbl_8044C418[b];
                roll_shop_technique_level((Obj_80223EE0 *)&it, b);
                if (TLobby__sub_80223DD8(&it, arg0) == 1) {
                    copy_item_data__6TLobbyFPvPv(&arr[lbl_80513EF0[arg0]++], &it);
                    i++;
                }
            }
        }
    }
}

void generate_shop_rare_tool_pool(s32 arg0) {
    Item_802242F8 it;
    Ctr_80224190 ctr;
    Tbl_80224190 *t;
    s32 j;
    Item_802242F8 *arr;
    s32 n;
    Ent_80224190 *e;
    s32 orig;
    s32 i;
    s32 b;
    s32 c;
    u8 k;
    arr = ((Item_802242F8 **)&lbl_80513F20)[arg0];
    n = fn_80223C28(lbl_805D6264);
    if (n > 0) {
        reset_counter_64__6TLobbyFPv(&ctr);
        i = TLobby__sub_80223D48(lbl_805D6264);
        t = ((Tbl_80224190 **)lobby_tool_random_rel)[1];
        e = &t->base[i * t->count];
        c = 0;
        while (c++ < t->count) {
            k = e->n;
            while (k-- != 0) {
                push_shop_pool_entry(&ctr, e->id);
            }
            e++;
        }
        shuffle_shop_pool_n_times(&ctr, 8);
        {
            orig = n;
            j = 0;
            while (n > j) {
                b = pop_byte__6TLobbyFPv(&ctr);
                if (b == 0xF) {
                    if (orig == n) {
                        n--;
                    }
                } else if (b != -1) {
                    init__9TItemDataFv(&it);
                    it.b[0] = 3;
                    it.b[1] = lbl_8044C398[b].a;
                    it.b[2] = lbl_8044C398[b].b;
                    if (TLobby__sub_80223E64(&it, arg0) == 1) {
                        copy_item_data__6TLobbyFPvPv(&arr[lbl_80513EF0[arg0]++], &it);
                        j++;
                    }
                }
            }
        }
    }
}

void generate_shop_common_tool_pool(s32 arg0) {
    Item_802242F8 it;
    Item_802242F8 *arr;
    Tbl_802242F8 *t;
    u8 *p;
    s32 i;
    s32 row;
    arr = ((Item_802242F8 **)&lbl_80513F20)[arg0];
    row = classify_tool_shop_level_bracket(lbl_805D6264);
    if (row >= 0) {
        t = *lobby_tool_random_rel;
        row *= t->count;
        p = t->base + row;
        for (i = 0; i < t->count; i++, p++) {
            if (*p != 0xf) {
                init__9TItemDataFv(&it);
                it.b[0] = 3;
                it.b[1] = lbl_8044C398[*p].a;
                it.b[2] = lbl_8044C398[*p].b;
                copy_item_data__6TLobbyFPvPv(&arr[lbl_80513EF0[arg0]++], &it);
            }
        }
    }
}

void clear_shop_tool_flags(void) {
    memset((void *) (&shop_tool_flags.value), (int) (0), (int) (0x10));
}

void TLobby__sub_80224404(s32 arg0, s32 arg1, s32 arg2) {
    *(M2CCopy_14 *)(arg0) = *(const M2CCopy_14 *)(M2C_FIELD(&lbl_80513F20.value, M2C_UNK *, (arg2 * 4)) + (arg1 * 0x14));
}
void mark_shop_tool_sold_out(s32 a, s32 b) {
    E_8022444C *arr = ((E_8022444C * *)&lbl_80513F20)[b];
    if (a >= 0 && a <= 0x11) {
        if (arr[a].f10 != -1) {
            arr[a].f10 = -1;
        }
    }
}

}
