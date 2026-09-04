#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TAdSinglePlyChrSelectGC__sub_802E1FAC(void);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
void update_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0);
}

extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {
void TAdSinglePlyChrSelectGC__sub_802E1F14(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
}

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

int TAdSinglePlyChrSelectGC__sub_802E1FAC(void) { return 0; }

}
