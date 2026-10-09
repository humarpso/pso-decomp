#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E2158(void);
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 get_localized_text_entry(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2158(void) {  }
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, get_localized_text_entry(0x1C, 0x1C), -1, 0, 0);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK poll_card_load__15TAdPlayerLoadGCFi(int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FBB1C();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FBB7C();
M2C_UNK try_load_system_file__23TAdSinglePlyChrSelectGCFv();
s32 get_selected_menu_value(int);
M2C_UNK change_state__23TAdSinglePlyChrSelectGCFPvi(void *, int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802E1F14(void *);
void TAdSinglePlyChrSelectGC__sub_802E22A4(u8 *arg0);
}

extern "C" {

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);

M2C_UNK strcat(void *, void *);

extern M2C_UNK lbl_805DE8F8;

void build_selection_summary__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    ((M2C_UNK (*)())create_backgrounds__23TAdSinglePlyChrSelectGCFPv)();
    M2C_FIELD(arg0, s8 *, 0x68) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
        strcat((void *) (arg0 + 0x68), (void *) (((M2C_UNK * (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x1D)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
        strcat((void *) (arg0 + 0x68), (void *) (((M2C_UNK * (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x1E)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
        strcat((void *) (arg0 + 0x68), (void *) (((M2C_UNK * (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x1F)));
        strcat((void *) (arg0 + 0x68), (void *) (&lbl_805DE8F8));
    }
    ((M2C_UNK (*)(void *, void *, int, int, int))close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv)((void *) (arg0), (void *) (arg0 + 0x68), (int) (1), (int) (((M2C_UNK * (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x2A)), (int) (((M2C_UNK * (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x2B)));
}
void TAdSinglePlyChrSelectGC__sub_802E22A4(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_r3_2 == 0U || is_visible__17TWindowSubComCardFPv(temp_r3_2) == 0) {
        return;
    }
    temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x54)));
        switch (temp_r3) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x80) {
                try_load_system_file__23TAdSinglePlyChrSelectGCFv();
            }
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x100) {
                TAdSinglePlyChrSelectGC__sub_801FBB1C();
            }
            if (M2C_FIELD(arg0, s32 *, 0x44) & 0x200) {
                TAdSinglePlyChrSelectGC__sub_801FBB7C();
            }
            poll_card_load__15TAdPlayerLoadGCFi((int) (0));
            TAdSinglePlyChrSelectGC__sub_802E1F14((void *) (arg0));
            change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (0));
            break;
        case 1:
            poll_card_load__15TAdPlayerLoadGCFi((int) (0));
            TAdSinglePlyChrSelectGC__sub_802E1F14((void *) (arg0));
            change_state__23TAdSinglePlyChrSelectGCFPvi((void *) (arg0), (int) (0));
            break;
        }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0);

M2C_UNK strcpy(s32, s32);

extern M2C_UNK lbl_805DE8F8;

void init_menu_window__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    ((M2C_UNK (*)())create_backgrounds__23TAdSinglePlyChrSelectGCFPv)();
    strcpy(arg0 + 0x68, ((s32 (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 1));
    ((M2C_UNK (*)(s32, M2C_UNK *))strcat)(arg0 + 0x68, &lbl_805DE8F8);
    ((M2C_UNK (*)(s32, s32, M2C_UNK, s32, M2C_UNK))close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv)(arg0, arg0 + 0x68, -2, ((s32 (*)(M2C_UNK, M2C_UNK))get_localized_text_entry)(0x1C, 0x16), 0);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802E2A88_lbl_804C89BC {
    M2C_UNK value;
    u8 remaining[0x74];
};

typedef struct S_802E24B8 { u8 pad0[0x54]; void *f54; } S_802E24B8;

typedef struct S_802E2588 { u8 pad0[0x54]; void *f54; u8 pad58[4]; s32 f5C; } S_802E2588;

extern "C" {
s32 get_localized_text_entry(s32, s32);
s32 TAdPlyStatusGC__sub_802E11C8(void *);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2610(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);

s32 get_localized_text_entry(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E23E8(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);

s32 get_localized_text_entry(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2450(u8 *arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);

s32 get_localized_text_entry(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2520(u8 *arg0);
s32 poll_load_status__15TAdPlayerLoadGCFi(int, void *);

extern RecoveredGlobal_802E2A88_lbl_804C89BC lbl_804C89BC;
void advance_when_load_done__23TAdSinglePlyChrSelectGCFi(s32 arg0);

void TAdSinglePlyChrSelectGC__sub_802E24B8(S_802E24B8 *arg0);

void TAdSinglePlyChrSelectGC__sub_802E2588(S_802E2588 *arg0);
}

extern "C" {

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
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 reset_save_header__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);

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
    ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
    ((s32 (*)(s32, s32))strcpy)((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x26))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

void TAdSinglePlyChrSelectGC__sub_802E2450(u8 *arg0) {
    ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
    ((s32 (*)(s32, s32))strcpy)((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x27))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

void TAdSinglePlyChrSelectGC__sub_802E24B8(S_802E24B8 *arg0) {
    if (arg0->f54 == 0 || ((s32 (*)(void *))is_visible__17TWindowSubComCardFPv)(arg0->f54) == 0) {
        return;
    }
    ((void (*)(void *))get_selected_menu_value)(arg0->f54);
    ((void (*)(s32))poll_card_load__15TAdPlayerLoadGCFi)(0);
    ((void (*)(void *))TAdSinglePlyChrSelectGC__sub_802E1F14)(arg0);
    ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
}

void TAdSinglePlyChrSelectGC__sub_802E2520(u8 *arg0) {
    ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
    ((s32 (*)(s32, s32))strcpy)((s32)((void *) (arg0 + 0x68)), (s32)((int) (((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x25))))));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)(arg0), (s32)(arg0 + 0x68), (s32)((void *)-2), (s32)(((u8 *)get_localized_text_entry((s32)(0x1C), (s32)(0x16)))), (s32)(NULL));
}

void TAdSinglePlyChrSelectGC__sub_802E2588(S_802E2588 *arg0) {
    if (arg0->f54 == 0 || ((s32 (*)(void *))is_visible__17TWindowSubComCardFPv)(arg0->f54) == 0) {
        return;
    }
    switch (((s32 (*)(void *))get_selected_menu_value)(arg0->f54)) {
    case 0:
        arg0->f5C = 1;
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x18);
        return;
    case 1:
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0xC);
        break;
    }
}

void TAdSinglePlyChrSelectGC__sub_802E2610(u8 *arg0) {
    ((M2C_UNK)((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0)));
    ((M2C_UNK)close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv((s32)((void *) (arg0)), (s32)((int) (get_localized_text_entry((int) (0x1C), (int) (0xB)))), (s32)((int) (1)), (s32)((int) (0)), (s32)((int) (0))));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        ((M2C_UNK)TAdPlyStatusGC__sub_802E11C8(M2C_FIELD(arg0, void **, 0x58)));
    }
}

void update_close_on_load__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2) && (get_instance__15TAdPlayerLoadGCFv() == 0)) {
        close_windows__23TAdSinglePlyChrSelectGCFPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
        }
    }
}
void try_setup__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) == 0) {
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *)(arg0), 0xF);
    }
}
void update_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    init_timestamped_data();
    if (check_ready__23TAdSinglePlyChrSelectGCFv() == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *)(arg0), 0);
        return;
    }
    ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
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
                ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p) { start_load__23TAdSinglePlyChrSelectGCFv(p); ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)(p); close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(p, (void*)4, (void*)-1, (void*)-1, (void*)-1); *(int*)((char*)p + 0x64) = 30; }
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
                ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
            }
        }
    }
}
void init_screen__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    reset_save_header__23TAdSinglePlyChrSelectGCFv();
    if (try_confirm_selection__23TAdSinglePlyChrSelectGCFv() == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *)(arg0), 0);
        return;
    }
    TAdSinglePlyChrSelectGC__sub_801FD990(get_chr_select_state__23TAdSinglePlyChrSelectGCFv());
    set_player_index__23TAdSinglePlyChrSelectGCFi(0xF);
    ((int (*)(void *))create_backgrounds__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
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
                ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p) { *(s32*)((char*)p + 0x64) = 30; }
typedef char RecoveredGlobal_802E2A88_lbl_804C89BC_size[sizeof(RecoveredGlobal_802E2A88_lbl_804C89BC) == 0x78 ? 1 : -1];
void advance_when_load_done__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (poll_load_status__15TAdPlayerLoadGCFi((int) (0), (void *) (&lbl_804C89BC.value)) == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *)((void *) (arg0)), (s32)((int) (0xB)));
    }
}

}

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

extern RecoveredGlobal_802E2BD4_lbl_804C88C0 lbl_804C88C0;
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0);

void handle_confirm_menu__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);

s32 check_capacity__23TAdSinglePlyChrSelectGCFi(void *);

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
s32 check_card_result_code__15TAdPlayerLoadGCFi(s32);
s32 get_localized_text_entry(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);

s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);

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
            ((int (*)(void *))close_windows__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

typedef char RecoveredGlobal_802E2BD4_lbl_804C88C0_size[sizeof(RecoveredGlobal_802E2BD4_lbl_804C88C0) == 0x54 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_802E2BD4(s32 arg0) {
    if (poll_load_status__15TAdPlayerLoadGCFi((int) (0), (void *) (&lbl_804C88C0.value)) == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *)((void *) (arg0)), (s32)((int) (9)));
    }
}

void close_scene__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, get_localized_text_entry(0x1C, 9), -1, 0, 0);
}
void update_load_countdown__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (check_card_result_code__15TAdPlayerLoadGCFi(0) == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x16);
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
            ((int (*)(void *))close_windows__23TAdSinglePlyChrSelectGCFPv)((void*)((void*)(arg0)));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
            }
        }
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2D3C(void* p) { *(s32*)((char*)p + 0x64) = 30; }

#include "types.h"
extern "C" {

void update_load_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (is_load_complete__23TAdSinglePlyChrSelectGCFv() != 0) {
        if (check_card_result_code__15TAdPlayerLoadGCFi((int) (0)) == 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *) (arg0), (int) (0x16));
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)((void *) (arg0), (int) (7));
    }
}

}

int close_and_next_cancel__23TAdSinglePlyChrSelectGCFPv(void* p) { return ((int (*)(void *, int, int, int, int))close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv)((void*)(p), (int)(2), (int)(-1), (int)(-1), (int)(-1)); }

void handle_confirm_menu__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, void **, 0x54) == 0 || ((s32 (*)(void *))is_visible__17TWindowSubComCardFPv)(M2C_FIELD(arg0, void **, 0x54)) == 0) {
        return;
    }
    switch (((s32 (*)(void *))get_selected_menu_value)(M2C_FIELD(arg0, void **, 0x54))) {
    case 0:
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 6);
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x1C) = -1;
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 5);
        break;
    }
}

void open_char_select__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    ((s32 (*)(s32, s32))strcpy)(arg0 + 0x68, get_localized_text_entry(0x1C, 8));
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, arg0 + 0x68, 1, get_localized_text_entry(0x1C, 0x29), get_localized_text_entry(0x1C, 0x16));
}
void reset_on_load_complete__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x18);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2F20(void) {  }
void ensure_player_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_player__23TAdSinglePlyChrSelectGCFv();
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 4);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E2F68(void* p) { return ((int (*)(void *))close_windows__23TAdSinglePlyChrSelectGCFPv)((void*)(p)); }
void update_load_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 3);
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0);
    }
}
void TAdSinglePlyChrSelectGC__sub_802E2FEC(void) {  }
void ensure_system_file_loaded__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        load_system_file(0);
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 2);
    }
}
int TAdSinglePlyChrSelectGC__sub_802E3038(void* p) { return ((int (*)(void *))close_windows__23TAdSinglePlyChrSelectGCFPv)((void*)(p)); }

void report_card_status__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 f;
    f = M2C_FIELD(arg0, s32 *, 0x44);
    if (f & 2) {
        return;
    }
    if (f & 1) {
        if (M2C_FIELD(arg0, void **, 0x50) == 0) {
            ((int (*)(void *, int, int, int, int))close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv)(arg0, 0, -1, -1, -1);
        }
        return;
    }
    if (f & 4) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x11);
        return;
    }
    if (f & 8) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x12);
        return;
    }
    if (f & 0x10) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x13);
        return;
    }
    if (f & 0x20) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x14);
        return;
    }
    if (f & 0x40) {
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x14);
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 5);
        return;
    }
    if (f & 0x380) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x15);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) == 0 && !(f & 0x400)) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 1);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 3);
        return;
    }
    if (f & 0x400) {
        switch (f & 0x1800) {
        case 0x800:
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0xA);
            return;
        case 0x1800:
            break;
        case 0x1000:
        default:
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 8);
            return;
        }
    }
    if (check_capacity__23TAdSinglePlyChrSelectGCFi(arg0) == 0) {
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x17);
        return;
    }
    f = M2C_FIELD(arg0, s32 *, 0x44);
    if (f & 0x400) {
        if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x14);
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x10);
        return;
    }
    if (f & 0x800) {
        if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x14);
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0xD);
        return;
    }
    if (f & 0x1000) {
        if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
            ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0x14);
            return;
        }
        ((s32 (*)(void *, s32))change_state__23TAdSinglePlyChrSelectGCFPvi)(arg0, 0xE);
    }
}

void rebuild_and_maybe_close__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    ((int (*)(void *))close_windows__23TAdSinglePlyChrSelectGCFPv)((void*)(arg0));
    if (M2C_FIELD(arg0, s32 *, 0x44) & 1) {
        ((int (*)(void *, int, int, int, int))close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv)((void*)(arg0), (int)(0), (int)(-1), (int)(-1), (int)(-1));
    }
}

}
