#include "types.h"

extern "C" {

int TFogCtrl__sub_801A7918(void);
void TFogCtrl__sub_801A793C(void);
int apply_all__8TFogCtrlFii(void*, void*);
int update_all__8TFogCtrlFi(void*);

int TFogCtrl__sub_801A7918(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void TFogCtrl__sub_801A793C(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
