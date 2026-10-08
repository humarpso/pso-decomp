#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80272034 { u16 a; u16 b; u8 rest[0x1c]; };

struct Tbl_80272034 { u8 pad0; u8 count; u8 pad2[2]; Ent_80272034 e[1]; };

struct Win_80272034 { u8 pad[0x58]; Tbl_80272034 *tbl; };

struct Key_80272034 { u32 a; u32 b; };

struct Ent_80271F04 {
    u32 id;
    u32 value;
};

extern "C" {
u8 *get_shared_text_buffer(void);
s32 realloc_buffer__17TWindowSubComCardFPv(void *);
void free__11TOBoss4RockFUi(u32);
void send_simple_mail__6TLobbyFiPv(s32, s32);
void TWindowSubComCard__sub_80225E80(void *, void *);
s32 get_id__6TLobbyFPv(void *);
u8 *TWindowSubComCard__sub_80275228(void);
void TWindowSubComCard__sub_802721D8(u8 *arg0);
u8 *TWindowSubComCard__sub_80272034(Win_80272034 *arg0, Key_80272034 *arg1, s32 arg2);
void fn_80077814(void *, u16, s32);
s32 TWindowSubComCard__sub_80077840(void *, u16);
s32 open_hard_keyboard__6TLobbyFPv(void *);
void *get_field_20__17TWindowSubComCardFPv(void *);
void *get_selected_entry__17TWindowSubComCardFPv(void *);
void mark_entry_by_id__17TWindowSubComCardFPvi(void *, u32);
void disable_entry_by_id__17TWindowSubComCardFPvi(void *, u32);
void set_entry_string_by_id__15TWindowMakeTeamFPvPvi(void *, void *, s32);
void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1);
void set_com_param__17TWindowSubComCardFii(void *, s32);
void TWindowSubComCard__sub_80271F04(u8 *arg0, Ent_80271F04 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void apply_selection__17TWindowSubComCardFi(s32 arg0);
void cleanup__17TWindowSubComCardFPv(void* p);
void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1);
void handle_close_flag__17TWindowSubComCardFPv(void *arg0);
void init_layout__17TWindowSubComCardFv(void);
void send_cmd_133__17TWindowSubComCardFv(void);
void send_command__17TWindowSubComCardFi(s32 arg0);
void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0);
int TLobby__sub_802421C4(void);
s32 create_for_card__14TWindowComCardFiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TWindowSubComCard__sub_8007A860(s32);
int get_card_entry__17TWindowSubComCardFi(void);
s32 get_card_slot__17TWindowSubComCardFi(s32 a0 = 0);
int get_selected_menu_value(void*);
s32 get_window_layout_position(s32 a0 = 0);
s32 create__14TWindowComCardFPvPv(s32 a0 = 0, s32 a1 = 0);
s32 create_card_list__17TWindowSubComCardFiiii(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
int fn_802754EC(void);
int get_card_id__17TWindowSubComCardFPv(void);
int get_message_10__20TWindowSubStatusDispFPv(void*);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
M2C_UNK send_card_window_state__6TLobbyFv();
M2C_UNK send_status_packet__6TLobbyFv();

void handle_close_flag__17TWindowSubComCardFPv(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 2) {
        send_status_packet__6TLobbyFv();
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) & 0xFFFFFFFD);
    }
}

void send_state_if_dirty__17TWindowSubComCardFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1D) & 1) {
        send_card_window_state__6TLobbyFv();
        M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (M2C_FIELD(arg0, s8 *, 0x1D) & ~1);
    }
}

typedef void *(*GetMsg_80271F04)(void *, void *);
void TWindowSubComCard__sub_80271F04(u8 *arg0, Ent_80271F04 *arg1, s32 arg2, s32 arg3) {
    s32 i;
    if (arg2 == 0) {
        if (arg3 != open_hard_keyboard__6TLobbyFPv(*(void **)(arg0 + 0x20))) {
            arg0[0x1D] |= 1;
            set_com_param__17TWindowSubComCardFii(*(void **)(arg0 + 0x20), arg3);
            set_entry_string_by_id__15TWindowMakeTeamFPvPvi(*(void **)(arg0 + 0x7C), ((GetMsg_80271F04)get_message_10__17TWindowSubComCardFPvPv)(arg0, (void *)arg3), 0);
            if (arg3 != 0) {
                for (i = 0; i < 5; i++) {
                    if (arg1[i].id != 0) {
                        disable_entry_by_id__17TWindowSubComCardFPvi(*(void **)(arg0 + 0x7C), arg1[i].id);
                    }
                }
            } else {
                for (i = 0; i < 5; i++) {
                    if (arg1[i].id != 0) {
                        mark_entry_by_id__17TWindowSubComCardFPvi(*(void **)(arg0 + 0x7C), arg1[i].id);
                    }
                }
            }
        }
    } else if (arg3 != TWindowSubComCard__sub_80077840(arg1, arg2)) {
        arg0[0x1D] |= 1;
        fn_80077814(arg1, arg2, arg3);
        set_entry_string_by_id__15TWindowMakeTeamFPvPvi(*(void **)(arg0 + 0x7C), get_field_20__17TWindowSubComCardFPv(get_selected_entry__17TWindowSubComCardFPv(*(void **)(arg0 + 0x64))), arg2);
    }
}

u8 *TWindowSubComCard__sub_80272034(Win_80272034 *arg0, Key_80272034 *arg1, s32 arg2) {
    Tbl_80272034 *t = arg0->tbl;
    Ent_80272034 *e;
    Key_80272034 *k;
    s32 i;
    k = arg1 + arg2;
    e = t->e;
    for (i = 0; i < t->count; i++, e++) {
        if (e->a == k->a && e->b == k->b) return e->rest;
    }
    return 0;
}

void get_message_10__17TWindowSubComCardFPvPv(void* p, void* a1) { get_message_10__20TWindowSubStatusDispFPv((char*)a1 + 0xa6); }
void apply_selection__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = get_card_slot__17TWindowSubComCardFi(0);
    create_for_card__14TWindowComCardFiii(get_window_layout_position(0x92), arg0, temp_r31);
}
void send_command__17TWindowSubComCardFi(s32 arg0) {
    create__14TWindowComCardFPvPv(get_window_layout_position(0x86), arg0);
}
void init_layout__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = get_card_slot__17TWindowSubComCardFi(0);
    create_card_list__17TWindowSubComCardFiiii(get_window_layout_position(0x91), temp_r31, 0x1C, 1);
}
void send_cmd_133__17TWindowSubComCardFv(void) { get_window_layout_position(133); fn_802754EC(); }
void cleanup__17TWindowSubComCardFPv(void* p) { get_selected_menu_value(*(void**)((char*)p + 0x84)); get_card_entry__17TWindowSubComCardFi(); get_card_id__17TWindowSubComCardFPv(); TLobby__sub_802421C4(); }
#pragma scheduling off
void TWindowSubComCard__sub_802721D8(u8 *arg0) {
  u8 *new_var;
  s32 temp_r30;
  u8 *temp_r29;
  u8 *temp_r31;
  temp_r30 = realloc_buffer__17TWindowSubComCardFPv(*((u8 **) (((s8 *) arg0) + 0x80)));
  temp_r29 = (u8 *) TWindowSubComCard__sub_80275228();
  TWindowSubComCard__sub_80225E80((void *) temp_r30, get_shared_text_buffer());
  new_var = get_shared_text_buffer();
  temp_r31 = (u8 *) new_var;
  send_simple_mail__6TLobbyFiPv(get_id__6TLobbyFPv(temp_r29), (s32) temp_r31);
  free__11TOBoss4RockFUi((u32) temp_r30);
}

}
