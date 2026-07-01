#include "types.h"

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);

int fn_8001A430(void*);
int fn_80141F1C(void);
int fn_80141F50(void);
int fn_80307300(void*);

void render__18TAdGameStartBackGCFv(void* p) { if (fn_8001A430(p) != 1) { fn_80141F50(); fn_80307300(p); fn_80141F1C(); } }

}
