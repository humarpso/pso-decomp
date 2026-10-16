#include "pso/TMemberCheck.h"

extern "C" {
s32 count_members__6TLobbyFv(void);
void open_member_name_window__12TMemberCheckFv(void*);
void update_member_proximity__22THunterGuildSeqOfflineFv(void*);
void TWindow__close(s32);
void* memset(void*, int, unsigned long);
extern const char* member_check_name_ptr;
extern s32 TMemberCheck__previous_member_count;
}

void TMemberCheck::run_task() {
    s32 n = count_members__6TLobbyFv();
    if (TMemberCheck__previous_member_count != n) {
        TMemberCheck__previous_member_count = n;
        open_member_name_window__12TMemberCheckFv(this);
    }
    update_member_proximity__22THunterGuildSeqOfflineFv(this);
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
    TMemberCheck__previous_member_count = count_members__6TLobbyFv();
    open_member_name_window__12TMemberCheckFv(this);
}
