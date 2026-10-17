#include "types.h"
#include "pso/ui/TAdAgreementBaseGC.h"
#include "pso/ui/TAdScrollWinGC_80327504.h"
#include "pso/ui/TAdLicAgreementGC.h"
#include "pso/ui/TAdScrollWinGC.h"

struct Base_80329BB8 { char pad[0x18]; };
struct VObj_80329BB8 : Base_80329BB8 {
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
struct Base_80329C84_80329BB8 { char pad[0x18]; };
struct VObj_80329C84_80329BB8 : Base_80329C84_80329BB8 {
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

void TAdAgreementBaseGC__ct(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int set_game_mode__21TAdMultiChgGameModeGCFv(void*);
int set_mode_1c__21TAdMultiChgGameModeGCFv(void*);

void TAdLicAgreementGC::render() {
    struct VObj_80329BB8 *o = (struct VObj_80329BB8 *)this;
    o->m10();
}

void TAdLicAgreementGC::vfunc_9() { set_game_mode__21TAdMultiChgGameModeGCFv(this); }
void TAdLicAgreementGC::vfunc_8() { request_scene_change__21TAdMultiChgGameModeGCFv(this); }
void TAdLicAgreementGC::vfunc_7() { set_mode_1c__21TAdMultiChgGameModeGCFv(this); }
void TAdLicAgreementGC::vfunc_6() { if (this->m_38 != 0) { ((TAdScrollWinGC *)(this->m_38))->close_window(); this->m_38 = 0; } }

void TAdLicAgreementGC::run_task() {
    struct VObj_80329C84_80329BB8 *o = (struct VObj_80329C84_80329BB8 *)this;
    o->m9();
}

extern s32 __vt__17TAdLicAgreementGC[];

void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdLicAgreementGC;
        __dt__18TAdAgreementBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D41C0;

void *TAdLicAgreementGC__ct(void *arg0) {
    void *o;
    TAdAgreementBaseGC__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdLicAgreementGC;
    *(void * *)&((TAdLicAgreementGC *)arg0)->m_name = lbl_805D41C0;
    ((TAdLicAgreementGC *)arg0)->m_34 = 0;
    ((TAdLicAgreementGC *)arg0)->m_38 = 0;
    o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TAdScrollWinGC__ct((TAdScrollWinGC *)o, arg0, 0, 0);
    }
    *(void **)((s8 *)arg0 + 0x38) = o;
    return arg0;
}

}
