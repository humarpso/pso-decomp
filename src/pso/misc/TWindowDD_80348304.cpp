#include "pso/misc/TWindowDD.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct W_80348520 {
    u8 pad0[0x24];
    void *b[8];
    u8 pad44[0x64 - 0x44];
    void *a[6];
    void *f7c;
    void *f80;
    void *f84;
};

extern "C" {
M2C_UNK copy_chat_entry__9TWindowDDFPvPv(int, void *);
M2C_UNK reset_selection__9TWindowDDFPv(void *, void *);
void TWindowDD__sub_803484C4(u8 *arg0);
s32 get_mode_code__9TWindowDDFPv(u8 *arg0);
int TWindowDD__sub_8034B008(s32, s32);
void TWindowDD__sub_80348448(M2C_UNK arg0, s16 arg1);
void append_prompt_newline__9TWindowDDFPvPv(u8 *arg0, s32 *arg1);
M2C_UNK TWindow__close(void *);
void close_all_windows__9TWindowDDFPv(void *p);
s32 get_player_count__10TObjPlayerFv();
s32 is_flag_set__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 TWindowDD__sub_80348398(u8 *arg0);
s32 can_append_chars__9TWindowDDFiPv(s32 arg0, s32 *arg1);
}

extern "C" {

int TWindowDD__sub_80348424(s32 _w0, s32 _w1);
s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0);
s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0);
void dispatch_state__9TWindowDDFv(void);
void set_state__9TWindowDDFPv(void* p);
int test_input_flag_4__9TWindowDDFPv(void* p);
void update_state__9TWindowDDFv(void);
int play_sound_effect(void*, void*, void*, void*);
M2C_UNK TWindowDD__sub_8034435C();
M2C_UNK TWindowDD__sub_80344568();
M2C_UNK TWindowDD__sub_80344774();
M2C_UNK format_message_text__9TWindowDDFPvPvUs();
M2C_UNK TWindowDD__sub_80344F54();
M2C_UNK TWindowDD__sub_80345608();
M2C_UNK TWindowDD__sub_80345C64();
M2C_UNK format_entry_text__9TWindowDDFPvPv();
M2C_UNK TWindowDD__sub_80346434();
M2C_UNK TWindowDD__sub_80346640();

int test_input_flag_4__9TWindowDDFPv(void* p) { return TWindowDD_check_input_mask((char*)p + 0x1c, 4); }

extern s32 TWindowDD__window_mode;

void dispatch_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__window_mode) {
    case 0:
        TWindowDD__sub_80346640();
        return;
    default:
        TWindowDD__sub_80346434();
        return;
    case 4:
        TWindowDD__sub_80344774();
        return;
    case 2:
        TWindowDD__sub_80344568();
        return;
    case 3:
        TWindowDD__sub_8034435C();
        return;
    }
}

s32 TWindowDD__sub_80348398(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if (temp_r3 == 0 || temp_r3 == 18) {
        return 1;
    }
    if (temp_r3 == 15) {
        return 0;
    }
    if (get_player_count__10TObjPlayerFv() != 0) {
        return 4;
    }
    if (is_flag_set__6TLobbyFv() != 0) {
        return 5;
    }
    return (M2C_FIELD(arg0, s32 *, 0xA0) != 0 ? 1 : 0) + 2;
}

int TWindowDD__sub_80348424(s32 _w0, s32 _w1) { return TWindowDD__sub_8034B008((s32)((void*)(1)), (s32)(_w1)); }

void TWindowDD__sub_80348448(M2C_UNK arg0, s16 arg1) {
    TWindowDD__sub_8034B008((s32)(0), (s32)((s32) arg1));
}

s32 get_mode_code__9TWindowDDFPv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xA8);
    if (temp_r3 == 2) {
        return 1;
    }
    return ((temp_r3 - 3) == 0) ? 2 : 0;
}

void set_state__9TWindowDDFPv(void* p) { *(int*)((char*)p + 0xa8) = 3; close_all_windows__9TWindowDDFPv((void *)((void*)(p))); }

void TWindowDD__sub_803484C4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = 2;
    copy_chat_entry__9TWindowDDFPvPv((int) (M2C_FIELD(arg0, s32 *, 0xC0)), (void *) (arg0 + 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        reset_selection__9TWindowDDFPv((void *) (arg0), (void *) (arg0 + 0xC4));
    }
    close_all_windows__9TWindowDDFPv((void *)((void*)((void *) (arg0))));
}

void close_all_windows__9TWindowDDFPv(void *p) {
    W_80348520 *w = (W_80348520 *)p;
    s32 i;
    if (w->f84 != NULL) {
        TWindow__close(w->f84);
        w->f84 = NULL;
    }
    if (w->f80 != NULL) {
        TWindow__close(w->f80);
        w->f80 = NULL;
    }
    if (w->f7c != NULL) {
        TWindow__close(w->f7c);
        w->f7c = NULL;
    }
    for (i = 0; i < 6; i++) {
        if (w->a[i] != NULL) {
            TWindow__close(w->a[i]);
            w->a[i] = NULL;
        }
    }
    for (i = 7; i >= 0; i--) {
        if (w->b[i] != NULL) {
            TWindow__close(w->b[i]);
            w->b[i] = NULL;
        }
    }
}

extern s32 TWindowDD__window_mode;

s32 can_append_chars__9TWindowDDFiPv(s32 arg0, s32 *arg1) {
    s32 t = *arg1;
    return (arg0 + t + 1) < 0x80;
}

void update_state__9TWindowDDFv(void) {
    switch ((s32) TWindowDD__window_mode) {
    case 0:
        format_entry_text__9TWindowDDFPvPv();
        return;
    default:
        TWindowDD__sub_80345C64();
        return;
    case 4:
        TWindowDD__sub_80345608();
        return;
    case 2:
        TWindowDD__sub_80344F54();
        return;
    case 3:
        format_message_text__9TWindowDDFPvPvUs();
        return;
    }
}

void append_prompt_newline__9TWindowDDFPvPv(u8 *arg0, s32 *arg1) {
    s32 p = *arg1;
    if (((s32)can_append_chars__9TWindowDDFiPv((s32)((s32)(3)), (s32 *)((s32 *)(arg1)))) != 0) {
        arg0[p++] = 0xA;
        arg0[p++] = 0x3E;
        arg0[p++] = 0x20;
    }
    *arg1 = p;
}

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
