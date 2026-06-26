#include "types.h"

extern "C" {

void* fn_802A7780(void* p);
void* fn_802A7788(void* p);

void* fn_802A7780(void* p) { return (char*)p + 0xc; }
void* fn_802A7788(void* p) { return (char*)p + 0xc; }

}
