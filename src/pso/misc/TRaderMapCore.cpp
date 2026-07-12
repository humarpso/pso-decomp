#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_active__13TRaderMapCoreFv(void);
s32 should_show_map__13TRaderMapCoreFv(void);
void TRaderMapCore__sub_801F9104(void* p);
s32 TRaderMapCore__sub_801F9058();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TTecCtrl__sub_801B0EE8();
s32 fn_8030A730();

extern void *TRaderMapCore__data_805D5F40;

s32 is_active__13TRaderMapCoreFv(void) {
    if ((void *) TRaderMapCore__data_805D5F40 != NULL) {
        if (M2C_FIELD(TRaderMapCore__data_805D5F40, u16 *, 4) & 0x10) {
            return 0;
        }
        return TRaderMapCore__sub_801F9058();
    }
    return 0;
}

s32 should_show_map__13TRaderMapCoreFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (fn_8030A730() == 0)) {
        return 0;
    }
    return TTecCtrl__sub_801B0EE8();
}
void TRaderMapCore__sub_801F9104(void* p) { *(s32*)((char*)p + 0x184) = 0; }

}
