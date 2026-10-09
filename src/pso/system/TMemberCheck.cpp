#include "pso/TMemberCheck.h"

extern "C" {
s32 count_members__6TLobbyFv(void);
void open_member_name_window__22THunterGuildSeqOfflineFPv(void*);
void update_member_proximity__22THunterGuildSeqOfflineFPv(void*);
void TWindow__close(s32);
void* memset(void*, int, unsigned long);
extern const char* member_check_name_ptr;
extern s32 lbl_805D6180;
}

void TMemberCheck::run_task() {
    s32 n = count_members__6TLobbyFv();
    if (lbl_805D6180 != n) {
        lbl_805D6180 = n;
        open_member_name_window__22THunterGuildSeqOfflineFPv(this);
    }
    update_member_proximity__22THunterGuildSeqOfflineFPv(this);
}

TMemberCheck::~TMemberCheck() {
    if (m_1C != 0) {
        TWindow__close(m_1C);
        m_1C = 0;
    }
}
TMemberCheck::TMemberCheck(TObject* parent) : TObject(parent) {
    m_name = member_check_name_ptr;
    m_1C = 0;
    memset(m_20, 0, 0x60);
    lbl_805D6180 = count_members__6TLobbyFv();
    open_member_name_window__22THunterGuildSeqOfflineFPv(this);
}
