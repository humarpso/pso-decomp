#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemData__sub_8010C940(void);
int TItemData__sub_8010CA08(void);
int TItemData__sub_8010CAB0(void);
int TItemData__sub_8010CACC(void);
int TItemData__sub_8010CB10(void);
int TItemData__sub_8010CBAC(void);
int TItemData__sub_8010CC68(void);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
u8 get_entry_field16__9TItemDataFv(void);
s32 get_item_use_result__9TItemDataFPv(u8 *arg0);
int register_drop__9TItemDataFPv(void* p);
void *TItemData__sub_8010EA38();
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
s32 bswap_16__FPUs(s16 *);
s32 fn_80101A48(u8, u8);
s32 lookup_item_def__9TItemDataFPv();
int register_item_drop__10TObjPlayerFPv(void*);

int TItemData__sub_8010C940(void) { return 0; }
int TItemData__sub_8010CA08(void) { return 0; }
int TItemData__sub_8010CAB0(void) { return 0; }
int TItemData__sub_8010CACC(void) { return 0; }
int TItemData__sub_8010CB10(void) { return 0; }
int TItemData__sub_8010CBAC(void) { return 0; }
int TItemData__sub_8010CC68(void) { return 0; }

void TItemData__sub_8010CCB0(void) {  }
void TItemData__sub_8010CCB4(void) {  }
u8 get_entry_field16__9TItemDataFv(void) {
    void *temp_r3;

    temp_r3 = TItemData__sub_8010EA38();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u8 *, 0x16);
    }
    return 0U;
}
int register_drop__9TItemDataFPv(void* p) { return register_item_drop__10TObjPlayerFPv(p); }

#include "types.h"
extern "C" {

s32 get_item_use_result__9TItemDataFPv(u8 *arg0) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 0x10)) {
            return 0x63;
        }
        return 0xA;
    }
    return 1;
}

}

}
