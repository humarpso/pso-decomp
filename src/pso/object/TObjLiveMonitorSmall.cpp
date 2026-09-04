#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int run_task__20TObjLiveMonitorSmallFv(void* p);
int render__20TObjLiveMonitorSmallFv(void* p);
int TObjPlayer__sub_8030B208(void*);
int fn_8030B370(void*);

int render__20TObjLiveMonitorSmallFv(void* p) { return TObjPlayer__sub_8030B208(p); }
int run_task__20TObjLiveMonitorSmallFv(void* p) { return fn_8030B370(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8030B130
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2);
void __ct__15TObjLiveMonitorFv(void *);

extern M2C_UNK __vt__20TObjLiveMonitorSmall[];
extern void *lbl_805D40F0;

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2) {
    __ct__15TObjLiveMonitorFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjLiveMonitorSmall;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40F0;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030B17C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0);
void *TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK __ct__20TObjLiveMonitorSmallFv(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 lbl_805D6A80;
extern s32 lbl_805D6A8C;
extern u8 lbl_805D6A90;

s32 spawn_for_each_fish__20TObjLiveMonitorSmallFi(s32 arg0) {
    void *var_r31;
    void *obj;

    if ((s8) lbl_805D6A90 == 0) {
        lbl_805D6A8C = 1;
        lbl_805D6A90 = 1;
    }
    var_r31 = M2C_FIELD(TObjFish__sub_8001EDC4(lbl_805D6A80, 0), void **, 0x2C);
    while (var_r31 != NULL) {
        if (lbl_805D6A8C != 0) {
            obj = __nw__7TObjectFUl(0x2C);
            if (obj != NULL) {
                __ct__20TObjLiveMonitorSmallFv(obj, arg0, var_r31);
            }
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    }
    return 0;
}

}
#endif
#endif
