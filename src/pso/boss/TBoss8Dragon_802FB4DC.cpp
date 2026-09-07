#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
s32 get_state_flags__12TBoss8DragonFPv(void *, void *);
extern RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8 TBoss8Dragon__data_804744C8;
extern RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8 TBoss8Dragon__data_80541DC8;
void TBoss8Dragon__sub_802FB70C(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8_size[sizeof(RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8_size[sizeof(RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8) == 0x14 ? 1 : -1];
void TBoss8Dragon__sub_802FB70C(s32 arg0) {
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&TBoss8Dragon__data_80541DC8.value, s32 *, 0x10)), (int) (0));
    get_state_flags__12TBoss8DragonFPv((void *) (arg0), (void *) (&TBoss8Dragon__data_804744C8.value));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&TBoss8Dragon__data_80541DC8.value, s32 *, 0)), (int) (0));
}

}
