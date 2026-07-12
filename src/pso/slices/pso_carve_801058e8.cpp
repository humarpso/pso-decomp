#include "types.h"

extern "C" {

int fn_80114524(void*);
void fn_801058E8(void* p);
int TObjPlayer__sub_8010590C(void* p);
int TItemData__sub_80105934(void* p);
int TItemData__sub_8010595C(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int TObjPlayer__sub_801C675C(void*, int);

void fn_801058E8(void* p) { *(u8*)((char*)p + 0x7) |= 0x1; }
int TWindowSubComCard__sub_801058F8(void) { return 0; }

}
