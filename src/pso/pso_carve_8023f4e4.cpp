#include "types.h"

extern "C" {

void fn_8023F4E4(void);
void fn_8023F50C(void);
int fn_8023E8A4(void);
int fn_8023E8D4(void);
int fn_8023F22C(void);
int render_tick__Fv(void);

void fn_8023F4E4(void) { fn_8023F22C(); fn_8023E8A4(); render_tick__Fv(); }
void fn_8023F50C(void) { fn_8023F22C(); fn_8023E8D4(); render_tick__Fv(); }

}
