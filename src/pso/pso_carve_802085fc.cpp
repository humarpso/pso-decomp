#include "types.h"

extern "C" {

int fn_802085FC(void* p);
int fn_8020861C(void* p);
int fn_8020C8A4(void*);
int fn_8020CB34(void*);

int fn_802085FC(void* p) { return fn_8020C8A4(p); }
int fn_8020861C(void* p) { return fn_8020CB34(p); }

}
