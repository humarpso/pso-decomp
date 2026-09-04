#include "types.h"

extern "C" {

int TObjPlayer__sub_80351974(void);
int TObjPlayer__sub_803519D8(void);
int fn_803519FC(void);
int fn_80351A14(void);
int get_flag_1__10TObjPlayerFPv(void* p);
int is_grounded__10TObjPlayerFPv(void* p);
int __dl__FPv();
s32 dt__10TObjPlayerFis(s32 arg0, s16 arg1);

int TObjPlayer__sub_80351974(void) { return 0; }

int get_flag_1__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x4) >> 1) & 0x1; }

int TObjPlayer__sub_803519D8(void) { return 0; }

int is_grounded__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0x4) & 0x1; }

int fn_803519FC(void) { return 0; }
int fn_80351A14(void) { return 0; }

}
