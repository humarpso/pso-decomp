#include "types.h"
#include "pso/misc/TQuestListVM.h"

extern "C" {

void TLobby__sub_8007EB20(s32 arg0, ...);
void TLobby__sub_8007EB70(void);
s32 TQuestVmDownLoadServer__sub_8007EB14(void);
void __dl__FPv(void);
void debug_print__FPCc(void);
s32 xfree__FPv();

s32 TQuestListVM::get_quest_id() {
    return this->m_2b0;
}

    extern int TQuestListVM__decrypted_quest_buffer;
int TQuestListVM::get_instance() {  return TQuestListVM__decrypted_quest_buffer; }

void TQuestListVM::reset() { TQuestListVM__decrypted_quest_buffer = 0; }

extern s32 TQuestVmDownLoadServer__instance;

s32 TQuestVmDownLoadServer__sub_8007EB14(void) {
    return TQuestVmDownLoadServer__instance;
}

void debug_print__FPCc(void) {

}

void TLobby__sub_8007EB20(s32 arg0, ...) {}
void TLobby__sub_8007EB70(void) {  }

void __dl__FPv(void) {
    xfree__FPv();
}

}
