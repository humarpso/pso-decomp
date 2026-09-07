#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F45A0_lbl_80474580 { M2C_UNK value; u8 remaining[0x88]; };
typedef char RecoveredGlobal_802F45A0_lbl_80474580_size[sizeof(RecoveredGlobal_802F45A0_lbl_80474580) == 0x8C ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DE8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DE8_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DE8) == 0xC ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DF4 { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DF4_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DF4) == 0x3C ? 1 : -1];

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
void update_camera_sequence__9TObjEneDDFPv(void);
M2C_UNK TObjPlayer__sub_803D8960(int, void *, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_802F45A0_lbl_80474580 lbl_80474580;
extern RecoveredGlobal_802F45A0_lbl_80541DE8 lbl_80541DE8;
extern RecoveredGlobal_802F45A0_lbl_80541DF4 lbl_80541DF4;
extern s32 TBoss8Dragon__data_805D698C;
extern s32 lbl_805D6990;
extern s32 TBoss8Dragon__data_805D6994;
extern s32 TBoss8Dragon__data_805D6998;
extern s32 TBoss8Dragon__data_805D699C;
extern s32 TBoss8Dragon__data_805D69A0;
void TBoss8Dragon__sub_802F45A0(void);
}

extern "C" {

void TBoss8Dragon__sub_802F45A0(void) {
    s32 temp_r0;
    s32 temp_r4;
    if ((s32) TBoss8Dragon__data_805D698C == (s32) lbl_805D6990) {
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        TObjPlayer__sub_803D8960((int) (0), (void *) (&lbl_80541DF4.value), (int) (TBoss8Dragon__data_805D6994), (int) (3));
        TObjPlayer__sub_803D9B78();
    }
    if ((s32) TBoss8Dragon__data_805D698C == (s32) M2C_FIELD(&lbl_80474580.value, M2C_UNK *, (TBoss8Dragon__data_805D6998 * 4))) {
        temp_r4 = TBoss8Dragon__data_805D699C;
        TBoss8Dragon__data_805D699C = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80541DE8.value, temp_r4);
        temp_r0 = TBoss8Dragon__data_805D6998 + 1;
        TBoss8Dragon__data_805D6998 = temp_r0;
        if ((temp_r0 == 7) && !(TBoss8Dragon__data_805D69A0 & 4)) {
            TBoss8Dragon__data_805D6998 = 0xC;
            TBoss8Dragon__data_805D699C += 0x3C;
        }
        if (((s32) TBoss8Dragon__data_805D6998 == 0x12) && !(TBoss8Dragon__data_805D69A0 & 2)) {
            TBoss8Dragon__data_805D6998 = 0x20;
            TBoss8Dragon__data_805D699C += 0xA8;
        }
    }
    TBoss8Dragon__data_805D698C += 1;
}

}
