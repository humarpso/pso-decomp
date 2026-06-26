#include "types.h"

extern "C" {

int fn_802F2C90(void* p);
f32 fn_802F2CB4(void* p);
f32 fn_802F2CBC(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int fn_802F2C90(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x78); }
f32 fn_802F2CB4(void* p) { return *(f32*)((char*)p + 0x5c); }
f32 fn_802F2CBC(void* p) { return *(f32*)((char*)p + 0x54); }

}
