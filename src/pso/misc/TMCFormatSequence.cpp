#include "pso/TMCFormatSequence.h"

extern "C" void TWindow__close(void*);
extern "C" void close_window__17TMCFormatSequenceFPv(void*);

#include "types.h"

extern "C" {
s32 wait_confirm_and_finish__17TMCFormatSequenceFPv();
s32 update_wait_confirm__17TMCFormatSequenceFPv();
s32 check_memcard_load_result__17TMCFormatSequenceFPv();
s32 process_format_result__17TMCFormatSequenceFPv();
s32 open_windows__17TMCFormatSequenceFPv();
void run_task__17TMCFormatSequenceFv(u8 *arg0);
}

extern "C" {

void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__17TMCFormatSequence[];
extern void *TMCFormatSequence__class_name;

char TQuestVmDownLoadServer__data_804C8690[] = "\xB8\xB4\xBD\xC4\xCC\xA7\xB2\xD9";

void run_task__17TMCFormatSequenceFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    switch (temp_r0) {
    case 0:
        open_windows__17TMCFormatSequenceFPv();
        return;
    case 1:
        process_format_result__17TMCFormatSequenceFPv();
        return;
    case 2:
        check_memcard_load_result__17TMCFormatSequenceFPv();
        return;
    case 3:
        wait_confirm_and_finish__17TMCFormatSequenceFPv();
        return;
    case 4:
        update_wait_confirm__17TMCFormatSequenceFPv();
        return;
    }
}

TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) { TWindow__close(m_38); m_38 = nullptr; }
    close_window__17TMCFormatSequenceFPv(this);
}
void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TMCFormatSequence;
    *(void **)((s8 *)arg0 + 0x0) = TMCFormatSequence__class_name;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(void **)((s8 *)arg0 + 0x28) = arg2;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 11;
    *(u32 *)((s8 *)arg0 + 0x30) = 101;
    return arg0;
}

}
