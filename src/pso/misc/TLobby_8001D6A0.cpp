#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern f32 lbl_805D4AC0;
extern const f32 TLobby__data_805D7EE0;
void TLobby__sub_8001ED74(void);
}

extern "C" {

s32 TLobby__sub_8001E8B8(void);
void TLobby__sub_8001ED70(void);
f32 calc_phase_offset__6TLobbyFv(void);
s32 get_minutes__6TLobbyFv(void);
s32 TLobby__sub_8001E8FC();
s32 get_main_phase();

extern f32 lbl_805D7EE4;
extern f32 lbl_805D7EE8;

f32 calc_phase_offset__6TLobbyFv(void) {
    f32 var_f31;

    var_f31 = lbl_805D7EE4;
    if (get_main_phase() == 0xF) {
        var_f31 -= lbl_805D7EE8;
    }
    return var_f31;
}

s32 TLobby__sub_8001E8B8(void) {
    return 0x1A5E00;
}

s32 get_minutes__6TLobbyFv(void) {
    return (TLobby__sub_8001E8FC() / 2592) % 1000;
}

void TLobby__sub_8001ED70(void) {  }
void TLobby__sub_8001ED74(void) {
    lbl_805D4AC0 = TLobby__data_805D7EE0;
}

}
