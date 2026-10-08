#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8006F23C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct G_8006F2CC { u8 pad[0x28]; s32 x28; };

extern "C" {
s32 is_challenge_mode_active();
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 lbl_804DB1F0;
s32 get_challenge_mode_flag__6TLobbyFv(void);
extern RecoveredGlobal_8006F23C_lbl_8048C9D8 lbl_804DB1F0;
s32 is_challenge_mode_active();
void start_challenge_countdown__6TLobbyFv(void);
}

extern "C" {

s32 is_value_out_of_range__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80292F34(s32 arg0);
int TLobby__sub_80292F5C(void* p);
int get_instance__11TCameraCtrlFv(void*);
s32 get_clamped_time_limit__6TLobbyFv();

s32 is_value_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < get_clamped_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
s32 TLobby__sub_80292F34(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80292F5C(void* p) { return get_instance__11TCameraCtrlFv(p); }
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8006F23C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006F23C_lbl_8048C9D8) == 0x748 ? 1 : -1];
s32 get_challenge_mode_flag__6TLobbyFv(void) {
    if (is_challenge_mode_active() != 0) {
        return M2C_FIELD(&lbl_804DB1F0.value, s32 *, 0x34);
    }
    return 0;
}
#pragma pop

void start_challenge_countdown__6TLobbyFv(void) {
    if (is_challenge_mode_active() != 0) {
        switch ((*(G_8006F2CC *)&lbl_804DB1F0).x28) {
        case 0:
            (*(G_8006F2CC *)&lbl_804DB1F0).x28 = 1;
            break;
        }
    }
}

}
