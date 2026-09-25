#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tbl_8011C914 { u8 pad[0x2c]; u8 *p; };

struct Rule_8011CB18 { u8 type; u8 slots; u8 idx; u8 mode; };

struct RuleTbl_8011CB18 { s32 count; Rule_8011CB18 *rules; };

struct Entry_8011CB18 { u8 data[0x14]; };

struct Entries_8011CB18 { Entry_8011CB18 a[0xAA]; Entry_8011CB18 b[1]; };

struct Pmt_8011CB18 { u8 pad[0x1C]; Entry_8011CB18 *entries; u8 pad2[0x58 - 0x20]; RuleTbl_8011CB18 *rules; };

struct Base_8011CB18 { u8 pad[0x18]; };

struct Item_8011CB18 : Base_8011CB18 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual s32 m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual u8 m41();
};

struct Entry_8011C030 { u8 id[3]; u8 pad; };

struct List_8011C030 { s32 count; Entry_8011C030 *entries; };

struct Tbl_8011C030 { u8 pad[0x54]; List_8011C030 *list; };

struct Pair_8011C8BC { s16 a; s16 b; };

struct Tbl_8011C8BC { u8 pad[0x30]; Pair_8011C8BC *pairs; };

extern "C" {
M2C_UNK TItemDrop__sub_8010663C(u32, s32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TItemDrop__sub_80106818(u32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK TItemDrop__sub_80106930(u32, s32, s32);
M2C_UNK TLobby__sub_801044B8(s32 *);
extern void *item_mgr;
void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0);
extern void *item_pmt_tbl;
s32 TObjPlayer__sub_8011C940(s32 arg0, s32 arg1);
s32 TItemData__sub_8010EEDC(s32);
extern s32 lbl_805D2B10;
s32 get_item_by_slot_flag__10TObjPlayerFUc(u8 arg0);
s32 TItemDrop__sub_801065F8(int, void *, void *);
f32 TObjPlayer__sub_8011C2C4(void *);
s32 __cvt_fp2unsigned(f32);
extern void *item_mgr;
void TObjPlayer__sub_8011C328(u32 arg0, s32 arg1);
extern void *item_pmt_tbl;
u8 TObjPlayer__sub_8011CA98(u8 arg0);
extern void *item_pmt_tbl;
u8 TObjPlayer__sub_8011C1C8(s8 arg0, u8 arg1);
extern void *item_pmt_tbl;
s32 TObjPlayer__sub_8011C914(s32 id);
u8 get_field_ed__10TObjPlayerFPv(void *p);
u8 get_slot_count__14TItemProShieldFPv(void *p);
extern void *item_pmt_tbl;
Entry_8011CB18 *TObjPlayer__sub_8011CB18(Item_8011CB18 *item, s16 mode);
extern void *item_pmt_tbl;
s32 TObjPlayer__sub_8011C030(u8 *id);
extern void *item_pmt_tbl;
void TObjPlayer__sub_8011C8BC(u32 x, s16 *a, s16 *b);
}

extern "C" {

typedef struct Thing__8011c1e8_8011C000 { u8 a; u8 b; } Thing;

s32 get_item_pmt_entry__10TObjPlayerFUc(u8 arg0);
s32 get_shield_pmt_entry__10TObjPlayerFUc(u8 arg0);
void register_item_drop__10TObjPlayerFPv(void *arg0);
M2C_UNK set_drop_index__9TItemDropFPvPv(void *, void *);

extern void *item_pmt_tbl;

s32 get_item_pmt_entry__10TObjPlayerFUc(u8 arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(item_pmt_tbl, void **, 0x50);
    if ((s32) M2C_FIELD(temp_r5, s32 *, 0) > (s32) arg0) {
        return M2C_FIELD(temp_r5, s32 *, 4) + ((arg0 * 8) & 0x7F8);
    }
    return 0;
}

extern void *item_pmt_tbl;

s32 TObjPlayer__sub_8011C030(u8 *id) {
    List_8011C030 *l = ((Tbl_8011C030 *)item_pmt_tbl)->list;
    s32 n = l->count;
    Entry_8011C030 *e = l->entries;
    s32 i;
    for (i = 0; i != n; i++) {
        if (id[0] == e->id[0] && id[1] == e->id[1] && id[2] == e->id[2]) {
            return 1;
        }
        e++;
    }
    return 0;
}

s32 get_shield_pmt_entry__10TObjPlayerFUc(u8 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return M2C_FIELD(item_pmt_tbl, s32 *, 0x4C) + (arg0 * 0x18);
}

extern void *item_mgr;

u8 TObjPlayer__sub_8011C1C8(s8 arg0, u8 arg1) {
    return (*(u8 (**)[12])((s8 *)(*(u8 * *)&item_pmt_tbl) + 0x40))[arg1][arg0];
}

void register_item_drop__10TObjPlayerFPv(void *arg0) {
    Thing *p = (Thing *) arg0;

    if (p != 0 && item_mgr != 0 && p->a == 1 && p->b == 1) {
        set_drop_index__9TItemDropFPvPv(item_mgr, p);
    }
}

void TObjPlayer__sub_8011C328(u32 arg0, s32 arg1) {
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TItemDrop__sub_801065F8((int) ((*(u32 *)&item_mgr)), (void *) (arg0), (void *) (arg1));
        return;
    }
    __cvt_fp2unsigned((f32) arg0 * TObjPlayer__sub_8011C2C4((void *) (arg1)));
}

void drop_item_from_slot__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;
    s32 temp_r5;
    sp8 = arg1;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r5 = sp8 - 1;
        sp8 = temp_r5;
        TItemDrop__sub_8010663C((*(u32 *)&item_mgr), arg0, temp_r5, arg2);
    }
}
void drop_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;
    sp8 = arg0;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106818((*(u32 *)&item_mgr), temp_r4, arg1);
    }
}
void drop_meseta_from_slot__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r4;
    sp8 = arg0;
    if ((u32) (*(u32 *)&item_mgr) != 0U) {
        TLobby__sub_801044B8(&sp8);
        temp_r4 = sp8 - 1;
        sp8 = temp_r4;
        TItemDrop__sub_80106930((*(u32 *)&item_mgr), temp_r4, arg1);
    }
}
s32 get_unit_attribute_index__10TObjPlayerFUc(u8 arg0) {
    if ((arg0 & 0x3F) && !(arg0 & 0x80)) {
        return TObjPlayer__sub_8011C914((s32)(arg0 + 0x1CB));
    }
    return 0;
}

void TObjPlayer__sub_8011C8BC(u32 x, s16 *a, s16 *b) {
    u8 idx = x & 0x3f;
    if (idx < 0x29 && a != 0 && b != 0) {
        *a = ((Tbl_8011C8BC *)item_pmt_tbl)->pairs[idx].a;
        *b = ((Tbl_8011C8BC *)item_pmt_tbl)->pairs[idx].b;
        return;
    }
    *a = -1;
    *b = -1;
}

s32 TObjPlayer__sub_8011C914(s32 id) {
    if (id >= 0x94 && id < 0x2f7) {
        return (*(Tbl_8011C914 * *)&item_pmt_tbl)->p[id - 0x94];
    }
    return 0;
}

s32 TObjPlayer__sub_8011C940(s32 arg0, s32 arg1) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return M2C_FIELD(M2C_FIELD((*(u8 * *)&item_pmt_tbl), s32 *, 0x28), M2C_UNK *, (arg0 * 4)) + (arg1 * 8);
    }
    return 0;
}

u8 TObjPlayer__sub_8011CA98(u8 arg0) {
    if (arg0 < 0xAAU) {
        return M2C_FIELD((M2C_FIELD((*(u8 * *)&item_pmt_tbl), s32 *, 0x14) + arg0), u8 *, 0);
    }
    return 0U;
}

s32 get_item_by_slot_flag__10TObjPlayerFUc(u8 arg0) {
    if (arg0 & 0x3F) {
        if (arg0 & 0x80) {
            return TItemData__sub_8010EEDC(0x1F4);
        }
        if ((arg0 != 0) && (arg0 < 0x29U)) {
            return TItemData__sub_8010EEDC(arg0 + 0x1CB);
        }
        goto block_6;
    }
block_6:
    return lbl_805D2B10;
}
Entry_8011CB18 *TObjPlayer__sub_8011CB18(Item_8011CB18 *item, s16 mode) {
    if (item != 0) {
        u8 id = get_field_ed__10TObjPlayerFPv(item);
        if (id < 0xAA) {
            u8 slots = get_slot_count__14TItemProShieldFPv(item);
            Rule_8011CB18 *r = (*(Pmt_8011CB18 **)&item_pmt_tbl)->rules->rules;
            s32 v = item->m33();
            s32 i;
            for (i = 0; i != (*(Pmt_8011CB18 **)&item_pmt_tbl)->rules->count; i++) {
                if (r->type == id && (r->slots == 0xFF || r->slots == slots) &&
                    (r->mode == 1 || (r->mode == 0 && mode == 2 && v == 1))) {
                    return &((Entries_8011CB18 *)(*(Pmt_8011CB18 **)&item_pmt_tbl)->entries)->b[r->idx];
                }
                r++;
            }
            return &(*(Pmt_8011CB18 **)&item_pmt_tbl)->entries[id];
        }
        return &(*(Pmt_8011CB18 **)&item_pmt_tbl)->entries[item->m41()];
    }
    return (*(Pmt_8011CB18 **)&item_pmt_tbl)->entries;
}

}
