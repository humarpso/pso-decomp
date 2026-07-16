#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 is_load_complete__23TAdSinglePlyChrSelectGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);

#include "types.h"
extern "C" {

void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (is_load_complete__23TAdSinglePlyChrSelectGCFv() != 0) {
        if (TAdPlayerLoadGC__sub_801E0CE0((int) (0)) == 0) {
            TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (0x16));
            return;
        }
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *) (arg0), (int) (7));
    }
}

}

}
