#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TAdSnAkPassConfirmGC__vt4(void* p);
int TAdSnAkPassConfirmGC__vt5(void* p);
void TAdSnAkPassConfirmGC__vt6(void* p);
void TAdSnAkPassConfirmGC__vt7(void* p);
void TAdSnAkPassConfirmGC__vt8(void);

int TWindow__close(void*);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int set_state_0x1a__21TAdMultiChgGameModeGCFv(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);

void TAdSnAkPassConfirmGC__vt8(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)39, (void*)0); }
void TAdSnAkPassConfirmGC__vt7(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { TWindow__close(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
void TAdSnAkPassConfirmGC__vt6(void* p) { if (*(unsigned int*)((char*)p + 0x48) != 0) { TWindow__close(*(void**)((char*)p + 0x48)); *(int*)((char*)p + 0x48) = 0; } }
int TAdSnAkPassConfirmGC__vt5(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }
int TAdSnAkPassConfirmGC__vt4(void* p) { return set_state_0x1a__21TAdMultiChgGameModeGCFv(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8032BE48
#include "types.h"

extern "C" {

s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(void* p);

s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032BE50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032BE50 { char pad[0x18]; };
struct VObj_8032BE50 : Base_8032BE50 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

extern "C" {

void render__20TAdSnAkPassConfirmGCFv(void *arg0);

void render__20TAdSnAkPassConfirmGCFv(void *arg0) {
    struct VObj_8032BE50 *o = (struct VObj_8032BE50 *)arg0;
    o->m10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032BF64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8032BF64 { char pad[0x18]; };
struct VObj_8032BF64 : Base_8032BF64 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
};

extern "C" {

void *__dt__20TAdSnAkPassConfirmGCFv(void *arg0, s16 arg1);
void run_task__20TAdSnAkPassConfirmGCFv(void *arg0);
void TAdYesNoBaseGC__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);

void run_task__20TAdSnAkPassConfirmGCFv(void *arg0) {
    struct VObj_8032BF64 *o = (struct VObj_8032BF64 *)arg0;
    o->m9();
}

extern M2C_UNK __vt__20TAdSnAkPassConfirmGC[];

void *__dt__20TAdSnAkPassConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TAdSnAkPassConfirmGC;
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        TAdYesNoBaseGC__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
