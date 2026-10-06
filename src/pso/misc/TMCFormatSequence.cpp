#include "pso/TMCFormatSequence.h"

extern "C" void TWindow__close(void*);
extern "C" void close_window__17TMCFormatSequenceFPv(void*);

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TMCFormatSequence__sub_801F65C4();
M2C_UNK TMCFormatSequence__sub_801F6640();
M2C_UNK check_memcard_load_result__17TMCFormatSequenceFPv();
M2C_UNK process_format_result__17TMCFormatSequenceFPv();
M2C_UNK TMCFormatSequence__sub_801F68FC();
void run_task__17TMCFormatSequenceFv(u8 *arg0);
}

extern "C" {

void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TMCFormatSequence[];
extern void *lbl_805D35EC;

char TQuestVmDownLoadServer__data_804C8690[] = "\xB8\xB4\xBD\xC4\xCC\xA7\xB2\xD9";

void run_task__17TMCFormatSequenceFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        TMCFormatSequence__sub_801F68FC();
        return;
    case 1:
        process_format_result__17TMCFormatSequenceFPv();
        return;
    case 2:
        check_memcard_load_result__17TMCFormatSequenceFPv();
        return;
    case 3:
        TMCFormatSequence__sub_801F65C4();
        return;
    case 4:
        TMCFormatSequence__sub_801F6640();
        return;
    }
}

TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) { TWindow__close(m_38); m_38 = nullptr; }
    close_window__17TMCFormatSequenceFPv(this);
}
void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TMCFormatSequence;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D35EC;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 11;
    M2C_FIELD(arg0, u32 *, 0x30) = 101;
    return arg0;
}

}
