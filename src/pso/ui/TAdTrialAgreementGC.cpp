#include "types.h"

extern "C" {

void TAdTrialAgreementGC__vt4(void* p);
int TAdTrialAgreementGC__vt5(void* p);
void TAdTrialAgreementGC__vt6(void);
void TAdTrialAgreementGC__sub_803356F8(void);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
int fn_8000F9CC(void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
int fn_8023EC14(void*);
int TAdScrollWinGC__sub_80327504(void*);
s32 render_tick__Fv();

void TAdTrialAgreementGC__vt6(void) { fn_8000F9CC((void*)0); }
int TAdTrialAgreementGC__vt5(void* p) { return fn_8023EC14(p); }
void TAdTrialAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { TAdScrollWinGC__sub_80327504(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }
void TAdTrialAgreementGC__sub_803356F8(void) {
loop_1:
    if ((TAdPlayerLoadGC__sub_801E1E38(0) != 0) && (TAdPlayerLoadGC__sub_801E1B50(0) != 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
