#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int is_boss_phase_reached__6TLobbyFv(void);
s32 TBoss4Uro__sub_8004C19C(void*);

extern void* lbl_805D4D74;
extern s32 lbl_805D5550;

int is_boss_phase_reached__6TLobbyFv(void) {
    s32 temp_r3;

    if (lbl_805D4D74 == 0) {
        return 0;
    }
    temp_r3 = TBoss4Uro__sub_8004C19C(lbl_805D4D74);
    if (lbl_805D5550 == 0) {
        return (temp_r3 >= 9) ? 1 : 0;
    }
    return (temp_r3 >= 0xE) ? 1 : 0;
}

}
