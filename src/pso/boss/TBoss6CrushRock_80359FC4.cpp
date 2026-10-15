#include "types.h"

extern "C" {

s32 is_falz_alive__15TBoss6CrushRockFv(void);
s32 get_hp__14TBoss6PlotFalzFv();

s32 is_falz_alive__15TBoss6CrushRockFv(void) {
    return get_hp__14TBoss6PlotFalzFv() ? 1 : 0;
}

}
