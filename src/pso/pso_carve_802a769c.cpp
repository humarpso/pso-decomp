#include "types.h"

extern "C" {

void fn_802A769C(void);
void fn_802A76C4(void);
int fn_802A7640(void);
int fn_802A7674(void);
int fn_802A7888(int);

void fn_802A769C(void) { fn_802A7640(); fn_802A7888(0); }
void fn_802A76C4(void) { fn_802A7888(1); fn_802A7674(); }

}
