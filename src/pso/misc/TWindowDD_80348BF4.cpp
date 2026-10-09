#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK update_selected_id__9TWindowDDFPv(void *);
M2C_UNK build_player_word_lists__9TWindowDDFv();
M2C_UNK open__9TWindowDDFii(void *, int);
M2C_UNK handle_word_select__9TWindowDDFPv();
extern s32 lbl_805D53A0;
extern u32 TWindowDD__word_select_lists;

void handle_6x74_word_select(u8 *arg0) {
    handle_word_select__9TWindowDDFPv();
    if ((u32) TWindowDD__word_select_lists != 0U) {
        if ((s32) M2C_FIELD(arg0, u16 *, 2) != (s32) lbl_805D53A0) {
            update_selected_id__9TWindowDDFPv((void *) (arg0 + 4));
        }
        build_player_word_lists__9TWindowDDFv();
        open__9TWindowDDFii((void *) (arg0 + 4), (int) (M2C_FIELD(arg0, u16 *, 2)));
    }
}

}
