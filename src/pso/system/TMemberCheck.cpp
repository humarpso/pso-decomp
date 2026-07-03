#include "pso/TMemberCheck.h"

extern "C" {
s32 fn_801B0974(void);
void THunterGuildSeqOffline__sub_80212304(void*);
void THunterGuildSeqOffline__sub_80212230(void*);
void TWindow__close(s32);
void* memset(void*, int, unsigned long);
extern const char* lbl_805D3650;
extern s32 lbl_805D6180;
}

TMemberCheck::TMemberCheck(TObject* parent) : TObject(parent) {
    m_name = lbl_805D3650;
    m_1C = 0;
    memset(m_20, 0, 0x60);
    lbl_805D6180 = fn_801B0974();
    THunterGuildSeqOffline__sub_80212304(this);
}

void TMemberCheck::run_task() {
    s32 n = fn_801B0974();
    if (lbl_805D6180 != n) {
        lbl_805D6180 = n;
        THunterGuildSeqOffline__sub_80212304(this);
    }
    THunterGuildSeqOffline__sub_80212230(this);
}

TMemberCheck::~TMemberCheck() {
    if (m_1C != 0) {
        TWindow__close(m_1C);
        m_1C = 0;
    }
}
