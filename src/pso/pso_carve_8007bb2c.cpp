#include "types.h"

extern "C" {

void fn_8007BBC4(void);
int fn_800F8AA8(void);
int fn_800F8AF8(void);
int fn_800F8BFC(void);

int fn_8007BB2C(void) { return 0; }
void fn_8007BBC4(void) { fn_800F8AA8(); fn_800F8BFC(); fn_800F8AF8(); }

}
