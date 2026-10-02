#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80267B18 {
    f32 sp8;
    f32 spC;
};

struct Win_80267AA8 { u8 p0[0x74]; s16 f74; s16 f76; };

extern "C" {
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 reset_selection__20TWindowSubStatusDispFPv(int, void *);
extern const f32 lbl_805DD180;
extern const f32 lbl_805DD188;
void TWindowSubStatusDisp__sub_80267B18(u8 *arg0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void TWindowSubStatusDisp__sub_80267AA8(Win_80267AA8 *w, s16 v);
}

extern "C" {

void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void handle_open__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor__20TWindowSubStatusDispFPv(void *arg0);
void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0);
void set_flag4__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowMenu__sub_80266B18(void *, s32);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
s32 get_status_flag__6TLobbyFPv();
s32 is_flag80_set__20TWindowSubStatusDispFPv(s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv();
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(void *, M2C_UNK);

void set_flag4__20TWindowSubStatusDispFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (get_status_flag__6TLobbyFPv() == 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void handle_open__20TWindowSubStatusDispFPv(void *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if ((is_flag_4_set__20TWindowSubStatusDispFPv() == 0) || (is_flag80_set__20TWindowSubStatusDispFPv(temp_r31) != 0)) {
        play_sound_effect(0x53F06, 0, 0, 0);
        return;
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x100)) {
        play_sound_effect(0x52D01, 0, 0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, void **, 0x80), 2);
    }
}

void move_cursor_next__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor__20TWindowSubStatusDispFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void TWindowSubStatusDisp__sub_80267AA8(Win_80267AA8 *w, s16 v) {
    if (v >= 0) {
        if (v >= w->f76) {
            return;
        }
        while (TWindowMenu__sub_80266B18(w, v) == 0) {
            if (v > 0) {
                v -= 1;
                continue;
            }
            break;
        }
        w->f74 = v;
    }
}

void TWindowSubStatusDisp__sub_80267B18(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80267B18, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80267B18, spC) == 0x4) ? 1 : -1];
    Stack_80267B18 stack;
    f32 temp_f1;
    f32 temp_f2;
    u32 temp_r3;
    u32 var_r0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x38);
        temp_f1 = temp_f2 - lbl_805DD180;
        stack.spC = lbl_805DD188;
        stack.sp8 = temp_f1;
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
        var_r0 = temp_r3;
        if (var_r0 != 0U) {
            var_r0 = reset_selection__20TWindowSubStatusDispFPv((int) (temp_r3), (void *) (&stack.sp8));
        }
        M2C_FIELD(arg0, u32 *, 0x84) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x80);
    }
}

void ensure_status_display__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            var_r0 = TWindowSubStatusDisp__sub_802880BC(var_r0, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x80) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
    }
}

}
