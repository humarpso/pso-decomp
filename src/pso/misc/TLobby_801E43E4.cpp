#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_switch_activate_token__6TLobbyFPv(void* p);
void dispatch_packet__6TLobbyFPv(void *arg0);
void send_command__6TLobbyFPvUi(void *arg0, u32 arg1);
void update_players__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60();
M2C_UNK TLobby__sub_801E3FA4(void *);
M2C_UNK TProtocol__sub_801DC084(u32, s32, void *, s32);
int bswap_16__FPUs(void*);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK fn_801A5544(void *, s32);
s32 get_main_phase();
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK send_pso_data_long2__9TProtocolFcR17long_game_commandUl(void*, u32, void *, s32);

extern u32 lbl_805D53A0;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 4);
    bswap_32__FPUl(&sp8);
    if ((u32) lbl_805D53A0 == arg1) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4((void *)(arg0));
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        send_pso_data_long2__9TProtocolFcR17long_game_commandUl((void*)TLobby__data_805D5580, arg1, arg0, sp8);
    }
}

extern s32 TLobby__data_805D53AC;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void dispatch_packet__6TLobbyFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1) * 4;
    if (get_main_phase() == 0xE) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4((void *)(arg0));
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        TProtocol__sub_801DC084(TLobby__data_805D5580, TLobby__data_805D53AC, arg0, temp_r31);
    }
}

extern s32 TLobby__data_805D5598;
extern void *lbl_805D5E48;
extern s32 lbl_805D5E50;

void update_players__6TLobbyFi(s32 arg0) {
    void *var_r31;

    if ((s32) TLobby__data_805D5598 == 1) {
        TLobby__send_and_handle_60();
        return;
    }
    if ((void *) lbl_805D5E48 != NULL) {
        var_r31 = M2C_FIELD(lbl_805D5E48, void **, 0x14);
        while (var_r31 != NULL) {
            fn_801A5544(var_r31, arg0);
            var_r31 = M2C_FIELD(var_r31, void **, 0xC);
        }
    }
    lbl_805D5E50 = 1;
    TLobby__sub_801E3FA4((void *)(arg0));
    lbl_805D5E50 = 0;
}

void bswap_switch_activate_token__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

}
