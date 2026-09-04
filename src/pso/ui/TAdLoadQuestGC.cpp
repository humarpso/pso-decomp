#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__14TAdLoadQuestGCFv(void);
void render__14TAdLoadQuestGCFv(void);
s32 create_cost_window(s32 arg0);
s32 TWindowCost__ct(s32, s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s32 __nw__7TObjectFUl(s32);
s32 get_camera_id__11TCameraCtrlFv();
s32 TWindowSubComCard__sub_8026CBB8(s32);

s32 create_cost_window(s32 arg0) {
    s32 var_r30;

    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        return 0;
    }
    var_r30 = __nw__7TObjectFUl(0x74);
    if (var_r30 != 0) {
        var_r30 = TWindowCost__ct(var_r30, TWindowSubComCard__sub_8026CBB8(0x59), arg0, get_message_10__20TWindowSubStatusDispFPv(0x109));
    }
    return var_r30;
}
void render__14TAdLoadQuestGCFv(void) {  }
void run_task__14TAdLoadQuestGCFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80309788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdLoadQuestGC__ct(void *arg0);
void *TAdLdQuestPrtGC__ct(void *, void *);
void TAdLoadQuestGC__sub_80349B20(void *, int);
void TAdLoadQuestGC__sub_8034A020(void *, int);
void TAdLoadQuestGC__sub_8034A5D0(void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__14TAdLoadQuestGC[];
extern void *lbl_805D40B0;

void *TAdLoadQuestGC__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdLoadQuestGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40B0;
    TAdLoadQuestGC__sub_80349B20(arg0, 0);
    TAdLoadQuestGC__sub_8034A5D0(arg0, 0);
    TAdLoadQuestGC__sub_80349B20(arg0, 1);
    TAdLoadQuestGC__sub_80349B20(arg0, 2);
    TAdLoadQuestGC__sub_8034A020(arg0, 0);
    TAdLoadQuestGC__sub_8034A020(arg0, 1);
    TAdLoadQuestGC__sub_8034A5D0(arg0, 1);
    TAdLoadQuestGC__sub_8034A5D0(arg0, 2);
    o = __nw__7TObjectFUl(0x158);
    if (o != NULL) {
        o = TAdLdQuestPrtGC__ct(o, arg0);
    }
    M2C_FIELD(arg0, void **, 0x1C) = o;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030984C
#include "types.h"

extern "C" {

void TAdLoadQuestGC__sub_8030984C(void);
void TAdLoadQuestGC__sub_80309850(void);

void TAdLoadQuestGC__sub_8030984C(void) {  }
void TAdLoadQuestGC__sub_80309850(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80309854
#include "types.h"

extern "C" {

int TAdLoadQuestGC__sub_80309854(int a0);

    extern int lbl_804EFF38[];
int TAdLoadQuestGC__sub_80309854(int a0) {  return lbl_804EFF38[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80309868
#include "types.h"

extern "C" {

int TAdLoadQuestGC__sub_80309868(int a0);

    extern int lbl_804EFF60[];
int TAdLoadQuestGC__sub_80309868(int a0) {  return lbl_804EFF60[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030987C
#include "types.h"

extern "C" {

int TAdLoadQuestGC__sub_8030987C(int a0);

    extern int lbl_804EFF80[];
int TAdLoadQuestGC__sub_8030987C(int a0) {  return lbl_804EFF80[a0]; }

}
#endif
#endif
