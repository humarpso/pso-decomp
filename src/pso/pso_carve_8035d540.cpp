#include "types.h"

extern "C" {

void fn_8035D540(void* p, f32 v);

void fn_8035D540(void* p, f32 v) { *(f32*)((char*)p + 0x94) = v; }
int fn_8035D548(void) { return 0; }
int fn_8035D5B4(void) { return 0; }

}
