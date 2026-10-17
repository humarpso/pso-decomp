#include "pso/TObjLiveCameraCtrl.h"

#include "types.h"
#include "pso/misc/TCameraCtrl.h"

struct Cam_8030BED4 {
    s32 f0;
    u8 pad4[0x18 - 4];
    s32 *vt;
    s16 f1c, f1e;
    s32 f20;
    u16 f24;
    s32 f28, f2c;
    f32 f30;
    f32 f34[3];
    f32 f40[3];
    s32 f4c;
    void *f50;
    u8 f54[4];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void update_toggle_state__12TBoss8DragonFv(void *);
void update_live_camera__12TBoss8DragonFv(void *);
void choose_next_camera_shot__12TBoss8DragonFv(void *);
s32 get_current_floor();
void subtractive_rng_seed(void *, s32);
s32 __ct__14SubtractiveRngFv(void *);
void *fn_800832EC(void *, int, int, void *, void *, f32);
s32 is_room_enemy_set_cleared(s32, int);
void *__nw__7TObjectFUl(u32);
extern s32 lbl_804757E0[];
extern s32 __vt__18TObjLiveCameraCtrl[];
extern s32 TObjLiveCameraCtrl__class_name;
extern s32 tl_particlemodel;
extern s32 live_camera_controller_next_slot;
extern s32 TObjLiveCameraCtrl__instances;
extern const f32 lbl_805DF168;
extern const f32 lbl_805DF19C;
extern const f32 lbl_805DF1B4;
extern const f32 lbl_805DF1D8;
extern const f32 lbl_805DF1DC;
extern const f32 lbl_805DF1E0;
s32 TObjLiveMonitor__sub_8030C050(void* p);
void fn_8030C058(void);
void reset_globals_805D6A84(void);
s32 memset(s32 *, s32, s32);

}

void TObjLiveCameraCtrl::run_task() {
    update_toggle_state__12TBoss8DragonFv(this);
    update_live_camera__12TBoss8DragonFv(this);
    choose_next_camera_shot__12TBoss8DragonFv(this);
    if (camera_object != NULL) {
        ((TCameraCtrl *)camera_object)->copy_position_vectors(vector_34, vector_40);
    }
}

extern "C" {
void __dt__7TObjectFv(void *, s32);
void __dl__7TObjectFPv(void *);

TObjLiveCameraCtrl *__dt__18TObjLiveCameraCtrlFv(TObjLiveCameraCtrl *self, s16 flag) {
    if (self != NULL) {
        *(s32 **)((s8 *)self + 0x18) = __vt__18TObjLiveCameraCtrl;
        ((TObject **)&TObjLiveCameraCtrl__instances)[self->slot_index] = NULL;
        if (self->camera_object != NULL) queue_destruction__7TObjectFv(self->camera_object);
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
}
TObjLiveCameraCtrl::TObjLiveCameraCtrl(TObject *parent) : TObject(parent) {
    void *p;
    s32 n;
    __ct__14SubtractiveRngFv(((Cam_8030BED4 *)this)->f54);
    ((Cam_8030BED4 *)this)->f0 = TObjLiveCameraCtrl__class_name;
    n = live_camera_controller_next_slot;
    *(Cam_8030BED4 **)((s8 *)((u8 *)(&TObjLiveCameraCtrl__instances) + n * 4) + 0) = ((Cam_8030BED4 *)this);
    live_camera_controller_next_slot = n + 1;
    ((Cam_8030BED4 *)this)->f4c = n;
    ((Cam_8030BED4 *)this)->f1c = 0;
    ((Cam_8030BED4 *)this)->f1e = 0;
    ((Cam_8030BED4 *)this)->f20 = 1;
    ((Cam_8030BED4 *)this)->f24 = 0xFFFF;
    ((Cam_8030BED4 *)this)->f28 = 0;
    ((Cam_8030BED4 *)this)->f2c = 0;
    ((Cam_8030BED4 *)this)->f30 = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f34[0] = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f34[1] = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f34[2] = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f40[0] = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f40[1] = lbl_805DF1B4;
    ((Cam_8030BED4 *)this)->f40[2] = lbl_805DF168;
    subtractive_rng_seed(((Cam_8030BED4 *)this)->f54, 0);
    if (is_room_enemy_set_cleared(get_current_floor(), 1) == 0) {
        ((Cam_8030BED4 *)this)->f1c = 5;
        ((Cam_8030BED4 *)this)->f1e = -1;
        ((Cam_8030BED4 *)this)->f34[0] = lbl_805DF1B4;
        ((Cam_8030BED4 *)this)->f34[1] = lbl_805DF1D8;
        ((Cam_8030BED4 *)this)->f34[2] = lbl_805DF1DC;
        ((Cam_8030BED4 *)this)->f40[0] = lbl_805DF1B4;
        ((Cam_8030BED4 *)this)->f40[1] = lbl_805DF1D8;
        ((Cam_8030BED4 *)this)->f40[2] = lbl_805DF1E0;
    }
    p = __nw__7TObjectFUl(0x3C);
    if (p != 0) {
        p = fn_800832EC(p, tl_particlemodel, lbl_804757E0[((Cam_8030BED4 *)this)->f4c], ((Cam_8030BED4 *)this)->f34, ((Cam_8030BED4 *)this)->f40, lbl_805DF19C);
    }
    ((Cam_8030BED4 *)this)->f50 = p;
}
extern "C" {

s32 TObjLiveCameraCtrl::get_table_entry(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 > 1) {
        return 0;
    }
    return *(s32 *)((s8 *)&TObjLiveCameraCtrl__instances + (arg0 * 4));
}

s32 TObjLiveMonitor__sub_8030C050(void* p) { return *(s32*)((char*)p + 0x20); }
void fn_8030C058(void) {  }

void reset_globals_805D6A84(void) {
    live_camera_controller_next_slot = 0;
    memset(&TObjLiveCameraCtrl__instances, 0, 4);
}

}
