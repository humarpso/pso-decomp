#include "types.h"

extern "C" {

void update_state__13TAdMcSelectGCFv(void);
int TAdMcSelectGC__sub_8032A140();
u32 get_mc_count__13TAdMcSelectGCFv();

void update_state__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A140();
    }
}

}
