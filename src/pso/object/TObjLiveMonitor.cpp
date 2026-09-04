#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void update_camera__15TObjLiveMonitorFPv(void* p);
void fn_8030B7B4(void);
void fn_8030B7B8(void);
int call_null__12TBoss8DragonFv(void);
int update_single_screen__11TCameraCtrlFv(void*);
int TBoss8Dragon__sub_802F3388(void*);

void fn_8030B7B4(void) {  }
void fn_8030B7B8(void) {  }
void update_camera__15TObjLiveMonitorFPv(void* p) { void* m = *(void**)((char*)p + 0x50); if (m) update_single_screen__11TCameraCtrlFv(m); }
int call_null__12TBoss8DragonFv(void) { return TBoss8Dragon__sub_802F3388((void*)(0)); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8030B4FC
#include "types.h"

extern "C" {

int run_task__15TObjLiveMonitorFv(void* p);
int fn_8030B370(void*);

int run_task__15TObjLiveMonitorFv(void* p) { return fn_8030B370(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030B574
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__15TObjLiveMonitorFv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();

extern M2C_UNK __vt__15TObjLiveMonitor[];
extern s32 lbl_805D40EC;
extern s32 lbl_805D6A80;

void *__ct__15TObjLiveMonitorFv(void *arg0) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__15TObjLiveMonitor;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D40EC;
    M2C_FIELD(arg0, s32 *, 0x1C) = TObjFish__sub_8001EDC4(lbl_805D6A80, 1);
    M2C_FIELD(arg0, s32 *, 0x20) = TObjFish__sub_8001EDB0(lbl_805D6A80, 0);
    M2C_FIELD(arg0, s32 *, 0x24) = 5;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030B5E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjLiveMonitorFPv(void *arg0);
void *__ct__15TObjLiveMonitorFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__15TObjLiveMonitorFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__15TObjLiveMonitorFv(o, arg0);
    }
    return o;
}

}
#endif
#endif
