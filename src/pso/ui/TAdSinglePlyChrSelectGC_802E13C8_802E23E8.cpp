#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802E2A88_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdPlyStatusGC__sub_802E11C8(void *);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
void TAdSinglePlyChrSelectGC__sub_802E2610(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
void TAdSinglePlyChrSelectGC__sub_802E23E8(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
void TAdSinglePlyChrSelectGC__sub_802E2450(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int create_backgrounds__23TAdSinglePlyChrSelectGCFPv(void*);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
void TAdSinglePlyChrSelectGC__sub_802E2520(u8 *arg0);
s32 poll_load_status__15TAdPlayerLoadGCFi(int, void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
extern RecoveredGlobal_802E2A88_lbl_804C89BC lbl_804C89BC;
void TAdSinglePlyChrSelectGC__sub_802E2A88(s32 arg0);
}

extern "C" {

int TAdSinglePlyChrSelectGC__sub_802E24B8(void);
int TAdSinglePlyChrSelectGC__sub_802E2588(void);
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p);
void TAdSinglePlyChrSelectGC__sub_802E289C(void *arg0);
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p);
void init_screen__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void try_setup__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_char_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_close_on_load__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_close_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void update_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdPlyStatusGC__sub_802E11C8(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 TAdSinglePlyChrSelectGC__sub_802012AC();
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_8039DCE0(s32, s32);
s32 check_ready__23TAdSinglePlyChrSelectGCFv();
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, void*, void*, void*, void*);
s32 close_windows__23TAdSinglePlyChrSelectGCFPv(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 init_timestamped_data();
s32 set_player_index__23TAdSinglePlyChrSelectGCFi(s32);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
int start_load__23TAdSinglePlyChrSelectGCFv(void*);
s32 try_confirm_selection__23TAdSinglePlyChrSelectGCFv();

void TAdSinglePlyChrSelectGC__sub_802E23E8(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    TAdSinglePlyChrSelectGC__sub_8039DCE0((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x26))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

void TAdSinglePlyChrSelectGC__sub_802E2450(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    TAdSinglePlyChrSelectGC__sub_8039DCE0((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x27))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

int TAdSinglePlyChrSelectGC__sub_802E24B8(void) { return 0; }

void TAdSinglePlyChrSelectGC__sub_802E2520(u8 *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    TAdSinglePlyChrSelectGC__sub_8039DCE0((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x25))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)TAdSinglePlyChrSelectGC__sub_80132F2C((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

int TAdSinglePlyChrSelectGC__sub_802E2588(void) { return 0; }

void TAdSinglePlyChrSelectGC__sub_802E2610(u8 *arg0) {
    ((M2C_UNK)create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0)));
    ((M2C_UNK)close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)((void *) (arg0)), (s32)((int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1C), (int) (0xB)))), (s32)((int) (1)), (s32)((int) (0)), (s32)((int) (0))));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        ((M2C_UNK)TAdPlyStatusGC__sub_802E11C8(M2C_FIELD(arg0, void **, 0x58)));
    }
}

void update_close_on_load__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 0);
        }
    }
}
void try_setup__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) == 0) {
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0xF);
    }
}
void update_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    init_timestamped_data();
    if (check_ready__23TAdSinglePlyChrSelectGCFv() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (void*)(5), (void*)(-1), (void*)(-1), (void*)(-1));
}
void update_close_timer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
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
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p) { start_load__23TAdSinglePlyChrSelectGCFv(p); create_backgrounds__23TAdSinglePlyChrSelectGCFPv(p); close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(p, (void*)4, (void*)-1, (void*)-1, (void*)-1); *(int*)((char*)p + 0x64) = 30; }
void TAdSinglePlyChrSelectGC__sub_802E289C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
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
void init_screen__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802012AC();
    if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)(arg0), 0);
        return;
    }
    TAdSinglePlyChrSelectGC__sub_801FD990(get_chr_select_state__23TAdSinglePlyChrSelectGCFv());
    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (void*)(3), (void*)(-1), (void*)(-1), (void*)(-1));
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
typedef char RecoveredGlobal_802E2A88_lbl_804C89BC_size[sizeof(RecoveredGlobal_802E2A88_lbl_804C89BC) == 0x78 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_802E2A88(s32 arg0) {
    if (poll_load_status__15TAdPlayerLoadGCFi((int) (0), (void *) (&lbl_804C89BC.value)) == 0) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8((void *)((void *) (arg0)), (s32)((int) (0xB)));
    }
}

}
