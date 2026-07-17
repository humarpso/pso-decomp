#include "types.h"

extern "C" {

s32 dt__10TObjPlayerFis(s32 arg0, s16 arg1);
int __dl__FPv();
int get_flag_1__10TObjPlayerFPv(void* p);
int is_grounded__10TObjPlayerFPv(void* p);

int is_grounded__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x4) & 0x1; }

}
