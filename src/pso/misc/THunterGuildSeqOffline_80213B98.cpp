#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void THunterGuildSeqOffline__sub_80213B98(void *arg0);
M2C_UNK TQuestListVM__sub_80073DC4(void *, M2C_UNK);
M2C_UNK restore_player_state__13TShopSequenceFPv();
s32 THunterGuildSeqOffline__sub_8022350C(void *, M2C_UNK);

void THunterGuildSeqOffline__sub_80213B98(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    M2C_FIELD(arg0, s32 *, 0x2C) = THunterGuildSeqOffline__sub_8022350C(arg0, 1);
    TQuestListVM__sub_80073DC4(arg0, 1);
}

}
