#include "types.h"

extern "C" {

void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d);

int fn_8025B050(void) { return 0; }
int fn_8025B064(void) { return 0; }
void fn_8025B078(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x1c) = a; *(f32*)((char*)p + 0x20) = b; *(f32*)((char*)p + 0x24) = c; *(f32*)((char*)p + 0x28) = d; }

}
