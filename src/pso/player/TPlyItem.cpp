#include "pso/TPlyItem.h"

#include "types.h"
typedef s32 M2C_UNK;
struct VBase_801D5004 { char pad[0x18]; };

struct VObj_801D5004 : VBase_801D5004 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual s32 v34();
};

struct Item_801D5004 {
    u8 pad0[0xC];
    Item_801D5004 *next;
    u8 pad10[0x4];
    Item_801D5004 *child;
};

struct VBase_801D50E0 { char pad[0x18]; };

struct VObj_801D50E0 : VBase_801D50E0 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual s32 v34();
};

struct Item_801D50E0 {
    u8 pad0[0xC];
    Item_801D50E0 *next;
    u8 pad10[0x4];
    Item_801D50E0 *child;
};

struct Item_801D51A0 {
    u8 pad0[0xC];
    Item_801D51A0 *next;
    u8 pad10[0x4];
    Item_801D51A0 *child;
};

extern "C" {
u8 get_field_ed__10TObjPlayerFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
M2C_UNK reduce_item_amount__6TLobbyFPviii(s32, void *, void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 is_item_valid__9TItemListFi(void *);
extern u8 *item_reduce_target_player;
extern u8 item_reduce_owner_match_field_ec;
extern u8 reduce_owner_match_id;
void reduce_owner_matched_items__6TLobbyFPv(void *arg0);
u8 get_field_ec__12TOSwitchItemFPv(void *);
M2C_UNK reduce_item_amount__6TLobbyFPviii(s32, void *, void *, s32);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 is_item_valid__9TItemListFi(void *);
extern u8 *item_reduce_target_player;
extern u8 item_reduce_owner_match_field_ec;
void reduce_child_item_amounts__6TLobbyFPv(void *arg0);
s32 get_field_d8__10TObjPlayerFPv(void *);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 is_item_valid__9TItemListFi(void *);
extern s32 *TObjPlayer__owner_field_write_cursor;
extern s32 inventory_walk_visit_count;
void collect_owner_fields_recursive__10TObjPlayerFPv(void *arg0);
}

extern "C" {
void TItemList__sub_801D5B10(void*, int);
}

TPlyItem::~TPlyItem() {
    TItemList__sub_801D5B10((char*)this + 0x20, -1);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TPlyItem__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void init_items__9TItemListFPv(void *);

extern M2C_UNK __vt__8TPlyItem[];
extern void *lbl_805D356C;

void *TPlyItem__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TPlyItem;
    init_items__9TItemListFPv((void *)((char *)arg0 + 32));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D356C;
    M2C_FIELD(arg0, u16 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    return arg0;
}
void reduce_owner_matched_items__6TLobbyFPv(void *arg0) {
    Item_801D5004 *self = (Item_801D5004 *)arg0;
    VObj_801D5004 *owner;
    Item_801D5004 *it;
    u8 *lobby;
    for (it = self->child; it != NULL; it = it->next) {
        if (is_item_valid__9TItemListFi(it) != 0) {
            owner = (VObj_801D5004 *)get_owner_if_alive__10TObjPlayerFPv(it);
            if (owner != NULL && item_reduce_owner_match_field_ec == get_field_ec__12TOSwitchItemFPv(owner) &&
                reduce_owner_match_id == get_field_ed__10TObjPlayerFPv(owner)) {
                if (item_reduce_owner_match_field_ec == 3) {
                    lobby = item_reduce_target_player;
                    reduce_item_amount__6TLobbyFPviii(*(s32 *)(lobby + 0xD00), lobby, it, owner->v34());
                } else {
                    reduce_item_amount__6TLobbyFPviii(*(s32 *)(item_reduce_target_player + 0xD00), item_reduce_target_player, it, 1);
                }
            }
        }
        reduce_child_item_amounts__6TLobbyFPv((void *)(it));
    }
}
void reduce_child_item_amounts__6TLobbyFPv(void *arg0) {
    Item_801D50E0 *self = (Item_801D50E0 *)arg0;
    VObj_801D50E0 *owner;
    Item_801D50E0 *it;
    u8 *lobby;
    for (it = self->child; it != NULL; it = it->next) {
        if (is_item_valid__9TItemListFi(it) != 0) {
            owner = (VObj_801D50E0 *)get_owner_if_alive__10TObjPlayerFPv(it);
            if (owner != NULL && item_reduce_owner_match_field_ec == get_field_ec__12TOSwitchItemFPv(owner)) {
                if (item_reduce_owner_match_field_ec == 3) {
                    lobby = item_reduce_target_player;
                    reduce_item_amount__6TLobbyFPviii(*(s32 *)(lobby + 0xD00), lobby, it, owner->v34());
                } else {
                    reduce_item_amount__6TLobbyFPviii(*(s32 *)(item_reduce_target_player + 0xD00), item_reduce_target_player, it, 1);
                }
            }
        }
        reduce_child_item_amounts__6TLobbyFPv(it);
    }
}
void collect_owner_fields_recursive__10TObjPlayerFPv(void *arg0) {
    Item_801D51A0 *self = (Item_801D51A0 *)arg0;
    Item_801D51A0 *it;
    void *owner;
    for (it = self->child; it != NULL; it = it->next) {
        if (is_item_valid__9TItemListFi(it) != 0 && (owner = get_owner_if_alive__10TObjPlayerFPv(it)) != NULL) {
            *TObjPlayer__owner_field_write_cursor++ = get_field_d8__10TObjPlayerFPv(owner);
            inventory_walk_visit_count++;
        }
        collect_owner_fields_recursive__10TObjPlayerFPv(it);
    }
}

}
