#include "types.h"

extern "C" {

int fn_802D399C(void* p);
int fn_802D39BC(void* p);
int fn_802D39DC(void* p);
int fn_802D39FC(void* p);
int fn_802D388C(void*);
int fn_802D38B4(void*);

int fn_802D3970(void) { return 0; }
int fn_802D399C(void* p) { return fn_802D388C(p); }
int fn_802D39BC(void* p) { return fn_802D388C(p); }
int fn_802D39DC(void* p) { return fn_802D38B4(p); }
int fn_802D39FC(void* p) { return fn_802D38B4(p); }
int fn_802D3A1C(void) { return 0; }
int fn_802D3A58(void) { return 0; }
int fn_802D3A94(void) { return 0; }

}
