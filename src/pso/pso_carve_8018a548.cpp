#include "types.h"

extern "C" {

void fn_8018A548(void);
void fn_8018A54C(void);
void fn_8018A550(void);
void fn_8018A554(void* p, f32 v);

void fn_8018A548(void) {  }
void fn_8018A54C(void) {  }
void fn_8018A550(void) {  }
void fn_8018A554(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
int fn_8018A55C(void) { return 0; }

}
