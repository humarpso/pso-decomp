#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FBA1C_lbl_80474638 { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_802FBA1C_lbl_80474638_size[sizeof(RecoveredGlobal_802FBA1C_lbl_80474638) == 0x20 ? 1 : -1];

extern "C" {
s32 check_damage_reaction__12TBoss8DragonFPv(void *);
void TBoss8Dragon__sub_802FBA84(void *);
extern RecoveredGlobal_802FBA1C_lbl_80474638 lbl_80474638;
void TBoss8Dragon__sub_802FBA1C(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FBA1C(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
        TBoss8Dragon__sub_802FBA84(arg0);
        return;
    }
    if (check_damage_reaction__12TBoss8DragonFPv(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x674) = (s32) M2C_FIELD(&lbl_80474638.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x674) * 4));
        TBoss8Dragon__sub_802FBA84(arg0);
    }
}

}
