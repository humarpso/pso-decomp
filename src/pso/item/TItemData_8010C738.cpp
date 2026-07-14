#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemData__sub_8010C738(void);
void TItemData__sub_8010C740(void);
void unpack_from_item__9TItemDataFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010D510(void *, M2C_UNK *);
M2C_UNK initialize_mag_data__9TItemDataFPv(M2C_UNK *);
M2C_UNK set_stack_count__24TShopEquipmentListWindowFPvc(void *, M2C_UNK);
M2C_UNK init__9TItemDataFv();

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
            TItemData__sub_8010D510(arg0, &sp8);
            break;
        }
    }
}

}
