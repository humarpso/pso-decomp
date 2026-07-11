#include "types.h"

extern "C" {

void update_state__13TAdMcSelectGCFv(void);
int TAdMcSelectGC__sub_8032A140();
u32 TAdMcSelectGC__sub_8032A14C();

void update_state__13TAdMcSelectGCFv(void) {
    if (TAdMcSelectGC__sub_8032A14C() != 0U) {
        TAdMcSelectGC__sub_8032A140();
    }
}

}
