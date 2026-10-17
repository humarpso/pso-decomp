#include "types.h"
#include "pso/ui/TAdTrialAgreementGC.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/misc/TLobby.h"

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

struct RecoveredGlobal_80335870___vt__19TAdTrialAgreementGC {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
extern const f32 lbl_805DF8B0;
s32 queue_destruction__7TObjectFv(void *);
s32 __nw__7TObjectFUl(int);
s32 TAdScrollWinGC__ct(int, void *, int, int);
s32 TAdAgreementBaseGC__ct(void *);
extern s32 __vt__19TAdTrialAgreementGC[];
extern s32 TAdTrialAgreementGC__name;
u8 *TAdTrialAgreementGC__ct(u8 *arg0);
void *__dt__19TAdTrialAgreementGCFv(void *arg0, s16 arg1);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, s32 *);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);
s32 wait_for_load__19TAdTrialAgreementGCFv(s32);

extern s32 pso_system_card_filename[];

s32 TAdTrialAgreementGC::check_card_file(s32 arg0) {
    s32 temp_r3;

    if (((TAdPlayerLoadGC *)0)->probe_card_slot() == 0) {
        return 0;
    }
    if (((TAdPlayerLoadGC *)0)->probe_and_check_card() == 0) {
        return 0;
    }
    wait_for_load__19TAdTrialAgreementGCFv(arg0);
    if (TAdPlayerLoadGC::check_memcard_status(0) != 0) {
        return 0;
    }
    wait_for_load__19TAdTrialAgreementGCFv(arg0);
    temp_r3 = find_card_file__15TAdPlayerLoadGCFiPv(0, pso_system_card_filename);
    if ((temp_r3 == 0) || ((u32) (temp_r3 + 0x10000) == 0xFF41U)) {
        return 1;
    }
    return 0;
}

void TAdTrialAgreementGC::run_task() {
    struct VObj_803357EC_8033573C *o = (struct VObj_803357EC_8033573C *)this;
    o->m9();
}

void *__dt__19TAdTrialAgreementGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TAdTrialAgreementGC;
        __dt__18TAdAgreementBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80335870___vt__19TAdTrialAgreementGC_size[sizeof(RecoveredGlobal_80335870___vt__19TAdTrialAgreementGC) == 0x38 ? 1 : -1];
u8 *TAdTrialAgreementGC__ct(u8 *arg0) {
    s32 temp_r3;
    s32 var_r0;
    TAdAgreementBaseGC__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80335870___vt__19TAdTrialAgreementGC *)&__vt__19TAdTrialAgreementGC).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TAdTrialAgreementGC__name;
    *(s32 *)&((TAdTrialAgreementGC *)arg0)->m_38 = 0;
    if (TAdTrialAgreementGC::check_card_file((s32)((void *) (arg0))) != 0) {
        ((TAdTrialAgreementGC *)(arg0))->vfunc_7();
        queue_destruction__7TObjectFv((void *) (arg0));
        return arg0;
    }
    temp_r3 = __nw__7TObjectFUl((int) (0x54));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TAdScrollWinGC__ct((int) (temp_r3), (void *) (arg0), (int) (1), (int) (0));
    }
    *(s32 *)&((TAdTrialAgreementGC *)arg0)->m_38 = var_r0;
    return arg0;
}

void TAdTrialAgreementGC::draw_record_with_camera(s32 arg0, s32 arg1, s32 arg2) {
    TLobby::draw_with_camera((s32)((void *) (TLobby::get_record((int)((void *) (arg1))))), (s32)((void *) (arg2)), (s32)((int) (0x20)), (f32)((f32) (lbl_805DF8B0)));
}

}
