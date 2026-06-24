#include "types.h"

extern "C" {

int fn_80141A30(void);
int fn_8029A97C(void*);
int fn_8029A9B8(void*);
int set_depth_buffer_settings_1__Fv(void*);
void fn_8029AA34(void* p);

void fn_8029AA34(void* p) { set_depth_buffer_settings_1__Fv(p); fn_8029A9B8(p); fn_8029A97C(p); fn_80141A30(); }

}
