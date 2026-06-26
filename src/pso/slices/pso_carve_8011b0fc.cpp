#include "types.h"

extern "C" {

int fn_8001960C(void*);
int fn_80104200(void*);
void fn_8011B0FC(void* p);

void fn_8011B0FC(void* p) { fn_8001960C(p); fn_80104200((char*)p + 0x4); }

}
