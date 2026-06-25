#include "types.h"

extern "C" {

int fn_802AACEC(void*);
int fn_802AC86C(void*, void*);
void fn_802B0770(void* p);
void fn_802B08F0(void* p);
int fn_802ABCDC(void*);
int fn_802AC4D8(void);
int fn_802AC678(void*);
void fn_802B085C(void* p);
void fn_802B0808(void);

void fn_802B0770(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)4); } }
int fn_802B07B0(void) { return 0; }
void fn_802B0808(void) {  }
int fn_802B080C(void) { return 0; }
void fn_802B085C(void* p) { fn_802AC678(p); fn_802AC4D8(); *(int*)((char*)p + 0x3d0) = 1; *(int*)((char*)p + 0x3cc) = 0; fn_802ABCDC(p); }
int fn_802B08A4(void) { return 0; }
void fn_802B08F0(void* p) { if (fn_802AACEC(p) != 0) { fn_802AC86C(p, (void*)2); } }

}
