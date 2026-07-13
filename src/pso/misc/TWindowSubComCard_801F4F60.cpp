#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_801F4F60(void *arg0);
s32 TLobby__sub_8039DAFC(s32, M2C_UNK *);
M2C_UNK fn_801F4F20(s32);
M2C_UNK fn_801F64F4(u32);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 realloc_buffer__17TWindowSubComCardFPv(u32);
s32 submit_card_password__17TWindowSubComCardFi(s32);
s32 update_keyboard__17TWindowSubComCardFPv(u32);

extern M2C_UNK lbl_805DC4FC;

s32 TWindowSubComCard__sub_801F4F60(void *arg0) {
    s32 temp_r31;
    u32 temp_field;

    temp_field = M2C_FIELD(arg0, u32 *, 0x1C);
    if ((temp_field != 0U) && (update_keyboard__17TWindowSubComCardFPv(temp_field) != 0)) {
        temp_r31 = realloc_buffer__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x1C));
        if (TLobby__sub_8039DAFC(temp_r31, &lbl_805DC4FC) == 0) {
            free__11TOBoss4RockFUi(temp_r31);
            fn_801F64F4(M2C_FIELD(arg0, u32 *, 0x1C));
            return 0;
        }
        if (submit_card_password__17TWindowSubComCardFi(temp_r31) != 0) {
            fn_801F64F4(M2C_FIELD(arg0, u32 *, 0x1C));
            free__11TOBoss4RockFUi(temp_r31);
            return 0;
        }
        fn_801F4F20(temp_r31);
        free__11TOBoss4RockFUi(temp_r31);
        return 1;
    }
    return 0;
}

}
