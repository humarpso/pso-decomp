#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80103748 { char pad[0x18]; };
struct VObj_80103748 : Base_80103748 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
};

struct Player_801036CC { u8 pad[0x10]; void *owner; };

struct Ent_801037A0 { u8 pad0[0xE]; u16 key; u8 padx[0xC]; s32 val; u8 pad2[4]; };

struct Msg_801037A0 { u32 hdr; s32 v; s32 who; };

struct Save_80103890 {
    u16 slots[0x10];
    s32 boss[0xC];
    s32 counts[0xF];
    Ent_801037A0 items[1];
};

struct Ent_80103DD8 { s8 n; u8 pad1[0xD]; u16 key; u8 padx[0xC]; s32 val; u8 pad2[4]; };

struct Save_801039BC {
    u16 slots[0x10];
    s32 boss[0xC];
    s32 counts[0xF];
    Ent_801037A0 items[1];
};

extern "C" {
extern s32 lbl_805D5420;
s32 TLobby__sub_8010385C(s32 arg0);
s32 TLobby__sub_80103B44(s32 arg0);
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
u16 TLobby__sub_80103AD4(void);
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
s32 TLobby__sub_80103B04(u16 arg0);
Player_801036CC *get_player_data__10TObjPlayerFi(s32 i);
s32 test_elt_flag__10TObjPlayerFPvii(void *p, s32 a, s32 mask);
void queue_destruction__7TObjectFv(void *);
s32 get_lobby_flag__6TLobbyFv(void);
void reset_floor_items__6TLobbyFv(void);
extern void *tl_05;
void TLobby__sub_801036CC(void);
void update_and_send__6TLobbyFPv(void *);
void TLobby__sub_801041BC(void *, void *);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
void TLobby__sub_801037A0(s32 n);
void reset_floor_items__6TLobbyFv(void);
void TLobby__sub_801042C0(void *);
void set_boss_buf_entry__6TLobbyFii(s32, u16);
void TLobby__sub_80104258(void *, void *);
void bswap_item__6TLobbyFPv(void *);
void TItemData__sub_8010CCB0(void *);
s32 test_flags_any(void *, s32);
void TLobby__sub_801041D8(void);
extern u16 *lbl_805D542C;
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5440;
void apply_sync_item_state__6TLobbyFPv(Save_80103890 *src);
void TLobby__sub_8010314C(Ent_801037A0 *);
void debug_print__6TLobbyFii(const char *, ...);
void *memcpy(void *, const void *, u32);
extern char lbl_8043E048[];
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
s32 remove_item_condition__6TLobbyFii(s32 n, s32 val);
void debug_print__6TLobbyFii(const char *, ...);
extern char lbl_8043E048[];
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
Ent_801037A0 *TLobby__sub_80103D10(s32 n, s32 val);
void TLobby__sub_801037A0(s32 n);
s32 TLobby__sub_8010385C(s32 arg0);
s32 TLobby__sub_80103B44(s32 arg0);
void TLobby__sub_80104258(void *, void *);
void *memcpy(void *, const void *, u32);
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
extern u16 *lbl_805D542C;
s32 insert_sorted_entry__6TLobbyFPv(Ent_80103DD8 *e);
void *find_item_by_id(s32);
void spawn_dropped_item_from_msg(void *, s32);
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
void TLobby__sub_80103B70(s32 n);
void TLobby__sub_801042C0(void *);
s32 get_sync_counter__6TLobbyFi(u16);
void TLobby__sub_80104258(void *, void *);
void bswap_item__6TLobbyFPv(void *);
void normalize__9TItemDataFv(void *);
extern u16 *lbl_805D542C;
extern Ent_801037A0 **lbl_805D541C;
extern s32 lbl_805D5420;
s32 write_sync_item_state__6TLobbyFPv(void *arg0);
}

extern "C" {

void *find_item_by_id(s32);
M2C_UNK bswap_player_packet__6TLobbyFPv();

void TLobby__sub_801036CC(void) {
    s32 i;
    Player_801036CC *p;
    for (i = 0; i != get_lobby_flag__6TLobbyFv(); i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && test_elt_flag__10TObjPlayerFPvii(p, 0, 0x20000) != 0 && p->owner == tl_05) {
            queue_destruction__7TObjectFv(p);
        }
    }
    reset_floor_items__6TLobbyFv();
}

void handle_6x63_destroy_floor_item(void *arg0) {
    struct VObj_80103748 *o;

    bswap_player_packet__6TLobbyFPv();
    remove_item_condition__6TLobbyFii((s32)(M2C_FIELD(arg0, s32 *, 8)), (s32)(M2C_FIELD(arg0, s32 *, 4)));
    o = (struct VObj_80103748 *)find_item_by_id(M2C_FIELD(arg0, s32 *, 4));
    if (o != NULL) {
        o->m27();
    }
}

void TLobby__sub_801037A0(s32 n) {
    Msg_801037A0 m;
    s32 best;
    u16 bestKey;
    s32 i;
    s32 v;
    if (lbl_805D53A0 == TLobby__data_805D53AC) {
        bestKey = 0xFFFF;
        best = 0;
        for (i = 0; i != (*(s32 * *)&lbl_805D5420)[n]; i++) {
            if (lbl_805D541C[n][i].key < bestKey) {
                best = i;
                bestKey = lbl_805D541C[n][i].key;
            }
        }
        v = lbl_805D541C[n][best].val;
        TLobby__sub_801041BC(&m, &lbl_805D541C[n][best]);
        m.v = v;
        m.who = n;
        update_and_send__6TLobbyFPv(&m);
    }
}

s32 TLobby__sub_8010385C(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x12) && ((s32) M2C_FIELD(lbl_805D5420, M2C_UNK *, (arg0 * 4)) < 0x32)) {
        return 0;
    }
    return 1;
}

void apply_sync_item_state__6TLobbyFPv(Save_80103890 *src) {
    s32 i;
    u16 b;
    s32 k;
    s32 j;
    s32 count;
    Ent_801037A0 *p;
    s32 n;
    reset_floor_items__6TLobbyFv();
    TLobby__sub_801042C0(src);
    for (i = 0; i < 0x10; i++) {
        lbl_805D542C[i] = src->slots[i];
    }
    for (b = 0; b != 0xC; b++) {
        set_boss_buf_entry__6TLobbyFii(src->boss[b], b);
    }
    for (i = 0; i < 0xF; i++) {
        (*(s32 **)&lbl_805D5420)[i] = src->counts[i];
    }
    k = 0;
    for (j = 0; j != 0xF; j++) {
        count = (*(s32 **)&lbl_805D5420)[j];
        p = lbl_805D541C[j];
        for (n = 0; n != count; n++, p++) {
            TLobby__sub_80104258(p, &src->items[k++]);
            bswap_item__6TLobbyFPv(p);
            TItemData__sub_8010CCB0((u8 *)p + 0x10);
        }
    }
    if (test_flags_any(&lbl_805D5440, 1) != 0) {
        TLobby__sub_80103B70((s32)(0));
    }
    TLobby__sub_801041D8();
}

#pragma push
#pragma opt_propagation off
s32 write_sync_item_state__6TLobbyFPv(void *arg0) {
    s32 i;
    u16 b;
    Save_801039BC *dst = (Save_801039BC *)arg0;
    s32 k;
    Ent_801037A0 *d;
    s32 j;
    s32 count;
    Ent_801037A0 *p;
    s32 n;
    for (i = 0; i < 0x10; i++) {
        dst->slots[i] = lbl_805D542C[i];
    }
    for (b = 0; b != 0xC; b++) {
        dst->boss[b] = get_sync_counter__6TLobbyFi(b);
    }
    for (i = 0; i < 0xF; i++) {
        dst->counts[i] = (*(s32 **)&lbl_805D5420)[i];
    }
    d = dst->items;
    k = 0;
    for (j = 0; j != 0xF; j++) {
        count = (*(s32 **)&lbl_805D5420)[j];
        p = lbl_805D541C[j];
        for (n = 0; n != count; n++, p++, k++) {
            TLobby__sub_80104258(d, p);
            normalize__9TItemDataFv((u8 *)d + 0x10);
            bswap_item__6TLobbyFPv(d);
            d++;
        }
    }
    i = k * 0x24 + 0x8C;
    TLobby__sub_801042C0(dst);
    return i;
}
#pragma pop

u16 TLobby__sub_80103AD4(void) {
    s32 temp_r0;
    if ((s32) lbl_805D5428 != 0) {
        temp_r0 = lbl_805D5428 - 1;
        lbl_805D5428 = temp_r0;
        return M2C_FIELD((lbl_805D5424 + (temp_r0 * 2)), u16 *, 0);
    }
    return 0xFFFFU;
}

s32 TLobby__sub_80103B04(u16 arg0) {
  if ((lbl_805D5428 < 0x20) && (arg0 != (((((((((-1) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF)))
  {
    *((u16 *) (((s8 *) (lbl_805D5424 + (lbl_805D5428 * 2))) + 0)) = arg0;
    lbl_805D5428 += 1;
    return 1;
  }
  return 0;
}

s32 TLobby__sub_80103B44(s32 arg0) {
    if (((s32) M2C_FIELD(lbl_805D5420, M2C_UNK *, (arg0 * 4)) < 0xC0) && (arg0 < 0x12)) {
        return 1;
    }
    return 0;
}

void TLobby__sub_80103B70(s32 n) {
    s32 i;
    if (n < 0x12) {
        if (lbl_805D541C[n] != 0) {
            for (i = 0; i != (*(s32 **)&lbl_805D5420)[n]; i++) {
                Ent_801037A0 *e = &lbl_805D541C[n][i];
                if (find_item_by_id(e->val) == 0) {
                    spawn_dropped_item_from_msg(e, 1);
                }
            }
        }
    }
}

s32 remove_item_condition__6TLobbyFii(s32 n, s32 val) {
    Ent_801037A0 *list;
    s32 count;
    s32 lo;
    s32 mid;
    s32 hi;
    if (n >= 0x12) {
        return 0;
    }
    list = lbl_805D541C[n];
    if (list != NULL) {
        count = (*(s32 **)&lbl_805D5420)[n];
        if (count == 0) {
            return 0;
        }
        hi = count - 1;
        lo = 0;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (list[mid].val < val) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        if (val == list[lo].val) {
            memcpy(&list[lo], &list[lo + 1], (count - (lo + 1)) * 0x24);
            (*(s32 **)&lbl_805D5420)[n]--;
            TLobby__sub_8010314C(&list[(*(s32 **)&lbl_805D5420)[n]]);
            return 1;
        }
        return 0;
    }
    debug_print__6TLobbyFii(lbl_8043E048);
    return 0;
}
Ent_801037A0 *TLobby__sub_80103D10(s32 n, s32 val) {
    Ent_801037A0 *list;
    s32 count;
    s32 lo;
    s32 mid;
    s32 hi;
    Ent_801037A0 *p;
    if (n >= 0x12) {
        return NULL;
    }
    list = lbl_805D541C[n];
    if (list != NULL) {
        count = (*(s32 **)&lbl_805D5420)[n];
        if (count == 0) {
            return NULL;
        }
        hi = count - 1;
        lo = 0;
        while (lo < hi) {
            mid = (lo + hi) >> 1;
            if (list[mid].val < val) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        p = &list[lo];
        if (val == p->val) {
            return p;
        }
        return NULL;
    }
    debug_print__6TLobbyFii(lbl_8043E048);
    return NULL;
}
s32 insert_sorted_entry__6TLobbyFPv(Ent_80103DD8 *e) {
    s32 *counts;
    s32 idx;
    Ent_80103DD8 *list;
    s32 lo;
    s32 mid;
    s32 n;
    s32 val;
    s32 hi;
    Ent_80103DD8 *p;
    if (e != NULL) {
        if (TLobby__sub_8010385C(e->n) != 0) {
            TLobby__sub_801037A0(e->n);
        }
        if (e->n < 0x12 && TLobby__sub_80103B44(e->n) != 0) {
            idx = e->n;
            list = (*(Ent_80103DD8 ** *)&lbl_805D541C)[idx];
            if (list != NULL) {
                counts = *(s32 **)&lbl_805D5420;
                val = e->val;
                n = counts[idx];
                hi = n - 1;
                if (hi > -1 && val < list[hi].val) {
                    lo = 0;
                    while (lo < hi) {
                        mid = (lo + hi) / 2;
                        if (list[mid].val < val) {
                            lo = mid + 1;
                        } else {
                            hi = mid;
                        }
                    }
                    p = &list[lo];
                    if (val == p->val) {
                        return 0;
                    }
                    memcpy(p + 1, p, (n - lo) * sizeof(Ent_80103DD8));
                } else {
                    lo = n;
                }
                e->key = lbl_805D542C[e->n];
                if (lbl_805D542C[e->n] != 0xFFFF) {
                    lbl_805D542C[e->n]++;
                }
                TLobby__sub_80104258(&list[lo], e);
                counts[idx]++;
                return 1;
            }
        }
    }
    return 0;
}

}
