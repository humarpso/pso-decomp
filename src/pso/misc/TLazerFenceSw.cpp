#include "types.h"

extern "C" {

void TLazerFenceSw__sub_8018A554(void* p, f32 v);
void fn_8018A548(void);
void fn_8018A54C(void);
void fn_8018A550(void);
void TContainerAncient01__sub_8018A55C(void* p, void* a1, void* a2);

int TObjEneDellBiter__sub_80087350(void*, void*);

void fn_8018A548(void) {  }
void fn_8018A54C(void) {  }
void fn_8018A550(void) {  }
void TLazerFenceSw__sub_8018A554(void* p, f32 v) { *(f32*)((char*)p + 0x1c) = v; }
void TContainerAncient01__sub_8018A55C(void* p, void* a1, void* a2) { TObjEneDellBiter__sub_80087350(a1, a2); }

}
