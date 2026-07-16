#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
M2C_UNK THunterGuildWarning__sub_80211700();
M2C_UNK THunterGuildSeqOffline__sub_80213374();
M2C_UNK THunterGuildSeqOffline__sub_80213C7C();
M2C_UNK fn_80214A34();
M2C_UNK TQuestListOnline__sub_80215498();

void update_hunter_guild_phase(void) {
    if (get_main_phase() == 0xE) {
        THunterGuildWarning__sub_80211700();
        THunterGuildSeqOffline__sub_80213374();
    }
    if (get_main_phase() == 0xF) {
        THunterGuildSeqOffline__sub_80213C7C();
        fn_80214A34();
        TQuestListOnline__sub_80215498();
    }
}

}
