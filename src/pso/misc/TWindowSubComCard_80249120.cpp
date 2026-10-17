#include "types.h"
#include "pso/misc/TWindowSubComCard_80249120.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TWindowChoiceSetting__ct(int, void *, void *);
void *get_array_entry__13TUnk_804CE018Fi(void *, s16);
s32 get_field_74__20TWindowChoiceSettingFv(void *);
extern const f32 lbl_805DCBB8;
extern const f32 lbl_805DCBBC;
int fn_80268C5C(void*);

void TWindowSubComCard::begin_scroll(f32 farg0) {
    u16 temp_r4;

    temp_r4 = *(u16 *)((s8 *)this + 0x80);
    if (temp_r4 & 1) {
        *(u16 *)((s8 *)this + 0x80) = (u16) (temp_r4 & 0xFFFE);
        *(f32 *)&this->unk_3C = farg0;
        *(s32 *)&this->m_50 = 3;
    }
}

void TWindowSubComCard__sub_80249144(void *arg0) {
    u16 temp_r4;
    void *e;
    temp_r4 = *(u16 *)((s8 *)arg0 + 0x80);
    if (!(temp_r4 & 1)) {
        *(u16 *)((s8 *)arg0 + 0x80) = (u16) (temp_r4 | 1);
        e = get_array_entry__13TUnk_804CE018Fi(arg0, get_field_74__20TWindowChoiceSettingFv(arg0));
        *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DCBB8 + *(f32 *)((s8 *)e + 0x14);
        if (*(s32 *)((s8 *)arg0 + 0x2C) & 0x40) {
            *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) + lbl_805DCBBC);
        }
        *(s32 *)((s8 *)arg0 + 0x50) = 3;
    }
}

s32 create_choice_setting_window__17TWindowSubComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    TWindowSubComCard__sub_80249220((void *)arg1, (void *)arg2);
    temp_r3 = __nw__7TObjectFUl(0x84);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowChoiceSetting__ct((int)temp_r3, (void *)arg0, (void *)arg2);
    }
    return var_r0;
}

int TWindowSubComCard__sub_80249220(void* p, void * _w1) { return fn_80268C5C(p); }

}
