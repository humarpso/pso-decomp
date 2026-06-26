#include "types.h"

extern "C" {

void fn_80300338(void);
int fn_8000F9CC(int);
int fn_80300CE4(void);

void fn_80300338(void) { fn_80300CE4(); fn_8000F9CC(14); }
int fn_80300360(void) { return 0; }

}
