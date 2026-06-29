#include "types.h"

extern "C" {

int TObjEneSlimeOne__sub_800EACFC(void*, void*);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
void fn_800E9B7C(void* p);

void fn_800E9B7C(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); TObjEneSlimeOne__sub_800EACFC(p, (void*)2); }

}
