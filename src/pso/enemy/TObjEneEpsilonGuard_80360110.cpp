#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_guard_state__19TObjEneEpsilonGuardFPv(void *arg0);
void TObjEneEpsilonGuard__sub_803601D0(void);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);

M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
extern s32 lbl_805D6FA0;

void set_guard_state__19TObjEneEpsilonGuardFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x438) & 2) {
        M2C_FIELD(arg0, s16 *, 0x43C) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D6FA0, 0);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        set_indexed_flags(arg0, 1, 1);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    } else {
        M2C_FIELD(arg0, s16 *, 0x43C) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D6FA0, 1);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_indexed_flags(arg0, 0, 1);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 1);
    }
    TBoss1Dragon__sub_80143504(arg0);
}

void TObjEneEpsilonGuard__sub_803601D0(void) {  }

}
