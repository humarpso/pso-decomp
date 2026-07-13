#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load_progress__12TChCrLoadReqFPv(void *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028CC28(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028CD18(void *);
s32 try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_8028CF6C();

void update_load_progress__12TChCrLoadReqFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x1512) {
        if (TAdSinglePlyChrSelectGC__sub_8028CF6C() == 0) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0x1512;
            goto block_3;
        }
    } else {
block_3:
        if (try_claim_load_slot__23TAdSinglePlyChrSelectGCFPv(arg0) != 0) {
            TAdSinglePlyChrSelectGC__sub_8028CD18(arg0);
            TAdSinglePlyChrSelectGC__sub_8028CC28(arg0);
            M2C_FIELD(arg0, s32 *, 0x60) = 1;
        }
    }
}

}
