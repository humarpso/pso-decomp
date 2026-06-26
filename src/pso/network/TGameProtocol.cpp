#include "pso/TGameProtocol.h"

extern s32 lbl_805D5E48;

void TGameProtocol::run_task() {}

TGameProtocol::~TGameProtocol() {
    lbl_805D5E48 = 0;
}
