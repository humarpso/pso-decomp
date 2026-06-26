#include "pso/TWindowCtrlSub.h"

extern s32 lbl_805D6410;

void TWindowCtrlSub::run_task() {}

TWindowCtrlSub::~TWindowCtrlSub() {
    lbl_805D6410 = 0;
}
