#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DCF90;
f32 TWindowHelpItem__sub_8025A60C(u8 *arg0);
}

extern "C" {

int TWindowHelpItem__sub_8025A600(void* p);
void TWindowHelpItem__sub_8025A900(void);
void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1);
void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
void reset_float_field__15TWindowHelpItemFPv(void *arg0);
void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1);
void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void tick_display_timer__15TWindowHelpItemFPv(void *arg0);
void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0);
M2C_UNK __dl__FPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
M2C_UNK strncpy(s32, u32, s32);

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = *arg0;
    temp_r3 = temp_r0 & 4;
    if ((temp_r3 != 0) || (temp_r0 & 8)) {
        if (temp_r3 == 0) {
            set_flag4_and_field1c__15TWindowHelpItemFPvi((void *)(arg0), (s32)(0));
        }
        if (!(*arg0 & 8)) {
            set_flag8_and_field20__15TWindowHelpItemFPvi((void *)(arg0), (s32)(0));
        }
    }
}

void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= 0x10;
        return;
    }
    *arg0 &= 0xFFFFFFEF;
}

void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 == arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        return;
    }
    if (temp_r0 > arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFF77E8FF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFFDD8C41;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    set_flag4_and_field1c__15TWindowHelpItemFPvi((void *)(arg0), (s32)(arg1));
}

void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x18) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x18), arg1, temp_r3 + 1);
    }
}

void tick_display_timer__15TWindowHelpItemFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r4 - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = -1;
        }
    }
}

extern M2C_UNK lbl_804CF9F8[];

void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9F8;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
        destroy__20TWindowSubStatusDispFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

int TWindowHelpItem__sub_8025A600(void* p) { return *(u16*)((char*)p + 0x0) & 0x20; }

f32 TWindowHelpItem__sub_8025A60C(u8 *arg0) {
    s32 var_r0;
    var_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r0 < 0xA) {
        var_r0 = 0xA;
    }
    return lbl_805DCF90 * (f32) var_r0;
}

void TWindowHelpItem__sub_8025A900(void) {  }

extern M2C_UNK lbl_804CFA10[];

void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA10;
        destroy__20TWindowSubStatusDispFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern f32 lbl_805DCFA8;

void reset_float_field__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFA8;
}

}
