#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Parm_8010C1E0 { u8 pad[8]; s16 dfp; s16 evp; u8 pad2[5]; s8 x11; s8 x12; s8 x13; s8 x14; s8 x15; };

struct Item_8010C498 {
    u8 kind;
    u8 b1, b2;
    u8 b3;
    u8 b4;
    u8 pad05[0xD];
    u8 b12;
};

struct Item_8010C52C { u8 kind; u8 pad1[2]; u8 b3; u8 b4; u8 pad5[0xD]; u8 b12; };

struct Parm_8010C0A4 { u8 pad[8]; s16 x8; s16 xa; u8 pad2[5]; s8 x11; s8 x12; s8 x13; s8 x14; s8 x15; };

struct Stats_8010BEC4 { s16 s0; s16 s2; s16 s4; s16 s6; s16 s8; s16 sA; s16 sC; };

struct Stats2_8010BEC4 { s16 s0; s16 s2; };

struct Bonus_8010BA9C { u8 kind; u8 pad; s16 val; };

struct Stats_8010BA9C { u8 pad0[2]; s16 x2; u8 pad4[2]; s16 x6; u8 pad8[4]; s16 xC; };

extern "C" {
void TItemData__sub_8010B848(u8 *arg0, s32 arg1);
s32 TItemData__sub_8010B8B0(u8 *arg0);
s32 get_minutes__6TLobbyFv(void);
extern M2C_UNK lbl_8043E348;
extern const f32 lbl_805DAB6C;
f32 TItemData__sub_8010C5DC(u8 *arg0);
f32 get_set_bonus_multiplier__9TItemDataFPvi(void *, s32);
f32 TItemData__sub_8010C5DC(u8 *arg0);
Parm_8010C1E0 *lookup_item_pmt_record(void *);
s32 getS16_06__9TItemDataFPv(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void add_armor_stat_contribution__9TItemDataFPviiPv(u8 *self, s32 player, s32 unused, s16 *out);
extern u8 lbl_805DAB68;
void TItemData__sub_8010C498(struct Item_8010C498 *self);
s32 lookup_item_def__9TItemDataFPv(void *);
u8 TItemData__sub_8010C52C(Item_8010C52C *it);
f32 TItemData__sub_8010C5DC(u8 *arg0);
f32 get_set_bonus_multiplier__9TItemDataFPvi(void *, s32);
Parm_8010C1E0 *lookup_item_pmt_record(void *);
s32 getS16_06__9TItemDataFPv(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void add_shield_stat_contribution__9TItemDataFPviiPv(u8 *self, s32 player, s32 unused, s16 *out);
s32 get_field6_bswap__9TItemDataFPv(void *);
Parm_8010C1E0 *lookup_item_pmt_record(void *);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010BEC4(void *self, s32 arg1, s32 arg2, void *res, Stats_8010BEC4 *st, Stats2_8010BEC4 *st2);
void fn_8010B7D8(u8 *arg0, s32 arg1);
void fn_8010B7E8(u8 *arg0, s32 arg1);
void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void TItemData__sub_8010EE1C(void *arg0, s16 arg1);
void TItemData__sub_8010EE30(s16 *arg0, s32 arg1);
Bonus_8010BA9C *TObjPlayer__sub_8011C4AC(u8, u8, u8);
void apply_bonuses(u8 *item, s32 arg1, u8 *a, u8 *b, Stats_8010BA9C *st);
}

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void TItemData__sub_8010C638(void *arg0, u16 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
u16 get_packed_value__9TItemDataFPv(void *arg0);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
s32 is_usable__9TItemDataFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}
s32 TItemData__sub_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 TItemData__sub_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }

void TItemData__sub_8010B818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void TItemData__sub_8010B848(u8 *arg0, s32 arg1) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {
    case 0:
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) | (arg1 & 0xF));
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) | (arg1 & 0xF));
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) | (arg1 & 0xF));
        return;
    case 2:
        return;
    }
}

s32 TItemData__sub_8010B8B0(u8 *arg0) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {
    case 0:
        return M2C_FIELD(arg0, u8 *, 5) & 0xF;
    case 1:
        return M2C_FIELD(arg0, u8 *, 4) & 0xF;
    case 3:
        return M2C_FIELD(arg0, u8 *, 3) & 0xF;
    default:
    case 2:
        return 0;
    }
}

void apply_bonuses(u8 *item, s32 arg1, u8 *a, u8 *b, Stats_8010BA9C *st) {
    Bonus_8010BA9C *bn;
    u8 t = item[0];
    switch (t) {
    case 0:
    case 1:
        bn = TObjPlayer__sub_8011C4AC(t, item[1], item[2]);
        if (bn != NULL && a != NULL && b != NULL && st != NULL)
        switch (bn->kind) {
        case 1:
            add_s16__9TItemDataFPvi((s16 *)a, bn->val);
            add_stat__9TItemDataFPvi(a, bn->val);
            break;
        case 2:
            TItemData__sub_8010B818(a, (s16)(bn->val * 10));
            break;
        case 3:
            add_stat_ptr__9TItemDataFPvi((s16 *)b, bn->val);
            break;
        case 4:
            add_bonus__9TItemDataFPvs(b, bn->val);
            break;
        case 5:
            st->x2 += bn->val;
            break;
        case 6:
            st->x6 += bn->val;
            break;
        case 7:
            st->xC += bn->val;
            break;
        case 8:
            add_s16__9TItemDataFPvi((s16 *)a, bn->val);
            add_stat__9TItemDataFPvi(a, bn->val);
            TItemData__sub_8010B818(a, (s16)(bn->val * 10));
            add_stat_ptr__9TItemDataFPvi((s16 *)b, bn->val);
            add_bonus__9TItemDataFPvs(b, bn->val);
            st->x2 += bn->val;
            st->xC += bn->val;
            break;
        case 9:
            TItemData__sub_8010B7F8((s16 *)a, bn->val);
            fn_8010B7E8(a, bn->val);
            break;
        case 10:
            fn_8010B7D8(a, (s16)(bn->val * 10));
            break;
        case 11:
            TItemData__sub_8010EE30((s16 *)b, bn->val);
            break;
        case 12:
            TItemData__sub_8010EE1C(b, bn->val);
            break;
        case 13:
            st->x2 -= bn->val;
            break;
        case 14:
            st->x6 -= bn->val;
            break;
        case 15:
            st->xC -= bn->val;
            break;
        case 16:
            TItemData__sub_8010B7F8((s16 *)a, bn->val);
            fn_8010B7E8(a, bn->val);
            fn_8010B7D8(a, (s16)(bn->val * 10));
            TItemData__sub_8010EE30((s16 *)b, bn->val);
            TItemData__sub_8010EE1C(b, bn->val);
            st->x2 -= bn->val;
            st->xC -= bn->val;
            break;
        }
        break;
    }
}

void TItemData__sub_8010BEC4(void *self, s32 arg1, s32 arg2, void *res, Stats_8010BEC4 *st, Stats2_8010BEC4 *st2) {
    Parm_8010C1E0 *parm;
    s32 kind;
    s16 amount;
    parm = lookup_item_pmt_record(self);
    if (parm != NULL && st != NULL && res != NULL) {
    kind = parm->dfp;
    amount = parm->evp + get_field6_bswap__9TItemDataFPv(self);
    switch (kind) {
    case 0:
        st->s0 += amount;
        break;
    case 1:
        st->s2 += amount;
        break;
    case 2:
        st->sA += amount * 10;
        break;
    case 3:
        st->s4 += amount;
        break;
    case 4:
        if (st2 != NULL) {
            st2->s0 += amount;
        }
        break;
    case 5:
        if (st2 != NULL) {
            st2->s2 += amount;
        }
        break;
    case 6:
        st->s8 += amount;
        break;
    case 7:
        st->sC += amount;
        break;
    case 8:
        st->s0 += amount;
        st->s2 += amount;
        st->sA += amount;
        st->s4 += amount;
        st->s8 += amount;
        st->sC += amount;
        break;
    case 9:
        adjust_count__9TItemDataFPvi(res, amount);
        break;
    case 10:
        TItemData__sub_8010EDD8(res, amount);
        break;
    case 11:
        TItemData__sub_8010EDC8(res, amount);
        break;
    case 12:
        TItemData__sub_8010EDA8(res, amount);
        break;
    case 13:
        add_quantity__9TItemDataFPvi(res, amount);
        break;
    case 14:
        adjust_count__9TItemDataFPvi(res, amount);
        TItemData__sub_8010EDD8(res, amount);
        TItemData__sub_8010EDC8(res, amount);
        TItemData__sub_8010EDA8(res, amount);
        add_quantity__9TItemDataFPvi(res, amount);
        break;
    }
    }
}

#pragma push
#pragma fp_contract on
void add_shield_stat_contribution__9TItemDataFPviiPv(u8 *self, s32 player, s32 unused, s16 *out) {
    s32 b06;
    Parm_8010C0A4 *parm;
    f32 mult = get_set_bonus_multiplier__9TItemDataFPvi(self, player);
    f32 add = ((f32 (*)(u8 *, s32))TItemData__sub_8010C5DC)(self, player);
    parm = ((Parm_8010C0A4 *)lookup_item_pmt_record(self));
    if (parm != 0) {
        b06 = getS16_06__9TItemDataFPv(self);
        s32 b08 = ((s32 (*)(void *))get_bswap16_field8__9TItemDataFPv)(self);
        s32 v = (s32)(parm->xa * mult + add);
        if (out != 0) {
            add_stat_ptr__9TItemDataFPvi(out, (s16)(v + b08));
            add_bonus__9TItemDataFPvs(out, parm->x8 + b06);
            adjust_count__9TItemDataFPvi(out, parm->x11);
            TItemData__sub_8010EDD8(out, parm->x13);
            TItemData__sub_8010EDC8(out, parm->x12);
            TItemData__sub_8010EDA8(out, parm->x15);
            add_quantity__9TItemDataFPvi(out, parm->x14);
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void add_armor_stat_contribution__9TItemDataFPviiPv(u8 *self, s32 player, s32 unused, s16 *out) {
    s32 dfpBonus;
    Parm_8010C1E0 *parm;
    f32 mult = get_set_bonus_multiplier__9TItemDataFPvi(self, player);
    f32 add = ((f32 (*)(u8 *, s32))TItemData__sub_8010C5DC)(self, player);
    parm = lookup_item_pmt_record(self);
    if (parm != 0) {
        dfpBonus = getS16_06__9TItemDataFPv(self);
        s16 evpBonus = get_bswap16_field8__9TItemDataFPv(self);
        s32 dfp = (s32)(parm->dfp * mult + add);
        if (out != 0) {
            add_stat_ptr__9TItemDataFPvi(out, (s16)(parm->evp + evpBonus));
            add_bonus__9TItemDataFPvs(out, dfp + dfpBonus);
            adjust_count__9TItemDataFPvi(out, parm->x11);
            TItemData__sub_8010EDD8(out, parm->x13);
            TItemData__sub_8010EDC8(out, parm->x12);
            TItemData__sub_8010EDA8(out, parm->x15);
            add_quantity__9TItemDataFPvi(out, parm->x14);
        }
    }
}
#pragma pop

void TItemData__sub_8010C498(struct Item_8010C498 *self) {
    switch (self->kind) {
    case 0:
    case 1:
        self->b4 |= lbl_805DAB68;
        break;
    case 3:
        if (lookup_item_def__9TItemDataFPv((void *)(self)) == 0) {
            self->b3 |= lbl_805DAB68;
        }
        break;
    case 2:
        self->b12 |= lbl_805DAB68;
        break;
    }
}

u8 TItemData__sub_8010C52C(Item_8010C52C *it) {
    switch (it->kind) {
    case 0:
    case 1:
        return ((it->b4 & 0x40) - 0x40) == 0;
    case 3:
        if (lookup_item_def__9TItemDataFPv((void *)(it)) != 0) {
            return 0;
        }
        return ((it->b3 & 0x40) - 0x40) == 0;
    case 2:
        return ((it->b12 & 0x40) - 0x40) == 0;
    default:
        return 0;
    }
}

f32 TItemData__sub_8010C5DC(u8 *arg0) {
    M2C_UNK *var_r4;
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;
    var_f1 = lbl_805DAB6C;
    if ((s32) M2C_FIELD(arg0, u8 *, 1) != 0x94) {
        return var_f1;
    }
    temp_r3 = get_minutes__6TLobbyFv();
    var_r3 = temp_r3 >> 2;
    var_r3 = temp_r3 / 4;
    var_r4 = (M2C_UNK *)(&lbl_8043E348);
    temp_r3_2 = var_r3;
    var_r3 ^= 0x80000000;
    var_f1 = (f32) temp_r3_2;
    return var_f1;
}

void TItemData__sub_8010C638(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | 0x80);
}

u16 get_packed_value__9TItemDataFPv(void *arg0) {
    if (is_usable__9TItemDataFPv() != 0) {
        return (u16) (((M2C_FIELD(arg0, u8 *, 0xA) << 8) & 0x7F00) | M2C_FIELD(arg0, u8 *, 0xB));
    }
    return 0U;
}

}
