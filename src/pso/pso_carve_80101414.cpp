#include "types.h"

extern "C" {

int disallow_rendering__7TObjectFv(void*);
int fn_80101B20(void*);
int queue_destruction__7TObjectFv(void*);
void fn_80101414(void* p);

void fn_80101414(void* p) { fn_80101B20(p); disallow_rendering__7TObjectFv(p); queue_destruction__7TObjectFv(p); }

}
