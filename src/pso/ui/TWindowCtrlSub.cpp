#include "pso/TWindowCtrlSub.h"

extern s32 TWindowCtrlMain__sub_controller;

#include "types.h"

extern "C" {
void run_task__14TWindowCtrlSubFv(void);
s32 update_fade_alphas__15TWindowCtrlMainFv();
s32 resolve_chat_balloon_overlaps();
s32 run_tasks__7TObjectFv(s32);
extern s32 TWindowCtrlMain__window_task_root;
void run_task__14TWindowCtrlSubFv(void);
}

extern "C" {

void *TWindowCtrlSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__14TWindowCtrlSub[];
extern void *TWindowCtrlSub__name;

void run_task__14TWindowCtrlSubFv(void) {
    resolve_chat_balloon_overlaps();
    update_fade_alphas__15TWindowCtrlMainFv();
    run_tasks__7TObjectFv(TWindowCtrlMain__window_task_root);
}

TWindowCtrlSub::~TWindowCtrlSub() {
    TWindowCtrlMain__sub_controller = 0;
}
void *TWindowCtrlSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TWindowCtrlSub;
    *(void **)((s8 *)arg0 + 0x0) = TWindowCtrlSub__name;
    return arg0;
}

}

extern "C" {
extern char lbl_8044EC14[];
void *TWindowCtrlSub__name = lbl_8044EC14;
}
