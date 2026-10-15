#include "types.h"
#include "pso/misc/TWindowMessageYesNo.h"

extern "C" {
void *__nw__7TObjectFUl(int);
void *TWindowMessageYesNo__ct(void *, void *, void *, void *, void *);
}

extern "C" {

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *__dt__19TWindowMessageYesNoFv(void *arg0, s16 arg1);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFv(void*);
s32 reparent_to_main_ctrl__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int is_child_visible__17TWindowSubComCardFv(void* a0 = 0);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int clear_trade_flag__19TWindowSubTradeMainFv(void*);
int close__17TWindowSubComCardFv(void* p);
void forward_slot_selection__16TAdChrSelASlotGCFPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
void free_member__17TWindowSubComCardFv(void* p);
s32 get_status_flag__17TWindowSubComCardFv(s32);
void notify_trade_main__17TWindowSubComCardFv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFv(void* p);
int queue_destruction__7TObjectFv(void*);
int set_flag70_bit10__16TObjCityMainWarpFv(void*);
int set_flag_40__16TAdChrSelASlotGCFv(void*);
int set_selected_index__17TWindowSubComCardFs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
void update_card_slot__17TWindowSubComCardFv(void* p);

void TWindowMessageYesNo::render() {  }

void TWindowMessageYesNo::run_task() { if (is_child_visible__17TWindowSubComCardFv(this) != 0) { confirm_selection__11TWindowMenuFv(*(void**)((char*)this + 0x28)); } }

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
