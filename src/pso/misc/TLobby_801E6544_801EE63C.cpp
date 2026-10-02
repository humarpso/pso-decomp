#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801EEFB4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Item_801EE77C {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Player_801EE77C {
    u8 pad[0xD00];
    void *fD00;
};

struct Item_801EEE68 {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Item_801EE77C;

extern "C" {
M2C_UNK TWindowCtrl__sub_8024A4B0(int, void *);
void TLobby__sub_801EE674(s32 arg0);
M2C_UNK TQuestColCtrl__sub_80195DE0(int, void *);
void qst_op_del_obj_param(s32 arg0);
M2C_UNK TObjPlayer__sub_80011160(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 TLobby__data_80512220[];
void qst_op_pl_add_meseta(void);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801F3D3C(s16, s32, s32, s32);
void TLobby__sub_801EE728(u32 first);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init__9TItemDataFv(Item_801EE77C *);
void *set_mode_and_refresh_object__10TObjPlayerFPvi(void *, Item_801EE77C *);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EE77C(u8 arg0, u8 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init__9TItemDataFv(Item_801EE77C *);
s32 TLobby__sub_8011AF58(u16);
s32 TObjPlayer__sub_801B91F0(void *, Item_801EEE68 *);
void fn_801B849C(void *, Item_801EEE68 *);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void qst_op_item_create(u8 arg0, u8 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init__9TItemDataFv(Item_801EE77C *);
s32 TLobby__sub_8011AF58(u16);
s32 TObjPlayer__sub_801B91F0(void *, Item_801EEE68 *);
void fn_801B849C(void *, Item_801EEE68 *);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void qst_op_item_create2(u8 arg0, u8 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init__9TItemDataFv(Item_801EE77C *);
void *set_mode_and_refresh_object__10TObjPlayerFPvi(void *, Item_801EE77C *);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void qst_op_item_check(u32 first, u32 destination);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init__9TItemDataFv(Item_801EE77C *);
void *set_mode_and_refresh_object__10TObjPlayerFPvi(void *, Item_801EE77C *);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, Item_801EE77C *);
void get_item_record__23TShopJudgmentItemWindowFPv(void *, s32, s32);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void qst_op_item_delete2(u32 src, u32 dst);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void *start_inventory_update__10TObjPlayerFPvi(void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, Item_801EE77C *);
void get_item_record__23TShopJudgmentItemWindowFPv(void *, s32, s32);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void qst_op_item_delete(u32 src, u32 dst);
}

extern "C" {

int TLobby__sub_801EE6A0(void* p);
int create_alt_timer__6TLobbyFPv(void* p);
void notify_battle_ctrl_player__6TLobbyFv(void);
void open_door__6TLobbyFv(void);
void set_table_entry__6TLobbyFi(int a0);
void update_doors__6TLobbyFv(void);
int TLobby__sub_803DF1CC(void);
int TObjDoor__sub_801F3754(void);
int TObjDoor__sub_801F3760(void);
M2C_UNK TObjPlayer__sub_80011160(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
int TWindowCtrl__sub_8024A4EC(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
int reset_door_state__6TLobbyFv(void);
int reset_instance__8TObjDoorFv(void);

    extern int* TLobby__data_805D5E78;
void set_table_entry__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_803DF1CC(); }

void TLobby__sub_801EE674(s32 arg0) {
    TWindowCtrl__sub_8024A4B0((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
}

int TLobby__sub_801EE6A0(void* p) { return TWindowCtrl__sub_8024A4EC(p); }
int create_alt_timer__6TLobbyFPv(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }
void open_door__6TLobbyFv(void) { reset_door_state__6TLobbyFv(); reset_instance__8TObjDoorFv(); }
void update_doors__6TLobbyFv(void) { TObjDoor__sub_801F3760(); TObjDoor__sub_801F3754(); }

extern s32 TLobby__data_80512220[];
extern s32 lbl_805D53A0;

void TLobby__sub_801EE728(u32 first) {
    u32 i = first;
    s32 floor = (*(s32 * *)&TLobby__data_805D5E78)[(u8)i++];
    s16 mode = (*(s32 * *)&TLobby__data_805D5E78)[(u8)i++];
    s32 terrain = (*(s32 * *)&TLobby__data_805D5E78)[(u8)i++];
    s32 extra = (*(s32 * *)&TLobby__data_805D5E78)[(u8)i];
    TLobby__sub_801F3D3C(mode, floor, terrain, extra);
}

void TLobby__sub_801EE77C(u8 arg0, u8 arg1) {
    Item_801EE77C item;
    Player_801EE77C *player;
    void *obj;
    player = (Player_801EE77C *)TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != NULL) {
        init__9TItemDataFv(&item);
        item.data[0] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
        item.data[1] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
        item.data[2] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
        item.data[4] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0];
        obj = set_mode_and_refresh_object__10TObjPlayerFPvi(player->fD00, &item);
        if (obj != NULL) {
            obj = get_owner_if_alive__10TObjPlayerFPv(obj);
            if (obj != NULL) {
                (*(int * *)&TLobby__data_805D5E78)[arg1] = get_field_d8__10TObjPlayerFPv(obj);
            } else {
                (*(int * *)&TLobby__data_805D5E78)[arg1] = -1;
            }
        } else {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = -1;
        }
    } else {
        (*(int * *)&TLobby__data_805D5E78)[arg1] = -1;
    }
}

void qst_op_item_check(u32 first, u32 destination) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != 0) {
        init__9TItemDataFv(&item);
        item.data[0] = TLobby__data_805D5E78[(u8)first++];
        item.data[1] = TLobby__data_805D5E78[(u8)first++];
        item.data[2] = TLobby__data_805D5E78[(u8)first];
        slot = set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), &item);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                TLobby__data_805D5E78[(u8) destination] = get_field_d8__10TObjPlayerFPv(owner);
                return;
            }
            TLobby__data_805D5E78[(u8) destination] = -1;
            return;
        }
        TLobby__data_805D5E78[(u8) destination] = -1;
        return;
    }
    TLobby__data_805D5E78[(u8) destination] = -1;
}

void qst_op_item_delete2(u32 src, u32 dst) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    if ((u8)dst > 0xF4) {
        return;
    }
    player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != 0) {
        init__9TItemDataFv(&item);
        item.data[0] = TLobby__data_805D5E78[(u8)src++];
        item.data[1] = TLobby__data_805D5E78[(u8)src++];
        item.data[2] = TLobby__data_805D5E78[(u8)src];
        slot = set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), &item);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv(owner, &item);
                TLobby__data_805D5E78[(u8)dst++] = item.data[0];
                TLobby__data_805D5E78[(u8)dst++] = item.data[1];
                TLobby__data_805D5E78[(u8)dst++] = item.data[2];
                TLobby__data_805D5E78[(u8)dst++] = item.data[3];
                TLobby__data_805D5E78[(u8)dst++] = item.data[4];
                TLobby__data_805D5E78[(u8)dst++] = item.data[5];
                TLobby__data_805D5E78[(u8)dst++] = item.data[6];
                TLobby__data_805D5E78[(u8)dst++] = (s8)item.data[7];
                TLobby__data_805D5E78[(u8)dst++] = item.data[8];
                TLobby__data_805D5E78[(u8)dst++] = (s8)item.data[9];
                TLobby__data_805D5E78[(u8)dst++] = item.data[10];
                TLobby__data_805D5E78[(u8)dst] = (s8)item.data[11];
                get_item_record__23TShopJudgmentItemWindowFPv((void *)player, item.id, 1);
                return;
            }
            TLobby__data_805D5E78[(u8)dst] = -1;
            return;
        }
        TLobby__data_805D5E78[(u8)dst] = -1;
        return;
    }
    TLobby__data_805D5E78[(u8)dst] = -1;
}

void qst_op_item_delete(u32 src, u32 dst) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    if ((u8)dst > 0xF4) {
        return;
    }
    player = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != 0) {
        slot = start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), TLobby__data_805D5E78[(u8)src]);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv(owner, &item);
                TLobby__data_805D5E78[(u8)dst++] = item.data[0];
                TLobby__data_805D5E78[(u8)dst++] = item.data[1];
                TLobby__data_805D5E78[(u8)dst++] = item.data[2];
                TLobby__data_805D5E78[(u8)dst++] = item.data[3];
                TLobby__data_805D5E78[(u8)dst++] = item.data[4];
                TLobby__data_805D5E78[(u8)dst++] = item.data[5];
                TLobby__data_805D5E78[(u8)dst++] = item.data[6];
                TLobby__data_805D5E78[(u8)dst++] = (s8)item.data[7];
                TLobby__data_805D5E78[(u8)dst++] = item.data[8];
                TLobby__data_805D5E78[(u8)dst++] = (s8)item.data[9];
                TLobby__data_805D5E78[(u8)dst++] = item.data[10];
                TLobby__data_805D5E78[(u8)dst] = (s8)item.data[11];
                get_item_record__23TShopJudgmentItemWindowFPv((void *)player, TLobby__data_805D5E78[(u8)src], 1);
                return;
            }
            TLobby__data_805D5E78[(u8)dst] = -1;
            return;
        }
        TLobby__data_805D5E78[(u8)dst] = -1;
        return;
    }
    TLobby__data_805D5E78[(u8)dst] = -1;
}

void qst_op_item_create2(u8 arg0, u8 arg1) {
    Item_801EEE68 item;
    void *player;
    player = (void *)TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != NULL) {
        init__9TItemDataFv((Item_801EE77C *)(&item));
        item.data[0] = TLobby__data_805D5E78[arg0++];
        item.data[1] = TLobby__data_805D5E78[arg0++];
        item.data[2] = TLobby__data_805D5E78[arg0++];
        item.data[3] = TLobby__data_805D5E78[arg0++];
        item.data[4] = TLobby__data_805D5E78[arg0++];
        item.data[5] = TLobby__data_805D5E78[arg0++];
        item.id = TLobby__sub_8011AF58(lbl_805D53A0);
        item.data[6] = TLobby__data_805D5E78[arg0++];
        item.data[7] = TLobby__data_805D5E78[arg0++];
        item.data[8] = TLobby__data_805D5E78[arg0++];
        item.data[9] = TLobby__data_805D5E78[arg0++];
        item.data[10] = TLobby__data_805D5E78[arg0++];
        item.data[11] = TLobby__data_805D5E78[arg0];
        if (TObjPlayer__sub_801B91F0(player, &item) > 0) {
            fn_801B849C(player, &item);
            TLobby__data_805D5E78[arg1] = item.id;
        } else {
            TLobby__data_805D5E78[arg1] = -1;
        }
    } else {
        TLobby__data_805D5E78[arg1] = -1;
    }
}

void qst_op_item_create(u8 arg0, u8 arg1) {
    Item_801EEE68 item;
    void *player;
    player = (void *)TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (player != NULL) {
        init__9TItemDataFv((Item_801EE77C *)(&item));
        item.data[0] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
        item.data[1] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
        item.data[2] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0];
        item.id = TLobby__sub_8011AF58(lbl_805D53A0);
        if (TObjPlayer__sub_801B91F0(player, &item) > 0) {
            fn_801B849C(player, &item);
            (*(int * *)&TLobby__data_805D5E78)[arg1] = item.id;
        } else {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = -1;
        }
    } else {
        (*(int * *)&TLobby__data_805D5E78)[arg1] = -1;
    }
}

void qst_op_del_obj_param(s32 arg0) {
    TQuestColCtrl__sub_80195DE0((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
}

void notify_battle_ctrl_player__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = TLobby__data_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_80011160(ret, temp_r31);
    }
}
typedef char RecoveredGlobal_801EEFB4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EEFB4_TLobby__data_80512220) == 0x20 ? 1 : -1];
void qst_op_pl_add_meseta(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EEFB4_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4);
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_801EEFB4_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0))));
    if (temp_r3 != 0U) {
        TObjPlayer__sub_80011160((s32)((int) (temp_r3)), (s32)((int) (temp_r31)));
    }
}

}
