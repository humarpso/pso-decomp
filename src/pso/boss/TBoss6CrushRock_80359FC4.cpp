#include "types.h"
#include "pso/TBoss6CrushRock.h"

extern "C" {

s32 get_hp__14TBoss6PlotFalzFv();

s32 TBoss6CrushRock::is_falz_alive() {
    return get_hp__14TBoss6PlotFalzFv() ? 1 : 0;
}

}
