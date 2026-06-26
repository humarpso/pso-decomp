#include "types.h"

extern "C" {

int fn_802F7B28(void* p, int a1);
int fn_802F7B4C(void* p, int a1);
int fn_802F7808(void*, int, int);

int fn_802F7B28(void* p, int a1) { return fn_802F7808(p, a1, 17); }
int fn_802F7B4C(void* p, int a1) { return fn_802F7808(p, a1, 16); }

}
