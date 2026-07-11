#include "types.h"

extern "C" {

void fn_801E2C50(void);
void reset_system(void);
void fn_801E2C90(void);
int OSResetSystem(int, int, int);
int fn_8037BC54(void);
int fn_8037C8B8(void);
int fn_8037CA40(int);

void fn_801E2C50(void) {  }
void reset_system(void) { fn_8037CA40(1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem(1, 0, 0); }
void fn_801E2C90(void) { fn_8037CA40(1); fn_8037C8B8(); fn_8037BC54(); OSResetSystem(1, 0, 1); }

}
