#include "pso/TObjLiveMonitorSmall.h"

#include "types.h"

extern "C" {
s32 is_split_screen();
s32 TObjPlayer__sub_80084500();
s32 free_children__12TObjDoorJungFPvPv(void *, u16);
s32 notify_fish_if_valid__10TObjPlayerFUi(int);
s32 update_camera__15TObjLiveMonitorFPv(int);
s32 get_table_entry__18TObjLiveCameraCtrlFi(s32);
s32 TObjLiveMonitor__sub_8030C050(s32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_ginja_model(void *);
int render_live_monitor_screen__10TObjPlayerFPv(void *arg0);
}

extern "C" {

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2);
int render__20TObjLiveMonitorSmallFv(void* p);
int run_task__20TObjLiveMonitorSmallFv(void* p);
s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0);
void *get_bml_model(s32, s32);
void __ct__15TObjLiveMonitorFv(void *);
void *__nw__7TObjectFUl(s32);
int fn_8030B370(void*);

int render__20TObjLiveMonitorSmallFv(void* p) { return render_live_monitor_screen__10TObjPlayerFPv((void *)(p)); }
int run_task__20TObjLiveMonitorSmallFv(void* p) { return fn_8030B370(p); }

extern s32 __vt__20TObjLiveMonitorSmall[];
extern void *TObjLiveMonitorSmall__name;

TObjLiveMonitorSmall::~TObjLiveMonitorSmall() {}
void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2) {
    __ct__15TObjLiveMonitorFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TObjLiveMonitorSmall;
    *(void **)((s8 *)arg0 + 0x0) = TObjLiveMonitorSmall__name;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    return arg0;
}

extern s32 live_monitor_shared_resource;
extern s32 live_monitor_small_spawned_flag;
extern u8 TObjLiveMonitorSmall__fish_spawned_flag;

s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0) {
    void *var_r31;
    void *obj;

    if ((s8) TObjLiveMonitorSmall__fish_spawned_flag == 0) {
        live_monitor_small_spawned_flag = 1;
        TObjLiveMonitorSmall__fish_spawned_flag = 1;
    }
    var_r31 = *(void **)((s8 *)(get_bml_model(live_monitor_shared_resource, 0)) + 0x2C);
    while (var_r31 != NULL) {
        if (live_monitor_small_spawned_flag != 0) {
            obj = __nw__7TObjectFUl(0x2C);
            if (obj != NULL) {
                __ct__20TObjLiveMonitorSmallFv((void *)(obj), (void *)(arg0), (void *)(var_r31));
            }
        }
        var_r31 = *(void **)((s8 *)var_r31 + 0x30);
    }
    return 0;
}
int render_live_monitor_screen__10TObjPlayerFPv(void *arg0) {
    s32 e;
    s32 var_r4;
    switch (*(s32 *)((s8 *)arg0 + 0x24)) {
    case 0:
        e = get_table_entry__18TObjLiveCameraCtrlFi(*(s32 *)((s8 *)arg0 + 0x24));
        if (e != 0 && TObjLiveMonitor__sub_8030C050(e) != 0) {
            update_camera__15TObjLiveMonitorFPv(e);
        } else if (is_split_screen() == 0) {
            TObjPlayer__sub_80084500();
        } else {
            notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x20));
        }
        var_r4 = 0;
        break;
    case 1:
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x20));
        var_r4 = 2 - ((*(u32 *)((s8 *)arg0 + 0x28) / 3U) % 3);
        break;
    case 2:
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x20));
        var_r4 = 2 - ((*(u32 *)((s8 *)arg0 + 0x28) / 90U) % 3);
        var_r4 += 3;
        break;
    case 3:
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x20));
        var_r4 = 4 - ((*(u32 *)((s8 *)arg0 + 0x28) / 3U) % 5);
        var_r4 += 6;
        break;
    case 4:
        if (is_split_screen() == 0) {
            TObjPlayer__sub_80084500();
        }
        var_r4 = 0;
        break;
    default:
        return *(s32 *)((s8 *)arg0 + 0x24);
    }
    free_children__12TObjDoorJungFPvPv((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 4)), var_r4);
    push_matrix();
    draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x1C)) + 4)));
    return pop_matrix();
}

}
