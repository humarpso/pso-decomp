#include "types.h"

extern "C" {

int fn_80066128(void* p);
int fn_8006614C(void* p);
int TBoss5GryphonDemo__sub_8006626C(void*);
int TBoss5GryphonDemo__sub_8006628C(void*);

int fn_80066128(void* p) { return TBoss5GryphonDemo__sub_8006626C(*(void**)((char*)p + 0x1c)); }
int fn_8006614C(void* p) { return TBoss5GryphonDemo__sub_8006628C(*(void**)((char*)p + 0x1c)); }

}
