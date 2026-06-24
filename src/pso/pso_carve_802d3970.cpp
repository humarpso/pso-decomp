#include "types.h"

extern "C" {

void fn_802D3970(void);
int fn_802D399C(void* p);
int fn_802D39BC(void* p);
int fn_802D39DC(void* p);
int fn_802D39FC(void* p);
void fn_802D3A94(void* p);
int fn_802D245C(void);
int fn_802D2518(void);
int fn_802D37C8(void);
int fn_802D3820(void);
int fn_802D388C(void*);
int fn_802D38B4(void*);

void fn_802D3970(void) { fn_802D3820(); fn_802D37C8(); fn_802D2518(); fn_802D245C(); }
int fn_802D399C(void* p) { return fn_802D388C(p); }
int fn_802D39BC(void* p) { return fn_802D388C(p); }
int fn_802D39DC(void* p) { return fn_802D38B4(p); }
int fn_802D39FC(void* p) { return fn_802D38B4(p); }
int fn_802D3A1C(void) { return 0; }
int fn_802D3A58(void) { return 0; }
void fn_802D3A94(void* p) { *(u8*)((char*)p + 0x0) = 166; *(u8*)((char*)p + 0x1) = 4; }

}
