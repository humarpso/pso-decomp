#include "pso/TMemberCheck.h"
#include "pso/misc/TLobby.h"

extern "C" {
void TWindow__close(s32);
void* memset(void*, int, unsigned long);
extern const char* member_check_name_ptr;
extern s32 TMemberCheck__previous_member_count;
}

void TMemberCheck::run_task() {
    s32 n = TLobby::count_members();
    if (TMemberCheck__previous_member_count != n) {
        TMemberCheck__previous_member_count = n;
        open_member_name_window();
    }
    update_member_proximity();
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
    TMemberCheck__previous_member_count = TLobby::count_members();
    open_member_name_window();
}
