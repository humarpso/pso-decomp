#include "types.h"
#include "pso/misc/TWindowMessageScroll.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"

struct RecoveredGlobal_8035D694___vt__20TWindowMessageScroll {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_80244994(void *);
s32 update_window_entry_list(void *, void *);
s32 retire_scrolled_lines__14TWindowMessageFPv(f32);
s32 TWindowMessageQuest__ct(void *, void *);
extern s32 __vt__20TWindowMessageScroll[];
extern s32 TWindowMessageScroll__class_name;
extern const f32 lbl_805E01B8;
u8 *TWindowMessageScroll__ct(u8 *arg0, s32 arg1, s32 *arg2);
}

extern "C" {

void *__dt__20TWindowMessageScrollFv(void *arg0, s16 arg1);
s32 TLobby__sub_80269C90(void);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
void __dl__7TObjectFPv(void *);
void __dt__19TWindowMessageQuestFv(void *, int);
s32 __nw__7TObjectFUl(s32 a0 = 0);

extern s32 __vt__20TWindowMessageScroll[];

void TWindowMessageScroll::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x6C);
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1 + *(f32 *)((s8 *)arg0 + 0x94));
    retire_scrolled_lines__14TWindowMessageFPv((f32) (temp_f1));
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TWindowSubComCard *)arg0)->update_fade();
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    if ((fn_80244994((void *) (arg0)) != 0) && (*(f32 *)((s8 *)arg0 + 0x80) <= *(f32 *)((s8 *)arg0 + 0x6C))) {
        **(s32 **)((s8 *)arg0 + 0x98) = 1;
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
    TWindowMessageQuest__ct((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8035D694___vt__20TWindowMessageScroll *)&__vt__20TWindowMessageScroll).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowMessageScroll__class_name;
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) lbl_805E01B8;
    *(s32 **)((s8 *)arg0 + 0x98) = arg2;
    **(s32 **)((s8 *)arg0 + 0x98) = 0;
    return arg0;
}

}
