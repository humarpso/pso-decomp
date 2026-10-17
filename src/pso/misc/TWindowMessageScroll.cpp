#include "types.h"
#include "pso/misc/TWindowMessageQuest.h"
#include "pso/unk/text_8026B260.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowMessageScroll.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"

struct RecoveredGlobal_8035D694___vt__20TWindowMessageScroll {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 retire_scrolled_lines__14TWindowMessageFv(f32);
extern s32 __vt__20TWindowMessageScroll[];
extern s32 TWindowMessageScroll__class_name;
extern const f32 lbl_805E01B8;
void __dl__7TObjectFPv(void *);

void TWindowMessageScroll::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    temp_f1 = this->m_6c;
    this->m_6c = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x94));
    retire_scrolled_lines__14TWindowMessageFv(temp_f1);
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TUnk_804CE018 *)arg0)->update_fade();
    ((TUnk_804CE018 *)arg0)->update_window_entry_list((void *) (arg0 + 0x24));
    if ((((TUnk_804CE018 *)arg0)->sub_80244994() != 0) && (*(f32 *)&this->unk_80 <= this->m_6c)) {
        *this->m_98 = 1;
    }
}

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TWindowMessageScroll;
        __dt__19TWindowMessageQuestFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8035D694___vt__20TWindowMessageScroll_size[sizeof(RecoveredGlobal_8035D694___vt__20TWindowMessageScroll) == 0x18 ? 1 : -1];
u8 *TWindowMessageScroll__ct(u8 *arg0, s32 arg1, s32 *arg2) {
    TWindowMessageQuest__ct((arg0), (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8035D694___vt__20TWindowMessageScroll *)&__vt__20TWindowMessageScroll).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowMessageScroll__class_name;
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) lbl_805E01B8;
    ((TWindowMessageScroll *)arg0)->m_98 = arg2;
    *((TWindowMessageScroll *)arg0)->m_98 = 0;
    return arg0;
}

}
