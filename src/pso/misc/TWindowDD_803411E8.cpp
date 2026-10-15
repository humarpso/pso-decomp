#include "types.h"

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void set_text_entry_string(void *, u32, s32);
void set_first_entry_text__9TWindowDDFPvUi(u8 *arg0, u32 arg1);
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
    *(void **)((s8 *)arg0 + 0x50) = arg1;
}

extern const f32 lbl_805DFC94;

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)(arg0 + 0x30), (void *)(arg0 + 0x6C));
    *(s32 *)((s8 *)arg0 + 0x50) = arg1;
    if (*(f32 *)((s8 *)arg0 + 0x6C) < lbl_805DFC94) {
        *(f32 *)((s8 *)arg0 + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x30) - *(f32 *)((s8 *)arg0 + 0x38));
    }
    if (*(f32 *)((s8 *)arg0 + 0x70) < lbl_805DFC94) {
        *(f32 *)((s8 *)arg0 + 0x34) = (f32) (*(f32 *)((s8 *)arg0 + 0x34) - *(f32 *)((s8 *)arg0 + 0x3C));
    }
}

#pragma push
#pragma fp_contract on
void TWindowDD__sub_803412A0(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (int)(0));
    if (temp_r3 != 0) {
        refresh_status_display__9TWindowDDFv();
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) ((lbl_805DFC98 * TWindowDD__data_805DFB58) + *(f32 *)((s8 *)temp_r3 + 0x10));
    }
}
#pragma pop

void set_first_entry_text__9TWindowDDFPvUi(u8 *arg0, u32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    if (temp_r3 != NULL) {
        set_text_entry_string(temp_r3, arg1, 0x80);
    }
}

}
