#include "types.h"
#pragma readonly_strings on
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8025B660 {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 draw_window_text(void *, void *, s32, s32, f32);
void set_text_draw_params(s32, s32, s32, f32, f32);
int is_flag_4_set__17TWindowSubComCardFPv(void *);
void draw_label_value__20TWindowSubStatusDispFPvPv(u8 *arg0, u8 *arg1);
void TWindowSubStatusDisp__sub_8025B760(void *p);
void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);
void set_text__20TWindowSubStatusDispFPvUiii(void *arg0, u32 arg1, s32 arg2, s32 arg3);
void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2);
void *destroy_free_buffers__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2);
u32 calc_text_width(u32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);
M2C_UNK deleting_destructor__20TWindowSubStatusDispFPvs(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);
void reset_entry__20TWindowSubStatusDispFPv(void*, int);

void *lbl_804CFA58[6] = {
    0, 0,
    (void *)destroy_free_buffers__20TWindowSubStatusDispFPvs,
    (void *)TWindowSubStatusDisp__sub_8025B760,
    (void *)draw_label_value__20TWindowSubStatusDispFPvPv,
    0,
};

void set_string__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    if (arg1 != 0U) {
        M2C_FIELD(arg0, f32 *, 8) = (f32) (0.0f);
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x20), arg1, temp_r3 + 1);
    }
}

void set_text__20TWindowSubStatusDispFPvUiii(void *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (0.0f);
    M2C_FIELD(arg0, u16 *, 0) = M2C_FIELD(arg0, u16 *, 0) | 5;
    set_string__20TWindowSubStatusDispFPvUi(arg0, arg2);
}

void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r3;
    f64 tmp;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x15);
    M2C_FIELD(arg0, f32 *, 8) = (208.5f) - ((0.5f) * (f32) calc_text_width(arg1));
}
void draw_label_value__20TWindowSubStatusDispFPvPv(u8 *arg0, u8 *arg1) {
    Stack_8025B660 stack;
    if ((is_flag_4_set__17TWindowSubComCardFPv(arg0) != 0) && ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0)) {
        stack.sp8 = M2C_FIELD(arg1, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 8);
        stack.spC = M2C_FIELD(arg1, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0xC);
        set_text_draw_params((s32) arg1, 1, 1, (-1.0f) / ((0.0897f) + M2C_FIELD(arg1, f32 *, 0x38)), (1e+05f));
        draw_window_text(&stack.sp8, M2C_FIELD(arg0, u8 **, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), 1, (1e+05f));
        if (!(M2C_FIELD(arg0, u16 *, 0) & 0x10)) {
            stack.sp8 += (154.0f);
            draw_window_text(&stack.sp8,  (void *)":", M2C_FIELD(arg0, s32 *, 0x24), 0, (1e+05f));
        }
        stack.sp8 += (12.0f);
        draw_window_text(&stack.sp8, M2C_FIELD(arg0, u8 **, 0x20), M2C_FIELD(arg0, s32 *, 0x24), 1, (1e+05f));
    }
}
void TWindowSubStatusDisp__sub_8025B760(void *p) {
    if (is_flag_4_set__17TWindowSubComCardFPv(p)) return;
}

void *destroy_free_buffers__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void ***, 4) = lbl_804CFA58;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x20));
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
        deleting_destructor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void* init_fields__17TWindowSubComCardFPvii(void* a0, int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(a0, a2); *(int*)((char*)a0 + 0x4) = (int)lbl_804CFA58; *(float*)((char*)a0 + 0x14) = (18.0f); *(int*)((char*)a0 + 0x24) = -1; *(int*)((char*)a0 + 0x1c) = 0; *(int*)((char*)a0 + 0x20) = 0; *(int*)((char*)a0 + 0x18) = 0; return a0; }

int is_flag_4_set__17TWindowSubComCardFPv(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }

}
