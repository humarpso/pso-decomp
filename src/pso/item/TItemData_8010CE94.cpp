#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemData__sub_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int TItemData__sub_8010CCEC(void* p);
int register_item_drop__10TObjPlayerFPv(void*);

s16 TItemData__sub_8010CE94(void *arg0) {
    void *temp_r3;

    if (((u8) M2C_FIELD(arg0, u8 *, 0) == 3) && ((u8) M2C_FIELD(arg0, u8 *, 1) == 2)) {
        temp_r3 = TTecCtrl__sub_8022DBC4(M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(arg0, u8 *, 2), 0xFFFF);
        if (temp_r3 != NULL) {
            return M2C_FIELD(temp_r3, s16 *, 0x14);
        }
    }
    return 0;
}

}
