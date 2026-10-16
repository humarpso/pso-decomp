#include "pso/ui/TAdLoadQuestLineGC.h"

#include "types.h"
#include "pso/TMainTask.h"

extern "C" {
s32 __nw__7TObjectFUl(int);
void *TAdLoadQuestLineGC__ct(void *arg0, void *arg1, void *arg2);
extern TAdLoadQuestLineGC *ad_load_quest_line_instances[3];
s32 get_or_create_line__14TAdLoadQuestGCFii(s32 arg0, s32 arg1);
}

extern "C" {

void *TAdLoadQuestLineGC__ct(void *arg0, void *arg1, void *arg2);

void __ct__7TObjectFP7TObject(void *);
s32 init_quest_line_draw_colors();
s32 fn_80349E5C();

void TAdLoadQuestLineGC::render_by_state() {
    s32 temp_r0;

    temp_r0 = this->m_state;
    switch (temp_r0) {
    case 0:
        fn_80349E5C();
        return;
    case 1:
        init_quest_line_draw_colors();
        return;
    }
}

}

void TAdLoadQuestLineGC::render() {
    if (TMainTask::get_state_flag() != 1) {
        ++m_frameCount;
        if (m_frameCount >= 2) {
            render_by_state();
        }
    }
}

void TAdLoadQuestLineGC::run_task() {}

TAdLoadQuestLineGC::~TAdLoadQuestLineGC() {
    if (ad_load_quest_line_instances[m_state] != NULL) {
        ad_load_quest_line_instances[m_state] = NULL;
    }
}

extern "C" {

extern s32 __vt__18TAdLoadQuestLineGC[];
extern void *lbl_805D4300;

void *TAdLoadQuestLineGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TAdLoadQuestLineGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4300;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x20) = -1;
    return arg0;
}
s32 get_or_create_line__14TAdLoadQuestGCFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) *(s32 *)((s8 *)((s32 *)ad_load_quest_line_instances) + temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x24));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)TAdLoadQuestLineGC__ct((void *)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1))));
        }
        *(s32 *)((s8 *)((s32 *)ad_load_quest_line_instances) + temp_r30) = var_r0;
    }
    return *(s32 *)((s8 *)((s32 *)ad_load_quest_line_instances) + temp_r30);
}

}
