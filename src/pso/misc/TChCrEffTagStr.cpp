#include "pso/TChCrEffTagStr.h"
#include "pso/misc/TChCrEffTagStr.h"
#include "pso/unk/text_80141A30.h"
#include "pso/render/depth_buffer.h"

#include "types.h"
#include "pso/misc/TWindowSubSymbolChatPartsSet.h"

struct Stack_8029AEDC {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 draw_creation_sprite_offset(s32, void *, f32 *, f32, f32, f32, f32, f32);
extern const f32 lbl_805DDCB8;
extern const f32 lbl_805DDCBC;
extern const f32 lbl_805DDCC0;
s32 queue_destruction__7TObjectFv();
extern const f32 lbl_805DDCC4;
extern const f32 lbl_805DDCC8;
extern const f32 lbl_805DDCCC;

void TChCrEffTagStr__sub_8029AED0(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

extern void *TChCrEffTagStr__name;

#pragma push
#pragma fp_contract on
void TChCrEffTagStr::render() {
    u8 *arg0 = (u8 *)this;
    Stack_8029AEDC stack;
    f32 temp_f2;
    f32 temp_f3;
    set_depth_buffer_settings_1();
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
void TChCrEffTagStr::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    switch (*(s32 *)((s8 *)arg0 + 0x1C)) {
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
}
TChCrEffTagStr::TChCrEffTagStr(TObject *arg1, void *arg2, void *arg3) : TObject(arg1) {
    *(void * *)&this->m_name = TChCrEffTagStr__name;
    *(void **)((s8 *)this + 0x20) = arg2;
    ((TWindowSubSymbolChatPartsSet *)((char *)this + 40))->copy_vec2(arg3);
    *(u32 *)((s8 *)this + 0x1C) = 0;
    *(f32 *)((s8 *)this + 0x24) = lbl_805DDCCC;
}
