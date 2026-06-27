#include "types.h"

extern "C" {

int fn_80131BA0(void* p);
int TWindowSubComCard__sub_80131C10(void* p);
int TWindowSubComCard__sub_80131C34(void* p);
int fn_80131FA0(void*);
int fn_80131FAC(void*);
int fn_8025C5F4(void*);

int fn_80131BA0(void* p) { return fn_8025C5F4(*(void**)((char*)p + 0x20)); }
int fn_80131BC4(void) { return 0; }
int TWindowSubComCard__sub_80131C10(void* p) { return fn_80131FA0(*(void**)((char*)p + 0x20)); }
int TWindowSubComCard__sub_80131C34(void* p) { return fn_80131FAC(*(void**)((char*)p + 0x20)); }
int TKeyBoardControl__vt2(void) { return 0; }

}
