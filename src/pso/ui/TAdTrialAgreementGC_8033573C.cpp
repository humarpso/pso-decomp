#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803357EC_8033573C { char pad[0x18]; };
struct VObj_803357EC_8033573C : Base_803357EC_8033573C {
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
s32 draw_with_camera__6TLobbyFiiif(void *, void *, int, f32);
s32 get_record__6TLobbyFi(void *);
extern const f32 lbl_805DF8B0;
void TAdTrialAgreementGC__sub_80335918(M2C_UNK arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__19TAdTrialAgreementGCFv(void *arg0, s16 arg1);
s32 check_card_file__19TAdTrialAgreementGCFi(s32 arg0);
void run_task__19TAdTrialAgreementGCFv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2048(M2C_UNK, M2C_UNK *);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
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

void run_task__19TAdTrialAgreementGCFv(void *arg0) {
    struct VObj_803357EC_8033573C *o = (struct VObj_803357EC_8033573C *)arg0;
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
void TAdTrialAgreementGC__sub_80335918(M2C_UNK arg0, s32 arg1, s32 arg2) {
    draw_with_camera__6TLobbyFiiif((void *) (get_record__6TLobbyFi((void *) (arg1))), (void *) (arg2), (int) (0x20), (f32) (lbl_805DF8B0));
}

}
