#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void invoke_callback_2c_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x2C);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_34_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x34);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

void invoke_callback_28_and_queue_destruction__16TQuestListOnlineFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x28);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

}
