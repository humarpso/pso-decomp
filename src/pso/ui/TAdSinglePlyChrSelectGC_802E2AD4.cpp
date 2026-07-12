#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_backgrounds__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);

void create_backgrounds__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0xA), -1, 0, 0);
}
void update_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
