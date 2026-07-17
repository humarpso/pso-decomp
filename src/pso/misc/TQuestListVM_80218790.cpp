#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_destroy__12TQuestListVMFPv(void *arg0);
void close__12TQuestListVMFPv(void *arg0);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
M2C_UNK reset__12TQuestListVMFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK TQuestListVM__data_8044BF20[];

void close_and_destroy__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23BC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EE48(TQuestListVM__data_8044BF20);
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

void close__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23B8);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EE48(TQuestListVM__data_8044BF20);
    }
    reset__12TQuestListVMFv();
    queue_destruction__7TObjectFv(arg0);
}

}
