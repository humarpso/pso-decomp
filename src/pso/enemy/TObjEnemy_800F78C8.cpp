#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_by_index__9TObjEnemyFs(s16 arg0);
M2C_UNK TLobby__sub_8002B058(s32);

extern s32 TLobby__data_805D6144;

s32 apply_by_index__9TObjEnemyFs(s16 arg0) {
    if (arg0 > 0xB4F) {
        return 0;
    }
    TLobby__sub_8002B058(TLobby__data_805D6144 + (arg0 * 0xC));
    return 1;
}

}
