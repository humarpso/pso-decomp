#include "pso/TWindowCtrlSub.h"

extern s32 TWindowCtrlMain__data_805D6410;

void TWindowCtrlSub::run_task() {}

TWindowCtrlSub::~TWindowCtrlSub() {
    TWindowCtrlMain__data_805D6410 = 0;
}
