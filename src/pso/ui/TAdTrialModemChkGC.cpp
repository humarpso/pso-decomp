#include "types.h"
#include "pso/misc/TLobby_80132ED0.h"
#include "pso/ui/TAdWarningBaseGC.h"
#include "pso/unk/text_8007FA24.h"
#include "pso/unk/text_80145A94.h"
#include "pso/ui/TAdTrialModemChkGC.h"
#include "pso/misc/TLobby.h"

struct Base_80335508_803354A4 { char pad[0x18]; };
struct VObj_80335508_803354A4 : Base_80335508_803354A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80335580_803354A4 { char pad[0x18]; };
struct VObj_80335580_803354A4 : Base_80335580_803354A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

int TKeyBoardControl__sub_8000F9CC(void*);
int stop_audio_streams__6TLobbyFv(void*);
void __dl__7TObjectFPv(void *);

void TAdTrialModemChkGC__sub_803354A4(void) {  }
void TAdTrialModemChkGC::check_modem_result() {
    if (TLobby__sub_80145A94() != 0) {
        TLobby::init_account_entries();
        TAdTrialModemChkGC__sub_8007FA24(0);
        return;
    }
    TAdTrialModemChkGC__sub_8007FA24(1);
}
int TAdTrialModemChkGC__sub_803354E8(void* p) { return stop_audio_streams__6TLobbyFv(p); }

void TAdTrialModemChkGC::render() {
    struct VObj_80335508_803354A4 *o = (struct VObj_80335508_803354A4 *)this;
    o->m7();
}

void TAdTrialModemChkGC::vfunc_7() { get_localized_text_entry((s32)((void*)35), (s32)((void*)0)); }
int TAdTrialModemChkGC::vfunc_6() { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }

void TAdTrialModemChkGC::run_task() {
    struct VObj_80335580_803354A4 *o = (struct VObj_80335580_803354A4 *)this;
    o->m6();
}

extern s32 __vt__18TAdTrialModemChkGC[];

void *__dt__18TAdTrialModemChkGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TAdTrialModemChkGC;
        __dt__16TAdWarningBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TAdTrialModemChkGC__name;

void *TAdTrialModemChkGC__ct(void *arg0) {
    TAdWarningBaseGC__ct((TAdWarningBaseGC *)arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TAdTrialModemChkGC;
    *(void * *)&((TAdTrialModemChkGC *)arg0)->m_name = TAdTrialModemChkGC__name;
    return arg0;
}

}
