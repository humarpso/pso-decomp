#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801C257C_TLobby__data_80511C80 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 is_not_split_screen__13TRaderMapCoreFv(void);
u8 * TPlayerBattleCtrl4P__sub_80310300(void);
extern RecoveredGlobal_801C257C_TLobby__data_80511C80 TLobby__data_80511C80;
M2C_UNK *TWindowDuelResult__sub_801C257C(void);
}

extern "C" {

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void set_and_notify__6TLobbyFi(void *);

extern M2C_UNK lbl_804C3E60[];

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E60;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_and_notify__6TLobbyFi(arg2);
    return arg0;
}
typedef char RecoveredGlobal_801C257C_TLobby__data_80511C80_size[sizeof(RecoveredGlobal_801C257C_TLobby__data_80511C80) == 0x20 ? 1 : -1];
M2C_UNK *TWindowDuelResult__sub_801C257C(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return (long *) (TPlayerBattleCtrl4P__sub_80310300());
    }
    return &TLobby__data_80511C80.value;
}

}
