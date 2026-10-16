#include "types.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/ui/TAdChrSelASlotGC.h"

extern "C" {
void *__nw__7TObjectFUl(int);
void *TWindowMessageYesNo__ct(void *, void *, void *, void *, void *);
}

extern "C" {

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1);
s32 create_window_menu(s32, s32, s32);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int is_child_visible__17TWindowSubComCardFv(void* a0 = 0);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);

void TWindowMessageYesNo::render() {  }

void TWindowMessageYesNo::run_task() { if (is_child_visible__17TWindowSubComCardFv(this) != 0) { ((TWindowMenu *)(*(void**)((char*)this + 0x28)))->confirm_selection(); } }

extern s32 __vt__19TWindowMessageYesNo[];

void *TWindowMessageYesNo::create(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TWindowMessageYesNo__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMessageYesNo;
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__19TWindowMessageYesNo[];
extern void *TWindowMessageYesNo__name;

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowMessageYesNo;
    *(void **)((s8 *)arg0 + 0x0) = TWindowMessageYesNo__name;
    *(void **)((s8 *)arg0 + 0x24) = arg2;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(void **)((s8 *)arg0 + 0x20) = arg3;
    *(void **)((s8 *)arg0 + 0x1C) = arg4;
    return arg0;
}

}
