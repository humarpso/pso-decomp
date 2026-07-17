#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 TAdPlyStatusGC__sub_802E11C8(void *);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s32 init_timestamped_data();
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
s32 set_player_index__23TAdSinglePlyChrSelectGCFi(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_802012AC();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
int start_load__23TAdSinglePlyChrSelectGCFv(void*);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, void*, void*, void*, void*);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p);

int TAdSinglePlyChrSelectGC__sub_802E23E8(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2450(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E24B8(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2520(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2588(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2610(void) { return 0; }

}
