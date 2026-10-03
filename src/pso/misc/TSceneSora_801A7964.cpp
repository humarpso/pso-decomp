#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_ready__6TSceneFv();
extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;
void update__10TSceneSoraFv(s32 _w0);
M2C_UNK reset_counter__6TSceneFv();
extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;
void reset_state__10TSceneSoraFv(s32 _w0);
u16 TCameraCtrl__sub_8006A5DC();
void *get_scripted_camera_playback();
M2C_UNK update_photon_blast_camera_pose(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern f32 lbl_805DC0D4;
void update_state__10TSceneSoraFPv(void *arg0);
}

extern "C" {

void enter_scene__10TSceneSoraFi(s32 arg0);
void update_if_active__10TSceneSoraFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_801A7B14();
M2C_UNK TObjPlayer__sub_800D8A60();
M2C_UNK TObjPlayer__sub_800D8A6C();
M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK apply_all_default__8TFogCtrlFv(s32);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK update__11TCameraCtrlFv();
M2C_UNK update_all_default__8TFogCtrlFv(void *);

extern void *tl_05;

void update_if_active__10TSceneSoraFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x154) & 1)) {
        update__11TCameraCtrlFv();
        update__10TSceneSoraFv((s32)(arg0));
        update_all_default__8TFogCtrlFv(arg0);
        TObjPlayer__sub_800D8A6C();
    }
    if (tl_05 != 0) {
        allow_rendering__7TObjectFv(tl_05);
    }
}

extern void *tl_05;

void enter_scene__10TSceneSoraFi(s32 arg0) {
    TCameraCtrl__sub_801A7B14();
    reset_state__10TSceneSoraFv((s32)(arg0));
    apply_all_default__8TFogCtrlFv(arg0);
    TObjPlayer__sub_800D8A60();
    if (tl_05 != NULL) {
        disallow_rendering__7TObjectFv(tl_05);
    }
}
void update__10TSceneSoraFv(s32 _w0) {
    set_ready__6TSceneFv();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 1;
    }
}
void reset_state__10TSceneSoraFv(s32 _w0) {
    reset_counter__6TSceneFv();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 0;
    }
}
void update_state__10TSceneSoraFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC);
    switch (temp_r0) {
    case 0:
        update_photon_blast_camera_pose(lbl_805DC0D4);
        return;
    case 1:
        if ((M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) || (TCameraCtrl__sub_8006A5DC() != 5)) {
            queue_destruction__7TObjectFv(arg0);
        }
        return;
    }
}

}
