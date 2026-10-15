#include "pso/TChCrEffTagStr.h"

#include "types.h"

struct Stack_8029AEDC {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 set_depth_buffer_settings_1__Fv();
s32 restore_saved_depth_alpha_state();
s32 draw_creation_sprite_offset(s32, void *, f32 *, f32, f32, f32, f32, f32);
extern const f32 lbl_805DDCB8;
extern const f32 lbl_805DDCBC;
extern const f32 lbl_805DDCC0;
void render__14TChCrEffTagStrFv(u8 *arg0);
s32 queue_destruction__7TObjectFv();
extern const f32 lbl_805DDCB8;
extern const f32 lbl_805DDCC4;
extern const f32 lbl_805DDCC8;
extern const f32 lbl_805DDCCC;
void run_task__14TChCrEffTagStrFv(u8 *arg0);
}

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);
void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

void TChCrEffTagStr__sub_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern s32 __vt__14TChCrEffTagStr[];
extern void *TChCrEffTagStr__name;
extern const f32 lbl_805DDCCC;

#pragma push
#pragma fp_contract on
void render__14TChCrEffTagStrFv(u8 *arg0) {
    Stack_8029AEDC stack;
    f32 temp_f2;
    f32 temp_f3;
    set_depth_buffer_settings_1__Fv();
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x24);
    temp_f3 = lbl_805DDCB8 - temp_f2;
    stack.spC = temp_f2 * temp_f2;
    stack.sp8 = (lbl_805DDCBC * temp_f3) + lbl_805DDCB8;
    draw_creation_sprite_offset(*(s32 *)((s8 *)arg0 + 0x20), arg0 + 0x28, &stack.sp8, lbl_805DDCC0, temp_f2, temp_f3, lbl_805DDCB8, lbl_805DDCBC);
    restore_saved_depth_alpha_state();
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void run_task__14TChCrEffTagStrFv(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        temp_f2 = *(f32 *)((s8 *)arg0 + 0x24);
        if (!(temp_f2 >= lbl_805DDCB8)) {
            temp_f0 = temp_f2 + lbl_805DDCC4;
            *(f32 *)((s8 *)arg0 + 0x24) = temp_f0;
            if (temp_f0 >= lbl_805DDCB8) {
                *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DDCB8;
                break;
            }
        }
        break;
    case 1:
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x24) + lbl_805DDCC8;
        *(f32 *)((s8 *)arg0 + 0x24) = temp_f1;
        if (temp_f1 <= lbl_805DDCCC) {
            *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DDCCC;
            queue_destruction__7TObjectFv();
        }
        break;
    }
}
#pragma pop

TChCrEffTagStr::~TChCrEffTagStr() {}
void *__ct__14TChCrEffTagStrFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TChCrEffTagStr;
    *(void **)((s8 *)arg0 + 0x0) = TChCrEffTagStr__name;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 40), arg3);
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(f32 *)((s8 *)arg0 + 0x24) = lbl_805DDCCC;
    return arg0;
}

}
