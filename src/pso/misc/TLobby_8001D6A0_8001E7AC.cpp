#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_result_windows__6TLobbyFv(void);
f32 calc_result_offset__6TLobbyFv(void);
M2C_UNK append_padded_number(s32, M2C_UNK);
M2C_UNK text_builder_reset();
M2C_UNK get_shared_text_buffer();
u32 get_name_text_width();
M2C_UNK text_builder_append(M2C_UNK *);

extern M2C_UNK TLobby__data_8050AAAC[];
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern M2C_UNK lbl_805D7ED8;
extern M2C_UNK lbl_805D7EDC;

void close_result_windows__6TLobbyFv(void) {
    text_builder_reset();
    text_builder_append(TLobby__data_8050AAAC);
    text_builder_append(&lbl_805D7ED8);
    append_padded_number(TLobby__data_805D55AC, 2);
    text_builder_append(&lbl_805D7EDC);
    append_padded_number(TLobby__data_805D55B0 + 1, 2);
}

s32 get_main_phase();
extern M2C_UNK lbl_80434A90;
extern f32 TLobby__data_805D7EE0;

f32 calc_result_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = TLobby__data_805D7EE0;
    if (get_main_phase() == 0xF) {
        close_result_windows__6TLobbyFv();
        get_shared_text_buffer();
        var_f31 -= (f32) get_name_text_width();
    }
    return var_f31;
}

}
