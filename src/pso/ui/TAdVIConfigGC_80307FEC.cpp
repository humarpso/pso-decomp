#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int TAdVIConfigGC__sub_80307FEC(void);
int OSSetProgressiveMode(void*);

int TAdVIConfigGC__sub_80307FEC(void) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)29, (void*)0); }

}
