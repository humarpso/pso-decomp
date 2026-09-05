#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_8013FF64(u8 *arg0, s8 arg1);
u8 TLobby__sub_8013FF94(u8 *arg0);
u8 TLobby__sub_8013FF78(u8 *arg0);
}

extern "C" {

void update_floor__6TLobbyFv(void);
int TLobby__sub_8007BA20(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int TLobby__sub_8022743C(void);
int refresh_render_state__6TLobbyFv(void);

int TLobby__sub_8013FF20(void) { return 0; }

void TLobby__sub_8013FF64(u8 *arg0, s8 arg1) {
    s8 *temp_r5;
    temp_r5 = M2C_FIELD(arg0, s8 **, 0x7224);
    M2C_FIELD(arg0, s8 **, 0x7224) = (s8 *) (temp_r5 + 1);
    *temp_r5 = arg1;
}

u8 TLobby__sub_8013FF78(u8 *arg0) {
    return (u8) ((u32) M2C_FIELD(arg0, u32 *, 0x7220) > (u32) M2C_FIELD(arg0, u32 *, 0x7228));
}

u8 TLobby__sub_8013FF94(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x7220);
    M2C_FIELD(arg0, u8 **, 0x7220) = (u8 *) (temp_r4 + 1);
    return *temp_r4;
}

}
