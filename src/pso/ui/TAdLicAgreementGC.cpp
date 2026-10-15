#include "types.h"
#include "pso/ui/TAdLicAgreementGC.h"

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

void *TAdLicAgreementGC__ct(void *arg0);
void TAdLicAgreementGC__vt4(void* p);
int TAdLicAgreementGC__vt5(void* p);
int TAdLicAgreementGC__vt6(void* p);
int TAdLicAgreementGC__vt7(void* p);
void *__dt__17TAdLicAgreementGCFv(void *arg0, s16 arg1);
void TAdAgreementBaseGC__ct(void *);
void *TAdScrollWinGC__ct(void *, void *, int, int);
void __dl__7TObjectFPv(void *);
void __dt__18TAdAgreementBaseGCFv(void *, int);
void *__nw__7TObjectFUl(int);
int close_window__14TAdScrollWinGCFv(void*);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int set_game_mode__21TAdMultiChgGameModeGCFv(void*);
int set_mode_1c__21TAdMultiChgGameModeGCFv(void*);

void TAdLicAgreementGC::render() {
    struct VObj_80329BB8 *o = (struct VObj_80329BB8 *)this;
    o->m10();
}

int TAdLicAgreementGC__vt7(void* p) { return set_game_mode__21TAdMultiChgGameModeGCFv(p); }
int TAdLicAgreementGC__vt6(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
int TAdLicAgreementGC__vt5(void* p) { return set_mode_1c__21TAdMultiChgGameModeGCFv(p); }
void TAdLicAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { close_window__14TAdScrollWinGCFv(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }

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

extern s32 __vt__17TAdLicAgreementGC[];
extern void *lbl_805D41C0;

void *TAdLicAgreementGC__ct(void *arg0) {
    void *o;
    TAdAgreementBaseGC__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TAdLicAgreementGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D41C0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        o = TAdScrollWinGC__ct(o, arg0, 0, 0);
    }
    *(void **)((s8 *)arg0 + 0x38) = o;
    return arg0;
}

}
