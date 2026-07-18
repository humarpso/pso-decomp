#include "types.h"

extern "C" {

int end_render_forward__20TWindowSubStatusDispFPv(void* p);
void reset_gauge__20TWindowSubStatusDispFPv(void* p);
int TWindowSubStatusDisp__sub_801454E0(void*);
int TWindowSubStatusDisp__sub_803DF160(void*, void*);
int TWindowSubStatusDisp__sub_803DEE6C(void*);
int get_player__20TWindowSubStatusDispFv(void*);

int end_render_forward__20TWindowSubStatusDispFPv(void* p) { return get_player__20TWindowSubStatusDispFv(p); }
void reset_gauge__20TWindowSubStatusDispFPv(void* p) { TWindowSubStatusDisp__sub_803DEE6C((void*)1); TWindowSubStatusDisp__sub_801454E0(p); TWindowSubStatusDisp__sub_803DF160((void*)0, (void*)-1); }

}
