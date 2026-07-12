#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_quest_list__22THunterGuildSeqOfflineFv(void);
M2C_UNK TQuestListVM__sub_80073DC4(s32, M2C_UNK);

extern s32 THunterGuildSeqOffline__data_805D6188;

void init_quest_list__22THunterGuildSeqOfflineFv(void) {
    TQuestListVM__sub_80073DC4(THunterGuildSeqOffline__data_805D6188, 9);
}

}
