#include "types.h"

extern "C" {

int fn_8028DEA0(void*);
int fn_8036DC80(void*);
void fn_801BD3A4(void);

int fn_801BD384(void) { return 0; }
void fn_801BD3A4(void) {  }
void fn_801BD3A8(void* p) { fn_8036DC80(p); fn_8028DEA0(p); }
int fn_801BD3DC(void) { return 0; }

}
