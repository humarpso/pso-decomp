#include "types.h"
#include "pso/item/TItem.h"

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
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
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
    virtual s32 m25();
};

struct RecoveredGlobal_8010255C_lbl_8050BEC0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8010255C_lbl_8058D4C0 {
    s32 value;
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
    virtual s32 m27();
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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_field_d8__10TObjPlayerFv(void *);
u16 get_id__13TItemProArmorFv(void *);
u32 get_player_by_client_id(void *);
s32 push_to_player_list__5TItemFPv();
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 clear_shadow_flag__10TObjPlayerFv(void *);
s32 set_shadow_flag__10TObjPlayerFv(void *);
s8 TObjPlayer__sub_80102C30(u8 *);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 reset_transform_state__10TObjPlayerFv();
s32 reset_key_machine_state__10TObjPlayerFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern RecoveredGlobal_8010255C_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_8010255C_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_current_floor(void);
void spawn_particle_effect(void *, s32);
void snap_to_ground__5TItemFv(void *, f32);
s32 is_active_battle_player__10TObjPlayerFv(void);
void TLobby__sub_8011AED8(s16, s16, void *, f32, f32);
void refresh_collision_body_centers(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
s32 rand(void);
extern void *tl_05;
extern s32 item_ground_placement_enabled;
extern const f32 lbl_805DAA9C;
extern const f32 lbl_805DAAA0;
void place_on_ground__5TItemFPvsPvi(TItem_80102424 *self, s16 client, f32 *pos, s32 quiet);
s8 TObjPlayer__sub_80102C30(u8 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
}

extern "C" {

typedef char RecoveredGlobal_8010255C_lbl_8050BEC0_size[sizeof(RecoveredGlobal_8010255C_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8010255C_lbl_8058D4C0_size[sizeof(RecoveredGlobal_8010255C_lbl_8058D4C0) == 0x10 ? 1 : -1];

void place_on_ground__5TItemFPvsPvi(TItem_80102424 *self, s16 client, f32 *pos, s32 quiet) {
    ItemData_80102424 data;
    f32 r;
    set_parent__7TObjectFP7TObject(self, tl_05);
    ((TItem *)self)->set_mode(0);
    VecCopy__FP3VecPC3Vec(&self->x, pos);
    self->fE4 = 0xFFFF;
    if (quiet == 0) {
        ((TItem *)self)->copy_to_item_data(&data);
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
    snap_to_ground__5TItemFv(self, r);
    refresh_collision_body_centers(self);
    if (item_ground_placement_enabled != 0) {
        spawn_particle_effect(&self->x, 0x9B);
    }
}

void TItem::render() {
    u8 *arg0 = (u8 *)this;
    if (all_parents_unqueued_for_destruction__7TObjectFv((void *) (arg0)) != 0) {
        set_shadow_flag__10TObjPlayerFv((void *) (arg0));
        if ((TObjPlayer__sub_80102C30((u8 *)((void *) (arg0))) == 2) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            set_depth_buffer_settings_id__FUl((int) (1));
            lbl_805D5660 = model_render_flags;
            lbl_805D5664 = chunk_polygon_flags_and_mask;
            lbl_805D5668 = chunk_polygon_flags_or_mask;
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&saved_model_draw_color.value), (void *) (&model_material_color.value));
            ((VObj_18_f23361 *)(arg0))->m25();
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&model_material_color.value), (void *) (&saved_model_draw_color.value));
            chunk_polygon_flags_and_mask = lbl_805D5664;
            chunk_polygon_flags_or_mask = lbl_805D5668;
            model_render_flags = lbl_805D5660;
            reset_transform_state__10TObjPlayerFv();
            func_80141618__Fv();
        }
        clear_shadow_flag__10TObjPlayerFv((void *) (arg0));
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

void TItem::dispatch_state() {
    void (TItem::*fn)();
    if (all_parents_unqueued_for_destruction__7TObjectFv(this) != 0) {
        static void (TItem::*tbl[4])() = {
            &TItem::render_ground,
            &TItem::render_owned,
            &TItem::render_following_owner,
            0,
        };
        fn = tbl[TObjPlayer__sub_80102C30((u8 *)(this))];
        if (fn) {
            (this->*fn)();
        }
    }
}

#pragma push
#pragma fp_contract on
void TItem::run_task() {
    u8 *arg0 = (u8 *)this;
    s8 temp_r3;
    u32 temp_r4;
    temp_r3 = TObjPlayer__sub_80102C30((u8 *)(arg0));
    switch (temp_r3) {
    case 0:
        ((TItem *)arg0)->update_timer();
        return;
    case 1:
        *(u32 *)((s8 *)arg0 + 0xF0) = get_player_by_client_id((void *) (get_id__13TItemProArmorFv((void *) (arg0))));
        if ((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) {
            ((TItem *)arg0)->update_owner_visibility();
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m13();
        }
        break;
    case 2:
        *(u32 *)((s8 *)arg0 + 0xF0) = get_player_by_client_id((void *) (get_id__13TItemProArmorFv((void *) (arg0))));
        temp_r4 = *(u32 *)((s8 *)arg0 + 0xF0);
        if (temp_r4 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r4 + 0x38));
            ((TItem *)arg0)->update_owner_visibility();
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m14();
            get_field_d8__10TObjPlayerFv((void *) (arg0));
            push_to_player_list__5TItemFPv();
        }
        break;
    }
}
#pragma pop

}

#include "types.h"

extern "C" {

void *__dt__5TItemFv(void *arg0, s16 arg1);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 clear_obj_links(void *);
s32 destroy_particle_controller__10TObjPlayerFs(void *, s32);

extern void *__vt__5TItem[];

void *__dt__5TItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__5TItem;
        ((TItem *)arg0)->set_mode(3);
        clear_obj_links(arg0);
        ((TItem *)arg0)->unregister_item();
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"

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
void assign_item_id__6TLobbyFv(void *);
void apply_item_flags__10TObjPlayerFl(void *, void *);
void TObjPlayer__sub_8010043C(void *, s32);
u8 get_field_ec__12TOSwitchItemFv(void *);
void set_item_count__6TLobbyFs(void *, s32);
void TItem__sub_801031C0(void *);
s8 get_type_nibble__9TItemDataFPv(void *);
s32 is_rare_item__9TItemDataFPv(void *);
s32 clamp_s32__10TObjPlayerFlll(s32, s32, s32);
void initialize_linked_object_reference(void *, void *);
void construct_collider_proxy__10TObjPlayerFv(void *, void *);
extern u8 item_collider_body[];
extern u8 lbl_8043DF94[];
extern void *__vt__5TItem[];
extern s32 TItem__name;
extern u32 lbl_805D5438;
u8 *TItem__ct(u8 *self, void *parent, u8 *item);
}

extern "C" {

u8 *TItem__ct(u8 *self, void *parent, u8 *item) {
    construct_collider_proxy__10TObjPlayerFv(self, parent);
    *(void **)((s8 *)self + 0x18) = __vt__5TItem;
    *(s32 *)((s8 *)self + 0) = TItem__name;
    obj_setFlags30(self, 0x80000000);
    fn_8002B630(self + 0xAC, item_collider_body);
    TItem__sub_801031C0(self + 0x98);
    initialize_linked_object_reference(self, self + 0xAC);
    *(u16 *)((s8 *)self + 0xE4) = 0xFFFF;
    *(s32 *)((s8 *)self + 0xD8) = *(s32 *)((s8 *)item + 0xC);
    *(s32 *)((s8 *)self + 0xDC) = 0;
    *(s16 *)((s8 *)self + 0xE6) = 0;
    *(s32 *)((s8 *)self + 0xE0) = 0;
    *(u8 *)((s8 *)self + 0xEC) = item[0];
    *(u8 *)((s8 *)self + 0xED) = item[1];
    *(u8 *)((s8 *)self + 0xEE) = item[2];
    *(s32 *)((s8 *)self + 0xF0) = 0;
    *(s32 *)((s8 *)self + 0xF4) = 0;
    *(s16 *)((s8 *)self + 0xE8) = 0;
    apply_item_flags__10TObjPlayerFl(self, item);
    *(s8 *)((s8 *)self + 0xEA) = get_type_nibble__9TItemDataFPv(item);
    if (is_rare_item__9TItemDataFPv(item) != 0) {
        TObjPlayer__sub_8010043C(self, 4);
    } else {
        TObjPlayer__sub_8010043C(self, lbl_8043DF94[clamp_s32__10TObjPlayerFlll(get_field_ec__12TOSwitchItemFv(self), 0, 4)]);
    }
    if (lbl_805D5438 != 0) {
        ((TItem_801028D8 *)self)->m5(lbl_805D5438);
        set_item_count__6TLobbyFs(self, 0xFFFF);
        ((TItem *)self)->set_mode(0);
    } else {
        ((TItem *)self)->set_mode(3);
    }
    assign_item_id__6TLobbyFv(self);
    ((TItem *)self)->insert_sorted_by_id();
    return self;
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TLobby.h"

extern "C" {
u32 mem_alloc(s32 size);
void *memset(void *dst, int c, u32 n);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32 size);
void advance_item_system_generation(void);
extern s32 item_registry_count;
extern u32 item_registry_sorted_entries;
extern u32 player_rock_objects_handle;
}

extern "C" {

int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
s8 TObjPlayer__sub_80102C30(u8 *arg0);
void free_obj_heap__10TObjPlayerFPv(void* a0);
int get_item_system_generation(void);
void advance_item_system_generation(void);
int dispatch_item_by_type__6TLobbyFv(void*);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void bswap_32__FPUl(u32* p);
void mem_free(void*);
void free_rock_objects__6TLobbyFis(void*, int);
u8 get_field_ec__12TOSwitchItemFv(void* p);
u16 get_id__13TItemProArmorFv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);
s32 is_matching_id__6TLobbyFiUs(void *, u16);

    extern int obj_heap;
void free_obj_heap__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void TObjPlayer::alloc_from_obj_heap(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

    extern int item_system_generation;
int get_item_system_generation(void) {  return item_system_generation; }

    extern int item_system_generation;
void advance_item_system_generation(void) {
    int temp_r3 = item_system_generation;
    item_system_generation = temp_r3 + 1;
}

int TObjPlayer::lookup_inventory_item() { return dispatch_item_by_type__6TLobbyFv(this); }

extern s32 item_registry_count;
extern u32 item_registry_sorted_entries;
extern u32 player_rock_objects_handle;

void TObjPlayer::free_globals() {
    TObjPlayer::free_item_globals();
    TObjPlayer::free_static_buffer();
    TObjPlayer::free_global_805D6FB8();
    if ((u32) player_rock_objects_handle != 0U) {
        free_rock_objects__6TLobbyFis((void*)player_rock_objects_handle, 1);
        player_rock_objects_handle = 0U;
    }
    if ((u32) item_registry_sorted_entries != 0U) {
        mem_free((void*)item_registry_sorted_entries);
        item_registry_sorted_entries = 0U;
    }
    item_registry_count = 0;
}

extern s32 lbl_805D53EC;

void TObjPlayer::alloc_game_systems() {
    void *p;
    item_registry_count = 0;
    item_registry_sorted_entries = mem_alloc(0x1000);
    memset((void *)item_registry_sorted_entries, 0, 0x1000);
    p = alloc__23TAdSinglePlyChrSelectGCFv(1);
    if (p != NULL) {
        p = (void *)TLobby::init_bosses(p);
    }
    player_rock_objects_handle = (u32)p;
    TObjPlayer::alloc_and_init_object_b4();
    TObjPlayer::alloc_and_run_object();
    TObjPlayer::init_game_resources();
    advance_item_system_generation();
}

void TObjPlayer::init_forward_default() {
    ((TObjPlayer *)(&lbl_805D53EC))->init_forward();
}

int TObjPlayer__sub_80102BD0(void) { return 0; }
int TObjPlayer__sub_80102BD8(void) { return 0; }
int TObjPlayer::test_item_flags(u32 m) { return *(u32*)((char*)this + 0xdc) & m; }
void TObjPlayer::clear_item_flags(u32 v) { *(u32*)((char*)this + 0xdc) &= ~v; }
void TObjPlayer::add_item_flags(u32 v) { *(u32*)((char*)this + 0xdc) |= v; }
int TObjPlayer::has_flag_128() { return test_item_flags((u32)((u32)(128))); }
s8 TObjPlayer__sub_80102C30(u8 *arg0) {
    return (s8) *(u8 *)((s8 *)arg0 + 0xEB);
}

}

__declspec(section ".ctors") static void *const __sinit_TObjPlayer_80102A58_cpp_ref = (void *)TObjPlayer::init_forward_default;
