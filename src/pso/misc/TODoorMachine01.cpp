#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_80440ED0[];
extern char lbl_80440EE4[];
extern char lbl_80440F10[];
extern const char *bm_fs_obj_ki_doa_a_model_names[2];
extern const char *bm_fs_obj_ki_doa_a_motion_names[2];
extern BmlResourceDescriptor todoormachine01_resource_descriptor;
}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_80163158_lbl_804B1608 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80163158___vt__15TODoorMachine01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

typedef struct Door_80162A70 {
    u8 pad0[0xC8];
    s32 fC8;
    s32 fCC;
    u32 fD0;
    s32 fD4;
    s32 fD8;
} Door_80162A70;

struct Node_80162D7C {
    u8 pad0[4];
    s32 f4;
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0x2C - 0x14];
    Node_80162D7C *child;
    Node_80162D7C *next;
};

struct Model_80162D7C { u8 pad[0x2C]; Node_80162D7C *root; };

struct VBase_80162D7C { char pad[0x18]; };

struct VObj_80162D7C : VBase_80162D7C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Door_80162D7C : VObj_80162D7C {
    u8 pad1C[0x34 - 0x1C];
    Model_80162D7C *model;
    u8 pad38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xAC - 0x64];
    s32 fAC;
    f32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    f32 fC0;
    f32 fC4;
    u8 padC8[0xD0 - 0xC8];
    u32 fD0;
};

extern "C" {
M2C_UNK set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DB4F4;
extern const f32 lbl_805DB4F8;
extern const f32 lbl_805DB4FC;
extern const f32 lbl_805DB500;
void TODoorMachine01__vt13(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80163158_lbl_804B1608 TODoorMachine01__collision_body_parts;
extern M2C_UNK __vt__15TODoorMachine01[];
extern s32 TODoorMachine01__class_name;
extern u32 TODoorMachine01__model_resource;
extern const f32 lbl_805DB4FC;
extern const f32 lbl_805DB508;
u8 *TODoorMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void play_door_sound(void *);
u8 is_current_floor_switch_set(u16);
void TODoorMachine01__vt12(Door_80162A70 *self);
s32 is_in_view_depth(void *, f32);
int rotate_matrix_y(int, int);
int push_matrix();
int pop_matrix();
int post_translate_matrix(void *);
int set_global_param__8TObjFishFi(int);
int draw_ginja_model(int);
int draw_ginja_model_with_motion(void *, int, f32);
void translate_matrix(s32, f32, f32, f32);
extern s32 *TODoorMachine01__global_param_id_array;
extern const f32 lbl_805DB504;
void render__15TODoorMachine01Fv(Door_80162D7C *self);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void translate_matrix(s32, f32, f32, f32);
int push_matrix();
int pop_matrix();
int draw_ginja_model(int);
M2C_UNK set_chunk_material_color(void *, int);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void draw_part_models__15TODoorMachine01FiPvi(s32 arg0, u8 *arg1, s32 arg2);
u32 load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
void *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 load_gvm_texture_file(void *);
s32 is_online_ready__6TLobbyFv();
extern u8 lbl_80440F38[];
extern u8 lbl_80440F50[];
extern u8 bm_fs_obj_ki_doa_resource_descriptor[];
extern s32 enable_v2_features;
extern u32 TODoorMachine01__model_resource;
extern s32 *TODoorMachine01__global_param_id_array;
void load_resources__15TODoorMachine01Fv(void);
}

extern "C" {

void TODoorMachine01__vt15(u8 *arg0);
void TODoorMachine01__vt18(void);
void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1);
void *create__15TODoorMachine01FPv(void *arg0);
void free_resources__15TODoorMachine01Fv(void);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TODoorMachine01__vt18(void) {  }

extern const f32 lbl_805DB4F0;

void TODoorMachine01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (is_any_player_within_radius_xz(lbl_805DB4F0) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        play_sound_effect(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorMachine01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (is_any_player_within_radius_xz((f32) (lbl_805DB4F4)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((M2C_UNK)((int) (0x4004BC01)), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    }
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 0x100000) {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + lbl_805DB4F8);
        if (lbl_805DB4FC <= M2C_FIELD(arg0, f32 *, 0xE0)) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFEFFFFF);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) - lbl_805DB4F8);
        if (M2C_FIELD(arg0, f32 *, 0xE0) <= lbl_805DB500) {
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0x100000);
        }
    }
}

void TODoorMachine01__vt12(Door_80162A70 *self) {
    s32 i;
    s32 j;
    s32 k;
    switch (self->fCC) {
    case 1:
        play_door_sound(self);
        self->fD0 |= 0xF0001;
        self->fD4 = 4;
        break;
    case 2:
        self->fD0 &= ~0xF0000;
        if (self->fD8 == 1) {
            if (is_current_floor_switch_set(self->fC8) == 1) {
                self->fD4 = 4;
                self->fD0 |= 0xF0000;
            } else {
                self->fD4 = 0;
            }
        } else {
            self->fD4 = 4 - self->fD8;
            for (i = 0; i < self->fD8; i++) {
                if (is_current_floor_switch_set(self->fC8 + i) == 1) {
                    self->fD4++;
                }
            }
            for (j = 0; j < self->fD4; j++) {
                self->fD0 |= 1 << (j + 16);
            }
        }
        if (self->fD4 == 4) {
            play_door_sound(self);
            self->fD0 |= 1;
        } else {
            self->fD0 &= ~1;
        }
        break;
    case 3:
        if (self->fD8 == 1) {
            if (is_current_floor_switch_set(self->fC8) == 1) {
                self->fD4 = 4;
                self->fD0 |= 0xF0000;
            } else {
                self->fD4 = 0;
            }
        } else {
            self->fD4 = 4 - self->fD8;
            for (k = 0; k < self->fD8; k++) {
                if (is_current_floor_switch_set(self->fC8 + k) == 1) {
                    self->fD4++;
                    self->fD0 |= 1 << (k + 16);
                }
            }
        }
        if (self->fD4 == 4) {
            play_door_sound(self);
            self->fD0 |= 1;
        }
        break;
    default:
        self->fD0 &= ~0xF0001;
        break;
    }
}

void draw_part_models__15TODoorMachine01FiPvi(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *p = arg1;
    s32 temp_r4;
    if (arg2 != 1) {
        temp_r4 = model_render_flags;
        lbl_805D5660 = temp_r4;
        model_render_flags = temp_r4 | 0x10;
        set_chunk_material_color((void *) (arg0 + 0xDC), (int) (temp_r4));
    }
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(p, f32 *, 8)), (f32) (M2C_FIELD(p, f32 *, 0xC)), (f32) (M2C_FIELD(p, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
    p = M2C_FIELD(p, u8 **, 0x2C);
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(p, f32 *, 8)), (f32) (M2C_FIELD(p, f32 *, 0xC)), (f32) (M2C_FIELD(p, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(p, s32 *, 4)));
    pop_matrix();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    if (arg2 != 1) {
        ((void (*)(void *))set_chunk_material_color)(chunk_material_color_half_alpha_f32);
        model_render_flags = lbl_805D5660;
    }
}

void render__15TODoorMachine01Fv(Door_80162D7C *self) {
    u32 bit;
    Node_80162D7C *n;
    u32 fl;
    if (self->m8(self->fC0, self->fC4) != 0 && is_in_view_depth(self, lbl_805DB504) != 0) {
        push_matrix();
        post_translate_matrix((u8 *)self + 0x38);
        rotate_matrix_y(0, self->f60);
        if (self->fAC == 0) {
            bit = self->fD0;
            n = self->model->root;
            fl = (bit >> 16) & 1;
            set_global_param__8TObjFishFi(TODoorMachine01__global_param_id_array[fl]);
            push_matrix();
            translate_matrix(0, n->x, n->y, n->z);
            draw_ginja_model(n->f4);
            draw_part_models__15TODoorMachine01FiPvi((s32)(self), (u8 *)(n->child), (s32)(fl));
            pop_matrix();
            n = self->model->root->next;
            fl = (self->fD0 >> 17) & 1;
            set_global_param__8TObjFishFi(TODoorMachine01__global_param_id_array[fl]);
            push_matrix();
            translate_matrix(0, n->x, n->y, n->z);
            draw_ginja_model(n->f4);
            n = n->child;
            draw_part_models__15TODoorMachine01FiPvi((s32)(self), (u8 *)(n), (s32)(fl));
            n = n->next;
            fl = (self->fD0 >> 18) & 1;
            set_global_param__8TObjFishFi(TODoorMachine01__global_param_id_array[fl]);
            draw_part_models__15TODoorMachine01FiPvi((s32)(self), (u8 *)(n), (s32)(fl));
            pop_matrix();
            n = self->model->root->next->next;
            fl = (self->fD0 >> 19) & 1;
            set_global_param__8TObjFishFi(TODoorMachine01__global_param_id_array[fl]);
            push_matrix();
            translate_matrix(0, n->x, n->y, n->z);
            draw_ginja_model(n->f4);
            draw_part_models__15TODoorMachine01FiPvi((s32)(self), (u8 *)(n->child), (s32)(fl));
            pop_matrix();
        } else {
            set_global_param__8TObjFishFi(TODoorMachine01__global_param_id_array[1]);
            draw_ginja_model_with_motion(self->model, self->fBC, self->fB0);
        }
        pop_matrix();
    }
}

void *create__15TODoorMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorMachine01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TODoorMachine01__model_resource;
extern s32 *TODoorMachine01__global_param_id_array;

void free_resources__15TODoorMachine01Fv(void) {
    if ((s32 *) TODoorMachine01__global_param_id_array != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorMachine01__global_param_id_array);
        if ((s32 *) TODoorMachine01__global_param_id_array != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorMachine01__global_param_id_array);
            TODoorMachine01__global_param_id_array = NULL;
        }
    }
    if ((u32) TODoorMachine01__model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorMachine01__model_resource, 1);
        TODoorMachine01__model_resource = 0U;
    }
}

extern M2C_UNK __vt__15TODoorMachine01[];

void load_resources__15TODoorMachine01Fv(void) {
    void *p;
    TODoorMachine01__global_param_id_array = (s32 *)alloc_buffer__11TOBoss4RockFPv(8);
    if (enable_v2_features == 1 && is_online_ready__6TLobbyFv() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 1, &todoormachine01_resource_descriptor, 0, 0, 0);
        }
        TODoorMachine01__model_resource = (u32)p;
        TODoorMachine01__global_param_id_array[0] = load_gvm_texture_file(lbl_80440F38);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = (void *)load_resource_from_descriptor(p, 1, bm_fs_obj_ki_doa_resource_descriptor, 0, 0, 0);
        }
        TODoorMachine01__model_resource = (u32)p;
        TODoorMachine01__global_param_id_array[0] = load_gvm_texture_file(lbl_80440F50);
    }
    TODoorMachine01__global_param_id_array[1] = *(s32 *)(*(u8 **)(TODoorMachine01__model_resource + 0x42C) + 0xC);
}

void *__dt__15TODoorMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorMachine01;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80163158_lbl_804B1608_size[sizeof(RecoveredGlobal_80163158_lbl_804B1608) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80163158___vt__15TODoorMachine01_size[sizeof(RecoveredGlobal_80163158___vt__15TODoorMachine01) == 0x54 ? 1 : -1];
u8 *TODoorMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80163158___vt__15TODoorMachine01 *)&__vt__15TODoorMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TODoorMachine01__class_name;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODoorMachine01__model_resource), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODoorMachine01__model_resource), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&TODoorMachine01__model_resource), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB4FC);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB508;
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorMachine01__collision_body_parts.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    } else if (temp_r0 > 4) {
        M2C_FIELD(arg0, s32 *, 0x88) = 4;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) (4 - M2C_FIELD(arg0, s32 *, 0xD4));
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB4FC;
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB4FC;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_fs_obj_ki_doa_a_model_names[2] = { lbl_80440ED0, NULL };
__declspec(section ".data") const char *bm_fs_obj_ki_doa_a_motion_names[2] = { lbl_80440EE4, NULL };
BmlResourceDescriptor todoormachine01_resource_descriptor = { lbl_80440F10, bm_fs_obj_ki_doa_a_model_names, bm_fs_obj_ki_doa_a_motion_names, 1, 1 };
}
