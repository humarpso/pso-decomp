#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_session__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_801F3E1C();
M2C_UNK TLobby__sub_801F4340();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 TScene__sub_800F9D80();
M2C_UNK TLobby__sub_800F9DF4(s32, s32);

extern s32 TLobby__data_805D5EE0;
extern s16 TLobby__data_805D6134;

void open_session__6TLobbyFi(s32 arg0) {
    s32 t;

    if (TScene__sub_800F9D80() >= 0) {
        t = (TLobby__data_805D5EE0 = alloc__22TQuestVmDownLoadServerFPv());
        if (t != 0) {
            TLobby__sub_800F9DF4(arg0, t);
            TLobby__sub_801F3E1C();
            TLobby__sub_801F4340();
            TLobby__data_805D6134 = 1;
            safe_free__23TAdSinglePlyChrSelectGCFUi(TLobby__data_805D5EE0);
            TLobby__data_805D5EE0 = 0;
        }
    }
}

}
