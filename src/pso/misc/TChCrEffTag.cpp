#include "types.h"

extern "C" {

void render__11TChCrEffTagFv(void* p);

int fn_80141A30(void);
int fn_8029A97C(void*);
int fn_8029A9B8(void*);
int set_depth_buffer_settings_1__Fv(void*);

void render__11TChCrEffTagFv(void* p) { set_depth_buffer_settings_1__Fv(p); fn_8029A9B8(p); fn_8029A97C(p); fn_80141A30(); }

}
