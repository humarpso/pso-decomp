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

struct RecoveredGlobal_80271480_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802715F0_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, int, int, int);
extern RecoveredGlobal_80271480_lbl_8050E208 lbl_8050E208;
void run_task__17TWindowSubAreaMapFv(u8 *arg0);
s32 is_flag_set__11TLoadingCurFPv(void *, int);
s32 is_on_current_screen__11TCameraCtrlFPv(int, int);
M2C_UNK TRaderMapCore__sub_801F9720(f32);
M2C_UNK TRaderMapCore__sub_801F97C4(f32);
M2C_UNK TRaderMapCore__sub_801F986C(f32);
extern RecoveredGlobal_80271480_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD478;
extern const f32 lbl_805DD47C;
void TCameraCtrl__sub_802715F0(u8 *arg0);
}

extern "C" {

void *TWindowSubAreaMap__ct(void *arg0, void *arg1, void *arg2);
void *__dt__17TWindowSubAreaMapFv(void *arg0, s16 arg1);
void render__17TWindowSubAreaMapFv(void);
void *TWindowSubAreaMapDisp__ct(void *);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void render__17TWindowSubAreaMapFv(void) {  }

extern M2C_UNK __vt__17TWindowSubAreaMap[];

typedef char RecoveredGlobal_80271480_lbl_8050E208_size[sizeof(RecoveredGlobal_80271480_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__17TWindowSubAreaMapFv(u8 *arg0) {
    u8 *temp_r3;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
        TBoss3Volopt__sub_8022675C((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x20));
        ((VObj_18_204a81 *)(temp_r3))->m7();
    }
}

void *__dt__17TWindowSubAreaMapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubAreaMap;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TWindowSubAreaMap[];
extern void *lbl_805D3A00;

void *TWindowSubAreaMap__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubAreaMap;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A00;
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSubAreaMapDisp__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x24) = o;
    return arg0;
}
typedef char RecoveredGlobal_802715F0_lbl_8050E208_size[sizeof(RecoveredGlobal_802715F0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TCameraCtrl__sub_802715F0(u8 *arg0) {
    u8 *temp_r31;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        temp_r31 = (u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&lbl_8050E208).value + 0x20;
        if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x10)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x10)) != 0)) {
            M2C_FIELD(arg0, f32 *, 0x64) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) + lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x20)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x20)) != 0)) {
            M2C_FIELD(arg0, f32 *, 0x64) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) - lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x40)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x40)) != 0)) {
            M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) + lbl_805DD478);
        }
        if ((is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x80)) != 0) || (is_flag_set__11TLoadingCurFPv((void *) ((u8 *)&(*(RecoveredGlobal_802715F0_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x80)) != 0)) {
            M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) - lbl_805DD478);
        }
        if (is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x20000)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) - lbl_805DD478);
        }
        if (is_on_current_screen__11TCameraCtrlFPv((int) (temp_r31), (int) (0x10000)) != 0) {
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) + lbl_805DD478);
        }
        TRaderMapCore__sub_801F986C((f32) (M2C_FIELD(arg0, f32 *, 0x60)));
        TRaderMapCore__sub_801F97C4((f32) (M2C_FIELD(arg0, f32 *, 0x64)));
        TRaderMapCore__sub_801F9720((f32) (M2C_FIELD(arg0, f32 *, 0x68)));
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x60) * lbl_805DD47C);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) (M2C_FIELD(arg0, f32 *, 0x64) * lbl_805DD47C);
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) * lbl_805DD47C);
    }
}

}
