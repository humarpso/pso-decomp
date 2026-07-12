#include "types.h"

extern "C" {

void TAdLicAgreementGC__vt4(void* p);
int TAdLicAgreementGC__vt5(void* p);
int TAdLicAgreementGC__vt6(void* p);
int TAdLicAgreementGC__vt7(void* p);

int close_window__14TAdScrollWinGCFPv(void*);
int TAdMultiChgGameModeGC__sub_8023EC14(void*);
int TAdMultiChgGameModeGC__sub_8023EC74(void*);
int TAdMultiChgGameModeGC__sub_8023F534(void*);

int TAdLicAgreementGC__vt7(void* p) { return TAdMultiChgGameModeGC__sub_8023EC74(p); }
int TAdLicAgreementGC__vt6(void* p) { return TAdMultiChgGameModeGC__sub_8023EC14(p); }
int TAdLicAgreementGC__vt5(void* p) { return TAdMultiChgGameModeGC__sub_8023F534(p); }
void TAdLicAgreementGC__vt4(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }

}
