#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK play_area_music(void *);
s32 is_flag_set__14TBoss6PlotFalzFv();
M2C_UNK init_warp__15TBoss6EmptyWarpFv();
M2C_UNK create__12TBoss6ThanksFv();
s32 is_ship_door_ready__12TBoss6ThanksFPv();
extern M2C_UNK lbl_804709E0[];
extern M2C_UNK lbl_804709E8[];
void run_task__15TBoss6EmptyWarpFv(u8 *arg0);
}

extern "C" {

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1);
int render__15TBoss6EmptyWarpFv(void* p);
void end_cutscene_camera__14TBoss6PlotFalzFPv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_802B0DCC(void*);

int render__15TBoss6EmptyWarpFv(void* p) { return fn_802B0DCC(p); }

extern M2C_UNK __vt__15TBoss6EmptyWarp[];

void run_task__15TBoss6EmptyWarpFv(u8 *arg0) {
    if (is_flag_set__14TBoss6PlotFalzFv() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 3) {
        init_warp__15TBoss6EmptyWarpFv();
        if (is_ship_door_ready__12TBoss6ThanksFPv() != 0) {
            create__12TBoss6ThanksFv();
            play_area_music((void *) (lbl_804709E0));
        } else {
            play_area_music((void *) (lbl_804709E8));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *__dt__15TBoss6EmptyWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6EmptyWarp;
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
