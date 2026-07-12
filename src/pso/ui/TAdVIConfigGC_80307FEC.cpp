#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int disable_progressive_mode__13TAdVIConfigGCFv(void);
int OSSetProgressiveMode(void*);

int disable_progressive_mode__13TAdVIConfigGCFv(void) { return OSSetProgressiveMode((void*)(0)); }
void TAdVIConfigGC__vt8(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)29, (void*)0); }

}
