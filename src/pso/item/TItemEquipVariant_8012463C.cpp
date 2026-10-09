#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_80124694(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80124708(u8 *arg0);
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK push_matrix(int);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(void *);
extern const f32 lbl_805DAD28;
extern const f32 lbl_805DAD2C;
void TObjPlayer__sub_8012480C(void);
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);
M2C_UNK spawn_slot_emitter__18TItemShootParticleFPvii(M2C_UNK, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
s32 __nw__7TObjectFUl(M2C_UNK);
typedef u8 *(*Fn_80124694_3)(void *, M2C_UNK, void *);
typedef s32 (*Fn_80124810_5)(s32, s32, s32, s32, f32);

extern M2C_UNK lbl_804A204C[];

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A204C;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void *TObjPlayer__sub_80124694(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A204C;
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 12);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = -1;
    return arg0;
}

u8 *TObjPlayer__sub_80124708(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((Fn_80124694_3)TObjPlayer__sub_80124694)(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void reset_owner_target__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (is_owner_alive__10TObjPlayerFPv() != 0) {
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x58));
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
            temp_r3_2 = (unsigned char *) (M2C_FIELD(temp_r3, void **, 0x2C));
            temp_r31 = (unsigned char *) (M2C_FIELD(temp_r3_2, void **, 0x30));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD28;
            push_matrix((int) (temp_r3_2));
            notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
            post_translate_matrix((void *) (arg0 + 0x1C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
            rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
            draw_ginja_object((void *) (M2C_FIELD(arg0, void **, 0x58)));
            pop_matrix();
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) lbl_805DAD2C;
        }
    }
}

void TObjPlayer__sub_8012480C(void) {  }

extern M2C_UNK lbl_804A2148[];

void *ct_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2148;
    return arg0;
}

s32 spawn_shoot_particle_entity__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 var_r0;
    s32 var_r31;

    var_r31 = 0;
    if (arg0 != 0) {
        var_r0 = __nw__7TObjectFUl(0x6C);
        if (var_r0 != 0) {
            var_r0 = ((Fn_80124810_5)ct_shoot_model__10TObjPlayerFPv)(var_r0, arg0, arg1, arg2, farg0);
        }
        var_r31 = var_r0;
    }
    var_r0 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if (var_r0 != 0U) {
        spawn_slot_emitter__18TItemShootParticleFPvii(var_r0, 0x1BB, 0);
    }
    return var_r31;
}

}
