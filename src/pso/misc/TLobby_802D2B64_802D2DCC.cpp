#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_802D2E28_0x30_802D2B64 {
    char pad[0x18];
    virtual void vm0();
    virtual void vm1();
    virtual void vm2();
    virtual void vm3();
    virtual void vm4();
    virtual void vm5();
    virtual void vm6();
    virtual void vm7();
    virtual void vm8();
    virtual void vm9();
    virtual void vma();
};

extern "C" {

void reset__6TLobbyFv(void);
s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
void update_sub_status_disp__6TLobbyFi(s32 arg0);
s32 get_shared_text_buffer();
void *find_item_by_id(s32);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
M2C_UNK fn_80330A40(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 is_trade_active();
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK reset__15TLobby_802D2F7CFPv(s32);
M2C_UNK reset_impl__15TLobby_802D2F7CFPv(s32);

extern s32 lbl_805D53A0;

void update_sub_status_disp__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D53A0 == arg0) {
        get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xF0));
        return;
    }
    text_builder_reset();
    refresh_player_status__6TLobbyFv(arg0);
    get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xEF));
    text_builder_append();
    get_shared_text_buffer();
}

extern s32 lbl_805D53A0;

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    switch (arg1) {
    case 0:
        return 0;
    case 1:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xF4));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xEA));
        text_builder_append();
        return get_shared_text_buffer();
    case 2:
        temp_r3 = find_item_by_id(arg2);
        if (temp_r3 == NULL) {
            return 0;
        }
        text_builder_reset();
        if (arg0 == (s32) lbl_805D53A0) {
            get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xF3));
            text_builder_append();
        } else {
            refresh_player_status__6TLobbyFv(arg0);
            get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xE8));
            text_builder_append();
        }
        ((VObj_802D2E28_0x30_802D2B64 *)temp_r3)->vma();
        text_builder_append();
        get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xE9));
        text_builder_append();
        return get_shared_text_buffer();
    case 3:
        if (arg0 == (s32) lbl_805D53A0) {
            return get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xF2));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xE7));
        text_builder_append();
        return get_shared_text_buffer();
    case 4:
        return get_message_10__20TWindowSubStatusDispFPv((M2C_UNK)(0xEE));
    default:
        return 0;
    }
}

extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern const u32 TLobby__data_805D6894;
extern const u32 TLobby__data_805D6898;
extern const u32 TLobby__data_805D689C;

void reset__6TLobbyFv(void) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688A = 4;
        TLobby__data_805D688B = 0;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        if ((u32) TLobby__data_805D689C != 0U) {
            reset_impl__15TLobby_802D2F7CFPv(TLobby__data_805D689C);
        }
        if ((u32) TLobby__data_805D6898 != 0U) {
            fn_80330A40(TLobby__data_805D6898);
        }
        if ((u32) TLobby__data_805D6894 != 0U) {
            reset__15TLobby_802D2F7CFPv(TLobby__data_805D6894);
        }
    }
}

}
