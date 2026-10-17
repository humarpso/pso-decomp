#include "types.h"
#include "pso/unk/text_802FF760.h"
#include "pso/system/vector.h"
struct Vec_802FF760 { f32 x, y, z; };

struct Cam_802FF760 { u8 pad[0x14]; s32 v; u8 pad2[4]; Vec_802FF760 c; Vec_802FF760 d; u8 pad3[0x10]; };

struct Vec_802FF7EC { f32 x, y, z; };

struct Cam_802FF7EC { u8 pad[0x14]; s32 v; u8 pad2[4]; Vec_802FF7EC c; Vec_802FF7EC d; u8 pad3[0x10]; };

extern "C" {
void set_active_camera_pose_from_params(void *);
s32 activate_camera_mode(s32 arg0);
extern Vec_802FF760 lbl_80474DC4[];
extern Vec_802FF760 lbl_80474DD0[];
extern Vec_802FF7EC lbl_80474DAC[];
extern Vec_802FF7EC lbl_80474DB8[];
void fn_802FF760(void) {
    Cam_802FF760 cam;
    Vec_802FF760 b = lbl_80474DC4[0];
    Vec_802FF760 a = lbl_80474DD0[0];
    VecCopy((Vec *)&cam.c, (const Vec *)&b);
    VecCopy((Vec *)&cam.d, (const Vec *)&a);
    cam.v = 0x36C1;
    activate_camera_mode(9);
    set_active_camera_pose_from_params(&cam);
}
void fn_802FF7EC(void) {
    Cam_802FF7EC cam;
    Vec_802FF7EC b = lbl_80474DAC[0];
    Vec_802FF7EC a = lbl_80474DB8[0];
    VecCopy((Vec *)((Vec_802FF760 *)(&cam.c)), (const Vec *)((Vec_802FF760 *)(&b)));
    VecCopy((Vec *)((Vec_802FF760 *)(&cam.d)), (const Vec *)((Vec_802FF760 *)(&a)));
    cam.v = 0x1999;
    activate_camera_mode(9);
    set_active_camera_pose_from_params(&cam);
}

}
