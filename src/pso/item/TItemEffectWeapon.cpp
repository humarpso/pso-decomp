#include "pso/item/TItemEffectWeapon.h"

extern "C" {
u32 get_mode__11TCameraCtrlFPv(void*);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void set_depth_buffer_settings_1__Fv();
void restore_saved_depth_alpha_state();
void init_xyz_limits__10TObjPlayerFv();
void reset_transform_state__10TObjPlayerFv();
void reset_player_transform();
void draw_untextured_trail_strip(TItemEffectWeapon::TrailVertex*, s32);
void TObjPlayer__sub_803DF768(s32);
void set_flag_9__7TObjectFv(void*);
void* mem_alloc(size_t);
extern u8 main_task[];
extern u32 lbl_805D5660;
extern u32 model_render_flags;

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1);
void TItemEffectWeapon__sub_8036340C(void);
void TItemEffectWeapon__sub_80363410(void);
void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param);
void *__dt__17TItemEffectWeaponFv(void *self, s32 flag);

void decrement_timer__17TItemEffectWeaponFv(void *, s32);
void *__dt__15TItemHeapObjectFv(void *, s32);
int mem_free(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
void  __dl__15TItemHeapObjectFPv(void *);
void  __ct__15TItemHeapObjectFP7TObject(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void* memcpy(void* destination, const void* source, size_t size);

extern s32 lbl_804F28E0[];

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F28E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void TItemEffectWeapon__sub_8036340C(void) {  }
void TItemEffectWeapon__sub_80363410(void) {  }

}

void TItemEffectWeapon::step() {
    s32 offset;
    TrailVertex* segment;
    s32 i;
    i = 0;
    offset = 0;
    while (i != vertex_count / 2) {
        segment = (TrailVertex*)((u8*)vertices + offset);
        decrement_timer__17TItemEffectWeaponFv(&segment[0].color, 0x3F);
        if ((segment[0].color & 0xFF000000) == 0) {
            vertex_count = i << 1;
            return;
        }
        decrement_timer__17TItemEffectWeaponFv((u8*)vertices + offset + 0x1C, 0x3F);
        i++;
        offset += 0x20;
    }
}

void TItemEffectWeapon::push_trail_entry(const f32* first, const f32* second) {
    if (vertices != NULL && first != NULL && second != NULL) {
        if (vertex_count == 0x20) {
            vertex_count -= 2;
        }
        s32 count = vertex_count;
        if (count != 0) {
            TrailVertex* buffer = vertices;
            memcpy(buffer + 2, buffer, count * sizeof(TrailVertex));
        }
        vertices[0].x = second[0];
        vertices[0].y = second[1];
        vertices[0].z = second[2];
        vertices[0].color = color;
        vertices[1].x = first[0];
        vertices[1].y = first[1];
        vertices[1].z = first[2];
        vertices[1].color = color & 0x4FFFFFFF;
        vertex_count += 2;
    }
}

void TItemEffectWeapon::render_trail() {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x200) {
        if (vertex_count != 0 && vertices != NULL) {
            begin_effect_render__13TParticleCtrlFv();
            lbl_805D5660 = model_render_flags;
            set_depth_buffer_settings_1__Fv();
            model_render_flags |= 0x8000;
            init_xyz_limits__10TObjPlayerFv();
            if (vertex_count > 2) {
                TObjPlayer__sub_803DF768(1);
                draw_untextured_trail_strip(vertices, vertex_count);
                reset_player_transform();
            }
            reset_transform_state__10TObjPlayerFv();
            model_render_flags = lbl_805D5660;
            restore_saved_depth_alpha_state();
            end_effect_render__13TParticleCtrlFv();
        }
    } else {
        set_flag_9__7TObjectFv(this);
    }
}

extern "C" {

extern void *__vt__17TItemEffectWeapon[];

void *__dt__17TItemEffectWeaponFv(void *self, s32 flag) {
    if (self) {
        *(void **)((s8 *)self + 0x18) = __vt__17TItemEffectWeapon;
        TItemEffectWeapon::release_trail_buffer((void*)*(s32 *)((s8 *)self + 0x1C));
        __dt__15TItemHeapObjectFv(self, 0);
        if ((s16)flag > 0) {
            __dl__15TItemHeapObjectFPv(self);
        }
    }
    return self;
}

extern void *__vt__17TItemEffectWeapon[];
extern s32 TItemEffectWeapon__class_name;

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param) {
    __ct__15TItemHeapObjectFP7TObject(self);
    *(void **)((s8 *)self + 0x18) = __vt__17TItemEffectWeapon;
    *(s32 *)((s8 *)self + 0) = TItemEffectWeapon__class_name;
    *(s32 *)((s8 *)self + 0x1C) = (s32)TItemEffectWeapon::allocate_trail_buffer();
    *(s32 *)((s8 *)self + 0x24) = param;
    *(s32 *)((s8 *)self + 0x20) = 0;
    *(s32 *)((s8 *)self + 0x28) = 0;
    return self;
}

    extern TItemEffectWeapon::TrailVertex* item_weapon_trail_vertex_buffer;
    extern s32* weapon_trail_slot_bitmap;

}

void TItemEffectWeapon::release_trail_buffer(void* buffer) {
    if (buffer != NULL) {
        s32 vertex_offset = ((u8*)buffer - (u8*)item_weapon_trail_vertex_buffer) / 16;
        weapon_trail_slot_bitmap[(u32)vertex_offset >> 5] = 0;
    }
}

TItemEffectWeapon::TrailVertex* TItemEffectWeapon::allocate_trail_buffer() {
    s32* allocated = weapon_trail_slot_bitmap;
    for (s32 i = 0; i < 16; i++) {
        if (allocated[i] == 0) {
            allocated[i] = 1;
            return item_weapon_trail_vertex_buffer + i * 32;
        }
    }
    return NULL;
}

void TItemEffectWeapon::free_static_effects() {
    mem_free(weapon_trail_slot_bitmap);
    mem_free(item_weapon_trail_vertex_buffer);
    weapon_trail_slot_bitmap = NULL;
    item_weapon_trail_vertex_buffer = NULL;
}

void TItemEffectWeapon::initialize_static_effects() {
    item_weapon_trail_vertex_buffer = (TrailVertex*)mem_alloc(16 * 32 * sizeof(TrailVertex));
    weapon_trail_slot_bitmap = (s32*)mem_alloc(16 * sizeof(s32));
    for (s32 i = 0; i < 16; i++) {
        weapon_trail_slot_bitmap[i] = 0;
    }
}
