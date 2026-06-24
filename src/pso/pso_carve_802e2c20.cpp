#include "types.h"

extern "C" {

void fn_802E2D3C(void* p);
int fn_802E2DA8(void* p);
void fn_802E2F20(void);
int fn_802E2F68(void* p);
void fn_802E2FEC(void);
int fn_802E3038(void* p);
int fn_802E195C(void*, int, int, int, int);
int fn_802E1BF4(void*);

int fn_802E2C20(void) { return 0; }
int fn_802E2C70(void) { return 0; }
void fn_802E2D3C(void* p) { *(s32*)((char*)p + 0x64) = 30; }
int fn_802E2D48(void) { return 0; }
int fn_802E2DA8(void* p) { return fn_802E195C(p, 2, -1, -1, -1); }
int fn_802E2DD8(void) { return 0; }
int fn_802E2E60(void) { return 0; }
int fn_802E2ED8(void) { return 0; }
void fn_802E2F20(void) {  }
int fn_802E2F24(void) { return 0; }
int fn_802E2F68(void* p) { return fn_802E1BF4(p); }
int fn_802E2F88(void) { return 0; }
void fn_802E2FEC(void) {  }
int fn_802E2FF0(void) { return 0; }
int fn_802E3038(void* p) { return fn_802E1BF4(p); }

}
