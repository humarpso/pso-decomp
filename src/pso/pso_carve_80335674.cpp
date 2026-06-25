#include "types.h"

extern "C" {

int fn_80327504(void*);
void TAdTrialAgreementGC__vt4(void* p);
int fn_8000F9CC(void*);
int TAdTrialAgreementGC__vt5(void* p);
int fn_8023EC14(void*);

void TAdTrialAgreementGC__vt6(void) { fn_8000F9CC((void*)0); }
int TAdTrialAgreementGC__vt5(void* p) { return fn_8023EC14(p); }
void TAdTrialAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { fn_80327504(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }
int fn_803356F8(void) { return 0; }

}
