#include "pso/ui/TAdLoadQuestCellGC.h"

#include "types.h"

extern "C" {
s32 get_state_flag__9TMainTaskFv();
s32 __nw__7TObjectFUl(int);
void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2);
__declspec(section ".data") TAdLoadQuestCellGC *ad_load_quest_cell_table[3] = { 0, 0, 0 };
s32 get_or_create_cell__14TAdLoadQuestGCFii(s32 arg0, s32 arg1);
}

extern "C" {

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2);

void __ct__7TObjectFP7TObject(void *);
s32 draw_quest_load_panel_overlays();
s32 draw_quest_load_letterbox_bars();
s32 fn_80349844();

void TAdLoadQuestCellGC::render_state() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x1C);
    switch (temp_r0) {
    case 0:
        fn_80349844();
        return;
    case 1:
        draw_quest_load_letterbox_bars();
        return;
    case 2:
        draw_quest_load_panel_overlays();
        return;
    }
}

}

void TAdLoadQuestCellGC::render() {
    if (get_state_flag__9TMainTaskFv() != 1) {
        ++m_frameCount;
        if (m_frameCount >= 2) {
            render_state();
        }
    }
}

void TAdLoadQuestCellGC::run_task() {}

TAdLoadQuestCellGC::~TAdLoadQuestCellGC() {
    if (ad_load_quest_cell_table[m_state] != NULL) {
        ad_load_quest_cell_table[m_state] = NULL;
    }
}

extern "C" {

extern s32 __vt__18TAdLoadQuestCellGC[];
extern void *lbl_805D42F8;

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TAdLoadQuestCellGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D42F8;
    *(void **)((s8 *)arg0 + 0x1C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x20) = -1;
    return arg0;
}
s32 get_or_create_cell__14TAdLoadQuestGCFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) *(s32 *)((s8 *)((s32 *)ad_load_quest_cell_table) + temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x24));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)TAdLoadQuestCellGC__ct((void *)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1))));
        }
        *(s32 *)((s8 *)((s32 *)ad_load_quest_cell_table) + temp_r30) = var_r0;
    }
    return *(s32 *)((s8 *)((s32 *)ad_load_quest_cell_table) + temp_r30);
}

}
