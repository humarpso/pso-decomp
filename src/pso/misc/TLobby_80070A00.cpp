#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_dead_list_win__6TLobbyFv(void);
void draw_if_ready__6TLobbyFv(void);
s32 check_ready_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80070DA8();
s32 is_ready_to_draw__6TLobbyFv();
M2C_UNK fn_800733C4(void*);
M2C_UNK create__15TObjDeadListWinFPv(void*);

extern u32 lbl_805D4E28;

void update_dead_list_win__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        create__15TObjDeadListWinFPv((void*)lbl_805D4E28);
    }
}

extern u32 lbl_805D4E28;

void draw_if_ready__6TLobbyFv(void) {
    if ((is_flag_set__6TLobbyFv() != 0) && (is_ready_to_draw__6TLobbyFv() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

extern M2C_UNK lbl_8048C9D8[];

s32 check_ready_state__6TLobbyFv(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
