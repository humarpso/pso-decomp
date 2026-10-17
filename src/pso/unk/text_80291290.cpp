#include "types.h"

struct RecoveredGlobal_80291290_lbl_804DAA78 {
    s32 value;
    u8 remaining[0x8C];
};

extern "C" {
s32 approach_angle_limited(int, void *, int);
extern const f32 lbl_805DD974;
extern const f32 lbl_805DD97C;
extern const f32 lbl_805DD980;
extern const f32 lbl_805DD984;
extern const f32 lbl_805DD988;
extern const f32 lbl_805DD98C;
void approach_creation_camera_target(u8 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
s32 TCameraCtrl__sub_800695A0(void *);
s32 set_creation_projection_center(f32);
extern RecoveredGlobal_80291290_lbl_804DAA78 creation_view_parameters;
extern const f32 lbl_805DD978;
void fn_80291290(void);

typedef char RecoveredGlobal_80291290_lbl_804DAA78_size[sizeof(RecoveredGlobal_80291290_lbl_804DAA78) == 0x90 ? 1 : -1];
void fn_80291290(void) {
    TCameraCtrl__sub_800695A0((void *) ((u8 *)&creation_view_parameters.value + 0x48));
    set_creation_projection_center((f32) (lbl_805DD978));
}

void approach_creation_camera_target(u8 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    temp_f0 = farg0 - *(f32 *)((s8 *)arg0 + 0x6C);
    if (temp_f0 > lbl_805DD97C) {
        temp_f0_2 = *(f32 *)((s8 *)arg0 + 0x88) + lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x88) = temp_f0_2;
        if (temp_f0_2 > lbl_805DD97C) {
            *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DD97C;
        }
    } else if (temp_f0 > lbl_805DD984) {
        temp_f0_3 = *(f32 *)((s8 *)arg0 + 0x88) - lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x88) = temp_f0_3;
        if (temp_f0_3 < lbl_805DD984) {
            *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DD984;
        }
    } else if (temp_f0 < lbl_805DD988) {
        temp_f0_4 = *(f32 *)((s8 *)arg0 + 0x88) - lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x88) = temp_f0_4;
        if (temp_f0_4 < lbl_805DD988) {
            *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DD988;
        }
    } else if (temp_f0 < lbl_805DD98C) {
        temp_f0_5 = *(f32 *)((s8 *)arg0 + 0x88) + lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x88) = temp_f0_5;
        if (temp_f0_5 > lbl_805DD98C) {
            *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DD98C;
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DD974;
    }
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (*(f32 *)((s8 *)arg0 + 0x6C) + *(f32 *)((s8 *)arg0 + 0x88));
    temp_f0_6 = farg1 - *(f32 *)((s8 *)arg0 + 0x4C);
    if (temp_f0_6 > lbl_805DD97C) {
        temp_f0_7 = *(f32 *)((s8 *)arg0 + 0x8C) + lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x8C) = temp_f0_7;
        if (temp_f0_7 > lbl_805DD97C) {
            *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DD97C;
        }
    } else if (temp_f0_6 > lbl_805DD984) {
        temp_f0_8 = *(f32 *)((s8 *)arg0 + 0x8C) - lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x8C) = temp_f0_8;
        if (temp_f0_8 < lbl_805DD984) {
            *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DD984;
        }
    } else if (temp_f0_6 < lbl_805DD988) {
        temp_f0_9 = *(f32 *)((s8 *)arg0 + 0x8C) - lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x8C) = temp_f0_9;
        if (temp_f0_9 < lbl_805DD988) {
            *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DD988;
        }
    } else if (temp_f0_6 < lbl_805DD98C) {
        temp_f0_10 = *(f32 *)((s8 *)arg0 + 0x8C) + lbl_805DD980;
        *(f32 *)((s8 *)arg0 + 0x8C) = temp_f0_10;
        if (temp_f0_10 > lbl_805DD98C) {
            *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DD98C;
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DD974;
    }
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) (*(f32 *)((s8 *)arg0 + 0x4C) + *(f32 *)((s8 *)arg0 + 0x8C));
    *(s32 *)((s8 *)arg0 + 0x74) = approach_angle_limited((int) (*(s32 *)((s8 *)arg0 + 0x74)), (void *) (arg2), (int) (0xC0));
    *(s32 *)((s8 *)arg0 + 0x70) = approach_angle_limited((int) (*(s32 *)((s8 *)arg0 + 0x70)), (void *) (arg1), (int) (0xC0));
}

}
