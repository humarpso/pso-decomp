#include "types.h"

extern "C" {

void TObjPlayer__sub_801BF47C(void* p);
int TObjPlayer__sub_801BF4B8(void* p);
int TObjPlayer__sub_801BF4DC(void* p);
int TObjPlayer__sub_801BF500(void* p);
int TObjPlayer__sub_801BF524(void* p);
int TAdRicoRing__sub_8001BEE8(void*, int);
int TObjPlayer__sub_8001BED8(void*, int);
int TWindowActionPalette__sub_8013DF4C(void*);
int TWindowActionPalette__sub_8013DF54(void*);

int TObjPlayer__sub_801BF4B8(void* p) { return TWindowActionPalette__sub_8013DF4C((char*)p + 0x4); }
int TObjPlayer__sub_801BF4DC(void* p) { return TWindowActionPalette__sub_8013DF54((char*)p + 0x4); }
int TObjPlayer__sub_801BF500(void* p) { return TAdRicoRing__sub_8001BEE8(p, 2); }
int TObjPlayer__sub_801BF524(void* p) { return TObjPlayer__sub_8001BED8(p, 2); }

}
