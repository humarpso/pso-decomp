#include "types.h"

extern "C" {

int fn_8024662C(void* p);
int fn_8024664C(void* p);
int fn_8024634C(void*);
int fn_80246464(void*);

int fn_8024662C(void* p) { return fn_8024634C(p); }
int fn_8024664C(void* p) { return fn_80246464(p); }
int fn_8024666C(void) { return 0; }
int fn_80246670(void) { return 0; }

}
