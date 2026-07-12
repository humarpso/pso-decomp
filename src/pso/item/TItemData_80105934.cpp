#include "types.h"

extern "C" {

int fn_80114524(void*);
void fn_801058E8(void* p);
int TObjPlayer__sub_8010590C(void* p);
int TItemData__sub_80105934(void* p);
int TItemData__sub_8010595C(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int TObjPlayer__sub_801C675C(void*, int);

int TItemData__sub_80105934(void* p) { return TObjPlayer__sub_801C675C((char*)p + 0xd04, 3); }
int TItemData__sub_8010595C(void* p) { return TObjPlayer__sub_801C675C((char*)p + 0xd04, 2); }

}
