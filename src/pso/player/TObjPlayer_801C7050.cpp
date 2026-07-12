#include "types.h"

extern "C" {

int TObjPlayer__sub_801C7050(void* p);
int TObjPlayer__sub_801C7074(void* p);
int TObjPlayer__sub_801C7098(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

int TObjPlayer__sub_801C7050(void* p) { return TObjPlayer__sub_8001BEF8(p, 16); }
int TObjPlayer__sub_801C7074(void* p) { return TObjPlayer__sub_8001BEF8(p, 8); }
int TObjPlayer__sub_801C7098(void* p) { return TObjPlayer__sub_8001BEF8(p, 2); }

}
