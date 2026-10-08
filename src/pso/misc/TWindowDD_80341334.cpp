#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034138C_TWindowDD__data_804EFC24 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8034138C_lbl_804EFC38 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_803414DC_lbl_804EFC00 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_803414DC_TWindowDD__data_804EFC24 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8034146C_TWindowDD__data_804EFC24 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, int, void *);
s32 refresh_status_display__9TWindowDDFv(int);
s32 reset_float_field__15TWindowHelpItemFPv(int);
s32 set_text_entry_string(int, void *, int);
extern RecoveredGlobal_8034138C_TWindowDD__data_804EFC24 TWindowDD__data_804EFC24;
extern M2C_UNK lbl_804EFC38[];
extern s32 lbl_805D42D8;
extern s32 lbl_805DFC18;
extern const f32 lbl_805DFC94;
u8 *TWindowDD__sub_8034138C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern RecoveredGlobal_803414DC_lbl_804EFC00 lbl_804EFC00;
extern RecoveredGlobal_8034138C_TWindowDD__data_804EFC24 TWindowDD__data_804EFC24;
extern s32 TWindowDD__data_805DFC14;
extern const f32 lbl_805DFC20;
void TWindowDD__sub_803414DC(void);
s32 __nw__7TObjectFUl(int);
u8 *TWindowDD__sub_8034138C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern RecoveredGlobal_8034138C_TWindowDD__data_804EFC24 TWindowDD__data_804EFC24;
extern const f32 TWindowDD__data_805DFB20;
s32 TWindowDD__sub_8034146C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

void *__dt__9TWindowDDFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804EFC38[];

void *__dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC38;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8034138C_TWindowDD__data_804EFC24_size[sizeof(RecoveredGlobal_8034138C_TWindowDD__data_804EFC24) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8034138C_lbl_804EFC38_size[sizeof(RecoveredGlobal_8034138C_lbl_804EFC38) == 0x18 ? 1 : -1];
u8 *TWindowDD__sub_8034138C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    u8 *temp_r3;
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&TWindowDD__data_804EFC24.value), (int) (4), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8034138C_lbl_804EFC38 *)&lbl_804EFC38).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D42D8;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x64), (void *) (arg1));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 0x6C), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x60) = arg4;
    temp_r3 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    if (temp_r3 != NULL) {
        set_text_entry_string((int) (temp_r3), (void *) (arg3), (int) (0x80));
        M2C_FIELD(temp_r3, f32 *, 8) = (f32) lbl_805DFC94;
        M2C_FIELD(temp_r3, f32 *, 0xC) = (f32) lbl_805DFC94;
        refresh_status_display__9TWindowDDFv((int) (temp_r3));
        reset_float_field__15TWindowHelpItemFPv((int) (temp_r3));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x60);
    if ((temp_r0 == 1) || (temp_r0 == 3)) {
        M2C_FIELD(temp_r3, s32 *, 0x24) = (s32) lbl_805DFC18;
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    return arg0;
}
typedef char RecoveredGlobal_803414DC_lbl_804EFC00_size[sizeof(RecoveredGlobal_803414DC_lbl_804EFC00) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_803414DC_TWindowDD__data_804EFC24_size[sizeof(RecoveredGlobal_803414DC_TWindowDD__data_804EFC24) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_8034146C_TWindowDD__data_804EFC24_size[sizeof(RecoveredGlobal_8034146C_TWindowDD__data_804EFC24) == 0x14 ? 1 : -1];
s32 TWindowDD__sub_8034146C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    s32 temp_r3;
    s32 var_r0;
    M2C_FIELD(&(*(RecoveredGlobal_8034146C_TWindowDD__data_804EFC24 *)&TWindowDD__data_804EFC24).value, f32 *, 0) = farg0;
    M2C_FIELD(&(*(RecoveredGlobal_8034146C_TWindowDD__data_804EFC24 *)&TWindowDD__data_804EFC24).value, f32 *, 4) = (f32) TWindowDD__data_805DFB20;
    temp_r3 = __nw__7TObjectFUl((int) (0x74));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TWindowDD__sub_8034138C((u8 *)((int) (temp_r3)), (s32)((void *) (arg0)), (s32)((void *) (arg1)), (s32)((void *) (arg2)), (s32)((void *) (arg3))));
    }
    return var_r0;
}

void TWindowDD__sub_803414DC(void) {
    M2C_FIELD(&lbl_804EFC00.value, s32 *, 0x18) = (s32) TWindowDD__data_805DFC14;
    M2C_FIELD(&(*(RecoveredGlobal_803414DC_TWindowDD__data_804EFC24 *)&TWindowDD__data_804EFC24).value, f32 *, 8) = (f32) lbl_805DFC20;
}

}
