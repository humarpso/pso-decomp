#include "types.h"

extern "C" {

int fn_80181AE8(void*);
int fn_80181E10(void*);
void fn_80181AAC(void* p);

void fn_80181AAC(void* p) { if (fn_80181E10(p) != 0) { fn_80181AE8(p); } }

}
