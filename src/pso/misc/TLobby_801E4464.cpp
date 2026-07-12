#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_packet__6TLobbyFPv(void *arg0);
M2C_UNK TProtocol__sub_801DC084(u32, s32, void *, s32);
M2C_UNK TLobby__sub_801E3FA4(void *);

s32 get_main_phase();
extern s32 TLobby__data_805D53AC;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void dispatch_packet__6TLobbyFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1) * 4;
    if (get_main_phase() == 0xE) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4(arg0);
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        TProtocol__sub_801DC084(TLobby__data_805D5580, TLobby__data_805D53AC, arg0, temp_r31);
    }
}

}
