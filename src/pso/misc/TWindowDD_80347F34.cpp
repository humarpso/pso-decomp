#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_input__9TWindowDDFPvPv(void* p, void* a1);
void* get_entry__9TWindowDDFii(int a0, int a1);
void refresh_sub__9TWindowDDFPvPv(void* p, void* a1);
void update__9TWindowDDFPvPv(void* p, void* a1);
void update__9TWindowDDFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowDD__sub_80340E20(u32, s32);
int TWindowDD__sub_80341AE0(void*);
M2C_UNK TWindowDD__sub_80341AF8(s32);
s32 TWindowDD__sub_8034217C(s32);
s32 get_field_0x74__9TWindowDDFPv(s32);
int reset_cursor__9TWindowDDFPv(void*);
int set_mode_2__9TWindowDDFPv(void*);
M2C_UNK set_scale__9TWindowDDFPvii(u32, s32, s32);

    extern unsigned char lbl_804EFCA8[];
void* get_entry__9TWindowDDFii(int a0, int a1) {  return (char*)lbl_804EFCA8 + a1 * 8; }

void refresh_sub__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

void apply_input__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); reset_cursor__9TWindowDDFPv((void*)(a1)); }

void update__9TWindowDDFPvPv(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFPv(a1); }

extern f32 lbl_805DFB54;

void update__9TWindowDDFPvi(void *arg0, s32 arg1) {
    TWindowDD__sub_80341AF8(arg1);
    reset_cursor__9TWindowDDFPv((void*)(arg1));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        set_scale__9TWindowDDFPvii(M2C_FIELD(arg0, u32 *, 0x7C), get_field_0x74__9TWindowDDFPv(arg1), (s32) lbl_805DFB54);
        TWindowDD__sub_80340E20(M2C_FIELD(arg0, u32 *, 0x7C), TWindowDD__sub_8034217C(arg1));
    }
}

}
