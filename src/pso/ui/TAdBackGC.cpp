#include "types.h"

extern "C" {

int TAdBackGC__sub_8001C5A0(void* p, int a1, int a2);
int render_logo_with_default(void* p, int a1, int a2);

int fn_8001C388(void*, int, int, int);

int TAdBackGC__sub_8001C5A0(void* p, int a1, int a2) { return fn_8001C388(p, a1, a2, 1); }
int render_logo_with_default(void* p, int a1, int a2) { return fn_8001C388(p, a1, a2, 0); }

}
