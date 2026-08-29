#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__7TEndingFv(void *arg0);
M2C_UNK TAdRicoRingCtrl__sub_8001B4A0(s32, f32);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, M2C_UNK *);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TObjPlayer__sub_8001A8F0(u32, void *);
s32 TAdEndText__sub_8001A990();
extern void destroy_keyboard_objects();
M2C_UNK TAdMultiChgGameModeGC__sub_8023E834();

u32 __cvt_fp2unsigned(f32);
extern const f64 lbl_80439598;
extern u32 lbl_805D4F08;
extern s32 tl_fade;
extern const f32 lbl_805D9578;

void run_task__7TEndingFv(void *arg0) {
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3_2;
    u32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        TAdMultiChgGameModeGC__sub_8023E834();
        temp_r3 = lbl_805D4F08 + 1;
        lbl_805D4F08 = temp_r3;
        temp_r30 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r3 > (u32) (temp_r30 * 0x8C)) {
            {
                u32 alloc = __nw__7TObjectFUl(0x1C);
                if (alloc != 0U) {
                    TObjPlayer__sub_8001A8F0(alloc, arg0);
                }
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            return;
        }
        temp_f31 = lbl_805D9578 * (f32) temp_r30;
        if ((u32) lbl_805D4F08 > (u32) ((temp_r30 * 0x8B) - __cvt_fp2unsigned(temp_f31))) {
            TAdRicoRingCtrl__sub_8001B4A0(M2C_FIELD(arg0, s32 *, 0x70C), temp_f31);
        }
        return;
    case 2:
        break;
    case 1:
        if (TAdEndText__sub_8001A990() != 0) {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
            M2C_FIELD(arg0, s32 *, 0x28) = temp_r3_2;
            if (temp_r3_2 > (s32) (M2C_FIELD(arg0, s32 *, 0x24) * 0xA)) {
                {
                    u32 alloc2 = __nw__7TObjectFUl(0x28);
                    if (alloc2 != 0U) {
                        init__22THunterGuildSeqOfflineFPvPvPv(alloc2, tl_fade, (M2C_UNK *)destroy_keyboard_objects);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            }
        }
        break;
    }
}

}
