#include "pso/TItemReverseTech.h"

extern "C" void fn_8022743C(void);
extern "C" void TKeyBoardControl__sub_8000F9B0(void);

void TItemReverseTech::run_task() {}

TItemReverseTech::~TItemReverseTech() {
    fn_8022743C();
    TKeyBoardControl__sub_8000F9B0();
}
