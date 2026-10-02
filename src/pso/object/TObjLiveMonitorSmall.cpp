#include "pso/TObjLiveMonitorSmall.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen();
M2C_UNK TObjPlayer__sub_80084500();
M2C_UNK free_children__12TObjDoorJungFPvPv(void *, u16);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
M2C_UNK update_camera__15TObjLiveMonitorFPv(int);
s32 get_table_entry__18TObjLiveCameraCtrlFi(s32);
s32 TObjLiveMonitor__sub_8030C050(s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOSignCave03__sub_803DB510(void *);
int TObjPlayer__sub_8030B208(void *arg0);
}

extern "C" {

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2);
int render__20TObjLiveMonitorSmallFv(void* p);
int run_task__20TObjLiveMonitorSmallFv(void* p);
s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0);
void *TObjFish__sub_8001EDC4(s32, M2C_UNK);
void __ct__15TObjLiveMonitorFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
int fn_8030B370(void*);

int render__20TObjLiveMonitorSmallFv(void* p) { return TObjPlayer__sub_8030B208((void *)(p)); }
int run_task__20TObjLiveMonitorSmallFv(void* p) { return fn_8030B370(p); }

extern M2C_UNK __vt__20TObjLiveMonitorSmall[];
extern void *lbl_805D40F0;

TObjLiveMonitorSmall::~TObjLiveMonitorSmall() {}
void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2) {
    __ct__15TObjLiveMonitorFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjLiveMonitorSmall;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40F0;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    return arg0;
}

extern s32 lbl_805D6A80;
extern s32 lbl_805D6A8C;
extern u8 lbl_805D6A90;

s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0) {
    void *var_r31;
    void *obj;

    if ((s8) lbl_805D6A90 == 0) {
        lbl_805D6A8C = 1;
        lbl_805D6A90 = 1;
    }
    var_r31 = M2C_FIELD(TObjFish__sub_8001EDC4(lbl_805D6A80, 0), void **, 0x2C);
    while (var_r31 != NULL) {
        if (lbl_805D6A8C != 0) {
            obj = __nw__7TObjectFUl(0x2C);
            if (obj != NULL) {
                __ct__20TObjLiveMonitorSmallFv((void *)(obj), (void *)(arg0), (void *)(var_r31));
            }
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    }
    return 0;
}
int TObjPlayer__sub_8030B208(void *arg0) {
    s32 e;
    s32 var_r4;
    switch (M2C_FIELD(arg0, s32 *, 0x24)) {
    case 0:
        e = get_table_entry__18TObjLiveCameraCtrlFi(M2C_FIELD(arg0, s32 *, 0x24));
        if (e != 0 && TObjLiveMonitor__sub_8030C050(e) != 0) {
            update_camera__15TObjLiveMonitorFPv(e);
        } else if (is_split_screen() == 0) {
            TObjPlayer__sub_80084500();
        } else {
            notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x20));
        }
        var_r4 = 0;
        break;
    case 1:
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x20));
        var_r4 = 2 - ((M2C_FIELD(arg0, u32 *, 0x28) / 3U) % 3);
        break;
    case 2:
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x20));
        var_r4 = 2 - ((M2C_FIELD(arg0, u32 *, 0x28) / 90U) % 3);
        var_r4 += 3;
        break;
    case 3:
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x20));
        var_r4 = 4 - ((M2C_FIELD(arg0, u32 *, 0x28) / 3U) % 5);
        var_r4 += 6;
        break;
    case 4:
        if (is_split_screen() == 0) {
            TObjPlayer__sub_80084500();
        }
        var_r4 = 0;
        break;
    default:
        return M2C_FIELD(arg0, s32 *, 0x24);
    }
    free_children__12TObjDoorJungFPvPv((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), s32 *, 4)), var_r4);
    TObjPlayer__sub_803D9B2C();
    TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), s32 *, 4)));
    return pop_matrix();
}

}
