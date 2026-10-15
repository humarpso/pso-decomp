#include "types.h"
#include "pso/misc/TWindowDD.h"

extern "C" {
extern const s32 TWindowDD__data_805DFB50;
extern const f32 TWindowDD__data_805DFC10;
void TWindowDD__sub_80347F48(u8 *arg0);
s32 init_and_set_field50__9TWindowDDFPv(int, int);
extern const s32 TWindowDD__data_805DFB50;
extern const s32 TWindowDD__data_805DFB50;
s32 update_position__9TWindowDDFl(int, int);
void TWindowDD__sub_80347FA0(s32 arg0, s32 arg1);
}

extern "C" {

s32 set_value_f32__9TWindowDDFl(u32, s32);
int TWindowDD__sub_80341AE0(void*);
s32 TWindowDD__sub_80341AF8(s32);
s32 TWindowDD__sub_8034217C(s32);
s32 get_field_0x74__9TWindowDDFv(s32);
int reset_cursor__9TWindowDDFv(void*);
int set_mode_2__9TWindowDDFv(void*);
s32 set_scale__9TWindowDDFll(u32, s32, s32);

    extern unsigned char lbl_804EFCA8[];
void*TWindowDD::get_entry(int a0, int a1) {  return (char*)lbl_804EFCA8 + a1 * 8; }

void TWindowDD__sub_80347F48(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x68));
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)temp_r3 + 0x30) = (f32) TWindowDD__data_805DFC10;
        *(s32 *)((s8 *)temp_r3 + 0x50) = (s32) TWindowDD__data_805DFB50;
    }
}

void TWindowDD::init_entry_field_64(s32 arg1) {
    s32 arg0 = (s32)this;
    s32 var_r4;
    u8 *var_r3;
    var_r3 = (u8 *)(arg0 + (arg1 * 4));
    var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 0x64));
    if (var_r3 != NULL) {
        var_r4 = (*(s32 *)&TWindowDD__data_805DFB50);
        init_and_set_field50__9TWindowDDFPv((int) (var_r3), (int) (var_r4));
    }
}

void TWindowDD__sub_80347FA0(s32 arg0, s32 arg1) {
    s32 var_r4;
    u8 *var_r3;
    var_r3 = (u8 *)(arg0 + (arg1 * 4));
    var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 0x64));
    if (var_r3 != NULL) {
        var_r4 = (*(s32 *)&TWindowDD__data_805DFB50);
        update_position__9TWindowDDFl((int) (var_r3), (int) (var_r4));
    }
}

void TWindowDD::refresh_sub(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFv(a1); }

void TWindowDD::apply_input(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); reset_cursor__9TWindowDDFv((void*)(a1)); }

void TWindowDD::update(void* p, void* a1) { TWindowDD__sub_80341AE0(a1); set_mode_2__9TWindowDDFv(a1); }

extern f32 lbl_805DFB54;

void TWindowDD::update(s32 arg1) {
    TWindowDD__sub_80341AF8(arg1);
    reset_cursor__9TWindowDDFv((void*)(arg1));
    if ((u32) *(u32 *)((s8 *)this + 0x7C) != 0U) {
        set_scale__9TWindowDDFll(*(u32 *)((s8 *)this + 0x7C), get_field_0x74__9TWindowDDFv(arg1), (s32) lbl_805DFB54);
        set_value_f32__9TWindowDDFl(*(u32 *)((s8 *)this + 0x7C), TWindowDD__sub_8034217C(arg1));
    }
}

}
