#include "types.h"

extern "C" {

void TAdMcSelectGC__sub_80329E08(void);
u32 get_mc_count__13TAdMcSelectGCFv();
int TAdMcSelectGC__sub_8032A15C();

void TAdMcSelectGC__sub_80329E08(void) {
    if (get_mc_count__13TAdMcSelectGCFv() != 0U) {
        TAdMcSelectGC__sub_8032A15C();
    }
}

}
