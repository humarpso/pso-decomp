#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
};

struct RecoveredGlobal_8027AF58_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Lg_8027B194 { s32 f0; u8 pad4[0x14]; void *vt; void *f1c; void *f20; s32 f24; void *f28; u8 f2c[0x10]; };

extern "C" {
s32 chat_accept_submission(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 is_flag_set__11TLoadingCurFPv(void *, int);
s32 is_on_current_screen__11TCameraCtrlFPv(int, int);
M2C_UNK play_sound_effect(int, int, int, int);
s32 TWindowCtrl__sub_8024701C(int);
M2C_UNK TWindowChat__sub_80247DFC(int);
s32 is_visible__11TWindowChatFPv(int);
M2C_UNK TWindowChat__sub_80247E50(int);
s32 is_mode_bit4__11TWindowChatFPv(int);
M2C_UNK advance_scroll__14TAdScrollWinGCFPvf(void *, f32);
M2C_UNK fn_8026A61C(void *, f32);
M2C_UNK TWindowSubLog__sub_8026A664(void *, f32);
void clear_flag4c_bit8__13TWindowSubLogFPv(void* p);
extern RecoveredGlobal_8027AF58_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD638;
extern const f32 lbl_805DD63C;
extern const f32 lbl_805DD640;
extern const f32 lbl_805DD644;
void run_task__13TWindowSubLogFv(u8 *arg0);
void *__nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *, void *);
void *TWindowChat__ct(void *, void *, void *);
void TWindowCtrl__sub_8024ADAC(void *);
s32 create_message_log_window(void *, void *, void *);
void set_flag4c_bit8__13TWindowSubLogFPv(void* p);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
extern u8 lbl_8044F9C8[];
extern u8 lbl_8044F9D0[];
extern M2C_UNK __vt__13TWindowSubLog[];
extern s32 lbl_805D3A60;
Lg_8027B194 *TWindowSubLog__ct(Lg_8027B194 *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1);
int cleanup__13TWindowSubLogFPv(void* p);
void clear_flag4c_bit8__13TWindowSubLogFPv(void* p);
int fn_8027B288(void* p);
void fn_8027B2A8(void* p);
void render__13TWindowSubLogFv(void);
void set_flag4c_bit8__13TWindowSubLogFPv(void* p);
void TWindowCtrl__sub_8024ADF0(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
int show_child_window__15TWindowMainMenuFPv(void*);
int update_trade_submenu__15TWindowMainMenuFPv(void*);

void render__13TWindowSubLogFv(void) {  }

extern M2C_UNK __vt__13TWindowSubLog[];

typedef char RecoveredGlobal_8027AF58_lbl_8050E208_size[sizeof(RecoveredGlobal_8027AF58_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__13TWindowSubLogFv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if ((is_mode_bit4__11TWindowChatFPv((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) && (chat_accept_submission((void *) (arg0 + 0x2C)) != 0)) {
        TWindowChat__sub_80247E50((int) (M2C_FIELD(arg0, s32 *, 0x28)));
    }
    if (is_visible__11TWindowChatFPv((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
        TWindowChat__sub_80247DFC((int) (M2C_FIELD(arg0, s32 *, 0x28)));
    }
    if (TWindowCtrl__sub_8024701C((int) (M2C_FIELD(arg0, s32 *, 0x28))) != 0) {
        TWindowSubLog__sub_8026A664((void *) (M2C_FIELD(arg0, u8 **, 0x24)), (f32) (lbl_805DD638));
        return;
    }
    TWindowSubLog__sub_8026A664((void *) (M2C_FIELD(arg0, u8 **, 0x24)), (f32) (lbl_805DD63C));
    temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
    if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x10)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10)) != 0)) {
        fn_8026A61C((void *) (M2C_FIELD(arg0, u8 **, 0x24)), (f32) (lbl_805DD640));
    }
    if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x20)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20)) != 0)) {
        advance_scroll__14TAdScrollWinGCFPvf((void *) (M2C_FIELD(arg0, u8 **, 0x24)), (f32) (lbl_805DD644));
    }
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x24));
    if ((M2C_FIELD(temp_r3, f32 *, 0x3C) == M2C_FIELD(temp_r3, f32 *, 0x4C)) && ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0))) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
        ((VObj_18_204a81 *)(temp_r3_2))->m7();
        clear_flag4c_bit8__13TWindowSubLogFPv((void*)((void *) (M2C_FIELD(arg0, u8 **, 0x20))));
    }
}

void *__dt__13TWindowSubLogFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowSubLog;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { clear_flag4c_bit8__13TWindowSubLogFPv((void*)(M2C_FIELD(arg0, void **, 0x20))); cleanup__13TWindowSubLogFPv((void*)(M2C_FIELD(arg0, void **, 0x20))); }
        TWindowCtrl__sub_8024ADF0(M2C_FIELD(arg0, void **, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Lg_8027B194 *TWindowSubLog__ct(Lg_8027B194 *arg0, void *arg1, void *arg2) {
    void *w;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = ((u8 *)&__vt__13TWindowSubLog);
    arg0->f0 = lbl_805D3A60;
    arg0->f20 = arg1;
    arg0->f1c = arg2;
    TWindowCtrl__sub_8024ADAC(arg0->f1c);
    fn_8027B288((void*)(arg0->f20));
    set_flag4c_bit8__13TWindowSubLogFPv((void*)(arg0->f20));
    arg0->f24 = create_message_log_window(lbl_8044F9C8, lbl_8044F9D0, arg0->f1c);
    w = __nw__7TObjectFUl(0x3C);
    if (w != NULL) {
        w = TWindowChat__ct(w, arg0, arg0->f2c);
    }
    arg0->f28 = w;
    fn_8027B2A8((void*)(arg0->f28));
    return arg0;
}

void clear_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) &= 0xfffffff7; }
int cleanup__13TWindowSubLogFPv(void* p) { return show_child_window__15TWindowMainMenuFPv(p); }
void set_flag4c_bit8__13TWindowSubLogFPv(void* p) { *(u32*)((char*)p + 0x4c) |= 0x8; }
int fn_8027B288(void* p) { return update_trade_submenu__15TWindowMainMenuFPv(p); }
void fn_8027B2A8(void* p) { *(u16*)((char*)p + 0x1e) |= 0x200; }

}
