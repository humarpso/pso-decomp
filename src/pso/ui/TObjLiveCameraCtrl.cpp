#include "pso/TObjLiveCameraCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Cam_8030BED4 {
    s32 f0;
    u8 pad4[0x18 - 4];
    M2C_UNK *vt;
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
void update_toggle_state__12TBoss8DragonFPv(void *);
void update_live_camera__12TBoss8DragonFPv(void *);
void choose_next_camera_shot__12TBoss8DragonFPv(void *);
void copy_position_vectors__11TCameraCtrlFPvPvPv(void *, void *, void *);
M2C_UNK get_current_floor();
void subtractive_rng_seed(void *, s32);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(void *);
void *fn_800832EC(void *, int, int, void *, void *, f32);
s32 is_room_enemy_set_cleared(M2C_UNK, int);
void *__nw__7TObjectFUl(u32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804757E0[];
extern M2C_UNK __vt__18TObjLiveCameraCtrl[];
extern s32 lbl_805D40E4;
extern s32 tl_particlemodel;
extern s32 lbl_805D6A84;
extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;
extern const f32 lbl_805DF168;
extern const f32 lbl_805DF19C;
extern const f32 lbl_805DF1B4;
extern const f32 lbl_805DF1D8;
extern const f32 lbl_805DF1DC;
extern const f32 lbl_805DF1E0;
Cam_8030BED4 *TObjLiveCameraCtrl__ct(Cam_8030BED4 *arg0, void *parent);
}

extern "C" {

s32 TObjLiveMonitor__sub_8030C050(void* p);
void fn_8030C058(void);
s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0);
void reset_globals_805D6A84(void);
M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);

extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;

}

void TObjLiveCameraCtrl::run_task() {
    update_toggle_state__12TBoss8DragonFPv(this);
    update_live_camera__12TBoss8DragonFPv(this);
    choose_next_camera_shot__12TBoss8DragonFPv(this);
    if (camera_object != NULL) {
        copy_position_vectors__11TCameraCtrlFPvPvPv(camera_object, vector_34, vector_40);
    }
}

extern "C" {
void __dt__7TObjectFv(void *, s32);
void __dl__7TObjectFPv(void *);

TObjLiveCameraCtrl *__dt__18TObjLiveCameraCtrlFv(TObjLiveCameraCtrl *self, s16 flag) {
    if (self != NULL) {
        M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__18TObjLiveCameraCtrl;
        ((TObject **)&TObjLiveCameraCtrl__data_805D6A88)[self->slot_index] = NULL;
        if (self->camera_object != NULL) queue_destruction__7TObjectFv(self->camera_object);
        __dt__7TObjectFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
}

extern "C" {

Cam_8030BED4 *TObjLiveCameraCtrl__ct(Cam_8030BED4 *arg0, void *parent) {
    void *p;
    s32 n;
    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->vt = __vt__18TObjLiveCameraCtrl;
    init_single_player_chr_select__6TLobbyFPv(arg0->f54);
    arg0->f0 = lbl_805D40E4;
    n = lbl_805D6A84;
    M2C_FIELD(((u8 *)(&TObjLiveCameraCtrl__data_805D6A88) + n * 4), Cam_8030BED4 **, 0) = arg0;
    lbl_805D6A84 = n + 1;
    arg0->f4c = n;
    arg0->f1c = 0;
    arg0->f1e = 0;
    arg0->f20 = 1;
    arg0->f24 = 0xFFFF;
    arg0->f28 = 0;
    arg0->f2c = 0;
    arg0->f30 = lbl_805DF1B4;
    arg0->f34[0] = lbl_805DF1B4;
    arg0->f34[1] = lbl_805DF1B4;
    arg0->f34[2] = lbl_805DF1B4;
    arg0->f40[0] = lbl_805DF1B4;
    arg0->f40[1] = lbl_805DF1B4;
    arg0->f40[2] = lbl_805DF168;
    subtractive_rng_seed(arg0->f54, 0);
    if (is_room_enemy_set_cleared(get_current_floor(), 1) == 0) {
        arg0->f1c = 5;
        arg0->f1e = -1;
        arg0->f34[0] = lbl_805DF1B4;
        arg0->f34[1] = lbl_805DF1D8;
        arg0->f34[2] = lbl_805DF1DC;
        arg0->f40[0] = lbl_805DF1B4;
        arg0->f40[1] = lbl_805DF1D8;
        arg0->f40[2] = lbl_805DF1E0;
    }
    p = __nw__7TObjectFUl(0x3C);
    if (p != 0) {
        p = fn_800832EC(p, tl_particlemodel, lbl_804757E0[arg0->f4c], arg0->f34, arg0->f40, lbl_805DF19C);
    }
    arg0->f50 = p;
    return arg0;
}

s32 get_table_entry__18TObjLiveCameraCtrlFi(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 > 1) {
        return 0;
    }
    return *(s32 *)((s8 *)&TObjLiveCameraCtrl__data_805D6A88 + (arg0 * 4));
}

s32 TObjLiveMonitor__sub_8030C050(void* p) { return *(s32*)((char*)p + 0x20); }
void fn_8030C058(void) {  }

extern s32 lbl_805D6A84;
extern M2C_UNK TObjLiveCameraCtrl__data_805D6A88;

void reset_globals_805D6A84(void) {
    lbl_805D6A84 = 0;
    memset(&TObjLiveCameraCtrl__data_805D6A88, 0, 4);
}

}
