#include "types.h"

extern "C" {

int fn_80141A30(void);
int fn_803205C4(void*);
int set_depth_buffer_settings_1__Fv(void*);
void fn_80320894(void* p);

void fn_80320894(void* p) { set_depth_buffer_settings_1__Fv(p); fn_803205C4(p); fn_80141A30(); }

}
