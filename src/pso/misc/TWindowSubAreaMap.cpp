#include "types.h"
#include "pso/misc/TWindowSubComCard_80244774.h"
#include "pso/misc/TWindowSubAreaMap.h"
#include "pso/misc/TWindowSubAreaMapDisp.h"
#include "pso/misc/TRaderMapCore.h"

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

struct RecoveredGlobal_80271480_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802715F0_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
extern RecoveredGlobal_80271480_lbl_8050E208 controller_input_state;
s32 is_flag_set__11TLoadingCurFv(void *, int);
s32 is_on_current_screen__11TCameraCtrlFv(int, int);
extern const f32 lbl_805DD478;
extern const f32 lbl_805DD47C;
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void TWindowSubAreaMap::render() {  }

extern s32 __vt__17TWindowSubAreaMap[];

typedef char RecoveredGlobal_80271480_lbl_8050E208_size[sizeof(RecoveredGlobal_80271480_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubAreaMap::run_task() {
    u8 *temp_r3;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_input_state.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        temp_r3 = (u8 *)(*(u8 * *)&this->m_20);
        ((VObj_18_204a81 *)(temp_r3))->m7();
    }
}

void *__dt__17TWindowSubAreaMapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowSubAreaMap;
        if (*(void **)((s8 *)arg0 + 0x24) != NULL) { TWindow__close((u8 *)(*(void **)((s8 *)arg0 + 0x24))); *(s32 *)&((TWindowSubAreaMap *)arg0)->m_24 = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TWindowSubAreaMap__name;

}
TWindowSubAreaMap::TWindowSubAreaMap(TObject *arg1, void *arg2) : TObject(arg1) {
    void *o;
    *(void * *)&this->m_name = TWindowSubAreaMap__name;
    *(void **)((s8 *)this + 0x20) = arg1;
    *(void **)((s8 *)this + 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSubAreaMapDisp__ct((u8 *)o);
    }
    *(void **)((s8 *)this + 0x24) = o;
}
extern "C" {
typedef char RecoveredGlobal_802715F0_lbl_8050E208_size[sizeof(RecoveredGlobal_802715F0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TWindowSubAreaMapDisp::update_manual_scroll() {
    u8 *temp_r31;
    if ((s32) *(s32 *)&this->m_6c != 0) {
        temp_r31 = (u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&controller_input_state).value + 0x20;
        if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x10)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x10)) != 0)) {
            this->m_64 = (f32) (this->m_64 + lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x20)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x20)) != 0)) {
            this->m_64 = (f32) (this->m_64 - lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x40)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x40)) != 0)) {
            *(f32 *)&this->unk_60 = (f32) (*(f32 *)&this->unk_60 + lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x80)) != 0) || (is_flag_set__11TLoadingCurFv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (0x80)) != 0)) {
            *(f32 *)&this->unk_60 = (f32) (*(f32 *)&this->unk_60 - lbl_805DD478);
        }
        if (is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x20000)) != 0) {
            *(f32 *)&this->unk_68 = (f32) (*(f32 *)&this->unk_68 - lbl_805DD478);
        }
        if (is_on_current_screen__11TCameraCtrlFv((int) (temp_r31), (int) (0x10000)) != 0) {
            *(f32 *)&this->unk_68 = (f32) (*(f32 *)&this->unk_68 + lbl_805DD478);
        }
        TRaderMapCore::pan_horizontal((f32) (*(f32 *)&this->unk_60));
        TRaderMapCore::pan_vertical((f32) (this->m_64));
        TRaderMapCore::add_zoom_distance((f32) (*(f32 *)&this->unk_68));
        *(f32 *)&this->unk_60 = (f32) (*(f32 *)&this->unk_60 * lbl_805DD47C);
        this->m_64 = (f32) (this->m_64 * lbl_805DD47C);
        *(f32 *)&this->unk_68 = (f32) (*(f32 *)&this->unk_68 * lbl_805DD47C);
    }
}

}
