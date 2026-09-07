#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802E2BD4_lbl_804C88C0 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 poll_load_status__15TAdPlayerLoadGCFi(int, void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
extern RecoveredGlobal_802E2BD4_lbl_804C88C0 lbl_804C88C0;
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
int TAdSinglePlyChrSelectGC__sub_802E2DD8(void);
void TAdSinglePlyChrSelectGC__sub_802E2F20(void);
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void);
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p);
int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p);
void close_scene__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void create_backgrounds__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void open_char_select__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_load_countdown__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_load_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0CE0(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 strcpy(s32, s32);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 is_load_complete__23TAdSinglePlyChrSelectGCFv();
s32 load_player__23TAdSinglePlyChrSelectGCFv();
s32 load_system_file(s32);

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
            close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

typedef char RecoveredGlobal_802E2BD4_lbl_804C88C0_size[sizeof(RecoveredGlobal_802E2BD4_lbl_804C88C0) == 0x54 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0) {
    if (poll_load_status__15TAdPlayerLoadGCFi((int) (0), (void *) (&lbl_804C88C0.value)) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)((void *) (arg0)), (s32)((int) (9)));
    }
}

void close_scene__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 9), -1, 0, 0);
}
void update_load_countdown__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E0CE0(0) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0x16);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (TAdSinglePlyChrSelectGC__sub_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            close_windows__23TAdSinglePlyChrSelectGCFPv((void*)((void*)(arg0)));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

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

int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p) { return close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(p), (int)(2), (int)(-1), (int)(-1), (int)(-1)); }

int TAdSinglePlyChrSelectGC__sub_802E2DD8(void) { return 0; }

void open_char_select__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    strcpy(arg0 + 0x68, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 8));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, 1, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x29), TAdSinglePlyChrSelectGC__sub_80132F2C(0x1C, 0x16));
}
void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0x18);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2F20(void) {  }
void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_player__23TAdSinglePlyChrSelectGCFv();
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 4);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(p)); }
void update_load_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 3);
            return;
        }
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void) {  }
void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_system_file(0);
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 2);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(p)); }

void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (int)(0), (int)(-1), (int)(-1), (int)(-1));
    }
}

}
