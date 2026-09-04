#include "types.h"

extern "C" {

int fn_80099F00(void);
s32 get_field_d8__10TObjPlayerFPv(void* p);

s32 get_field_d8__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xd8); }

int fn_80099F00(void) { return 0; }

}
