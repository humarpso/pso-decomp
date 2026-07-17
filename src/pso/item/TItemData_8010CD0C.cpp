#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_item_use_result__9TItemDataFPv(u8 *arg0);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
void *TItemData__sub_8010EA38();
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
s32 bswap_16__FPUs(s16 *);
s32 fn_80101A48(u8, u8);
s32 lookup_item_def__9TItemDataFPv();
int register_drop__9TItemDataFPv(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

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
