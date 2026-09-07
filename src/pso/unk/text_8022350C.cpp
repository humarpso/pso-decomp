#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8022350C_lbl_8044C350 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_8022350C_lbl_8044C36C {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 get_instance__6TLobbyFv();
s32 TCameraCtrl__sub_8006B438(int);
extern RecoveredGlobal_8022350C_lbl_8044C350 lbl_8044C350;
extern RecoveredGlobal_8022350C_lbl_8044C36C lbl_8044C36C;
void THunterGuildSeqOffline__sub_8022350C(M2C_UNK arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8022350C_lbl_8044C350_size[sizeof(RecoveredGlobal_8022350C_lbl_8044C350) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_8022350C_lbl_8044C36C_size[sizeof(RecoveredGlobal_8022350C_lbl_8044C36C) == 0x1C ? 1 : -1];
void THunterGuildSeqOffline__sub_8022350C(M2C_UNK arg0, s32 arg1) {
    if (get_instance__6TLobbyFv() == 0) {
        TCameraCtrl__sub_8006B438((int) (M2C_FIELD(&lbl_8044C350.value, M2C_UNK *, (arg1 * 4))));
        return;
    }
    TCameraCtrl__sub_8006B438((int) (M2C_FIELD(&lbl_8044C36C.value, M2C_UNK *, (arg1 * 4))));
}

}
