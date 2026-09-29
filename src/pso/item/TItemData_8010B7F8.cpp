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

extern "C" {
void TItemData__sub_8010B848(u8 *arg0, s32 arg1);
s32 TItemData__sub_8010B8B0(u8 *arg0);
s32 get_minutes__6TLobbyFv(void);
extern M2C_UNK lbl_8043E348;
extern const f32 lbl_805DAB6C;
f32 TItemData__sub_8010C5DC(u8 *arg0);
f32 TItemData__sub_8010DD6C(void *, s32);
f32 TItemData__sub_8010C5DC(u8 *arg0);
Parm_8010C1E0 *TItemData__sub_8010EA38(void *);
s32 getS16_06__9TItemDataFPv(void *);
s16 get_bswap16_field8__9TItemDataFPv(void *);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010C1E0(u8 *self, s32 player, s32 unused, s16 *out);
s32 lookup_item_def__9TItemDataFPv();
extern u8 lbl_805DAB68;
void TItemData__sub_8010C498(struct Item_8010C498 *self);
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

#pragma push
#pragma fp_contract on
void TItemData__sub_8010C1E0(u8 *self, s32 player, s32 unused, s16 *out) {
    s32 dfpBonus;
    Parm_8010C1E0 *parm;
    f32 mult = TItemData__sub_8010DD6C(self, player);
    f32 add = ((f32 (*)(u8 *, s32))TItemData__sub_8010C5DC)(self, player);
    parm = TItemData__sub_8010EA38(self);
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
        if (lookup_item_def__9TItemDataFPv() == 0) {
            self->b3 |= lbl_805DAB68;
        }
        break;
    case 2:
        self->b12 |= lbl_805DAB68;
        break;
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
