#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tbl_8010C8B4 { s32 w[19]; };

extern "C" {
u8 get_weapon_class_motion_type(u8);
extern const Tbl_8010C8B4 item_icon_index_by_category_table;
s32 get_item_icon_index(const u8 *q);
}

extern "C" {

int TItemData__sub_8010C738(void);
void TItemData__sub_8010C740(void);
void bswap__9TItemDataFv(s32 arg0);
s32 is_usable__9TItemDataFPv(void *arg0);
void unpack_from_item__9TItemDataFPvPv(void *arg0, void *arg1);
s32 is_custom_name_srank__9TItemDataFPv();
M2C_UNK serialize_mag__9TItemDataFPvPv(void *, M2C_UNK *);
M2C_UNK bswap_32__FPUl(s32);
M2C_UNK init__9TItemDataFv();
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
M2C_UNK set_stack_count__24TShopEquipmentListWindowFPvc(void *, M2C_UNK);

s32 is_usable__9TItemDataFPv(void *arg0) {
    u8 temp_r0;

    if (is_custom_name_srank__9TItemDataFPv() == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_r0 != 2) && (temp_r0 != 4) && (M2C_FIELD(arg0, u8 *, 0xA) & 0x80)) {
            return 1;
        }
    }
    return 0;
}

void bswap__9TItemDataFv(s32 arg0) {
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0xC);
}

int TItemData__sub_8010C738(void) { return 0; }
void TItemData__sub_8010C740(void) {  }

void unpack_from_item__9TItemDataFPvPv(void *arg0, void *arg1) {
    M2C_UNK sp8;
    u8 temp_r0;
    u8 temp_r0_2;

    if (arg1 != NULL) {
        init__9TItemDataFv();
        M2C_FIELD(arg0, u8 *, 0) = (u8) (((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 0x18U) & 0xF);
        M2C_FIELD(arg0, u8 *, 1) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 0x10U);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((temp_r0 == 0) || (temp_r0 == 1)) {
            M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) + 1);
        }
        M2C_FIELD(arg0, u8 *, 2) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x30) >> 8U);
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0_2) {
        case 0:
            M2C_FIELD(arg0, u8 *, 6) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 8U);
            M2C_FIELD(arg0, s8 *, 7) = (s8) M2C_FIELD(arg1, u32 *, 0x34);
            M2C_FIELD(arg0, s8 *, 8) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 9) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 0x10U);
            M2C_FIELD(arg0, u8 *, 0xA) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x38) >> 8U);
            M2C_FIELD(arg0, s8 *, 0xB) = (s8) M2C_FIELD(arg1, u32 *, 0x38);
            M2C_FIELD(arg0, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u32 *, 0x30);
            return;
        case 3:
            if ((u8) M2C_FIELD(arg0, u8 *, 1) == 2) {
                M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u32 *, 0x30);
            }
            set_stack_count__24TShopEquipmentListWindowFPvc(arg0, 1);
            return;
        case 4:
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x10U) * 0xA);
            return;
        case 1:
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg1, u32 *, 0x30);
            M2C_FIELD(arg0, s8 *, 3) = (s8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x18U);
            M2C_FIELD(arg0, u8 *, 4) = (u8) ((u32) M2C_FIELD(arg1, u32 *, 0x34) >> 0x10U);
            return;
        case 2:
            initialize_mag_data__9TItemDataFPv(&sp8);
            serialize_mag__9TItemDataFPvPv(arg0, &sp8);
            break;
        }
    }
}
s32 get_item_icon_index(const u8 *q) {
    u8 v;
    if (q[0] == 0) {
        Tbl_8010C8B4 t = item_icon_index_by_category_table;
        if ((v = q[1]) < 0xAA) {
            v = get_weapon_class_motion_type(v);
        }
        if (v < 0x13) {
            return t.w[v];
        }
    }
    return 0;
}

}
