#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TAdTrialAgreementGC__vt4(void* p);
int TAdTrialAgreementGC__vt5(void* p);
void TAdTrialAgreementGC__vt6(void);
void wait_for_load__19TAdTrialAgreementGCFv(void);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
int TKeyBoardControl__sub_8000F9CC(void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int close_window__14TAdScrollWinGCFPv(void*);
s32 render_tick__Fv();

void TAdTrialAgreementGC__vt6(void) { TKeyBoardControl__sub_8000F9CC((void*)0); }
int TAdTrialAgreementGC__vt5(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdTrialAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }
void wait_for_load__19TAdTrialAgreementGCFv(void) {
loop_1:
    if ((TAdPlayerLoadGC__sub_801E1E38(0) != 0) && (TAdPlayerLoadGC__sub_801E1B50(0) != 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80335648
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80335648 { char pad[0x18]; };
struct VObj_80335648 : Base_80335648 {
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

void render__19TAdTrialAgreementGCFv(void *arg0);

void render__19TAdTrialAgreementGCFv(void *arg0) {
    struct VObj_80335648 *o = (struct VObj_80335648 *)arg0;
    o->m10();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033573C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_card_file__19TAdTrialAgreementGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2048(M2C_UNK, M2C_UNK *);
M2C_UNK wait_for_load__19TAdTrialAgreementGCFv(s32);

extern M2C_UNK lbl_804C8914[];

s32 check_card_file__19TAdTrialAgreementGCFi(s32 arg0) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        return 0;
    }
    wait_for_load__19TAdTrialAgreementGCFv(arg0);
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        return 0;
    }
    wait_for_load__19TAdTrialAgreementGCFv(arg0);
    temp_r3 = TAdPlayerLoadGC__sub_801E2048(0, lbl_804C8914);
    if ((temp_r3 == 0) || ((u32) (temp_r3 + 0x10000) == 0xFF41U)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803357EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_803357EC { char pad[0x18]; };
struct VObj_803357EC : Base_803357EC {
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

void *__dt__19TAdTrialAgreementGCFv(void *arg0, s16 arg1);
void run_task__19TAdTrialAgreementGCFv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);

void run_task__19TAdTrialAgreementGCFv(void *arg0) {
    struct VObj_803357EC *o = (struct VObj_803357EC *)arg0;
    o->m9();
}

extern M2C_UNK __vt__19TAdTrialAgreementGC[];

void *__dt__19TAdTrialAgreementGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdTrialAgreementGC;
        __dt__18TAdAgreementBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033596C
#include "types.h"

extern "C" {

s32 TAdTrialAgreementGC__sub_8033596C(void* p);

s32 TAdTrialAgreementGC__sub_8033596C(void* p) { return *(s32*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335D50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_state__19TAdTrialAgreementGCFPv(void *arg0);
M2C_UNK TAdTrialAgreementGC__sub_80335974();
M2C_UNK TAdTrialAgreementGC__sub_80335A58();

void run_state__19TAdTrialAgreementGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        TAdTrialAgreementGC__sub_80335974();
        break;
    case 1:
        TAdTrialAgreementGC__sub_80335A58();
        break;
    case 2:
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

}
#endif
#endif
