#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E19B0(s32, s32, s32, s32, s32);
s32 fn_8039DCE0(s32, s32);
s32 fn_802E11C8(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FEAFC();
s32 init_timestamped_data();
s8 fn_8001C5E8();
s32 TAdSinglePlyChrSelectGC__sub_801FD94C(s32);
s32 TAdSinglePlyChrSelectGC__sub_80202BA8(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FEB40();
s32 TAdSinglePlyChrSelectGC__sub_802012AC();
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
int start_load__23TAdSinglePlyChrSelectGCFv(void*);
int TAdSinglePlyChrSelectGC__sub_802E195C(void*, void*, void*, void*, void*);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p);

void TAdSinglePlyChrSelectGC__sub_802E2670(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E26D8(s32 arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FD94C(fn_8001C5E8()) == 0) {
        TAdSinglePlyChrSelectGC__sub_80202BA8(0xC);
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0xF);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2728(s32 arg0) {
    init_timestamped_data();
    if (TAdSinglePlyChrSelectGC__sub_801FEAFC() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    TAdSinglePlyChrSelectGC__sub_802E195C((void*)(arg0), (void*)(5), (void*)(-1), (void*)(-1), (void*)(-1));
}
void update_close_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = 1;
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p) { start_load__23TAdSinglePlyChrSelectGCFv(p); create_backgrounds__23TAdSinglePlyChrSelectGCFPv(p); TAdSinglePlyChrSelectGC__sub_802E195C(p, (void*)4, (void*)-1, (void*)-1, (void*)-1); *(int*)((char*)p + 0x64) = 30; }
void TAdSinglePlyChrSelectGC__sub_802E289C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                M2C_FIELD(arg0, s32 *, 0x34) = 1;
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2954(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802012AC();
    if (TAdSinglePlyChrSelectGC__sub_801FEB40() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    TAdSinglePlyChrSelectGC__sub_801FD990(fn_8001C5E8());
    TAdSinglePlyChrSelectGC__sub_80202BA8(0xF);
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    TAdSinglePlyChrSelectGC__sub_802E195C((void*)(arg0), (void*)(3), (void*)(-1), (void*)(-1), (void*)(-1));
    M2C_FIELD(arg0, s32 *, 0x64) = 0x1E;
}
void update_char_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
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
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
