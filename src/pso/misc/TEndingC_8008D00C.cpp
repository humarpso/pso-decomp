#include "pso/misc/TEndingC.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8008D3D4___vt__8TEndingC { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
s32 TKeyBoardControl__sub_8000F828(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008D3D4___vt__8TEndingC __vt__8TEndingC;
extern s32 lbl_805D2960;
extern const f32 lbl_805D95CC;
extern const f32 lbl_805D95D4;
extern const f32 lbl_805D95D8;
extern const f32 lbl_805D95DC;
extern const f32 lbl_805D95E0;
extern const f32 lbl_805D95E4;
extern const f32 lbl_805D95E8;
extern const f32 lbl_805D95EC;
extern const f32 lbl_805D95F0;
extern const f32 lbl_805D95F4;
extern const f32 lbl_805D95F8;
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1);
s32 TEndingC__sub_8008C6F4();
M2C_UNK TEndingAB__sub_8008D5A0();
M2C_UNK TEndingPic__sub_8008D5AC();
u32 TEnding__sub_8008D5B8();
extern const f32 lbl_805D95CC;
extern const f32 lbl_805D95D0;
extern const f32 lbl_805D95D4;
}

extern "C" {

M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32, f32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK set_global_param__8TObjFishFi(void *);

extern M2C_UNK lbl_8048EB30[];
extern const f32 lbl_805D95C0;
extern const f32 lbl_805D95C4;
extern const f32 lbl_805D95C8;

}

void TEndingC::render() {
    set_global_param__8TObjFishFi(lbl_8048EB30);
    begin_screen_draw(1);
    TWindowSubStatusDisp__sub_803DF160(1, ((s32) (lbl_805D95C0 * primary_opacity) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    draw_textured_quad_at_depth(render_geometry + 0x0, lbl_805D95C4);
    draw_textured_quad_at_depth(render_geometry + 0x20, lbl_805D95C4);
    TWindowSubStatusDisp__sub_803DF160(0, ((s32) (lbl_805D95C0 * secondary_opacity) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    draw_textured_quad_at_depth(render_geometry + 0x40, lbl_805D95C8);
    get_player__20TWindowSubStatusDispFv();
}

void TEndingC::run_task() {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    u32 temp_r0;
    u32 temp_r30;
    temp_r0 = phase;
    switch (temp_r0) {
    case 0:
        temp_r30 = timing_rate * TEndingC__sub_8008C6F4();
        if (TEnding__sub_8008D5B8() > temp_r30) {
            phase = 1U;
            break;
        }
    default:
        break;
    case 1:
        temp_f1 = primary_opacity;
        temp_f3 = lbl_805D95CC / fade_in_ticks;
        if (temp_f1 < (lbl_805D95CC - temp_f3)) {
            primary_opacity = (f32) (temp_f1 + temp_f3);
            secondary_opacity = (f32) (lbl_805D95D0 * primary_opacity);
            if (secondary_opacity > lbl_805D95CC) {
                secondary_opacity = (f32) lbl_805D95CC;
                break;
            }
        } else {
            primary_opacity = (f32) lbl_805D95CC;
            secondary_opacity = (f32) lbl_805D95CC;
            TEndingPic__sub_8008D5AC();
            TEndingAB__sub_8008D5A0();
            phase = 2U;
            break;
        }
        break;
    case 2:
        temp_r3 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3;
        if (temp_r3 > (s32) (timing_rate * 3)) {
            phase = 3U;
            break;
        }
        break;
    case 3:
        temp_f2 = primary_opacity;
        temp_f0 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2 > temp_f0) {
            primary_opacity = (f32) (temp_f2 - temp_f0);
        } else {
            primary_opacity = (f32) lbl_805D95D4;
        }
        temp_r3_2 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_2;
        if (temp_r3_2 > (s32) (timing_rate * 0xB)) {
            phase = 4U;
            break;
        }
        break;
    case 4:
        temp_f2_2 = primary_opacity;
        temp_f3_2 = lbl_805D95CC / fade_in_ticks;
        if (temp_f2_2 < (lbl_805D95CC - temp_f3_2)) {
            primary_opacity = (f32) (temp_f2_2 + temp_f3_2);
        } else {
            primary_opacity = (f32) lbl_805D95CC;
        }
        temp_r3_3 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_3;
        if (temp_r3_3 > (s32) (timing_rate * 0xE)) {
            phase = 5U;
            break;
        }
        break;
    case 5:
        temp_f2_3 = primary_opacity;
        temp_f0_2 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2_3 > temp_f0_2) {
            primary_opacity = (f32) (temp_f2_3 - temp_f0_2);
        } else {
            primary_opacity = (f32) lbl_805D95D4;
        }
        temp_r3_4 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_4;
        if (temp_r3_4 > (s32) (timing_rate * 0x16)) {
            phase = 6U;
            temp_r0_2 = cycle_index + 1;
            cycle_index = temp_r0_2;
            if (temp_r0_2 > 5) {
                primary_opacity = (f32) lbl_805D95D4;
                cycle_index = 5;
                phase = 7U;
                break;
            }
        }
        break;
    case 6:
        temp_f2_4 = primary_opacity;
        temp_f3_3 = lbl_805D95CC / fade_in_ticks;
        if (temp_f2_4 < (lbl_805D95CC - temp_f3_3)) {
            primary_opacity = (f32) (temp_f2_4 + temp_f3_3);
        } else {
            primary_opacity = (f32) lbl_805D95CC;
        }
        temp_r3_5 = elapsed_ticks + 1;
        elapsed_ticks = temp_r3_5;
        if (temp_r3_5 > (s32) (timing_rate * 0x18)) {
            elapsed_ticks = 0;
            primary_opacity = (f32) lbl_805D95CC;
            phase = 2U;
            break;
        }
        break;
    case 8:
        temp_f2_5 = primary_opacity;
        temp_f0_3 = lbl_805D95CC / fade_out_ticks;
        if (temp_f2_5 > temp_f0_3) {
            primary_opacity = (f32) (temp_f2_5 - temp_f0_3);
            break;
        }
        primary_opacity = (f32) lbl_805D95D4;
        break;
    }
}

TEndingC::~TEndingC() {}

extern "C" {
u8 *__ct__8TEndingCFv(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TEndingC.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2960;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805D95D8;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D95DC;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D95EC;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805D95E4;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805D95E8;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805D95F0;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) lbl_805D95F4;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) lbl_805D95E0;
    M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_805D95D4;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805D95CC;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805D95CC;
    temp_r3 = TKeyBoardControl__sub_8000F828();
    switch (temp_r3) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x1E;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x90) = 0x19;
        break;
    }
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (lbl_805D95F8 * (f32) M2C_FIELD(arg0, s32 *, 0x90));
    return arg0;
}

}
