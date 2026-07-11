#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_8010EA38();
s32 fn_80101A48(u8, u8);
s32 bswap_16__FPUs(s16 *);
void *TTecCtrl__sub_8022DBC4(u8, u8, s32);
void TItemData__sub_8010CCB0(void);
void TItemData__sub_8010CCB4(void);
int TItemData__sub_8010CCEC(void* p);
int fn_8011C1E8(void*);

void TItemData__sub_8010CCB0(void) {  }
void TItemData__sub_8010CCB4(void) {  }
u8 TItemData__sub_8010CCB8(void) {
    void *temp_r3;

    temp_r3 = fn_8010EA38();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, u8 *, 0x16);
    }
    return 0U;
}
int TItemData__sub_8010CCEC(void* p) { return fn_8011C1E8(p); }

}
