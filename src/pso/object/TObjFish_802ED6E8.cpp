#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flee_if_disturbed__8TObjFishFPv(u8 *arg0);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);

extern const f32 lbl_805DEA44;

void flee_if_disturbed__8TObjFishFPv(u8 *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEA44));
    }
}

}
