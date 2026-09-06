#include "pso/TAdTitleGC.h"

TAdTitleGC::~TAdTitleGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TWindowSubStatusDisp__sub_80144D68(void *);
extern const f32 lbl_805DDDD0;
extern const f32 lbl_805DDDD4;
void TAdTitleGC__sub_802A0C24(M2C_UNK arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void render__10TAdTitleGCFv(u8 *arg0);
void run_task__10TAdTitleGCFv(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, s32);
M2C_UNK TAdTitleGC__sub_802A0A60(void *, s32, M2C_UNK);
M2C_UNK TAdTitleGC__sub_802A0C84(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK fn_80141A30();
M2C_UNK fn_802A0A30(void *, void *, s32, s32, s32);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

void render__10TAdTitleGCFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdTitleGC__sub_802A0A60(arg0, M2C_FIELD(arg0, s32 *, 0x1C), 0x1FFFFFFF);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        fn_802A0A30(arg0, arg0 + 0x120, M2C_FIELD(arg0, s32 *, 0x1C), (M2C_FIELD(arg0, s32 *, 0x12C) << 0x18) | 0xFF0000 | 0xFFFF, TAdSinglePlyChrSelectGC__sub_80132F2C(0x13, M2C_FIELD(arg0, s32 *, 0x1C)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 0) {
            fn_80141A30();
        }
    }
}

#pragma push
#pragma fp_contract on
void TAdTitleGC__sub_802A0C24(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (lbl_805DDDD0 - (f32) TWindowSubStatusDisp__sub_80144D68((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805DDDD4;
}
#pragma pop

void run_task__10TAdTitleGCFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_r3 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) (M2C_FIELD(arg0, s32 *, 0x12C) + 0xC);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x12C) > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x12C) = 0xFF;
    }
    TAdTitleGC__sub_802A0C84(arg0);
    TAdTitleGC__sub_802A0C24((M2C_UNK)(arg0), (u8 *)(arg0 + 0x120), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0x13, M2C_FIELD(arg0, s32 *, 0x1C))));
}

}
