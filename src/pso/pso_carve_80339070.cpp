#include "types.h"

extern "C" {

int fn_80339070(void* p);
int fn_80339090(void* p);
int fn_8023EA64(void*);
int fn_8023EAC4(void*);

int fn_80339070(void* p) { return fn_8023EAC4(p); }
int fn_80339090(void* p) { return fn_8023EA64(p); }

}
