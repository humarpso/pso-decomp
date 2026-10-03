#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E7EB0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E8288_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E82C0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F027C_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F18C8_TLobby__data_80512220 { s32 value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F1654_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F053C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B48_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0ADC_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B74_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F00E4_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D80_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D54_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0BE0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F196C_lbl_804499A8 {
    M2C_UNK value;
    u8 remaining[0x70];
};

struct RecoveredGlobal_801F196C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct ItemData_801E8000 {
    u8 b0, b1, b2, b3, b4, b5, b6;
    s8 b7;
    u8 b8;
    s8 b9;
    u8 b10;
    s8 b11;
    u32 id;
    u32 extra;
};

extern "C" {
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801E7E50(s32 arg0);
extern s32 TLobby__data_80512220[];
extern s32 lbl_805D5544;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801E7EB0(void);
M2C_UNK TObjPlayer__sub_801AEFAC();
u32 get_player_by_client_id(s32);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801E8288(void);
M2C_UNK stop_force_if_alive__10TObjPlayerFPv();
u32 get_player_by_client_id(s32);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801E82C0(void);
extern s32 TLobby__data_80512220[];
s32 TObjPlayer__sub_80354CCC(int);
void TLobby__sub_801E8390(void);
extern s32 TLobby__data_80512220[];
s32 TObjPlayer__sub_80354DAC(int);
void TLobby__sub_801E83BC(void);
extern s32 TLobby__data_80512220[];
s32 TObjPlayer__sub_80354D14(int);
void TLobby__sub_801E83E8(void);
extern s32 TLobby__data_80512220[];
s32 TObjPlayer__sub_80354DF4(int);
void TLobby__sub_801E8414(void);
void *find_item_by_id(s32);
void copy_to_item_data__5TItemFPvPv(void *, ItemData_801E8000 *);
extern s32 TLobby__data_80512220[];
extern int* TLobby__data_805D5E78;
void TLobby__sub_801E8000(void);
}

extern "C" {

int destroy__6TLobbyFPv(void* p);
int get_selected_slot__6TLobbyFPv(void* p);
int init_graph__6TLobbyFPv(void* p);
void notify_player_battle__6TLobbyFv(void);
void set_handler_entry__6TLobbyFi(int a0);
M2C_UNK send_6x29_delete_item__10TObjPlayerFPvii(u32, s32, s32);
u32 get_player_by_client_id(s32);
int TWindowSubComCard__sub_8007AFB8(void);
int destroy_singleton__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);

    extern int* TLobby__data_805D5E78;
void set_handler_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TWindowSubComCard__sub_8007AFB8(); }

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void TLobby__sub_801E7E50(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_card_window__17TWindowSubComCardFUi(0xFFFFU));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, s32 *, 0xC);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = -1;
}

typedef char RecoveredGlobal_801E7EB0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7EB0_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E7EB0(void) {
    M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + ((*(RecoveredGlobal_801E7EB0_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0) = lbl_805D5544;
}

void TLobby__sub_801E8000(void) {
    s32 r;
    void *item;
    ItemData_801E8000 d;
    r = TLobby__data_80512220[1];
    item = find_item_by_id(TLobby__data_80512220[0]);
    if (item != NULL) {
        copy_to_item_data__5TItemFPvPv(item, &d);
        TLobby__data_805D5E78[r++] = d.b0;
        TLobby__data_805D5E78[r++] = d.b1;
        TLobby__data_805D5E78[r++] = d.b2;
        TLobby__data_805D5E78[r++] = d.b3;
        TLobby__data_805D5E78[r++] = d.b4;
        TLobby__data_805D5E78[r++] = d.b5;
        TLobby__data_805D5E78[r++] = d.b6;
        TLobby__data_805D5E78[r++] = d.b7;
        TLobby__data_805D5E78[r++] = d.b8;
        TLobby__data_805D5E78[r++] = d.b9;
        TLobby__data_805D5E78[r++] = d.b10;
        TLobby__data_805D5E78[r++] = d.b11;
    } else {
        TLobby__data_805D5E78[r] = -1;
    }
}

void notify_player_battle__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = get_player_by_client_id(lbl_805D53A0);
    if (ret != 0U) {
        send_6x29_delete_item__10TObjPlayerFPvii(ret, temp_r31, 1);
    }
}

int get_selected_slot__6TLobbyFPv(void* p) { return get_selected_slot__6TLobbyFv(p); }
int destroy__6TLobbyFPv(void* p) { return destroy_singleton__6TLobbyFv(p); }
int init_graph__6TLobbyFPv(void* p) { return init_graph__6TLobbyFv(p); }
typedef char RecoveredGlobal_801E8288_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E8288_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E8288(void) {
    if (get_player_by_client_id((s32)((int) ((u16) (*(RecoveredGlobal_801E8288_TLobby__data_80512220 *)&TLobby__data_80512220).value))) != 0U) {
        TObjPlayer__sub_801AEFAC();
    }
}
typedef char RecoveredGlobal_801E82C0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E82C0_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E82C0(void) {
    if (get_player_by_client_id((s32)((int) ((u16) (*(RecoveredGlobal_801E82C0_TLobby__data_80512220 *)&TLobby__data_80512220).value))) != 0U) {
        stop_force_if_alive__10TObjPlayerFPv();
    }
}
typedef char RecoveredGlobal_801F027C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F027C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F18C8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F18C8_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F1654_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F1654_TLobby__data_80512220) == 0x20 ? 1 : -1];
#pragma push
#pragma fp_contract on
#pragma pop
typedef char RecoveredGlobal_801F00E4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F00E4_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E8390(void) {
    TObjPlayer__sub_80354CCC((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
#pragma push
#pragma fp_contract on
#pragma pop
void TLobby__sub_801E83BC(void) {
    TObjPlayer__sub_80354DAC((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
#pragma push
#pragma fp_contract on
#pragma pop
void TLobby__sub_801E83E8(void) {
    TObjPlayer__sub_80354D14((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
#pragma push
#pragma fp_contract on
#pragma pop
void TLobby__sub_801E8414(void) {
    TObjPlayer__sub_80354DF4((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__data_80512220).value));
}
#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801F053C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F053C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0ADC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0ADC_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0B48_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B48_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0B74_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B74_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0BE0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0BE0_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0D80_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D80_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F0D54_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D54_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801F196C_lbl_804499A8_size[sizeof(RecoveredGlobal_801F196C_lbl_804499A8) == 0x74 ? 1 : -1];
typedef char RecoveredGlobal_801F196C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F196C_TLobby__data_80512220) == 0x20 ? 1 : -1];
#pragma push
#pragma fp_contract on
#pragma pop
#pragma push
#pragma scheduling off
#pragma pop

}
