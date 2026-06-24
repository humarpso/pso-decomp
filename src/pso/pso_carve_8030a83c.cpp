#include "types.h"

extern "C" {

void fn_8030A884(void);
int fn_800D8A2C(void);
int fn_801E2F20(void);
int fn_8030ABF4(void);

int fn_8030A83C(void) { return 0; }
void fn_8030A884(void) { fn_800D8A2C(); fn_8030ABF4(); fn_801E2F20(); }

}
