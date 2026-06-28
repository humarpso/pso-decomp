#include "types.h"

extern "C" {

int TWindowDuelResult__sub_8025AD38(void* p, int a1);
int TWindowSubStatusDisp__sub_8025AC50(void*, int, int);

int TWindowDuelResult__sub_8025AD38(void* p, int a1) { return TWindowSubStatusDisp__sub_8025AC50(p, a1, 0); }

}
