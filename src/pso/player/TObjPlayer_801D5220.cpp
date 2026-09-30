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

extern "C" {
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
s32 TObjPlayer__sub_801049C8(M2C_UNK *, s32);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 lbl_805D5DFC;
void *TObjPlayer__sub_801D563C(ItemNode_801D563C *root);
s32 has_flag_128__10TObjPlayerFPv();
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
s32 is_item_valid__9TItemListFi(void *);
extern s32 lbl_805D5DF4;
extern u32 *lbl_805D5DF8;
void TObjPlayer__sub_801D535C(Node_801D535C *arg0);
}

extern "C" {

void collect_alive_owners__10TObjPlayerFPv(void *arg0);
void count_items_recursive__10TObjPlayerFPv(void *arg0);
void count_owned_items__10TObjPlayerFPv(void *arg0);
s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
void set_field_1c__10TObjPlayerFPvi(void* p, s32 v);
s32 TObjPlayer__sub_801049C8(M2C_UNK *, s32);
s32 TObjPlayer__sub_801D4308(u32, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(M2C_UNK, M2C_UNK *);
s32 is_item_valid__9TItemListFi(void *);

extern s32 lbl_805D5DF4;
extern s32 lbl_805D5E00;

void count_owned_items__10TObjPlayerFPv(void *arg0) {
    void *var_r31;
    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((is_item_valid__9TItemListFi((void *)(var_r31)) != 0) && ((temp = get_owner_if_alive__10TObjPlayerFPv((void *)(var_r31))) != 0U) && (TObjPlayer__sub_801D4308(temp, lbl_805D5E00) != 0)) {
            lbl_805D5E00 += 0x1C;
            lbl_805D5DF4 += 1;
        }
        count_owned_items__10TObjPlayerFPv((void *)(var_r31));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

extern s32 lbl_805D5DF4;
extern u32 *lbl_805D5DF8;

void TObjPlayer__sub_801D535C(Node_801D535C *arg0) {
    Node_801D535C *n;
    s32 o;
    for (n = arg0->child; n != NULL; n = n->next) {
        if (is_item_valid__9TItemListFi(n) != 0) {
            o = get_owner_if_alive__10TObjPlayerFPv(n);
            if ((o != 0) && (has_flag_128__10TObjPlayerFPv() == 0)) {
                *(*(s32 * *)&lbl_805D5DF8) = o;
                (*(s32 * *)&lbl_805D5DF8) += 1;
                lbl_805D5DF4 += 1;
            }
        }
        TObjPlayer__sub_801D535C(n);
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
                *lbl_805D5DF8 = temp_r3;
                lbl_805D5DF8 += 1;
                lbl_805D5DF4 += 1;
            }
        }
        collect_alive_owners__10TObjPlayerFPv((void *)((void *)(var_r31)));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

extern s32 lbl_805D5DF4;
extern s32 lbl_805D5DFC;

void count_items_recursive__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8[7];
    void *var_r31;

    u32 temp;

    var_r31 = M2C_FIELD(arg0, void **, 0x14);
    while (var_r31 != NULL) {
        if ((is_item_valid__9TItemListFi((void *)(var_r31)) != 0) && ((temp = get_owner_if_alive__10TObjPlayerFPv((void *)(var_r31))) != 0U)) {
            copy_to_item_data__5TItemFPvPv(temp, &sp8[0]);
            if (TObjPlayer__sub_801049C8(&sp8[0], lbl_805D5DFC) != 0) {
                lbl_805D5DF4 += 1;
            }
        }
        count_items_recursive__10TObjPlayerFPv((void *)(var_r31));
        var_r31 = M2C_FIELD(var_r31, void **, 0xC);
    }
}

void *TObjPlayer__sub_801D563C(ItemNode_801D563C *root) {
    s32 data[8];
    ItemNode_801D563C *node;
    void *found;
    u32 owner;
    for (node = root->child; node != NULL; node = node->next) {
        if (is_item_valid__9TItemListFi(node) != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(node);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv((M2C_UNK)(owner), (M2C_UNK *)(data));
                if (TObjPlayer__sub_801049C8((M2C_UNK *)(data), (s32)(lbl_805D5DFC)) != 0) {
                    return node;
                }
            }
        }
        found = TObjPlayer__sub_801D563C(node);
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
