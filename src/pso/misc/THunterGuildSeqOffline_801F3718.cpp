#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801F3738_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801F3748_THunterGuildSeqOffline__data_80513DC8 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801F3718_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__quest_result_callbacks;
void set_quest_cancel_callback(s32 arg0);
extern RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__quest_result_callbacks;
void set_quest_success_callback(s32 arg0);
extern RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__quest_result_callbacks;
void THunterGuildSeqOffline__sub_801F3748(s32 arg0);
extern RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__quest_result_callbacks;
void set_quest_exit_callback(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_801F3728_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_801F3718_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_801F3718_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void set_quest_exit_callback(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_801F3718_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 0xC) = arg0;
}

void set_quest_cancel_callback(s32 arg0) {
    M2C_FIELD(&THunterGuildSeqOffline__quest_result_callbacks.value, s32 *, 8) = arg0;
}
typedef char RecoveredGlobal_801F3738_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_801F3738_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void set_quest_success_callback(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_801F3738_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 4) = arg0;
}
typedef char RecoveredGlobal_801F3748_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_801F3748_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void THunterGuildSeqOffline__sub_801F3748(s32 arg0) {
    (*(RecoveredGlobal_801F3748_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value = arg0;
}

}
