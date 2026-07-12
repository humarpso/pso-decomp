#include "types.h"

extern "C" {

int update_all_default__8TFogCtrlFv(void);
void apply_all_default__8TFogCtrlFv(void);
int apply_all__8TFogCtrlFii(void*, void*);
int update_all__8TFogCtrlFi(void*);

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
