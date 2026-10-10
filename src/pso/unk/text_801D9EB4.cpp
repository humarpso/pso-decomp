#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK handle_quest_ready__16TQuestListOnlineFv();

void handle_cmd_AC__9TProtocolFR6packet(void *arg0, void *arg1) {
    if ((u8) M2C_FIELD(arg1, u8 *, 1) == 0) {
        handle_quest_ready__16TQuestListOnlineFv();
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x2A) = 1;
}

}
