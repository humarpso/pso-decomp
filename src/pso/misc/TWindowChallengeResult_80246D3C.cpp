#include "types.h"

extern "C" {

void TWindowChallengeResult__sub_80246D3C(void* p);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
int initialize_subwindow__9TWindowDDFPv(void*);

void TWindowChallengeResult__sub_80246D3C(void* p) { initialize_subwindow__9TWindowDDFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
