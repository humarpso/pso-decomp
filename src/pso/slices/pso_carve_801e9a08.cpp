#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B368();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, M2C_UNK *);
u32 __nw__7TObjectFUl(M2C_UNK);
extern M2C_UNK reset_random_enemies_mode__6TLobbyFv[];
extern s32 tl_00;

void create_hunter_guild_seq__6TLobbyFv(void) {
    void *temp_r3;
    if ((TCameraCtrl__sub_8006B368() == 1) && ((temp_r3 = (void*)__nw__7TObjectFUl(0x28)) != 0U)) {
        init__22THunterGuildSeqOfflineFPvPvPv(temp_r3, tl_00, reset_random_enemies_mode__6TLobbyFv);
    }
}

}
