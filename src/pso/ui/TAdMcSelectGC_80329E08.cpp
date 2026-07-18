#include "types.h"

extern "C" {

void select_if_mc_present__13TAdMcSelectGCFv(void);
u32 get_mc_count__13TAdMcSelectGCFv();
int TAdMcSelectGC__sub_8032A15C();

void select_if_mc_present__13TAdMcSelectGCFv(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A15C();
    }
}

}
