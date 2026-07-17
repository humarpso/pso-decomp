#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unequip_by_field326__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801B198C(s32 arg0);
void reset_volopt_state__10TObjPlayerFv(void);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TObjPlayer__sub_801B18C0(void * a0 = 0, s16 a1 = 0);
s32 get_main_phase();
int get_field_3e0__12TBoss3VoloptFPv(void);
int TObjPlayer__sub_802034B0(void);
s32 TObjFish__sub_803E46BC(s32);

void unequip_by_field326__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_801B18C0(arg0, M2C_FIELD(arg0, s16 *, 0x326));
}
void TObjPlayer__sub_801B198C(s32 arg0) {
    if (((get_main_phase() == 0xE) || (get_main_phase() == 0xF)) && (TFontSmallLobby__sub_801AFEE0() != 0)) {
        TObjFish__sub_803E46BC(arg0);
        return;
    }
    TObjFish__sub_803E46BC(arg0);
}
void reset_volopt_state__10TObjPlayerFv(void) { get_field_3e0__12TBoss3VoloptFPv(); TObjPlayer__sub_802034B0(); }

}
