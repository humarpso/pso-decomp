#include "types.h"

extern "C" {

int TAdTrialModemChkGC__vt4(void);
void TAdTrialModemChkGC__vt5(void);

int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int TKeyBoardControl__sub_8000F9CC(void*);

void TAdTrialModemChkGC__vt5(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)35, (void*)0); }
int TAdTrialModemChkGC__vt4(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }

}
