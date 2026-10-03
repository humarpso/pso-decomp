#include "pso/TChCrEffFade.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__12TChCrEffFadeFv(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void render__12TChCrEffFadeFv(void *arg0);
void run_task__12TChCrEffFadeFv(void *arg0);
void update_fade__12TChCrEffFadeFPv(u8 *arg0);
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK TChCrEffFade__sub_80293F98(void *, f32);
M2C_UNK __ct__7TObjectFP7TObject(s32, s32);
M2C_UNK fn_80293E58(void *, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__12TChCrEffFadeFv(void *arg0) {
    f32 temp_f0;
    s32 temp_r0;

    restore_full_screen_view__11TCameraCtrlFv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_r0) {
    case 0:
        TChCrEffFade__sub_80293F98(arg0, M2C_FIELD(arg0, f32 *, 0x28));
        break;
    case 1:
        fn_80293E58(arg0, M2C_FIELD(arg0, f32 *, 0x28));
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x28);
        TChCrEffFade__sub_80293F98(arg0, temp_f0 * temp_f0);
        break;
    }
    TCameraCtrl__sub_80068EF0();
}

extern M2C_UNK lbl_80464F20;
extern const f32 lbl_805DD9F8;

void update_fade__12TChCrEffFadeFPv(u8 *arg0) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r6 <= 3) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DD9F8;
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (lbl_805DD9F8 - ((f32) (temp_r6 - 3) / (f32) (M2C_FIELD(arg0, s32 *, 0x20) - 3)));
}

void run_task__12TChCrEffFadeFv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x1C));
    update_fade__12TChCrEffFadeFPv((u8 *)(arg0));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x24);
    if ((temp_r3 <= 0) || (temp_r3 >= (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__12TChCrEffFade[];
extern s32 lbl_805D3CC0;
extern s32 tl_fade;

TChCrEffFade::~TChCrEffFade() {}
void *__ct__12TChCrEffFadeFv(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;

    __ct__7TObjectFP7TObject((s32) arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrEffFade;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3CC0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (arg2 + 3);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 < 4) {
        M2C_FIELD(arg0, s32 *, 0x20) = 4;
    } else if (temp_r0 > 0x1C2) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1C2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0_2 == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    } else if (temp_r0_2 == -1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    update_fade__12TChCrEffFadeFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
    return arg0;
}

}
