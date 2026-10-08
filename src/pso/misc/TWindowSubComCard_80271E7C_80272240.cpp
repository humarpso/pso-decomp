#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8034CC68_lbl_80478C3C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Rec_80272290 { s32 f0; u8 f4[0xD0]; };

extern "C" {
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int get_message_10__20TWindowSubStatusDispFPv(void*);
extern const RecoveredGlobal_8034CC68_lbl_80478C3C lbl_8044F6D4;
void set_help_message__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
s32 get_shared_text_buffer();
Rec_80272290 *get_com_count__17TWindowSubComCardFv();
void text_builder_append(void *);
void text_builder_reset();
void TLobby__sub_8024220C(int, int);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
s32 TWindowSubComCard__sub_80275228();
void *get_card_data_ptr__17TWindowSubComCardFPv(int);
void *TWindowSubComCard__sub_8027523C(int);
void *get_name__17TWindowSubComCardFPv(int);
extern u8 lbl_805DD4F8;
void set_selected_card__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 create_for_card__14TWindowComCardFiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 get_card_slot__17TWindowSubComCardFi(s32 a0 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
int get_message_10__20TWindowSubStatusDispFPv(void*);
int get_card_entry__17TWindowSubComCardFi(void);
int get_card_id__17TWindowSubComCardFPv(void);
int TLobby__sub_802421C4(void);
int get_selected_menu_value(void*);
void send_cmd_133__17TWindowSubComCardFv(void);
s32 get_window_layout_position(s32 a0 = 0);
int fn_802754EC(void);

void set_card_index__17TWindowSubComCardFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x6C), TWindowSubComCard__sub_8007A860(arg1), 0x82);
    }
}
typedef char RecoveredGlobal_8034CC68_lbl_80478C3C_size[sizeof(RecoveredGlobal_8034CC68_lbl_80478C3C) == 0xC ? 1 : -1];

void set_selected_card__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    s32 temp_r30;
    Rec_80272290 *cnt;
    if (*(s32 *)(arg0 + 0x28) != arg1) {
        *(s32 *)(arg0 + 0x28) = arg1;
        cnt = get_com_count__17TWindowSubComCardFv();
        temp_r31 = cnt[arg1].f4;
        TLobby__sub_8024220C((int)temp_r31, arg1 * 0xD4);
        temp_r30 = TWindowSubComCard__sub_80275228();
        text_builder_reset();
        text_builder_append((void *)(temp_r31 + 0x14));
        text_builder_append(get_name__17TWindowSubComCardFPv(temp_r30));
        text_builder_append(&lbl_805DD4F8);
        text_builder_append(TWindowSubComCard__sub_8027523C(temp_r30));
        text_builder_append(&lbl_805DD4F8);
        text_builder_append(get_card_data_ptr__17TWindowSubComCardFPv(temp_r30));
        send_and_handle__6TLobbyFPvii(*(s32 *)(arg0 + 0x6C), get_shared_text_buffer(), 0x82);
    }
}

void set_help_message__17TWindowSubComCardFPvi(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        send_and_handle__6TLobbyFPvii((s32)((s32)(M2C_FIELD(arg0, u8 **, 0x6c))), (s32)((s32)(((s32)get_message_10__20TWindowSubStatusDispFPv((void*)((int) (M2C_FIELD(&lbl_8044F6D4.value, M2C_UNK *, (arg1 * 4)))))))), (s32)((M2C_UNK)(0x80)));
    }
}

}
