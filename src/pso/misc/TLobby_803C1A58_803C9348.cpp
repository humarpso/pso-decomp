#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803C9350(u8 *arg0, s32 arg1);
void TLobby__sub_803C94B8(void);
void TLobby__sub_803C94D8(void);
void TLobby__sub_803C96A8(u8 *arg0, s32 arg1);
s16 TLobby__sub_803C96B0(u8 *arg0);
s32 TLobby__sub_803C9740(u8 *arg0);
s32 TLobby__sub_803C97B8(u8 *arg0);
void TLobby__sub_803CB4A4(u8 *arg0);
void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2);
void TLobby__sub_803CBA18(void);
void TLobby__sub_803CBA38(void);
s32 apply_if_v2__6TLobbyFPv(u8 *arg0);
void clear_record_data__6TLobbyFPv(s32 *arg0);
s32 get_client_count__6TLobbyFPv(u8 *arg0);
s16 get_field_60__6TLobbyFPv(u8 *arg0);
s32 get_size__6TLobbyFPv(u8 *arg0);
s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void reset_client_state__6TLobbyFPv(u8 *arg0);
void reset_field_0C__6TLobbyFPv(u8 *arg0);
void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1);
void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1);
void set_rate_mode__6TLobbyFi(s32 arg0);
s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void update_receive_check__6TLobbyFPv(u8 *arg0);
u32 PADReceiveCheckCallback(int, int, int, void *, int, int);
M2C_UNK TLobby__sub_803D3344();
M2C_UNK TLobby__sub_803D33F4();
u32 dispatch_receive_update__6TLobbyFv(int, int, int, void *, int, void *, int, int);
M2C_UNK memset(void *, int, int);
s32 notify_field_4__6TLobbyFPv(int);
s32 send_packet_by_id__6TLobbyFPv(int);
s32 send_with_offset4__6TLobbyFPv(int);
M2C_UNK set_params__6TLobbyFii();
M2C_UNK trigger_sub_task__6TLobbyFv(int);

void set_field98__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x98) = arg1;
}

void TLobby__sub_803C9350(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void TLobby__sub_803C94B8(void) {
    set_params__6TLobbyFii();
}

void TLobby__sub_803C94D8(void) {

}

s16 get_field_60__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x60);
}

void set_field_6d__6TLobbyFPvc(u8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x6D) = arg1;
}

void TLobby__sub_803C96A8(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
}

s16 TLobby__sub_803C96B0(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x40);
}

void set_field_40_and_notify__6TLobbyFPvs(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    trigger_sub_task__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0xC)));
}

s32 TLobby__sub_803C9740(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_with_offset4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 apply_if_v2__6TLobbyFPv(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return notify_field_4__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

s32 TLobby__sub_803C97B8(u8 *arg0) {
    if ((s8) M2C_FIELD(arg0, u8 *, 1) >= 2) {
        return send_packet_by_id__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 4)));
    }
    return 0;
}

extern s32 lbl_805D7560;
extern s32 lbl_805D7570;

void set_rate_mode__6TLobbyFi(s32 arg0) {
    if (arg0 == 1) {
        lbl_805D7570 = 0x176A;
    } else if (arg0 == 2) {
        lbl_805D7570 = 0x1388;
    }
    lbl_805D7560 = arg0;
}

extern s32 lbl_805D7588;

void update_receive_check__6TLobbyFPv(u8 *arg0) {
    u32 temp_r0;
    u32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 1) {
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            M2C_FIELD(arg0, u32 *, 0x10) = PADReceiveCheckCallback((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
        } else {
            M2C_FIELD(arg0, u32 *, 0x10) = dispatch_receive_update__6TLobbyFv((int) (M2C_FIELD(arg0, s32 *, 0x18)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x28), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x2C), (int) (M2C_FIELD(arg0, s16 *, 0x30)), (int) (M2C_FIELD(arg0, s16 *, 0x32)));
            temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
            temp_r3 = temp_r0 >> 0x1FU;
            if ((s32) (((temp_r0 & 1) ^ temp_r3) - temp_r3) == 1) {
                lbl_805D7588 = 1;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 3;
    }
}

s32 get_size__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

void reset_field_0C__6TLobbyFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 3) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
}

void reset_client_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    memset((void *) (arg0 + 0x28), (int) (0), (int) (8));
}

void TLobby__sub_803CB4A4(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
}

s32 post_request__6TLobbyFPviiii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 2;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = arg4;
        return 1;
    }
    return 0;
}

s32 try_post_command__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
        M2C_FIELD(arg0, s32 *, 0x20) = arg3;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        return 1;
    }
    return 0;
}

s32 get_client_count__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

void clear_record_data__6TLobbyFPv(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
        memset((void *) (arg0), 0, 0x34);
    }
}

void TLobby__sub_803CB570(u8 *arg0, u8 *arg1, s16 *arg2) {
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) *arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

void TLobby__sub_803CBA18(void) {
    TLobby__sub_803D33F4();
}

void TLobby__sub_803CBA38(void) {
    TLobby__sub_803D3344();
}

}
