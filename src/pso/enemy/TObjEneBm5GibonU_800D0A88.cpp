#include "types.h"

extern "C" {

int is_active__16TObjEneBm5GibonUFPv(void* p);

int is_active__16TObjEneBm5GibonUFPv(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }

}
