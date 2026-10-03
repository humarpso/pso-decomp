#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void set_text_entry_string(void *, u32, s32);
void TWindowDD__sub_803412F0(u8 *arg0, u32 arg1);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void refresh_status_display__9TWindowDDFv(void);
extern const f32 TWindowDD__data_805DFB58;
extern const f32 lbl_805DFC98;
void TWindowDD__sub_803412A0(u8 *arg0);
}

extern "C" {

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1);
void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

void init_and_set_field50__9TWindowDDFPvPv(void *arg0, void *arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((void *)((char *)arg0 + 48)), (void *)((void *)((char *)arg0 + 100)));
    M2C_FIELD(arg0, void **, 0x50) = arg1;
}

extern const f32 lbl_805DFC94;

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)(arg0 + 0x30), (void *)(arg0 + 0x6C));
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    if (M2C_FIELD(arg0, f32 *, 0x6C) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x38));
    }
    if (M2C_FIELD(arg0, f32 *, 0x70) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x3C));
    }
}

#pragma push
#pragma fp_contract on
void TWindowDD__sub_803412A0(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (int)(0));
    if (temp_r3 != 0) {
        refresh_status_display__9TWindowDDFv();
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((lbl_805DFC98 * TWindowDD__data_805DFB58) + M2C_FIELD(temp_r3, f32 *, 0x10));
    }
}
#pragma pop

void TWindowDD__sub_803412F0(u8 *arg0, u32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    if (temp_r3 != NULL) {
        set_text_entry_string(temp_r3, arg1, 0x80);
    }
}

}
