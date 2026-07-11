#include "types.h"

extern "C" {

int TBoss1Dragon__sub_80027F0C(void* p);
int TBoss1Dragon__sub_80027F30(void* p);
int TBoss1Dragon__sub_80027F54(void*, int);

int TBoss1Dragon__sub_80027F0C(void* p) { return TBoss1Dragon__sub_80027F54(p, 1); }
int TBoss1Dragon__sub_80027F30(void* p) { return TBoss1Dragon__sub_80027F54(p, 0); }

}
