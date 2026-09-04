#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_confirmed__17TAdExNetConfirmGCFv(void);

M2C_UNK TLobby__sub_8042EE4C(s32 *);

s32 is_confirmed__17TAdExNetConfirmGCFv(void) {
    s32 sp8;

    TLobby__sub_8042EE4C(&sp8);
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8032C504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032C504 { char pad[0x18]; };
struct VObj_8032C504 : Base_8032C504 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void render__17TAdExNetConfirmGCFv(void *arg0);

void render__17TAdExNetConfirmGCFv(void *arg0) {
    struct VObj_8032C504 *o = (struct VObj_8032C504 *)arg0;
    o->m7();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C574
#include "types.h"

extern "C" {

int TAdExNetConfirmGC__vt4(void* p);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int TAdExNetConfirmGC__vt4(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032C594
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032C594 { char pad[0x18]; };
struct VObj_8032C594 : Base_8032C594 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1);
void run_task__17TAdExNetConfirmGCFv(void *arg0);
void TAdWarningBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);

void run_task__17TAdExNetConfirmGCFv(void *arg0) {
    struct VObj_8032C594 *o = (struct VObj_8032C594 *)arg0;
    o->m6();
}

extern M2C_UNK __vt__17TAdExNetConfirmGC[];

void *__dt__17TAdExNetConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdExNetConfirmGC;
        TAdWarningBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
