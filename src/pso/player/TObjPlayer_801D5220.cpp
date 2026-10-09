#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct ItemNode_801D563C {
    u8 pad0[0xC];
    struct ItemNode_801D563C *next;
    u8 pad10[4];
    struct ItemNode_801D563C *child;
} ItemNode_801D563C;

typedef struct Node_801D535C {
    u8 pad0[0xC];
    struct Node_801D535C *next;
    u8 pad10[4];
    struct Node_801D535C *child;
} Node_801D535C;

typedef s32 M2C_UNK;
typedef struct Node_801D52A8 {
    u8 pad0[0xC];
    struct Node_801D52A8 *next;
    u8 pad10[4];
    struct Node_801D52A8 *child;
} Node_801D52A8;

typedef struct Node_801D5468 {
    u8 pad0[0xC];
    struct Node_801D5468 *next;
    u8 pad10[4];
    struct Node_801D5468 *child;
} Node_801D5468;

class Obj_801D5468 {
public:
    u8 pad[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
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
    virtual s8 v31();
};

typedef struct Node_801D55A4 {
    u8 pad0[0xC];
    struct Node_801D55A4 *next;
    u8 pad10[4];
    struct Node_801D55A4 *child;
} Node_801D55A4;

typedef struct Node_801D56D0 {
    u8 pad0[0xC];
    struct Node_801D56D0 *next;
    u8 pad10[4];
    struct Node_801D56D0 *child;
} Node_801D56D0;

extern "C" {
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
s32 item_identity_matches(M2C_UNK *, s32);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 inventory_search_item_data;
void *find_matching_inventory_item_node(ItemNode_801D563C *root);
s32 has_flag_128__10TObjPlayerFPv();
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 inventory_walk_visit_count;
extern u32 *player_owner_collect_cursor;
void collect_item_owners_recursive__10TObjPlayerFPv(Node_801D535C *arg0);
s32 get_field_d8__10TObjPlayerFPv(s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
u8 get_field_ec__12TOSwitchItemFPv(s32);
s32 is_item_equipped();
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern u8 *player_item_collect_cursor;
extern s32 inventory_walk_visit_count;
void TObjPlayer__sub_801D52A8(Node_801D52A8 *arg0);
s32 is_state_ec1_ed3__10TObjPlayerFPv(void *);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 is_item_equipped();
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 item_reduce_target_player;
void unequip_invalid_items_recursive__10TObjPlayerFPv(Node_801D5468 *arg0);
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
s32 compare_item_data_masked(M2C_UNK *, s32, s32);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 inventory_search_item_data;
void *find_inventory_item_matching_data__10TObjPlayerFPv(Node_801D55A4 *root);
s32 get_field_d8__10TObjPlayerFPv(s32);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 inventory_update_field_d8_key;
extern s32 inventory_walk_progress_count;
void *find_inventory_item_by_field_d8__10TObjPlayerFPv(Node_801D56D0 *root);
}

extern "C" {

void collect_alive_owners__10TObjPlayerFPv(void *arg0);
void count_items_recursive__10TObjPlayerFPv(void *arg0);
void count_owned_items__10TObjPlayerFPv(void *arg0);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
void set_field_1c__10TObjPlayerFPvi(void* p, s32 v);
s32 item_identity_matches(M2C_UNK *, s32);
s32 export_inventory_entry__10TObjPlayerFiPv(u32, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
s32 is_item_valid__9TItemListFi(void *);

extern s32 inventory_walk_visit_count;
extern s32 owned_item_export_cursor;

void count_owned_items__10TObjPlayerFPv(void *arg0) {
    void *var_r31;
    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((is_item_valid__9TItemListFi((void *)(var_r31)) != 0) && ((temp = get_owner_if_alive__10TObjPlayerFPv((void *)(var_r31))) != 0U) && (export_inventory_entry__10TObjPlayerFiPv(temp, owned_item_export_cursor) != 0)) {
            owned_item_export_cursor += 0x1C;
            inventory_walk_visit_count += 1;
        }
        count_owned_items__10TObjPlayerFPv((void *)(var_r31));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

extern s32 inventory_walk_visit_count;
extern u32 *player_owner_collect_cursor;

void TObjPlayer__sub_801D52A8(Node_801D52A8 *arg0) {
    Node_801D52A8 *n;
    s32 o;
    for (n = arg0->child; n != NULL; n = n->next) {
        if (is_item_valid__9TItemListFi(n) != 0) {
            o = get_owner_if_alive__10TObjPlayerFPv(n);
            if ((o != 0) && (is_item_equipped() != 0) && (get_field_ec__12TOSwitchItemFPv(o) == 0)) {
                copy_to_item_data__5TItemFPvPv(o, (M2C_UNK *)(player_item_collect_cursor + 8));
                *(s32 *)(player_item_collect_cursor + 4) = get_field_d8__10TObjPlayerFPv(o);
                player_item_collect_cursor += 0x1C;
                inventory_walk_visit_count += 1;
            }
        }
        TObjPlayer__sub_801D52A8(n);
    }
}

void collect_item_owners_recursive__10TObjPlayerFPv(Node_801D535C *arg0) {
    Node_801D535C *n;
    s32 o;
    for (n = arg0->child; n != NULL; n = n->next) {
        if (is_item_valid__9TItemListFi(n) != 0) {
            o = get_owner_if_alive__10TObjPlayerFPv(n);
            if ((o != 0) && (has_flag_128__10TObjPlayerFPv() == 0)) {
                *(*(s32 * *)&player_owner_collect_cursor) = o;
                (*(s32 * *)&player_owner_collect_cursor) += 1;
                inventory_walk_visit_count += 1;
            }
        }
        collect_item_owners_recursive__10TObjPlayerFPv(n);
    }
}

void collect_alive_owners__10TObjPlayerFPv(void *arg0) {
    u32 temp_r3;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if (is_item_valid__9TItemListFi((void *)((s32)var_r31)) != 0) {
            temp_r3 = get_owner_if_alive__10TObjPlayerFPv((void *)(var_r31));
            if (temp_r3 != 0U) {
                *player_owner_collect_cursor = temp_r3;
                player_owner_collect_cursor += 1;
                inventory_walk_visit_count += 1;
            }
        }
        collect_alive_owners__10TObjPlayerFPv((void *)((void *)(var_r31)));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

extern s32 inventory_walk_visit_count;
extern s32 inventory_search_item_data;

void unequip_invalid_items_recursive__10TObjPlayerFPv(Node_801D5468 *arg0) {
    Node_801D5468 *n;
    Obj_801D5468 *o;
    for (n = arg0->child; n != NULL; n = n->next) {
        if (is_item_valid__9TItemListFi(n) != 0) {
            o = (Obj_801D5468 *)get_owner_if_alive__10TObjPlayerFPv(n);
            if ((o != NULL) && (is_item_equipped() != 0) && (is_state_ec1_ed3__10TObjPlayerFPv(o) == 0) &&
                (get_slot_value__10TObjPlayerFPvi(item_reduce_target_player + 0xD04, o->v31()) != 0U)) {
                unequip_item__10TObjPlayerFiPv(item_reduce_target_player, o);
            }
        }
        unequip_invalid_items_recursive__10TObjPlayerFPv(n);
    }
}

void count_items_recursive__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[7];
    void *var_r31;

    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((is_item_valid__9TItemListFi((void *)(var_r31)) != 0) && ((temp = get_owner_if_alive__10TObjPlayerFPv((void *)(var_r31))) != 0U)) {
            copy_to_item_data__5TItemFPvPv(temp, &sp8[0]);
            if (item_identity_matches(&sp8[0], inventory_search_item_data) != 0) {
                inventory_walk_visit_count += 1;
            }
        }
        count_items_recursive__10TObjPlayerFPv((void *)(var_r31));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

void *find_inventory_item_matching_data__10TObjPlayerFPv(Node_801D55A4 *root) {
    s32 data[8];
    Node_801D55A4 *node;
    void *found;
    u32 owner;
    for (node = root->child; node != NULL; node = node->next) {
        if (is_item_valid__9TItemListFi(node) != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(node);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv((M2C_UNK)(owner), (M2C_UNK *)(data));
                if (compare_item_data_masked((M2C_UNK *)(data), inventory_search_item_data, 0) != 0) {
                    return node;
                }
            }
        }
        found = find_inventory_item_matching_data__10TObjPlayerFPv(node);
        if (found != NULL) {
            return found;
        }
    }
    return NULL;
}

void *find_matching_inventory_item_node(ItemNode_801D563C *root) {
    s32 data[8];
    ItemNode_801D563C *node;
    void *found;
    u32 owner;
    for (node = root->child; node != NULL; node = node->next) {
        if (is_item_valid__9TItemListFi(node) != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(node);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv((M2C_UNK)(owner), (M2C_UNK *)(data));
                if (item_identity_matches((M2C_UNK *)(data), (s32)(inventory_search_item_data)) != 0) {
                    return node;
                }
            }
        }
        found = find_matching_inventory_item_node(node);
        if (found != NULL) {
            return found;
        }
    }
    return NULL;
}

void *find_inventory_item_by_field_d8__10TObjPlayerFPv(Node_801D56D0 *root) {
    Node_801D56D0 *node;
    void *found;
    u32 owner;
    for (node = root->child; node != NULL; node = node->next) {
        if (is_item_valid__9TItemListFi(node) != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(node);
            if (owner != 0) {
                if (inventory_update_field_d8_key == get_field_d8__10TObjPlayerFPv(owner)) {
                    return node;
                }
                inventory_walk_progress_count += 1;
            }
        }
        found = find_inventory_item_by_field_d8__10TObjPlayerFPv(node);
        if (found != NULL) {
            return found;
        }
    }
    return NULL;
}

s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return 0;
}
void set_field_1c__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }

}
