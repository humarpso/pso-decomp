#include "types.h"

extern "C" {

int count_matching_items__10TObjPlayerFPvi(void* a0, int a1);
int collect_item_owners_recursive__10TObjPlayerFPv(void*);

    extern s32 inventory_walk_visit_count;
    extern s32 player_owner_collect_cursor;
int count_matching_items__10TObjPlayerFPvi(void* a0, int a1) { player_owner_collect_cursor = a1; inventory_walk_visit_count = 0; collect_item_owners_recursive__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return inventory_walk_visit_count; }

}

#include "types.h"

extern "C" {

int apply_shop_judgment__10TObjPlayerFPvi(void* a0, int a1);
void set_flag_and_update__10TObjPlayerFPvi(void* a0, int a1);
int collect_alive_owners__10TObjPlayerFPv(void*);
int unequip_invalid_items_recursive__10TObjPlayerFPv(void*);

    extern s32 inventory_walk_visit_count;
    extern s32 player_owner_collect_cursor;
int apply_shop_judgment__10TObjPlayerFPvi(void* a0, int a1) { player_owner_collect_cursor = a1; inventory_walk_visit_count = 0; collect_alive_owners__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return inventory_walk_visit_count; }

    extern s32 item_reduce_target_player;
void set_flag_and_update__10TObjPlayerFPvi(void* a0, int a1) { item_reduce_target_player = a1; unequip_invalid_items_recursive__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801D4D48 { char pad[0x18]; };
struct VObj_801D4D48 : Base_801D4D48 {
#define V8(b) virtual void b##0(); virtual void b##1(); virtual void b##2(); virtual void b##3(); virtual void b##4(); virtual void b##5(); virtual void b##6(); virtual void b##7();
    V8(a) V8(b) V8(c) V8(d)
    virtual void p32(); virtual void p33();
    virtual s32 m34();
};

extern "C" {

s32 count_items_by_id__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 lookup_item_def__9TItemDataFPv(s32);
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1);
M2C_UNK count_items_recursive__10TObjPlayerFPv(s32);
void *get_owner_if_alive__10TObjPlayerFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();

extern s32 inventory_walk_visit_count;
extern s32 inventory_search_item_data;

s32 count_items_by_id__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    void *temp_r3;

    if (lookup_item_def__9TItemDataFPv(arg1) != 0) {
        if (((u32 (*)(void *, s32))set_mode_and_refresh_object__10TObjPlayerFPvi)(arg0, arg1) != 0U) {
            temp_r3 = ((void *(*)())get_owner_if_alive__10TObjPlayerFPv)();
            if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
                return ((VObj_801D4D48 *)temp_r3)->m34();
            }
        }
        return 0;
    }
    inventory_search_item_data = arg1;
    inventory_walk_visit_count = 0;
    count_items_recursive__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x1C4));
    return inventory_walk_visit_count;
}

}

#include "types.h"

struct VB_801D4E94 { u8 pad[0x18]; };

struct V_801D4E94 : VB_801D4E94 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
};

extern "C" {
s32 is_item_valid__9TItemListFi(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
void destroy_subobjects_recursive__10TObjPlayerFPv(void *arg0);
}

extern "C" {

void find_first_inventory_entry__10TObjPlayerFPvi(void* a0, int a1);
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1);
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1);
void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1);
int find_inventory_item_matching_data__10TObjPlayerFPv(void*);
int find_matching_inventory_item_node(void*);
int find_inventory_item_by_field_d8__10TObjPlayerFPv(void*);
int queue_destruction__7TObjectFv(void*);
int run_tasks__7TObjectFv(void*);

    extern s32 inventory_search_item_data;
void find_first_inventory_entry__10TObjPlayerFPvi(void* a0, int a1) { inventory_search_item_data = a1; find_inventory_item_matching_data__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern s32 inventory_search_item_data;
void set_mode_and_refresh_object__10TObjPlayerFPvi(void* a0, int a1) { inventory_search_item_data = a1; find_matching_inventory_item_node((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern s32 item_reduce_target_player;
    extern s32 inventory_walk_progress_count;
void destroy_subobjects__10TObjPlayerFPvi(void* a0, int a1) { item_reduce_target_player = a1; inventory_walk_progress_count = 0; destroy_subobjects_recursive__10TObjPlayerFPv((void *)((void*)(*(int*)((char*)a0 + 0x1c4)))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c4))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); run_tasks__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); queue_destruction__7TObjectFv((void*)(*(int*)((char*)a0 + 0x1c8))); }

    extern s32 inventory_update_field_d8_key;
    extern s32 inventory_walk_progress_count;

void destroy_subobjects_recursive__10TObjPlayerFPv(void *arg0) {
    u8 *p;
    V_801D4E94 *o;
    p = *(u8 **)((u8 *)arg0 + 0x14);
    while (p != NULL) {
        if (is_item_valid__9TItemListFi(p) != 0) {
            o = (V_801D4E94 *)get_owner_if_alive__10TObjPlayerFPv(p);
            if (o != NULL && all_parents_unqueued_for_destruction__7TObjectFv() != 0) {
                o->m27();
            }
        }
        destroy_subobjects_recursive__10TObjPlayerFPv(p);
        p = *(u8 **)(p + 0xC);
    }
}

void start_inventory_update__10TObjPlayerFPvi(void* a0, int a1) { inventory_update_field_d8_key = a1; inventory_walk_progress_count = 0; find_inventory_item_by_field_d8__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); }

}
