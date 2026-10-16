#include "types.h"
#include "pso/ui/TAdTrialAgreementGC.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/ui/TAdScrollWinGC.h"

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

void TAdTrialAgreementGC__vt4(void* p);
int TAdTrialAgreementGC__vt5(void* p);
void TAdTrialAgreementGC__vt6(void);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
int TKeyBoardControl__sub_8000F9CC(void*);
s32 render_tick__Fv();
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void TAdTrialAgreementGC::render() {
    struct VObj_80335648 *o = (struct VObj_80335648 *)this;
    o->m10();
}

void TAdTrialAgreementGC__vt6(void) { TKeyBoardControl__sub_8000F9CC((void*)0); }
int TAdTrialAgreementGC__vt5(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdTrialAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { ((TAdScrollWinGC *)(*(void**)((char*)p + 0x38)))->close_window(); *(int*)((char*)p + 0x38) = 0; } }
void TAdTrialAgreementGC::wait_for_load() {
loop_1:
    if ((((TAdPlayerLoadGC *)0)->probe_card_slot() != 0) && (TAdPlayerLoadGC__sub_801E1B50(0) != 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
