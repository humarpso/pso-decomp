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
s32 change_state__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
extern RecoveredGlobal_802E2BD4_lbl_804C88C0 lbl_804C88C0;
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_selected_menu_value(void *);
s32 change_state__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
void TAdSinglePlyChrSelectGC__sub_802E2DD8(u8 *arg0);
int close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void*, int, int, int, int);
s32 check_capacity__23TAdSinglePlyChrSelectGCFi(void *);
s32 change_state__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
void report_card_status__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p);
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
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
s32 change_state__23TAdSinglePlyChrSelectGCFPvi(void *, s32);
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
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, get_localized_text_entry(0x1C, 0xA), -1, 0, 0);
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
                change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

typedef char RecoveredGlobal_802E2BD4_lbl_804C88C0_size[sizeof(RecoveredGlobal_802E2BD4_lbl_804C88C0) == 0x54 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0) {
    if (poll_load_status__15TAdPlayerLoadGCFi((int) (0), (void *) (&lbl_804C88C0.value)) == 0) {
        change_state__23TAdSinglePlyChrSelectGCFPvi((void *)((void *) (arg0)), (s32)((int) (9)));
    }
}

void close_scene__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, get_localized_text_entry(0x1C, 9), -1, 0, 0);
}
void update_load_countdown__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E0CE0(0) == 0) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x16);
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
                change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0);
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
            change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (0x16));
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (7));
    }
}

}

int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p) { return close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(p), (int)(2), (int)(-1), (int)(-1), (int)(-1)); }

void TAdSinglePlyChrSelectGC__sub_802E2DD8(u8 *arg0) {
    if (M2C_FIELD(arg0, void **, 0x54) == 0 || is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x54)) == 0) {
        return;
    }
    switch (get_selected_menu_value(M2C_FIELD(arg0, void **, 0x54))) {
    case 0:
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 6);
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x1C) = -1;
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 5);
        break;
    }
}

void open_char_select__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    strcpy(arg0 + 0x68, get_localized_text_entry(0x1C, 8));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, 1, get_localized_text_entry(0x1C, 0x29), get_localized_text_entry(0x1C, 0x16));
}
void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x18);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2F20(void) {  }
void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_player__23TAdSinglePlyChrSelectGCFv();
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 4);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(p)); }
void update_load_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 3);
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void) {  }
void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_system_file(0);
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 2);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p) { return close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(p)); }

void report_card_status__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 f;
    f = M2C_FIELD(arg0, s32 *, 0x44);
    if (f & 2) {
        return;
    }
    if (f & 1) {
        if (M2C_FIELD(arg0, void **, 0x50) == 0) {
            close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, 0, -1, -1, -1);
        }
        return;
    }
    if (f & 4) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x11);
        return;
    }
    if (f & 8) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x12);
        return;
    }
    if (f & 0x10) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x13);
        return;
    }
    if (f & 0x20) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x14);
        return;
    }
    if (f & 0x40) {
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x14);
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 5);
        return;
    }
    if (f & 0x380) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x15);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0 && !(f & 0x400)) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 1);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 3);
        return;
    }
    if (f & 0x400) {
        switch (f & 0x1800) {
        case 0x800:
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0xA);
            return;
        case 0x1800:
            break;
        case 0x1000:
        default:
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 8);
            return;
        }
    }
    if (check_capacity__23TAdSinglePlyChrSelectGCFi(arg0) == 0) {
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x17);
        return;
    }
    f = M2C_FIELD(arg0, s32 *, 0x44);
    if (f & 0x400) {
        if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x14);
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x10);
        return;
    }
    if (f & 0x800) {
        if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x14);
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0xD);
        return;
    }
    if (f & 0x1000) {
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0x14);
            return;
        }
        change_state__23TAdSinglePlyChrSelectGCFPvi(arg0, 0xE);
    }
}

void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_windows__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((void*)(arg0), (int)(0), (int)(-1), (int)(-1), (int)(-1));
    }
}

}
