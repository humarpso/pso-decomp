#include "pso/misc/TEnding.h"

extern "C" {
extern s32 lbl_805D4F0C;
int TEnding__sub_8008C5E8();

void set_flag_and_advance__7TEndingFv() {
    lbl_805D4F0C = 1;
    TEnding__sub_8008C5E8();
}

void TEnding__sub_8008C6E8() {}
void TEnding__sub_8008C6EC() {}
}

void TEnding::render() {}
