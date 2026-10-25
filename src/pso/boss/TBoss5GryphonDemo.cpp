// ---- pso/boss/TBoss5GryphonDemo
#include "pso/TBoss5GryphonDemo.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss5GryphonColli_C.h"

#include "types.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct E_80066304 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_80066304 { u8 pad[0xa4]; E_80066304 *entries; s32 count; };

struct E_8006633C { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_8006633C { u8 pad[0xa4]; E_8006633C *entries; s32 count; };

struct O_80066304;
struct Seg_800663DC {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fc;
    u8 pad10[8];
    s32 f18;
    u8 pad1c[0x10];
};

struct Obj_800663DC {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s16 f1c;
    u8 pad1e[0xA4 - 0x1E];
    Seg_800663DC *segs;
    s32 count;
    u8 posbuf[0xC];
};

struct Obj_800665FC { s32 f0; u8 pad4[0x14]; void *f18; f32 f1c; f32 f20; s32 f24; };

struct Cam_800665FC { s8 f8; s8 f9; s16 fa; f32 fc; f32 f10; };

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
void set_camera_capture_overlay_alpha(int a0);
s32 restore_player_cameras();
u8 *get_scripted_camera_playback();
void fn_8002B630(u8 *arg0, u8 *arg1);
void *mem_alloc(u32 size);
u16 register_entity_by_id(void *ov);
int refresh_collision_body_centers__13TUnk_804AF8A0Fv(void*);
extern s32 gryphon_demo_collision_body_desc[];
extern s32 lbl_804886AC[];
extern s32 lbl_805D2808;



int TBoss8Dragon__sub_8005D700(void);
s32 activate_camera_mode(s32 arg0);
extern s32 lbl_805D2810;

void TBoss5GryphonDemo__sub_8006626C(void* p);
int matrix_mult_vec(void*, void*, void*);
int post_translate_matrix(void*);
s32 free_collision_body_parts(void *);
int set_matrix_identity(void*);
int rotate_matrix_y(void*, s32);
int push_matrix(void*);
int pop_matrix(void);
s32 __dl__7TObjectFPv(void *);

void TBoss5GryphonDemo::render() {  }

void TBoss5GryphonDemo::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *scripted_camera_playback;
    scripted_camera_playback = get_scripted_camera_playback();
    set_camera_capture_overlay_alpha(0x8F);
    if ((*(u16 *)((s8 *)scripted_camera_playback + 2) & 1) || ((s32) **(s32 **)((s8 *)arg0 + 0x24) == 0)) {
        restore_player_cameras();
        queue_destruction__7TObjectFv((arg0));
    }
}
TBoss5GryphonDemo::~TBoss5GryphonDemo() {}
}
TBoss5GryphonDemo::TBoss5GryphonDemo(TObject *parent, s32 arg2, f32 farg0) : TObject(parent) {
    Cam_800665FC c;
    ((Obj_800665FC *)this)->f0 = lbl_805D2810;
    ((Obj_800665FC *)this)->f1c = farg0;
    ((Obj_800665FC *)this)->f20 = 0.0f;
    ((Obj_800665FC *)this)->f24 = arg2;
    switch (TBoss8Dragon__sub_8005D700()) {
    case 0:
        c.f8 = 1;
        c.f9 = 0;
        c.fa = 0;
        c.fc = ((Obj_800665FC *)this)->f20;
        c.f10 = ((Obj_800665FC *)this)->f1c;
        activate_camera_mode(5);
        ((TCameraCtrl *)(&c))->cache_target_and_forward(0x238E);
        break;
    }
}
