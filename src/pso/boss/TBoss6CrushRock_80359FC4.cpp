#include "types.h"
#include "pso/TBoss6CrushRock.h"
#include "pso/boss/TBoss6PlotFalz.h"

extern "C" {

s32 TBoss6CrushRock::is_falz_alive() {
    return TBoss6PlotFalz::get_hp() ? 1 : 0;
}

}
