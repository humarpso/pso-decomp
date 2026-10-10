#include "types.h"
#include "pso/item/TItem.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

struct VBase_18_f23361 { char pad[0x18]; };

struct VObj_18_f23361 : VBase_18_f23361 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual M2C_UNK m25();
};

struct RecoveredGlobal_8010255C_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8010255C_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_441505 { char pad[0x18]; };

struct VObj_18_441505 : VBase_18_441505 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual M2C_UNK m27();
};

struct ItemData_80102424 {
    u8 data1[12];
    u32 id;
    u8 data2[4];
};

struct TItem_80102424 : VObj_18_441505 {
    u8 pad1[0x28 - 0x1C];
    s16 area;
    u8 pad2[0x38 - 0x2A];
    f32 x;
    f32 y;
    f32 z;
    u8 pad3[0x5C - 0x44];
    s32 f5C;
    s32 f60;
    s32 f64;
    u8 pad4[0xE4 - 0x68];
    u16 fE4;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK update_owner_visibility__5TItemFPv(void *);
M2C_UNK update_timer__5TItemFPv(void *);
u16 get_id__13TItemProArmorFPv(void *);
u32 get_player_by_client_id(void *);
M2C_UNK push_to_player_list__5TItemFPv();
void run_task__5TItemFPv(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 clear_shadow_flag__10TObjPlayerFPv(void *);
s32 set_shadow_flag__10TObjPlayerFPv(void *);
s8 TObjPlayer__sub_80102C30(u8 *);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 reset_transform_state__10TObjPlayerFv();
s32 reset_key_machine_state__10TObjPlayerFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern RecoveredGlobal_8010255C_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_8010255C_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__5TItemFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor(void);
void spawn_particle_effect(void *, s32);
void set_mode__5TItemFPvc(void *, s32);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void snap_to_ground__5TItemFPv(void *, f32);
s32 is_active_battle_player__10TObjPlayerFv(void);
void TLobby__sub_8011AED8(s16, s16, void *, f32, f32);
void refresh_collision_body_centers(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern void *tl_05;
extern s32 lbl_805D543C;
extern const f32 lbl_805DAA9C;
extern const f32 lbl_805DAAA0;
void place_on_ground__5TItemFPvsPvi(TItem_80102424 *self, s16 client, f32 *pos, s32 quiet);
s8 TObjPlayer__sub_80102C30(u8 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void dispatch_state__5TItemFPv(TItem *self);
}

extern "C" {

typedef char RecoveredGlobal_8010255C_lbl_8050BEC0_size[sizeof(RecoveredGlobal_8010255C_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8010255C_lbl_8058D4C0_size[sizeof(RecoveredGlobal_8010255C_lbl_8058D4C0) == 0x10 ? 1 : -1];

void place_on_ground__5TItemFPvsPvi(TItem_80102424 *self, s16 client, f32 *pos, s32 quiet) {
    ItemData_80102424 data;
    f32 r;
    set_parent__7TObjectFP7TObject(self, tl_05);
    set_mode__5TItemFPvc(self, 0);
    VecCopy__FP3VecPC3Vec(&self->x, pos);
    self->fE4 = 0xFFFF;
    if (quiet == 0) {
        copy_to_item_data__5TItemFPvPv(self, &data);
        ((void (*)(f32, f32, s16, s16, void *))TLobby__sub_8011AED8)(self->x, self->z, client, self->area, &data);
    }
    if (is_active_battle_player__10TObjPlayerFv() == 1 || client != get_current_floor()) {
        self->m27();
        return;
    }
    self->f5C = 0;
    self->f64 = 0;
    r = lbl_805DAAA0 * (f32)rand();
    self->f60 = (s32)(lbl_805DAA9C * r);
    snap_to_ground__5TItemFPv(self, r);
    refresh_collision_body_centers(self);
    if (lbl_805D543C != 0) {
        spawn_particle_effect(&self->x, 0x9B);
    }
}

void render__5TItemFPv(u8 *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv((void *) (arg0)) != 0) {
        set_shadow_flag__10TObjPlayerFPv((void *) (arg0));
        if ((TObjPlayer__sub_80102C30((u8 *)((void *) (arg0))) == 2) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            set_depth_buffer_settings_id__FUl((int) (1));
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&saved_model_draw_color.value), (void *) (&lbl_8058D4C0.value));
            ((VObj_18_f23361 *)(arg0))->m25();
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&saved_model_draw_color.value));
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
            reset_transform_state__10TObjPlayerFv();
            func_80141618__Fv();
        }
        clear_shadow_flag__10TObjPlayerFPv((void *) (arg0));
    }
}

f32 item_box_primary_colors[24] = {
    1.0f, 1.0f, 1.0f, 1.0f,
    1.0f, 1.0f, 1.0f, 0.0f,
    1.0f, 0.298039228f, 0.298039228f, 0.298039228f,
    1.0f, 0.0f, 0.698039234f, 1.0f,
    1.0f, 1.0f, 0.400000006f, 0.800000012f,
    1.0f, 1.0f, 0.0f, 0.0f,
};
f32 item_box_secondary_colors[24] = {
    1.0f, 1.0f, 0.0f, 0.400000006f,
    1.0f, 0.0f, 0.0f, 1.0f,
    1.0f, 1.0f, 1.0f, 0.0f,
    1.0f, 0.90196079f, 0.298039228f, 0.0f,
    1.0f, 0.0f, 1.0f, 0.0f,
    1.0f, 0.0f, 1.0f, 0.0f,
};
int item_system_generation;

void dispatch_state__5TItemFPv(TItem *self) {
    void (TItem::*fn)();
    if (all_parents_unqueued_for_destruction__7TObjectFv(self) != 0) {
        static void (TItem::*tbl[4])() = {
            &TItem::render_ground,
            &TItem::render_owned,
            &TItem::render_following_owner,
            0,
        };
        fn = tbl[TObjPlayer__sub_80102C30((u8 *)(self))];
        if (fn) {
            (self->*fn)();
        }
    }
}

#pragma push
#pragma fp_contract on
void run_task__5TItemFPv(u8 *arg0) {
    s8 temp_r3;
    u32 temp_r4;
    temp_r3 = TObjPlayer__sub_80102C30((u8 *)(arg0));
    switch (temp_r3) {
    case 0:
        update_timer__5TItemFPv((void *) (arg0));
        return;
    case 1:
        M2C_FIELD(arg0, u32 *, 0xF0) = get_player_by_client_id((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            update_owner_visibility__5TItemFPv((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m13();
        }
        break;
    case 2:
        M2C_FIELD(arg0, u32 *, 0xF0) = get_player_by_client_id((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
        if (temp_r4 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r4 + 0x38));
            update_owner_visibility__5TItemFPv((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m14();
            get_field_d8__10TObjPlayerFPv((void *) (arg0));
            push_to_player_list__5TItemFPv();
        }
        break;
    }
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__5TItemFv(void *arg0, s16 arg1);
void set_mode__5TItemFPvc(void *, s32);
M2C_UNK unregister_item__5TItemFPv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
M2C_UNK clear_obj_links(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *__vt__5TItem[];

void *__dt__5TItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__5TItem;
        set_mode__5TItemFPvc(arg0, 3);
        clear_obj_links(arg0);
        unregister_item__5TItemFPv(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_801028D8 { char pad[0x18]; };

struct TItem_801028D8 : VBase_18_801028D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32);
};

extern "C" {
void obj_setFlags30(void *, u32);
void fn_8002B630(void *, void *);
void assign_item_id__6TLobbyFPv(void *);
void apply_item_flags__10TObjPlayerFPvi(void *, void *);
void TObjPlayer__sub_8010043C(void *, s32);
void set_mode__5TItemFPvc(void *, s32);
void insert_sorted_by_id__5TItemFPv(void *);
u8 get_field_ec__12TOSwitchItemFPv(void *);
void set_item_count__6TLobbyFPvs(void *, s32);
void TItem__sub_801031C0(void *);
s8 get_type_nibble__9TItemDataFPv(void *);
s32 is_rare_item__9TItemDataFPv(void *);
s32 clamp_s32__10TObjPlayerFiii(s32, s32, s32);
void initialize_linked_object_reference(void *, void *);
void construct_collider_proxy__10TObjPlayerFPv(void *, void *);
extern u8 lbl_8043DF68[];
extern u8 lbl_8043DF94[];
extern void *__vt__5TItem[];
extern s32 lbl_805D2B60;
extern u32 lbl_805D5438;
u8 *TItem__ct(u8 *self, void *parent, u8 *item);
}

extern "C" {

u8 *TItem__ct(u8 *self, void *parent, u8 *item) {
    construct_collider_proxy__10TObjPlayerFPv(self, parent);
    M2C_FIELD(self, void **, 0x18) = __vt__5TItem;
    M2C_FIELD(self, s32 *, 0) = lbl_805D2B60;
    obj_setFlags30(self, 0x80000000);
    fn_8002B630(self + 0xAC, lbl_8043DF68);
    TItem__sub_801031C0(self + 0x98);
    initialize_linked_object_reference(self, self + 0xAC);
    M2C_FIELD(self, u16 *, 0xE4) = 0xFFFF;
    M2C_FIELD(self, s32 *, 0xD8) = M2C_FIELD(item, s32 *, 0xC);
    M2C_FIELD(self, s32 *, 0xDC) = 0;
    M2C_FIELD(self, s16 *, 0xE6) = 0;
    M2C_FIELD(self, s32 *, 0xE0) = 0;
    M2C_FIELD(self, u8 *, 0xEC) = item[0];
    M2C_FIELD(self, u8 *, 0xED) = item[1];
    M2C_FIELD(self, u8 *, 0xEE) = item[2];
    M2C_FIELD(self, s32 *, 0xF0) = 0;
    M2C_FIELD(self, s32 *, 0xF4) = 0;
    M2C_FIELD(self, s16 *, 0xE8) = 0;
    apply_item_flags__10TObjPlayerFPvi(self, item);
    M2C_FIELD(self, s8 *, 0xEA) = get_type_nibble__9TItemDataFPv(item);
    if (is_rare_item__9TItemDataFPv(item) != 0) {
        TObjPlayer__sub_8010043C(self, 4);
    } else {
        TObjPlayer__sub_8010043C(self, lbl_8043DF94[clamp_s32__10TObjPlayerFiii(get_field_ec__12TOSwitchItemFPv(self), 0, 4)]);
    }
    if (lbl_805D5438 != 0) {
        ((TItem_801028D8 *)self)->m5(lbl_805D5438);
        set_item_count__6TLobbyFPvs(self, 0xFFFF);
        set_mode__5TItemFPvc(self, 0);
    } else {
        set_mode__5TItemFPvc(self, 3);
    }
    assign_item_id__6TLobbyFPv(self);
    insert_sorted_by_id__5TItemFPv(self);
    return self;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 alloc_buffer__11TOBoss4RockFPv(s32 size);
void *memset(void *dst, int c, u32 n);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32 size);
u32 init_bosses__6TLobbyFPv(void *p);
void alloc_and_init_object_b4__10TObjPlayerFv(void);
void alloc_and_run_object__10TObjPlayerFv(void);
void init_game_resources__10TObjPlayerFv(void);
void advance_item_system_generation(void);
extern s32 item_registry_count;
extern u32 item_registry_sorted_entries;
extern u32 lbl_805D5400;
void alloc_game_systems__10TObjPlayerFv(void);
}

extern "C" {

int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
s8 TObjPlayer__sub_80102C30(u8 *arg0);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void free_globals__10TObjPlayerFv(void);
void free_obj_heap__10TObjPlayerFPv(void* a0);
int get_item_system_generation(void);
int has_flag_128__10TObjPlayerFPv(void* p);
void advance_item_system_generation(void);
void init_forward_default__10TObjPlayerFv(void);
int lookup_inventory_item__10TObjPlayerFPv(void* p);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
int dispatch_item_by_type__6TLobbyFPv(void*);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void bswap_32__FPUl(u32* p);
s32 check_flag__10TObjPlayerFPvi(s32, s32);
void free__11TOBoss4RockFUi(void*);
M2C_UNK free_global_805D6FB8__10TObjPlayerFv();
M2C_UNK free_item_globals__10TObjPlayerFv();
void free_rock_objects__6TLobbyFis(void*, int);
M2C_UNK free_static_buffer__10TObjPlayerFv();
int get_equip_field_d04__10TObjPlayerFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s16 get_stat__10TObjPlayerFPv(void* p);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
void read_be16_field2__10TObjPlayerFPv(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);

    extern int obj_heap;
void free_obj_heap__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void alloc_from_obj_heap__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

    extern int item_system_generation;
int get_item_system_generation(void) {  return item_system_generation; }

    extern int item_system_generation;
void advance_item_system_generation(void) {
    int temp_r3 = item_system_generation;
    item_system_generation = temp_r3 + 1;
}

int lookup_inventory_item__10TObjPlayerFPv(void* p) { return dispatch_item_by_type__6TLobbyFPv(p); }

extern s32 item_registry_count;
extern u32 item_registry_sorted_entries;
extern u32 lbl_805D5400;

void free_globals__10TObjPlayerFv(void) {
    free_item_globals__10TObjPlayerFv();
    free_static_buffer__10TObjPlayerFv();
    free_global_805D6FB8__10TObjPlayerFv();
    if ((u32) lbl_805D5400 != 0U) {
        free_rock_objects__6TLobbyFis((void*)lbl_805D5400, 1);
        lbl_805D5400 = 0U;
    }
    if ((u32) item_registry_sorted_entries != 0U) {
        free__11TOBoss4RockFUi((void*)item_registry_sorted_entries);
        item_registry_sorted_entries = 0U;
    }
    item_registry_count = 0;
}

extern M2C_UNK lbl_805D53EC;

void alloc_game_systems__10TObjPlayerFv(void) {
    void *p;
    item_registry_count = 0;
    item_registry_sorted_entries = alloc_buffer__11TOBoss4RockFPv(0x1000);
    memset((void *)item_registry_sorted_entries, 0, 0x1000);
    p = alloc__23TAdSinglePlyChrSelectGCFPv(1);
    if (p != NULL) {
        p = (void *)init_bosses__6TLobbyFPv(p);
    }
    lbl_805D5400 = (u32)p;
    alloc_and_init_object_b4__10TObjPlayerFv();
    alloc_and_run_object__10TObjPlayerFv();
    init_game_resources__10TObjPlayerFv();
    advance_item_system_generation();
}

void init_forward_default__10TObjPlayerFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D53EC);
}

int TObjPlayer__sub_80102BD0(void) { return 0; }
int TObjPlayer__sub_80102BD8(void) { return 0; }
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0xdc) & m; }
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) &= ~v; }
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0xdc) |= v; }
int has_flag_128__10TObjPlayerFPv(void* p) { return test_item_flags__10TObjPlayerFPvUi((void*)((void*)(p)), (u32)((u32)(128))); }
s8 TObjPlayer__sub_80102C30(u8 *arg0) {
    return (s8) M2C_FIELD(arg0, u8 *, 0xEB);
}

}

__declspec(section ".ctors") static void *const __sinit_TObjPlayer_80102A58_cpp_ref = (void *)init_forward_default__10TObjPlayerFv;
