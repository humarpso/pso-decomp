#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" u8 * TODoorJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);

extern "C" {

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2);
s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1);
f32 xz_distance_squared(s32, s32);
s32 update_object_view_visibility(s32, f32, f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_indexed_flags(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4DF0;

s32 TODoorJungleMain__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (xz_distance_squared(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        return 1;
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}

extern const f64 lbl_80465410;

void TODoorJungleMain__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((arg1 != NULL) && ((s16) *arg1 == 1)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        if (arg2 == 0) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - 1);
            set_indexed_flags((M2C_UNK)arg0, 0, 8);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xDC) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC));
                M2C_FIELD(arg0, u32 *, 0xDC) = 0U;
            }
        }
    }
}

}

extern "C" {
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
u8 *get_player_by_client_id(s32);
extern const f32 lbl_805DDCD0;
s32 is_any_player_near(s32 arg0);
}

extern "C" {

s32 is_any_player_near(s32 arg0) {
  f32 temp_f31;
  s32 temp_r31;
  s32 var_r29;
  s32 new_var;
  u8 *temp_r3;
  temp_f31 = lbl_805DDCD0;
  var_r29 = 0;
  loop_1:
  temp_r3 = (u8 *) get_player_by_client_id(var_r29);
  if (temp_r3 != 0)
  {
    temp_r31 = get_field_3e4__10TObjPlayerFPv(temp_r3);
    new_var = get_current_floor();
    if ((new_var == temp_r31) && (((f32 (*)(void *, void *))xz_distance_squared)((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < temp_f31))
    {
      return 1;
    }
  }
  var_r29 += 1;
  if (var_r29 >= 4)
  {
    return 0;
  }
  goto loop_1;
}

}

extern "C" {
void fn_801F4560(int, int);
extern s32 TOKeyJungleMain__data_804653C8[];
void TOKeyJungleMain__sub_8029B2C4(void* _w0);
}

extern "C" {

void TLobby__sub_8029B2A4(void* p);
void *TODoorJungleMain__create(void *arg0);
void *__nw__7TObjectFUl(int);

void TLobby__sub_8029B2A4(void* p) { TOKeyJungleMain__sub_8029B2C4((void*)(p)); }

extern void *tl_05;

void TOKeyJungleMain__sub_8029B2C4(void* _w0) {
    s32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            fn_801F4560(i, TOKeyJungleMain__data_804653C8[j]);
        }
    }
}

void *TODoorJungleMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TODoorJungleMain__ct)(o, tl_05, arg0);
    }
    return o;
}

}

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_38 { u8 bytes[0x38]; };

struct M2CCopy_3C { u8 bytes[0x3c]; };

struct RecoveredGlobal_8029B924_lbl_804DC014 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8029B924___vt__16TODoorJungleMain {
    M2C_UNK value;
    u8 remaining[0x54];
};

typedef s32 M2C_UNK;
struct VBase_8029B428 { char pad[0x18]; };

struct VObj_8029B428 : VBase_8029B428 {
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

struct Door_8029B428 : VObj_8029B428 {
    u8 pad1c[0x38 - 0x1C];
    u8 xf[0x28];
    s32 f60;
    u8 pad64[0xB4 - 0x64];
    f32 fb4;
    u8 padb8[4];
    s32 fbc;
    f32 fc0;
    f32 fc4;
    u8 padc8[8];
    u32 flags;
    s32 count;
};

struct Ids_8029B428 {
    s32 v[3];
};

extern "C" {
extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80465418;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804DC004;
void load_resources__16TODoorJungleMainFv(void);
s32 get_bml_motion(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_door_base(void *);
s32 create__10TObjMapCsnFi(s32);
extern RecoveredGlobal_8029B924_lbl_804DC014 TODoorJungleMain_collision_body_parts;
extern M2C_UNK __vt__16TODoorJungleMain[];
extern s32 lbl_805D3D20;
extern u32 TODoorJungleMain__data_805D65B8;
extern const f32 lbl_805DDCD8;
extern const f32 lbl_805DDCDC;
extern const f32 lbl_805DDCE0;
extern const f32 lbl_805DDCE4;
extern const f32 lbl_805DDCE8;
extern const f32 lbl_805DDCEC;
extern const f32 lbl_805DDCF0;
u8 *TODoorJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *get_bml_model(u32, int);
M2C_UNK rotate_matrix_y(int, int);
int push_matrix(void *);
int pop_matrix(void);
int post_translate_matrix(void *);
void *set_global_param__8TObjFishFi(void *);
int draw_ginja_object(void *);
M2C_UNK draw_ginja_model_with_motion(void *, int, f32);
extern Ids_8029B428 lbl_80465400;
extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;
void render__16TODoorJungleMainFv(Door_8029B428 *self);
}

extern "C" {

}
struct Door_8029B524 {
    u8 pad0[0x38];
    u8 xf[0x98];
    u32 flags;
    s32 count;
};

struct VBase_18_26c409 { char pad[0x18]; };
struct VObj_18_26c409 : VBase_18_26c409 {
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
};

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_8029B640 { s32 x, y, z; };
struct Mtx_8029B640 { f32 m[12]; };

extern "C" {
s32 send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
s32 TLevelSelect__sub_801F441C(s32, s32);
s32 play_sound_effect(int, void *, int, int);
extern s32 TOKeyJungleMain__data_804653C8[3];
extern s32 lbl_805D5550;
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK minimap_render_gate(void *, u32, u16, s32, s32);
M2C_UNK play_persistent_sound(int, void *, void *, int, int);
M2C_UNK matrix_mult_vec(void *, void *, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(void *, void *);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(void *);
extern Vec_8029B640 lbl_804653E8;
extern Vec_8029B640 lbl_804653F4;
extern const f32 lbl_805DDCD4;

#pragma pop

void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1);
void free_static_resources__16TODoorJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TODoorJungleMain__data_805D65B8;
extern u32 lbl_805D65BC;

void free_static_resources__16TODoorJungleMainFv(void) {
    if ((u32) lbl_805D65BC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65BC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65BC);
        lbl_805D65BC = 0U;
    }
    if ((u32) TODoorJungleMain__data_805D65B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TODoorJungleMain__data_805D65B8, 1);
        TODoorJungleMain__data_805D65B8 = 0U;
    }
}

extern M2C_UNK __vt__16TODoorJungleMain[];

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void load_resources__16TODoorJungleMainFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 0x1, &lbl_804DC004.value, 0, 0, 0));
    }
    (*(s32 *)&TODoorJungleMain__data_805D65B8) = var_r0;
    (*(u8 * *)&lbl_805D65BC) = load_gvm_texture_file((s32) &lbl_80465418.value);
}

void render__16TODoorJungleMainFv(Door_8029B428 *self) {
    Ids_8029B428 ids = lbl_80465400;
    s32 i;
    if (self->m8(self->fc0, self->fc4) == 1) {
        push_matrix(set_global_param__8TObjFishFi((void *)lbl_805D65BC));
        post_translate_matrix(self->xf);
        rotate_matrix_y(0, self->f60);
        if (self->flags & 1) {
            draw_ginja_model_with_motion(get_bml_model(TODoorJungleMain__data_805D65B8, 3), self->fbc, self->fb4);
        } else {
            draw_ginja_object(get_bml_model(TODoorJungleMain__data_805D65B8, 3));
            for (i = 0; i < 3 - self->count; i++) {
                draw_ginja_object(get_bml_model(TODoorJungleMain__data_805D65B8, ids.v[i]));
            }
        }
        pop_matrix();
    }
}

void TODoorJungleMain__vt12(Door_8029B524 *self) {
    s16 sp8;
    s32 lvl;
    s32 prev;
    s32 i;

    if (!(self->flags & 1)) {
        lvl = lbl_805D5550;
        prev = self->count;
        self->count = 0;
        for (i = 0; i < 3; i++) {
            if (TLevelSelect__sub_801F441C(lvl, TOKeyJungleMain__data_804653C8[i]) != 0) {
                self->count++;
            }
        }
        if (self->count > 0 && self->count != prev) {
            play_sound_effect(0x4C123, self->xf, 0, 0);
        }
        if (self->count == 3 && is_any_player_near((s32)self) != 0) {
            self->flags |= 1;
        } else {
            self->flags &= ~1;
        }
        if ((self->flags & 1) && access_object_saved_state(self, &sp8, 1) == 1) {
            sp8 = 1;
            send_object_state_update(self, &sp8);
        }
    }
}
void run_task__16TODoorJungleMainFv(u8 *arg0) {
    Vec_8029B640 a;
    Vec_8029B640 b;
    Mtx_8029B640 mtx;
    s32 flag;
    f32 t;

    ((VObj_18_26c409 *)(arg0))->m12();
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        flag = 0;
        M2C_FIELD(arg0, f32 *, 0xB4) += M2C_FIELD(arg0, f32 *, 0xB8);
        t = M2C_FIELD(arg0, f32 *, 0xB4);
        if ((f32)(u32)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), s32 *, 4) - 1) - lbl_805DDCD4 < t &&
            t < (f32)(u32)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), s32 *, 4) - 1)) {
            set_indexed_flags((M2C_UNK)arg0, 0, 8);
            if (M2C_FIELD(arg0, void **, 0xDC) != NULL) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC));
                M2C_FIELD(arg0, void **, 0xDC) = NULL;
            }
        } else {
            flag = 1;
        }
        if (M2C_FIELD(arg0, f32 *, 0xB4) > (f32)(u32)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), s32 *, 4) - 1)) {
            flag = 0;
            M2C_FIELD(arg0, f32 *, 0xB4) = (f32)(u32)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), s32 *, 4) - 1);
        } else {
            play_persistent_sound(0x43220, arg0, arg0 + 0x38, 0, 0);
        }
        if (flag != 0) {
            if (++M2C_FIELD(arg0, s32 *, 0xD8) % 30 == 0) {
                a = lbl_804653E8;
                b = lbl_804653F4;
                set_matrix_identity__10TObjPlayerFPv(&mtx);
                set_position_vec3__10TObjPlayerFPvPv(&mtx, arg0 + 0x38);
                rotate_matrix_y((int)&mtx, M2C_FIELD(arg0, s32 *, 0x60));
                matrix_mult_vec(&mtx, &a, &a);
                matrix_mult_vec(&mtx, &b, &b);
                spawn_particle_effect_with_flags(&a, 0x229, 0x800);
                spawn_particle_effect_with_flags(&b, 0x229, 0x800);
            }
        }
        minimap_render_gate(arg0 + 0x38, 0xFF00FF00, M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
    } else {
        minimap_render_gate(arg0 + 0x38, 0xFFFF0000, M2C_FIELD(arg0, s32 *, 0x60), 0, 0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
    }
}
void *__dt__16TODoorJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorJungleMain;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { ((void (*)(void *))queue_destruction__7TObjectFv)(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8029B924_lbl_804DC014_size[sizeof(RecoveredGlobal_8029B924_lbl_804DC014) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8029B924___vt__16TODoorJungleMain_size[sizeof(RecoveredGlobal_8029B924___vt__16TODoorJungleMain) == 0x58 ? 1 : -1];
u8 *TODoorJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    struct CopyStack_8029B924 { u8 bytes[0x3C]; };
    CopyStack_8029B924 copy_storage_8029B924;
    s32 temp_r4;
    init_door_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029B924___vt__16TODoorJungleMain *)&__vt__16TODoorJungleMain).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D20;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xBC) = get_bml_motion((*(u8 * *)&TODoorJungleMain__data_805D65B8), 0);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DDCD8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DDCDC;
    init_collision_body_parts(arg0, (s32) &TODoorJungleMain_collision_body_parts.value, 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DDCE0;
    temp_r4 = arg2 - 4;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DDCE4;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    *(M2CCopy_3C *)(copy_storage_8029B924.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    (*(f32 *)(copy_storage_8029B924.bytes + 0x24)) = lbl_805DDCE8;
    (*(f32 *)(copy_storage_8029B924.bytes + 0x28)) = lbl_805DDCEC;
    (*(f32 *)(copy_storage_8029B924.bytes + 0x2C)) = lbl_805DDCF0;
    (*(s32 *)(copy_storage_8029B924.bytes + 0x30)) = 2;
    M2C_FIELD(arg0, s32 *, 0xDC) = create__10TObjMapCsnFi((s32) (copy_storage_8029B924.bytes));
    return arg0;
}

}
