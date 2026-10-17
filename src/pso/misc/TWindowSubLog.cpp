#include "types.h"
#include "pso/misc/TWindowSubLog.h"
#include "pso/misc/TWindowChat.h"
#include "pso/ui/TAdScrollWinGC.h"

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

struct RecoveredGlobal_8027AF58_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Lg_8027B194 { s32 f0; u8 pad4[0x14]; void *vt; void *f1c; void *f20; s32 f24; void *f28; u8 f2c[0x10]; };

extern "C" {
s32 chat_accept_submission(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 is_flag_set__11TLoadingCurFv(void *, int);
s32 is_on_current_screen__11TCameraCtrlFv(int, int);
s32 play_sound_effect(int, int, int, int);
s32 TWindowCtrl__sub_8024701C(int);
s32 TWindowChat__sub_80247DFC(int);
s32 TWindowChat__sub_80247E50(int);
s32 fn_8026A61C(void *, f32);
s32 TWindowSubLog__sub_8026A664(void *, f32);
extern RecoveredGlobal_8027AF58_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD638;
extern const f32 lbl_805DD63C;
extern const f32 lbl_805DD640;
extern const f32 lbl_805DD644;
void TWindowCtrl__sub_8024ADAC(void *);
s32 create_message_log_window(void *, void *, void *);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
extern u8 lbl_8044F9C8[];
extern u8 lbl_8044F9D0[];
extern s32 __vt__13TWindowSubLog[];
extern s32 TWindowSubLog__class_name;
void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1);
void TWindowCtrl__sub_8024ADF0(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
int show_child_window__17TWindowMainMenu4PFv(void*);
int update_trade_submenu__15TWindowMainMenuFv(void*);

void TWindowSubLog::render() {  }

typedef char RecoveredGlobal_8027AF58_lbl_8050E208_size[sizeof(RecoveredGlobal_8027AF58_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubLog::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if ((((TWindowChat *)(*(s32 *)&this->m_28))->is_mode_bit4() != 0) && (chat_accept_submission((void *) (arg0 + 0x2C)) != 0)) {
        TWindowChat__sub_80247E50((int) (*(s32 *)&this->m_28));
    }
    if (((TWindowChat *)(*(s32 *)&this->m_28))->is_visible() != 0) {
        TWindowChat__sub_80247DFC((int) (*(s32 *)&this->m_28));
    }
    if (TWindowCtrl__sub_8024701C((int) (*(s32 *)&this->m_28)) != 0) {
        TWindowSubLog__sub_8026A664((void *) (*(u8 * *)&this->m_24), (f32) (lbl_805DD638));
        return;
    }
    TWindowSubLog__sub_8026A664((void *) (*(u8 * *)&this->m_24), (f32) (lbl_805DD63C));
    temp_r31 = (u8 *)&controller_input_state.value + 0x20;
    if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x10)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10)) != 0)) {
        fn_8026A61C((void *) (*(u8 * *)&this->m_24), (f32) (lbl_805DD640));
    }
    if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x20)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20)) != 0)) {
        ((TAdScrollWinGC *)(*(u8 * *)&this->m_24))->advance_scroll((f32) (lbl_805DD644));
    }
    temp_r3 = (u8 *)(*(u8 * *)&this->m_24);
    if ((*(f32 *)((s8 *)temp_r3 + 0x3C) == *(f32 *)((s8 *)temp_r3 + 0x4C)) && ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0))) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        temp_r3_2 = (u8 *)(*(u8 * *)&this->m_20);
        ((VObj_18_204a81 *)(temp_r3_2))->m7();
        ((TWindowSubLog *)(*(u8 * *)&this->m_20))->clear_flag4c_bit8();
    }
}

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TWindowSubLog;
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x24)); *(s32 *)((s8 *)arg0 + 0x24) = 0; }
        if (*(void **)((s8 *)arg0 + 0x20) != NULL) { ((TWindowSubLog *)(*(void **)((s8 *)arg0 + 0x20)))->clear_flag4c_bit8(); ((TWindowSubLog *)(*(void **)((s8 *)arg0 + 0x20)))->cleanup(); }
        TWindowCtrl__sub_8024ADF0(*(void **)((s8 *)arg0 + 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
TWindowSubLog::TWindowSubLog(TObject *arg1, void *arg2) : TObject(arg1) {
    void *w;
    ((Lg_8027B194 *)this)->f0 = TWindowSubLog__class_name;
    ((Lg_8027B194 *)this)->f20 = arg1;
    ((Lg_8027B194 *)this)->f1c = arg2;
    TWindowCtrl__sub_8024ADAC(((Lg_8027B194 *)this)->f1c);
    fn_8027B288((void*)(((Lg_8027B194 *)this)->f20));
    ((TWindowSubLog *)(((Lg_8027B194 *)this)->f20))->set_flag4c_bit8();
    ((Lg_8027B194 *)this)->f24 = create_message_log_window(lbl_8044F9C8, lbl_8044F9D0, ((Lg_8027B194 *)this)->f1c);
    w = new TWindowChat((TObject *)((Lg_8027B194 *)this), (void *)((Lg_8027B194 *)this)->f2c);
    ((Lg_8027B194 *)this)->f28 = w;
    fn_8027B2A8((void*)(((Lg_8027B194 *)this)->f28));
}
extern "C" {

void TWindowSubLog::clear_flag4c_bit8() { this->m_4c &= 0xfffffff7; }
int TWindowSubLog::cleanup() { return show_child_window__17TWindowMainMenu4PFv(this); }
void TWindowSubLog::set_flag4c_bit8() { this->m_4c |= 0x8; }
int fn_8027B288(void* p) { return update_trade_submenu__15TWindowMainMenuFv(p); }
void fn_8027B2A8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x200; }

}
