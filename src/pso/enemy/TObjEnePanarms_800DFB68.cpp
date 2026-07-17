#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int get_state_flag__14TObjEnePanarmsFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
