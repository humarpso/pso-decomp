#include "pso/TWindowCtrlSub.h"

extern s32 TWindowCtrlMain__sub_controller;

#include "types.h"
#include "pso/TObject.h"
#include "pso/misc/TWindowCtrlMain.h"

extern "C" {
void resolve_chat_balloon_overlaps(void);
extern s32 TWindowCtrlMain__window_task_root;
void *TWindowCtrlSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__14TWindowCtrlSub[];
extern void *TWindowCtrlSub__name;

void TWindowCtrlSub::run_task() {
    resolve_chat_balloon_overlaps();
    TWindowCtrlMain::update_fade_alphas();
    ((TObject *)TWindowCtrlMain__window_task_root)->run_tasks();
}

TWindowCtrlSub::~TWindowCtrlSub() {
    TWindowCtrlMain__sub_controller = 0;
}
void *TWindowCtrlSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TWindowCtrlSub;
    *(void * *)&((TWindowCtrlSub *)arg0)->m_name = TWindowCtrlSub__name;
    return arg0;
}

extern char lbl_8044EC14[];
void *TWindowCtrlSub__name = lbl_8044EC14;
}
