#include "types.h"

extern "C" {

void TObjDoorKey__vt17(void);
int TObjDoorKey__vt15(void* p);
int TObjDoorKey__vt22(void* p);
int TOKey__sub_8016A960(void*);
int TObjPlayer__sub_801B4A18(void*, int);

int TObjDoorKey__vt15(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }
int TObjDoorKey__vt22(void* p) { return TOKey__sub_8016A960(p); }

}
