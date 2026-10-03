#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E7CCC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

struct RecoveredGlobal_801E7CFC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E7C5C_TLobby__data_80512220
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

struct RecoveredGlobal_801E7934_TLobby__data_80512220
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

struct Glob_801E78D4 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Win_801E78D4 { u8 pad[0x2314]; s32 t[16]; };

struct Card_801E7D7C {
    u8 pad[0x24C];
    s32 v;
};

struct ItemData_801E7810 {
    u8 data1[12];
    u32 id;
    u8 data2[4];
};

extern "C" {
M2C_UNK TLobby__sub_801F34E8(int, int);
extern struct Glob_80512220 TLobby__data_80512220;
void TLobby__sub_801E7CCC(void);
u8 *get_player_by_client_id(s32);
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7CFC(void);
volatile unsigned long get_actor_section_id(int);
u8 *get_player_by_client_id(s32);
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7C5C(void);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7934(void);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern struct Glob_80512220 TLobby__data_80512220;
void TLobby__sub_801E78D4(void);
s32 obj_getPtr2B0_20();
u8 *get_player_by_client_id(s32);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7D7C(u8 i);
void init__9TItemDataFv(ItemData_801E7810 *);
s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32, ItemData_801E7810 *);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7810(u8 i, u8 out);
s16 obj_getS16_32E(u8 *);
s16 obj_getS16_2BA(u8 *);
s16 obj_getS16_32C(u8 *);
s16 get_field_2b8__14TItemProShieldFPv(u8 *);
u8 *get_player_by_client_id(s32);
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7B64(void);
u8 *get_player_by_client_id(s32);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E77A0(u8 out);
s32 get_field_3e4__10TObjPlayerFPv(u8 *);
s16 get_stat_by_key_state__10TObjPlayerFPv(u8 *);
u8 *get_player_by_client_id(s32);
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E7AC8(void);
}

extern "C" {

void create_help_window__6TLobbyFv(void);
void send_data__6TLobbyFv(void);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 create_equip_kind_window(s32, M2C_UNK *, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_quest_vm_flag__6TLobbyFv();
M2C_UNK free_luker_object__6TLobbyFv(void);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK save_and_close__20TShopArmorListWindowFPv();
M2C_UNK send_data__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8032CD7C(s32, s32);

extern M2C_UNK lbl_80449B2C[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5EBC;
extern s32 TLobby__data_805D5EC0;

void create_help_window__6TLobbyFv(void) {
    s32 var_r31;

    TLobby__data_805D5EBC = create_equip_kind_window(get_window_layout_position(3), lbl_80449B2C, lbl_805D53A0);
    save_and_close__20TShopArmorListWindowFPv();
    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, get_window_layout_position(2), lbl_805D53A0);
    }
    TLobby__data_805D5EC0 = var_r31;
}

struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 TLobby__data_80512220;
extern s32 TLobby__data_805D6CC0;
extern s32 TLobby__data_805D6CC8;

void send_data__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220.field0;
    free_luker_object__6TLobbyFv();
    send_data__6TLobbyFi(temp_r31);
    TLobby__sub_8032CD7C(TLobby__data_805D6CC0, TLobby__data_805D6CC8);
    clear_quest_vm_flag__6TLobbyFv();
}
typedef char RecoveredGlobal_801E7CCC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7CCC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef struct RecoveredGlobal_801E7C5C_TLobby__data_80512220 RecoveredGlobal_801E7C5C_TLobby__data_80512220;
typedef char RecoveredGlobal_801E7C5C_TLobby__data_80512220_size[((sizeof(RecoveredGlobal_801E7C5C_TLobby__data_80512220)) == 0x20) ? (1) : (-1)];

typedef struct RecoveredGlobal_801E7934_TLobby__data_80512220 RecoveredGlobal_801E7934_TLobby__data_80512220;
typedef char RecoveredGlobal_801E7934_TLobby__data_80512220_size[((sizeof(RecoveredGlobal_801E7934_TLobby__data_80512220)) == 0x20) ? (1) : (-1)];

void TLobby__sub_801E77A0(u8 out) {
    s32 p;
    for (p = 0; p < 4; p++, out++) {
        if (get_player_by_client_id(p) != NULL) {
            ((s32 *)TLobby__data_805D5E78)[out] = 1;
        } else {
            ((s32 *)TLobby__data_805D5E78)[out] = 0;
        }
    }
}

void TLobby__sub_801E7810(u8 i, u8 out) {
    ItemData_801E7810 item;
    s32 card;
    ((s32 *)TLobby__data_805D5E78)[out] = -1;
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    if (card != 0) {
        init__9TItemDataFv(&item);
        item.data1[0] = ((s32 *)TLobby__data_805D5E78)[i++];
        item.data1[1] = ((s32 *)TLobby__data_805D5E78)[i++];
        item.data1[2] = ((s32 *)TLobby__data_805D5E78)[i++];
        item.data1[4] = ((s32 *)TLobby__data_805D5E78)[i];
        if (find_entry__23TAdSinglePlyChrSelectGCFii(card, &item) != 0) {
            ((s32 *)TLobby__data_805D5E78)[out] = 1;
        } else {
            ((s32 *)TLobby__data_805D5E78)[out] = 0;
        }
    }
}

void TLobby__sub_801E78D4(void) {
    s32 idx = (*(Glob_801E78D4 *)&TLobby__data_80512220).f0;
    s32 val = (*(Glob_801E78D4 *)&TLobby__data_80512220).f4;
    Win_801E78D4 *w = ((Win_801E78D4 *)get_card_window__17TWindowSubComCardFUi(0xFFFFU));
    if (w != NULL && idx >= 0 && idx < 0x10) {
        w->t[idx] = val;
    }
}

void TLobby__sub_801E7934(void) {
  long long new_var;
  s32 temp_r31;
  u32 temp_r3;
  u8 temp_r30;
  temp_r31 = *((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7934_TLobby__data_80512220 *)&TLobby__data_80512220).value)) + 0));
  temp_r30 = (u8) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7934_TLobby__data_80512220 *)&TLobby__data_80512220).value)) + 4)));
  temp_r3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
  if (temp_r3 != 0U)
  {
    if ((temp_r31 >= 0) && (temp_r31 < 0x10))
    {
      new_var = temp_r3 + (temp_r31 * 4);
      *((s32 *) (((s8 *) (TLobby__data_805D5E78 + ((temp_r30 * 4) & 0x3FC))) + 0)) = *((s32 *) (((s8 *) new_var) + 0x2314));
    }
  }
  else
  {
    *((s32 *) (((s8 *) (TLobby__data_805D5E78 + ((temp_r30 * 4) & 0x3FC))) + 0)) = -1;
  }
}

void TLobby__sub_801E7AC8(void) {
    u8 *player = get_player_by_client_id(TLobby__data_80512220.field0);
    u8 i = *(s32 *)&TLobby__data_80512220.pad[0];
    if (player != NULL) {
        ((s32 *)TLobby__data_805D5E78)[i++] = get_field_3e4__10TObjPlayerFPv(player);
        ((s32 *)TLobby__data_805D5E78)[i] = get_stat_by_key_state__10TObjPlayerFPv(player);
    } else {
        ((s32 *)TLobby__data_805D5E78)[i++] = -1;
        ((s32 *)TLobby__data_805D5E78)[i] = -1;
    }
}

void TLobby__sub_801E7B64(void) {
    u8 *player = get_player_by_client_id(TLobby__data_80512220.field0);
    u8 i = *(s32 *)&TLobby__data_80512220.pad[0];
    if (player != NULL) {
        ((s32 *)TLobby__data_805D5E78)[i++] = get_field_2b8__14TItemProShieldFPv(player);
        ((s32 *)TLobby__data_805D5E78)[i++] = obj_getS16_32C(player);
        ((s32 *)TLobby__data_805D5E78)[i++] = obj_getS16_2BA(player);
        ((s32 *)TLobby__data_805D5E78)[i] = obj_getS16_32E(player);
    } else {
        ((s32 *)TLobby__data_805D5E78)[i++] = -1;
        ((s32 *)TLobby__data_805D5E78)[i++] = -1;
        ((s32 *)TLobby__data_805D5E78)[i++] = -1;
        ((s32 *)TLobby__data_805D5E78)[i] = -1;
    }
}

void TLobby__sub_801E7C5C(void) {
  u32 temp_r3;
  u8 temp_r31;
  temp_r3 = ((u32)get_player_by_client_id((s32)((int) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7C5C_TLobby__data_80512220 *)&TLobby__data_80512220).value)) + 0))))));
  temp_r31 = (u8) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7C5C_TLobby__data_80512220 *)&TLobby__data_80512220).value)) + 4)));
  if (temp_r3 != 0U)
  {
    *((s32 *) (((s8 *) (TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC))) + 0)) = get_actor_section_id((int) temp_r3);
    return;
  }
  *((s32 *) (((s8 *) (TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC))) + 0)) = -1;
}

void TLobby__sub_801E7CCC(void) {
    TLobby__sub_801F34E8((int) (M2C_FIELD(&(*(RecoveredGlobal_801E7CCC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801E7CCC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4)));
}
typedef char RecoveredGlobal_801E7CFC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7CFC_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E7CFC(void) {
    u8 temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id(M2C_FIELD(&(*(RecoveredGlobal_801E7CFC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)));
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E7CFC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
    if (temp_r3 != NULL) {
        M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = ((VObj_18_eecf68 *)(temp_r3))->m14() + 1;
        return;
    }
    M2C_FIELD((TLobby__data_805D5E78 + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}
void TLobby__sub_801E7D7C(u8 i) {
    Card_801E7D7C *w;
    if (((u32)get_player_by_client_id((s32)((*(void * *)&lbl_805D53A0)))) != 0) {
        (*(s32 * *)&TLobby__data_805D5E78)[i] = obj_getPtr2B0_20();
    } else {
        (*(s32 * *)&TLobby__data_805D5E78)[i] = -1;
    }
    w = ((Card_801E7D7C *)get_card_window__17TWindowSubComCardFUi(0xFFFF));
    if (w != 0) {
        (&(*(s32 * *)&TLobby__data_805D5E78)[i])[1] = w->v;
    } else {
        (&(*(s32 * *)&TLobby__data_805D5E78)[i])[1] = -1;
    }
}

}
