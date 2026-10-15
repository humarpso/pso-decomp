#include "types.h"
#include "pso/misc/KeyboardCharacterMaps.h"

struct RecoveredFields_8025FC60_arg0 {
    u8 unknown_0[0x60];
    s32 field_60;
    u8 unknown_64[0xC];
    u8 * field_70;
};

struct RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct Sub_8025EDB4 {
    u8 pad[0xB4];
    s32 flags;
};

struct Ctl_8025EDB4 {
    u8 pad[0x60];
    u32 flags;
    u8 pad64[0xC];
    Sub_8025EDB4 *sub;
};

struct Ctl_8025F21C { u8 p0[0x60]; u32 f60; };

struct TWindowKeyBoardSoft_8025F4A0 {
    u8 pad0[0xB4];
    u32 fB4;
    void vt0();
    void vt21();
    void vt3();
    void vt4();
    void vt5();
    void vt6();
    void vt7();
    void vt8();
    void vt9();
    void vt10();
    void vt11();
    void vt12();
    void vt13();
    void vt14();
    void sub_8025B928();
    void sub_8025BA44();
    void sub_8025BA28();
    void sub_8025B92C();
    void update_input_state();
    void vt1();
    void vt20();
    void vt15();
    void vt16();
    void vt17();
    void vt18();
    void vt19();
};
typedef void (TWindowKeyBoardSoft_8025F4A0::*KeyFn_8025F4A0)();

struct Ctl_8025F4A0 {
    u8 pad0[0x20];
    s16 f20;
    u8 pad22[0x60 - 0x22];
    u32 f60;
    u8 pad64[0x70 - 0x64];
    TWindowKeyBoardSoft_8025F4A0 *f70;
};

extern "C" {

void TKeyBoardControl__sub_8025EC04(u8 *arg0);
u16 lookup_key_char__16TKeyBoardControlFPvi(u8 *arg0, u8 arg1);
s32 TKeyBoardControl__sub_801321B4(void *);
s32 TKeyBoardControl__sub_80132274(void *);
s32 is_key_57_pressed__16TKeyBoardControlFi(void *);
s32 TKeyBoardControl__sub_801323C8(void *, int);
u8 get_key_state__16TKeyBoardControlFPv(s32 *);
extern s32 TKeyBoardControl__global_key_state[];
void update_modifier_flags__16TKeyBoardControlFPv(struct RecoveredFields_8025FC60_arg0 *arg0);
s32 is_printable_key__16TKeyBoardControlFiUc(void *arg0, u8 arg1);
extern s32 current_language;
s32 get_input_mode__16TKeyBoardControlFPv(Ctl_8025F21C *c);
u8 TKeyBoardControl__sub_8013239C(void *, u8);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
s32 TKeyBoardControl__sub_801323C8(void *, int);
s32 TKeyBoardControl__sub_801A58B0(void);
extern s32 TKeyBoardControl__global_key_state[];
s32 has_non_modifier_key__16TKeyBoardControlFv(void);
}

extern "C" {

void enable_caps_led__16TKeyBoardControlFPv(void *arg0);
void enable_kana_led__16TKeyBoardControlFPv(void *arg0);
void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0);
s32 poll_input__16TKeyBoardControlFPv(void *arg0);
void process_key_input__16TKeyBoardControlFPvi(void *arg0, u8 arg1);
s32 TKeyBoardControl__sub_8025CBC0(u32);
s32 TKeyBoardControl__sub_8025CBCC(u32);
s32 TKeyBoardControl__sub_8025CC04(u32);
s32 translate_key_char__16TKeyBoardControlFPviPv(void *, u8, u16 *);
u8 TKeyBoardControl__sub_8025F2F8(void *, u8);
s32 lookup_key_repeat_state__16TKeyBoardControlFPviUc(void *, u8, u8);
s32 TKeyBoardControl__sub_8025F4A0(Ctl_8025F4A0 *, u8);
int TWindowKeyBoardHard__sub_8025EB68(void* p);
s32 TWindowKeyBoardHard__sub_80260438(void *);
s32 insert_character__19TWindowKeyBoardBaseFPvUs(s32, u16);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
s32 fn_8025FF8C(void *);
u8 get_key_state__16TKeyBoardControlFPv(s32 *);
s32 set_input_mode__20TWindowSubStatusDispFPvUc(s32, s32);
int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void TKeyBoardControl__sub_8025EC04(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 0x100);
}

extern s32 TKeyBoardControl__global_key_state[];

s32 is_printable_key__16TKeyBoardControlFiUc(void *arg0, u8 arg1) {
    if (arg1 == 0x52) {
        return 1;
    }
    if (arg1 < 0x10U) {
        return 0;
    }
    return arg1 <= 0x29U ? 1 : 0;
}

s32 has_non_modifier_key__16TKeyBoardControlFv(void) {
    u32 i;
    u32 n;
    u8 c;
    if (TKeyBoardControl__sub_801A58B0() != 0) {
        return 0;
    }
    n = get_key_state_2__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state);
    for (i = 0; i < n; i++) {
        c = TKeyBoardControl__sub_8013239C(TKeyBoardControl__global_key_state, i);
        if (c != 0x61 && c != 0x4C && c != 0x50 && c != 0x5E && c != 0x5D && c != 0x5C && c != 0x5F) {
            return 1;
        }
    }
    if (TKeyBoardControl__sub_801323C8(TKeyBoardControl__global_key_state, 0x55) != 0) {
        return 1;
    }
    if (TKeyBoardControl__sub_801323C8(TKeyBoardControl__global_key_state, 0x54) != 0) {
        return 1;
    }
    if (TKeyBoardControl__sub_801323C8(TKeyBoardControl__global_key_state, 0x56) != 0) {
        return 1;
    }
    return TKeyBoardControl__sub_801323C8(TKeyBoardControl__global_key_state, 0x57) != 0 ? 1 : 0;
}

u16 lookup_key_char__16TKeyBoardControlFPvi(u8 *arg0, u8 arg1) {
    if (*(s32 *)((s8 *)arg0 + 0x60) & 0x80) {
        return keyboard_kana_shifted_map[arg1];
    }
    return keyboard_kana_unshifted_map[arg1];
}

#define arg0 ((Ctl_8025EDB4 *)arg0_)
s32 translate_key_char__16TKeyBoardControlFPviPv(void *arg0_, u8 arg1, u16 *arg2) {
    s32 shift;
    u32 f;
    u16 c;

    f = arg0->flags;
    if (f & 1) {
        shift = f & 0x20;
    } else if (is_printable_key__16TKeyBoardControlFiUc(arg0, arg1) != 0) {
        shift = arg0->flags & 0x20;
    } else {
        shift = arg0->flags & 0x80;
    }
    if (!(arg0->sub->flags & 1) || get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state) != 0) {
        switch (get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state)) {
        case 0:
            if ((arg0->flags & 4) && current_language == 0) {
                *arg2 = keyboard_jp_symbol_map[arg1];
            } else if (shift != 0) {
                *arg2 = keyboard_jp_shifted_map[arg1];
            } else {
                *arg2 = keyboard_jp_unshifted_map[arg1];
            }
            break;
        case 2:
            if (arg0->flags & 8) {
                *arg2 = keyboard_fr_alternate_map[arg1];
            } else if (shift != 0) {
                *arg2 = keyboard_fr_shifted_map[arg1];
            } else {
                *arg2 = keyboard_fr_unshifted_map[arg1];
            }
            break;
        case 4:
            if (arg0->flags & 8) {
                *arg2 = keyboard_es_alternate_map[arg1];
            } else if (shift != 0) {
                *arg2 = keyboard_es_shifted_map[arg1];
            } else {
                *arg2 = keyboard_es_unshifted_map[arg1];
            }
            break;
        case 3:
            if (arg0->flags & 8) {
                *arg2 = keyboard_de_alternate_map[arg1];
            } else if (shift != 0) {
                *arg2 = keyboard_de_shifted_map[arg1];
            } else {
                *arg2 = keyboard_de_unshifted_map[arg1];
            }
            break;
        default:
            if (shift != 0) {
                *arg2 = keyboard_us_shifted_map[arg1];
            } else {
                *arg2 = keyboard_us_unshifted_map[arg1];
            }
            break;
        }
        if (arg0->sub->flags & 1) {
            return ((arg0->flags >> 7) & 1) ? 2 : 0;
        }
        return 1;
    }
    if (arg0->sub->flags & 2) {
        if (arg0->flags & 4) {
            *arg2 = keyboard_jp_symbol_map[arg1];
        } else if (shift != 0) {
            *arg2 = keyboard_jp_fullwidth_shifted_map[arg1];
        } else {
            *arg2 = keyboard_jp_fullwidth_unshifted_map[arg1];
        }
        return 1;
    }
    if (arg0->sub->flags & 4) {
        if (is_printable_key__16TKeyBoardControlFiUc(arg0, arg1) != 0) {
            if (arg0->flags & 4) {
                *arg2 = keyboard_jp_symbol_map[arg1];
            } else if (shift != 0) {
                *arg2 = keyboard_jp_shifted_map[arg1];
            } else {
                *arg2 = keyboard_jp_unshifted_map[arg1];
            }
            return ((arg0->flags >> 7) & 1) ? 2 : 0;
        }
        if (arg0->flags & 4) {
            *arg2 = keyboard_jp_symbol_map[arg1];
        } else if (shift != 0) {
            *arg2 = keyboard_jp_fullwidth_shifted_map[arg1];
        } else {
            *arg2 = keyboard_jp_fullwidth_unshifted_map[arg1];
        }
        return 1;
    }
    *arg2 = lookup_key_char__16TKeyBoardControlFPvi((u8 *)arg0, arg1);
    if (!(arg0->sub->flags & 8)) {
        return 1;
    }
    c = *arg2;
    if (c < 0x829F) {
        return 1;
    }
    if (c > 0x82F1) {
        return 1;
    }
    if (c > 0x82DD) {
        *arg2 = c + 1;
    }
    *arg2 += 0xA1;
    return 1;
}
#undef arg0

s32 get_input_mode__16TKeyBoardControlFPv(Ctl_8025F21C *c) {
    if (c->f60 & 0x40) {
        return 3;
    }
    switch (current_language) {
    case 1:
    case 3:
        return 0;
    case 4:
        return 1;
    case 2:
        return 2;
    case 0:
        return 3;
    }
    return (s32)c;
}

s32 poll_input__16TKeyBoardControlFPv(void *arg0) {
    u8 temp_r3;

    if (*(s32 *)((s8 *)arg0 + 0x60) & 0x40) {
        return 3;
    }
    temp_r3 = get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state);
    switch ((s32) temp_r3) {
    case 4:
        return 1;
    case 2:
        return 0;
    case 3:
        return 2;
    default:
        return 3;
    }
}

u32 lbl_804CFAD0[5] = { 0x0, 0x0, 0x47436E00, 0x0, 0x823 };
__declspec(section ".data") u8 keyboard_repeat_key_codes[7] = { 0x60, 0xB4, 0x5E, 0x7E, 0xA8, 0xB0, 0xB8 };
u8 lbl_804CFAEC[7][7] = {
    { 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00 },
    { 0x07, 0x07, 0x07, 0x00, 0x07, 0x00, 0x00 },
    { 0x07, 0x07, 0x07, 0x00, 0x07, 0x00, 0x00 },
    { 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00 },
    { 0x07, 0x07, 0x07, 0x00, 0x07, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00 },
    { 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00 },
};
u8 lbl_804CFB20[7][7] = {
    { 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0x00 },
    { 0xC8, 0xC9, 0xCA, 0x00, 0xCB, 0x00, 0x00 },
    { 0xCC, 0xCD, 0xCE, 0x00, 0xCF, 0x00, 0x00 },
    { 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0x00, 0x00 },
    { 0xD9, 0xDA, 0xDB, 0x00, 0xDC, 0x00, 0x00 },
    { 0x00, 0x00, 0x00, 0xD1, 0x00, 0x00, 0x00 },
    { 0x00, 0xDD, 0x00, 0x00, 0xDF, 0x00, 0x00 },
};
extern u8 *lbl_805D3930;

u8 TKeyBoardControl__sub_8025F2F8(void *arg0, u8 arg1) {
    u32 idx;
    s32 bit;
    u8 *p;
    u32 i;
    u8 modes;
    u8 c;

    idx = *(u32 *)((u8 *)arg0 + 0x6C);
    if (idx >= 7) {
        return arg1;
    }
    *(u32 *)((u8 *)arg0 + 0x6C) = 7;
    bit = get_input_mode__16TKeyBoardControlFPv((Ctl_8025F21C *)arg0);
    for (i = 0, p = lbl_805D3930; (s32)*p != 0; i++, p++) {
        if (arg1 == *p) {
            modes = lbl_804CFAEC[i >> 1][idx];
            if (!(modes & (1 << bit))) {
                return arg1;
            }
            c = lbl_804CFB20[i >> 1][idx];
            if (i & 1) {
                return c + 0x20;
            }
            if (c == 0xDF) {
                return arg1;
            }
            return c;
        }
    }
    return arg1;
}

s32 lookup_key_repeat_state__16TKeyBoardControlFPviUc(void *arg0, u8 arg1, u8 arg2) {
    extern u8 lbl_805D392C[8];
    u32 st;
    u32 i;

    st = poll_input__16TKeyBoardControlFPv(arg0);
    if (st == 0U && arg1 == 0x32) {
        return 0;
    }
    for (i = 0; i < 7; i++) {
        if (arg2 == keyboard_repeat_key_codes[i]) {
            if (!(lbl_805D392C[st] & (1 << i))) {
                return 0;
            }
            if (*(u32 *)((s8 *)arg0 + 0x6C) == i) {
                *(u32 *)((s8 *)arg0 + 0x6C) = 7;
                return 0;
            }
            *(u32 *)((s8 *)arg0 + 0x6C) = i;
            return 1;
        }
    }
    return 0;
}
s32 init__19TWindowKeyBoardSoftFPv(void *);
s32 set_bits_shift7__19TWindowKeyBoardHardFii(int, int);
s32 update_card_window_page_flags__19TWindowKeyBoardHardFii(int, int);
s32 clear_card_window_flag__19TWindowKeyBoardHardFii(int, int);
s32 set_card_window_flag__19TWindowKeyBoardHardFii(int, int);
s32 TWindowKeyBoardHard__sub_8026042C(void *);
extern u8 keyboard_jp_unshifted_map[];
extern u8 keyboard_us_unshifted_map[];
extern u8 keyboard_fr_unshifted_map[];
extern u8 keyboard_de_unshifted_map[];
extern u8 keyboard_es_unshifted_map[];
extern s32 TKeyBoardControl__global_key_state[];
extern s32 current_language;

s32 TKeyBoardControl__sub_8025F4A0(Ctl_8025F4A0 *arg0, u8 arg1) {
    static KeyFn_8025F4A0 tbl[26] = { &TWindowKeyBoardSoft_8025F4A0::vt0, &TWindowKeyBoardSoft_8025F4A0::vt21, &TWindowKeyBoardSoft_8025F4A0::vt3, &TWindowKeyBoardSoft_8025F4A0::vt4, &TWindowKeyBoardSoft_8025F4A0::vt5, &TWindowKeyBoardSoft_8025F4A0::vt6, &TWindowKeyBoardSoft_8025F4A0::vt7, &TWindowKeyBoardSoft_8025F4A0::vt8, &TWindowKeyBoardSoft_8025F4A0::vt9, &TWindowKeyBoardSoft_8025F4A0::vt10, &TWindowKeyBoardSoft_8025F4A0::vt11, &TWindowKeyBoardSoft_8025F4A0::vt12, &TWindowKeyBoardSoft_8025F4A0::vt13, &TWindowKeyBoardSoft_8025F4A0::vt14, &TWindowKeyBoardSoft_8025F4A0::sub_8025B928, &TWindowKeyBoardSoft_8025F4A0::sub_8025BA44, &TWindowKeyBoardSoft_8025F4A0::sub_8025BA28, &TWindowKeyBoardSoft_8025F4A0::sub_8025B92C, &TWindowKeyBoardSoft_8025F4A0::update_input_state, &TWindowKeyBoardSoft_8025F4A0::vt1, &TWindowKeyBoardSoft_8025F4A0::vt20, &TWindowKeyBoardSoft_8025F4A0::vt15, &TWindowKeyBoardSoft_8025F4A0::vt16, &TWindowKeyBoardSoft_8025F4A0::vt17, &TWindowKeyBoardSoft_8025F4A0::vt18, &TWindowKeyBoardSoft_8025F4A0::vt19 };
    s32 busy;
    u32 t;
    TWindowKeyBoardSoft_8025F4A0 *w;

    busy = current_language;
    switch (get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state)) {
    case 0:
        arg1 = keyboard_jp_unshifted_map[arg1];
        break;
    case 2:
        arg1 = keyboard_fr_unshifted_map[arg1];
        break;
    case 4:
        arg1 = keyboard_es_unshifted_map[arg1];
        break;
    case 3:
        arg1 = keyboard_de_unshifted_map[arg1];
        break;
    default:
        arg1 = keyboard_us_unshifted_map[arg1];
        break;
    }
    if (arg1 > 31) {
        return 0;
    }
    if (arg1 < 26) {
        (arg0->f70->*tbl[arg1])();
        return 1;
    }
    switch (arg1) {
    case 30:
        t = arg0->f60;
        if (t & 1) {
            arg0->f60 = t | 0x10;
        } else if (busy != 0 || (t & 0x80)) {
            arg0->f60 = (t & ~0x10) | ~((t & 0x10) | 0xFFFF0000 | 0xFFEF);
        } else {
            arg0->f70->fB4 |= 2;
            set_card_window_flag__19TWindowKeyBoardHardFii(arg0->f20, 1);
        }
        break;
    case 26:
        if (busy == 0 && TWindowKeyBoardHard__sub_8026042C(arg0) == 0) {
            w = arg0->f70;
            t = w->fB4;
            if (t & 1) {
                w->fB4 = t & ~1;
                clear_card_window_flag__19TWindowKeyBoardHardFii(arg0->f20, 0);
                init__19TWindowKeyBoardSoftFPv(arg0->f70);
            } else {
                w->fB4 = t | 1;
                clear_card_window_flag__19TWindowKeyBoardHardFii(arg0->f20, 1);
            }
        }
        break;
    case 27:
        if (TWindowKeyBoardHard__sub_8026042C(arg0) == 0) {
            t = arg0->f60;
            if ((t & 0x84) != 0x84) {
                u32 u;
                w = arg0->f70;
                u = w->fB4;
                if (u & 2) {
                    w->fB4 = u & ~2;
                    set_card_window_flag__19TWindowKeyBoardHardFii(arg0->f20, 0);
                } else if (t & 4) {
                    w->fB4 = (u & ~4) | ~((u & 4) | 0xFFFF0000 | 0xFFFB);
                    if (arg0->f70->fB4 & 4) {
                        update_card_window_page_flags__19TWindowKeyBoardHardFii(arg0->f20, 1);
                    } else {
                        update_card_window_page_flags__19TWindowKeyBoardHardFii(arg0->f20, 0);
                    }
                    break;
                }
                if (arg0->f60 & 0x80) {
                    arg0->f70->fB4 |= 8;
                    set_bits_shift7__19TWindowKeyBoardHardFii(arg0->f20, 1);
                } else {
                    arg0->f70->fB4 &= ~8;
                    set_bits_shift7__19TWindowKeyBoardHardFii(arg0->f20, 0);
                }
            }
        }
        break;
    }
    return 1;
}

void process_key_input__16TKeyBoardControlFPvi(void *arg0, u8 arg1) {
    u16 sp8;
    s32 temp_r31;

    if (TKeyBoardControl__sub_8025F4A0((Ctl_8025F4A0 *)arg0, arg1) != 0) {
        *(s32 *)((s8 *)arg0 + 0x6C) = 7;
        return;
    }
    temp_r31 = translate_key_char__16TKeyBoardControlFPviPv(arg0, arg1, &sp8);
    if (sp8 == 0x1F) {
        *(s32 *)((s8 *)arg0 + 0x6C) = 7;
        return;
    }
    if (poll_input__16TKeyBoardControlFPv((void *)(arg0)) < 3U) {
        if (lookup_key_repeat_state__16TKeyBoardControlFPviUc(arg0, arg1, (u8) sp8) == 0) {
            sp8 = (u16) TKeyBoardControl__sub_8025F2F8(arg0, (u8) sp8);
            goto block_7;
        }
    } else {
block_7:
        if ((TWindowKeyBoardHard__sub_80260438(arg0) != 0) && ((s32) sp8 >= 0x61) && ((s32) sp8 <= 0x7A)) {
            sp8 -= 0x20;
        }
        set_input_mode__20TWindowSubStatusDispFPvUc(*(s32 *)((s8 *)arg0 + 0x70), temp_r31);
        insert_character__19TWindowKeyBoardBaseFPvUs(*(s32 *)((s8 *)arg0 + 0x70), sp8);
    }
}

void process_all_key_states__16TKeyBoardControlFPv(Ctl_8025F21C *c) {
    s32 i;
    s32 n;
    if (!(c->f60 & 2)) {
        n = get_key_state_2__16TKeyBoardControlFPv(TKeyBoardControl__global_key_state);
        for (i = 0; i < n; i++) {
            process_key_input__16TKeyBoardControlFPvi(c, TKeyBoardControl__sub_8013239C(TKeyBoardControl__global_key_state, i));
        }
    }
}

typedef char RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void update_modifier_flags__16TKeyBoardControlFPv(struct RecoveredFields_8025FC60_arg0 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r4;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    if (get_key_state__16TKeyBoardControlFPv((s32 *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)) != 0) {
        if ((TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value, 0x56) != 0) || (TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value, 0x5B) != 0)) {
            arg0->field_60 |= 2;
        } else {
            arg0->field_60 &= 0xFFFFFFFD;
        }
    }
    if (TKeyBoardControl__sub_801321B4(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value) != 0) {
        arg0->field_60 |= 2;
    } else {
        arg0->field_60 &= 0xFFFFFFFD;
    }
    if (is_key_57_pressed__16TKeyBoardControlFi(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value) != 0) {
        arg0->field_60 |= 4;
    } else {
        arg0->field_60 &= 0xFFFFFFFB;
    }
    if (TKeyBoardControl__sub_80132274(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value) != 0) {
        arg0->field_60 |= 8;
    } else {
        arg0->field_60 &= 0xFFFFFFF7;
    }
    if ((get_key_state__16TKeyBoardControlFPv((s32 *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)) == 2) || (get_key_state__16TKeyBoardControlFPv((s32 *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value)) == 3)) {
        arg0->field_60 |= 1;
    } else {
        arg0->field_60 &= 0xFFFFFFFE;
    }
    if ((TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value, 0x54) != 0) || (TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__global_key_state).value, 0x55) != 0)) {
        arg0->field_60 |= 0x80;
    } else {
        arg0->field_60 &= 0xFFFFFF7F;
    }
    temp_r3 = arg0->field_60;
    if ((temp_r3 & 0x80) && (temp_r3 & 1)) {
        arg0->field_60 = temp_r3 & 0xFFFFFFEF;
    }
    temp_r3_2 = arg0->field_60;
    temp_r4 = temp_r3_2 & 0x80;
    if (((temp_r4 != 0) && !(temp_r3_2 & 0x10)) || ((temp_r3_2 & 0x10) && (temp_r4 == 0))) {
        arg0->field_60 |= 0x20;
    } else {
        arg0->field_60 &= 0xFFFFFFDF;
    }
    if (arg0->field_60 & 0x80) {
        temp_r3_3 = (u8 *)(arg0->field_70);
        *(s32 *)((s8 *)temp_r3_3 + 0xB4) = (s32) (*(s32 *)((s8 *)temp_r3_3 + 0xB4) | 0x20);
        return;
    }
    temp_r3_4 = (u8 *)(arg0->field_70);
    *(s32 *)((s8 *)temp_r3_4 + 0xB4) = (s32) (*(s32 *)((s8 *)temp_r3_4 + 0xB4) & 0xFFFFFFDF);
}

void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 0x1000);
        TKeyBoardControl__sub_8025CBC0(*(u32 *)((s8 *)arg0 + 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_kana_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 0x800);
        TKeyBoardControl__sub_8025CBCC(*(u32 *)((s8 *)arg0 + 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_caps_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 0x400);
        TKeyBoardControl__sub_8025CC04(*(u32 *)((s8 *)arg0 + 0x70));
        fn_8025FF8C(arg0);
    }
}

}
