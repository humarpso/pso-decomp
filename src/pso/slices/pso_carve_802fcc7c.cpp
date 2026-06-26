#include "types.h"

extern "C" {

int fn_802FBBFC(void*, void*);
void fn_802FCCD0(void* p);
void fn_802FCD00(void);
void fn_802FCD04(void);
void fn_802FCD08(void);
void fn_802FCD0C(void);

int fn_802FCC7C(void) { return 0; }
int fn_802FCCBC(void) { return 0; }
void fn_802FCCD0(void* p) { if (*(short*)((char*)p + 0x326) != 22) { fn_802FBBFC(p, (void*)22); } }
void fn_802FCD00(void) {  }
void fn_802FCD04(void) {  }
void fn_802FCD08(void) {  }
void fn_802FCD0C(void) {  }

}
