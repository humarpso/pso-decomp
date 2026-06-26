#include "pso/TChCrLoadGmNjReq.h"

extern "C" void fn_8028C8A8(void*);
extern "C" void fn_8001FE7C(void*, int);

void TChCrLoadGmNjReq::run_task() {}

TChCrLoadGmNjReq::~TChCrLoadGmNjReq() {
    fn_8028C8A8(this);
    if (m_68 != nullptr) {
        fn_8001FE7C(m_68, 1);
    }
}
