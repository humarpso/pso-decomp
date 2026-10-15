#include "pso/ui/TAdLoadQuestGC.h"

#include "types.h"

extern "C" {

s32 create_cost_window(s32 arg0);
s32 TWindowCost__ct(s32, s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 __nw__7TObjectFUl(s32);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_window_layout_position(s32);

s32 create_cost_window(s32 arg0) {
    s32 var_r30;

    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        return 0;
    }
    var_r30 = __nw__7TObjectFUl(0x74);
    if (var_r30 != 0) {
        var_r30 = TWindowCost__ct(var_r30, get_window_layout_position(0x59), arg0, get_message_10__20TWindowSubStatusDispFl(0x109));
    }
    return var_r30;
}

}

extern "C" {
void queue_destruction__7TObjectFv(void *);
TObject *TAdLoadQuestGC__sub_80309854(s32);
TObject *TAdLoadQuestGC__sub_80309868(s32);
TObject *TAdLoadQuestGC__sub_8030987C(s32);
}

void TAdLoadQuestGC::render() {}
void TAdLoadQuestGC::run_task() {}

TAdLoadQuestGC::~TAdLoadQuestGC() {
    TObject *arrows[3];
    TObject *cells[3];
    TObject *lines[2];
    if (quest_display != NULL) {
        queue_destruction__7TObjectFv(quest_display);
        quest_display = NULL;
    }
    for (u32 i = 0; i < 3; ++i) {
        arrows[i] = TAdLoadQuestGC__sub_8030987C(2 - i);
        if (arrows[i] != NULL) queue_destruction__7TObjectFv(arrows[i]);
    }
    for (u32 i = 0; i < 2; ++i) {
        lines[i] = TAdLoadQuestGC__sub_80309868(1 - i);
        if (lines[i] != NULL) queue_destruction__7TObjectFv(lines[i]);
    }
    for (u32 i = 0; i < 3; ++i) {
        cells[i] = TAdLoadQuestGC__sub_80309854(2 - i);
        if (cells[i] != NULL) queue_destruction__7TObjectFv(cells[i]);
    }
}
