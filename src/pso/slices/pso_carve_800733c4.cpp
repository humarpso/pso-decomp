#include "types.h"

extern "C" {

void fn_8007340C(void* p);
int TWindowSubComCard__sub_8007341C(void* p);

int fn_800733C4(void) { return 0; }
void fn_8007340C(void* p) { *(u16*)((char*)p + 0x70) |= 0x200; }
int TWindowSubComCard__sub_8007341C(void* p) { return (*(u16*)((char*)p + 0x70) >> 1) & 0x1; }

}
