#include "pso/item/TItemEffectWeapon.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1);
void TItemEffectWeapon__sub_8036340C(void);
void TItemEffectWeapon__sub_80363410(void);
void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param);
void *__dt__17TItemEffectWeaponFv(void *self, s32 flag);

void decrement_timer__17TItemEffectWeaponFPv(void *, s32);
void *destroy__11TItemMagSubFPvs(void *, s32);
int free__11TOBoss4RockFUi(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
void  free_to_heap__11TItemMagSubFPv(void *);
void  init_object__21TItemEffArmorParticleFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void* memcpy(void* destination, const void* source, size_t size);

extern M2C_UNK lbl_804F28E0[];

void *TItemEffectWeapon__sub_803633B4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F28E0;
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
        decrement_timer__17TItemEffectWeaponFPv(&segment[0].color, 0x3F);
        if ((segment[0].color & 0xFF000000) == 0) {
            vertex_count = i << 1;
            return;
        }
        decrement_timer__17TItemEffectWeaponFPv((u8*)vertices + offset + 0x1C, 0x3F);
        i++;
        offset += 0x20;
    }
}

extern "C" {

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

extern "C" {

extern void *__vt__17TItemEffectWeapon[];

void *__dt__17TItemEffectWeaponFv(void *self, s32 flag) {
    if (self) {
        M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
        TItemEffectWeapon::release_trail_buffer((void*)M2C_FIELD(self, s32 *, 0x1C));
        destroy__11TItemMagSubFPvs(self, 0);
        if ((s16)flag > 0) {
            free_to_heap__11TItemMagSubFPv(self);
        }
    }
    return self;
}

extern void *__vt__17TItemEffectWeapon[];
extern s32 lbl_805D4470;

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param) {
    init_object__21TItemEffArmorParticleFPv(self);
    M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
    M2C_FIELD(self, s32 *, 0) = lbl_805D4470;
    M2C_FIELD(self, s32 *, 0x1C) = (s32)TItemEffectWeapon::allocate_trail_buffer();
    M2C_FIELD(self, s32 *, 0x24) = param;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    return self;
}

    extern TItemEffectWeapon::TrailVertex* lbl_805D6FB0;
    extern s32* lbl_805D6FB4;

}

void TItemEffectWeapon::release_trail_buffer(void* buffer) {
    if (buffer != NULL) {
        s32 vertex_offset = ((u8*)buffer - (u8*)lbl_805D6FB0) / 16;
        lbl_805D6FB4[(u32)vertex_offset >> 5] = 0;
    }
}

TItemEffectWeapon::TrailVertex* TItemEffectWeapon::allocate_trail_buffer() {
    s32* allocated = lbl_805D6FB4;
    for (s32 i = 0; i < 16; i++) {
        if (allocated[i] == 0) {
            allocated[i] = 1;
            return lbl_805D6FB0 + i * 32;
        }
    }
    return NULL;
}

void TItemEffectWeapon::free_static_effects() {
    free__11TOBoss4RockFUi(lbl_805D6FB4);
    free__11TOBoss4RockFUi(lbl_805D6FB0);
    lbl_805D6FB4 = NULL;
    lbl_805D6FB0 = NULL;
}
