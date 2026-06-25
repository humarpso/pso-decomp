#include "types.h"

extern "C" {

int fn_80141A30(void);
int fn_802A3138(void*);
int set_depth_buffer_settings_1__Fv(void*);
void TChCrTagPlGraphic__vt2(void* p);

void TChCrTagPlGraphic__vt2(void* p) { set_depth_buffer_settings_1__Fv(p); fn_802A3138(p); fn_80141A30(); }

}
