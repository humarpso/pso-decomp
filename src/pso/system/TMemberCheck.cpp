#include "pso/TMemberCheck.h"

extern "C" {
s32 fn_801B0974(void);
void fn_80212304(void*);
void fn_80212230(void*);
void TWindowSubComCard__sub_80244A14(s32);
void* memset(void*, int, unsigned long);
extern const char* lbl_805D3650;
extern s32 lbl_805D6180;
}

TMemberCheck::TMemberCheck(TObject* parent) : TObject(parent) {
    m_name = lbl_805D3650;
    m_1C = 0;
    memset(m_20, 0, 0x60);
    lbl_805D6180 = fn_801B0974();
    fn_80212304(this);
}

void TMemberCheck::run_task() {
    s32 n = fn_801B0974();
    if (lbl_805D6180 != n) {
        lbl_805D6180 = n;
        fn_80212304(this);
    }
    fn_80212230(this);
}

TMemberCheck::~TMemberCheck() {
    if (m_1C != 0) {
        TWindowSubComCard__sub_80244A14(m_1C);
        m_1C = 0;
    }
}
