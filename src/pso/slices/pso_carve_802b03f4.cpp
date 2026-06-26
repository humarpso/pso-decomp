#include "types.h"

extern "C" {

int fn_802AACEC(void*);
int fn_802AC86C(void*, void*);
void fn_802B04D8(void* p);
int fn_802ABC64(void*);
int fn_802AC4D8(void);
int fn_802AC678(void*);
void fn_802B0448(void* p);
void fn_802B03F4(void);

void fn_802B03F4(void) {  }
int fn_802B03F8(void) { return 0; }
void fn_802B0448(void* p) { fn_802AC678(p); fn_802AC4D8(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; fn_802ABC64(p); }
int fn_802B048C(void) { return 0; }
void fn_802B04D8(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)6); } }

}
