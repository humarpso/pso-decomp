#include "types.h"

extern "C" {

int fn_80327504(void*);
void fn_80329C44(void* p);
int TAdLicAgreementGC__vt7(void* p);
int TAdLicAgreementGC__vt6(void* p);
int TAdLicAgreementGC__vt5(void* p);
int fn_8023EC14(void*);
int fn_8023EC74(void*);
int fn_8023F534(void*);

int TAdLicAgreementGC__vt7(void* p) { return fn_8023EC74(p); }
int TAdLicAgreementGC__vt6(void* p) { return fn_8023EC14(p); }
int TAdLicAgreementGC__vt5(void* p) { return fn_8023F534(p); }
void fn_80329C44(void* p) { if (*(unsigned int*)((char*)p + 0x38) != 0) { fn_80327504(*(void**)((char*)p + 0x38)); *(int*)((char*)p + 0x38) = 0; } }

}
