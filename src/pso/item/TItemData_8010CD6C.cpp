#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemData__sub_8010CDC8(void);
int TItemData__sub_8010CE1C(void);
int TItemData__sub_8010CE70(void);
void TItemData__sub_8010EC6C(void *arg0);
void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void bswap_fields__9TItemDataFPv(void* p);
s32 calc_buy_price__9TItemDataFPv(void *arg0);
int calc_display_grade__9TItemDataFPv(void *arg0);
s32 check_item_flags__9TItemDataFPv(void *arg0);
s16 getS16_06__9TItemDataFPv(void *arg0);
s16 get_bswap16_field8__9TItemDataFPv(void *arg0);
s16 get_field6_bswap__9TItemDataFPv(void *arg0);
s16 get_technique_level__9TItemDataFPv(void *arg0);
void lookup_item_def__9TItemDataFPv(void *arg0);
M2C_UNK TItemData__sub_8010B908(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BD24(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010BEC4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C0A4(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C1E0(void *, s32, s32, s32, s32, s32);
M2C_UNK TItemData__sub_8010C320(void *, s32, s32, s32, s32, s32);
s32 TItemData__sub_8010C52C();
M2C_UNK TItemData__sub_8010C5DC(void *, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
M2C_UNK TItemData__sub_8010DD6C(void *, s32);
s32 TItemData__sub_8010DF68();
void *TItemData__sub_8010EA38();
s32 TItemData__sub_8010EBD8();
s32 TItemData__sub_8010EEC8(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
M2C_UNK apply_bonuses(void *, s32, s32, s32, s32, s32);
int bswap_16__FPUs(void*);
s32 fn_80101A48(u8, u8);
s32 get_unit_attribute_index__10TObjPlayerFUc(u8);
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

void lookup_item_def__9TItemDataFPv(void *arg0) {
    fn_80101A48(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(arg0, u8 *, 1));
}
s16 get_field6_bswap__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

int TItemData__sub_8010CDC8(void) { return 0; }

s16 get_bswap16_field8__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 8);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

int TItemData__sub_8010CE1C(void) { return 0; }

s16 getS16_06__9TItemDataFPv(void *arg0) {
    s16 sp8;

    sp8 = M2C_FIELD(arg0, s16 *, 6);
    bswap_16__FPUs((void*)(&sp8));
    return sp8;
}

int TItemData__sub_8010CE70(void) { return 0; }

s16 get_technique_level__9TItemDataFPv(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = TTecCtrl__sub_8022DBC4(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

void bswap_fields__9TItemDataFPv(void* p) { bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); bswap_16__FPUs((void*)((char*)p + 0x8)); bswap_16__FPUs((void*)((char*)p + 0xa)); }

extern s32 lbl_805D53A0;

void apply_equip_effects__9TItemDataFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 temp_r0_2;

    if ((arg1 != 0) || (arg1 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0), ((arg1 == 0) == 0))) {
        TItemData__sub_8010DD6C(arg0, arg1);
        TItemData__sub_8010C5DC(arg0, arg1);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0) {
        case 0:
            TItemData__sub_8010C320(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
            switch ((s32) temp_r0_2) {
            case 1:
                TItemData__sub_8010C1E0(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 2:
                TItemData__sub_8010C0A4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 3:
                TItemData__sub_8010BEC4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            }
            break;
        case 2:
            TItemData__sub_8010BD24(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
        apply_bonuses(arg0, arg1, arg2, arg3, arg4, arg5);
        TItemData__sub_8010B908(arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

extern s32 lbl_805D2B10;

s32 calc_buy_price__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 4);
        if ((temp_r0 != 0) && (temp_r0 < 0x29U) && (TItemData__sub_8010DF68() == 0)) {
            if (check_item_flags__9TItemDataFPv((void *)(arg0)) == 1) {
                return TItemData__sub_8010EEC8(M2C_FIELD(arg0, u8 *, 4) + 0x1CB);
            }
            return TItemData__sub_8010EEC8(0x1F4);
        }
    }
    return lbl_805D2B10;
}

int calc_display_grade__9TItemDataFPv(void *arg0) {
    s16 temp_r3;
    u8 temp_b;
    int var_r31;

    var_r31 = TItemData__sub_8010EBD8();
    switch ((s32) (u8) M2C_FIELD(arg0, u8 *, 0)) {
    case 0:
        if ((u8) var_r31 < 9U) {
            temp_b = M2C_FIELD(arg0, u8 *, 4);
            if (!(temp_b & 0x80)) {
                var_r31 += get_unit_attribute_index__10TObjPlayerFUc(temp_b);
            }
        } else if (M2C_FIELD(arg0, u8 *, 4) & 0x80) {
            var_r31 = 0;
        }
        break;
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 1) == 3) {
            temp_r3 = get_field6_bswap__9TItemDataFPv((void *)(arg0));
            if (temp_r3 < 0) {
                var_r31 -= 1;
            } else if (temp_r3 > 0) {
                var_r31 += 1;
            }
        }
        break;
    }
    if ((u8) var_r31 > 0xCU) {
        var_r31 = 0xC;
    }
    return var_r31;
}

void TItemData__sub_8010EC6C(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 0) {
        M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) & 0x7F);
    }
}

s32 check_item_flags__9TItemDataFPv(void *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 0) && (M2C_FIELD(arg0, u8 *, 4) & 0x80)) {
        return TItemData__sub_8010C52C() != 0 ? 1 : 0;
    }
    return 1;
}

}
