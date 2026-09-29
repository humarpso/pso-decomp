#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FBF0C_TBoss8Dragon__data_80541DC8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
extern RecoveredGlobal_802FBF0C_TBoss8Dragon__data_80541DC8 TBoss8Dragon__data_80541DC8;
void TBoss8Dragon__sub_802FBF0C(s32 arg0);
s32 register_object__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TObjEneDD__sub_800B9E84(void *, int, int, int);
extern s32 TBoss8Dragon__data_804E4C28[];
extern RecoveredGlobal_802FBF0C_TBoss8Dragon__data_80541DC8 TBoss8Dragon__data_80541DC8;
void TBoss8Dragon__sub_802FBF40(void *o);
}

extern "C" {

typedef char RecoveredGlobal_802FBF0C_TBoss8Dragon__data_80541DC8_size[sizeof(RecoveredGlobal_802FBF0C_TBoss8Dragon__data_80541DC8) == 0x14 ? 1 : -1];
void TBoss8Dragon__sub_802FBF0C(s32 arg0) {
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&TBoss8Dragon__data_80541DC8.value, s32 *, 4)), (int) (0));
}
void TBoss8Dragon__sub_802FBF40(void *o) {
    TObjEneDD__sub_800B9E84(o, register_boss__6TLobbyFPv(0x12), ((s32 *)&TBoss8Dragon__data_80541DC8)[TBoss8Dragon__data_804E4C28[0]], register_object__6TLobbyFPv(0x12));
}

}
