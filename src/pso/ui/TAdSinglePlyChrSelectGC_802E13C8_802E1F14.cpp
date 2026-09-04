#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void * a0 = 0, s32 a1 = 0);
s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
s32 create__23TAdSinglePlyChrSelectGCFv(void);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void * a0 = 0);

s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void) { return 0; }

void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) <= 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        switch (temp_r0) {
        case 0:
            apply_settings__23TAdSinglePlyChrSelectGCFi();
            return;
        default:
        case 1:
            TAdSinglePlyChrSelectGC__sub_802E18C8();
            break;
        }
    }
}
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv(p); }

}
