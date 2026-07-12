#include "types.h"

extern "C" {

int TWindowChat__sub_80247D44(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void TWindowChat__sub_8025CB34(void* p);
int TWindowKeyBoardSoft__sub_8025CB04(void* p);

int TWindowKeyBoardSoft__sub_8025CB04(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }

}
