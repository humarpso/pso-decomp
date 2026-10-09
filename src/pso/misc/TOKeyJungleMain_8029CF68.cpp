#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8029D3A4_8029CF68 { char pad[0x18]; };

struct VObj_8029D3A4_8029CF68 : Base_8029D3A4_8029CF68 {
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
};

struct Base_8029CF68 { char pad[0x18]; };

struct VObj_8029CF68 : Base_8029CF68 {
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

struct VBase_18_076902 { char pad[0x18]; };

struct VObj_18_076902 : VBase_18_076902 {
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
    virtual M2C_UNK m20();
};

struct RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8_size[sizeof(RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8) == 0xC ? 1 : -1];

struct RecoveredGlobal_8029CFEC_lbl_804DC590 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8029CFEC_lbl_804DC590_size[sizeof(RecoveredGlobal_8029CFEC_lbl_804DC590) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8029D200_TOKeyJungleMain__data_804653C8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8029D438_lbl_804DC5A0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8029D438___vt__15TOKeyJungleMain {
    M2C_UNK value;
    u8 remaining[0x70];
};

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
s32 get_bml_motion(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();
extern u32 TOKeyJungleMain__data_805D65E0;
void render__15TOKeyJungleMainFv(u8 *arg0);
void TOKeyJungleMain__vt15(void *arg0);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
extern M2C_UNK __vt__15TOKeyJungleMain[];
void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1);
s32 is_lobby_event_active();
extern s32 TObjFish__data_805D65EC;
u8 update_state__8TObjFishFPv(void *arg0);
s32 get_bml_motion(s32, M2C_UNK);
extern u32 TOKeyJungleMain__data_805D65E0;
extern const f32 lbl_805DDD38;
extern const f32 lbl_805DDD3C;
void TOKeyJungleMain__vt14(u8 *arg0);
s32 get_difficulty_flag_bit__12TLevelSelectFii(s32, s32);
extern RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8 TOKeyJungleMain__data_804653C8;
extern s32 game_difficulty_selection;
void TOKeyJungleMain__vt12(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8029CFEC_lbl_804DC590 lbl_804DC590;
extern u32 TOKeyJungleMain__data_805D65E0;
void load_static_resource__15TOKeyJungleMainFv(void);
s32 dispatch_by_phase__15TOKeyJungleMainFiUs(void *, int);
extern RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8 TOKeyJungleMain__data_804653C8;
extern s32 game_difficulty_selection;
void TOKeyJungleMain__vt19(u8 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_switch_id__5TOKeyFPv(void *);
s32 TOKey__ct(void *);
extern RecoveredGlobal_8029D438_lbl_804DC5A0 TOKeyJungleMain_collision_body_parts;
extern M2C_UNK __vt__15TOKeyJungleMain[];
extern s32 lbl_805D3D50;
extern const f32 lbl_805DDD3C;
u8 *TOKeyJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK set_global_count__12TObjNpcEnemyFi(M2C_UNK);
void debug_printf_at(s32, const char *, ...);
extern RecoveredGlobal_8029D238_TOKeyJungleMain__data_804653C8 TOKeyJungleMain__data_804653C8;
extern char lbl_80465A2C[];
void TOKeyJungleMain__vt24(void *arg0);
}

extern "C" {

void *create__15TOKeyJungleMainFPv(void *arg0);
void release_static_resource__15TOKeyJungleMainFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TOKeyJungleMainFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyJungleMain__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKeyJungleMain__data_805D65E0;

void release_static_resource__15TOKeyJungleMainFv(void) {
    if ((u32) TOKeyJungleMain__data_805D65E0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyJungleMain__data_805D65E0, 1);
        TOKeyJungleMain__data_805D65E0 = 0U;
    }
}

void load_static_resource__15TOKeyJungleMainFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804DC590.value, 0, 0, 0));
    }
    (*(s32 *)&TOKeyJungleMain__data_805D65E0) = var_r0;
}

void TOKeyJungleMain__vt24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = M2C_FIELD(arg0, s32 *, 0x84);
    if (M2C_FIELD(arg0, s32 *, 0xC8) < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC8) > 2) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80465A2C, ((s32 *)&TOKeyJungleMain__data_804653C8)[M2C_FIELD(arg0, s32 *, 0xC8)]);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__15TOKeyJungleMainFv(u8 *arg0) {
    if (((VObj_8029CF68 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) {
        switch (M2C_FIELD(arg0, s32 *, 0xD4)) {
        case 0:
            TObjFish__sub_8001EDB0((*(s32 *)&TOKeyJungleMain__data_805D65E0), 1);
            set_global_param__8TObjFishFi();
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            get_bml_model((*(s32 *)&TOKeyJungleMain__data_805D65E0), 1);
            draw_ginja_object();
            pop_matrix();
            return;
        case 1:
            TObjFish__sub_8001EDB0((*(s32 *)&TOKeyJungleMain__data_805D65E0), 1);
            set_global_param__8TObjFishFi();
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_model_with_motion(get_bml_model((*(s32 *)&TOKeyJungleMain__data_805D65E0), 1), get_bml_motion((*(s32 *)&TOKeyJungleMain__data_805D65E0), 1), M2C_FIELD(arg0, f32 *, 0xE8));
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model_with_motion(get_bml_model((*(s32 *)&TOKeyJungleMain__data_805D65E0), 0), get_bml_motion((*(s32 *)&TOKeyJungleMain__data_805D65E0), 0), M2C_FIELD(arg0, f32 *, 0xEC));
            end_effect_render__13TParticleCtrlFv();
            pop_matrix();
            break;
        }
    }
}

typedef char RecoveredGlobal_8029D200_TOKeyJungleMain__data_804653C8_size[sizeof(RecoveredGlobal_8029D200_TOKeyJungleMain__data_804653C8) == 0xC ? 1 : -1];
void TOKeyJungleMain__vt19(u8 *arg0) {
    dispatch_by_phase__15TOKeyJungleMainFiUs((void *) (game_difficulty_selection), (int) (M2C_FIELD(&(*(RecoveredGlobal_8029D200_TOKeyJungleMain__data_804653C8 *)&TOKeyJungleMain__data_804653C8).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0xC8) * 4))));
}

void TOKeyJungleMain__vt12(u8 *arg0) {
    s32 temp_r31;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0xD4);
        if (get_difficulty_flag_bit__12TLevelSelectFii(game_difficulty_selection, M2C_FIELD(&TOKeyJungleMain__data_804653C8.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0xC8) * 4))) != 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0xD4)) {
            ((VObj_18_076902 *)(arg0))->m20();
        }
    }
}

void TOKeyJungleMain__vt14(u8 *arg0) {
  unsigned int new_var;
  s32 temp_r3;
  s32 temp_r3_3;
  u32 temp_r3_2;
  new_var = 0;
  temp_r3 = get_bml_motion((s32)((*(u8 * *)&TOKeyJungleMain__data_805D65E0)), (M2C_UNK)(1));
  *((f32 *) (((s8 *) arg0) + 0xE8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xE8))) + lbl_805DDD38);
  temp_r3_2 = (*((s32 *) (((s8 *) temp_r3) + 4))) - 1;
  if ((*((f32 *) (((s8 *) arg0) + 0xE8))) > ((f32) temp_r3_2))
  {
    *((f32 *) (((s8 *) arg0) + 0xE8)) = (f32) temp_r3_2;
  }
  temp_r3_3 = get_bml_motion((s32)((*(u8 * *)&TOKeyJungleMain__data_805D65E0)), (M2C_UNK)(new_var));
  *((f32 *) (((s8 *) arg0) + 0xEC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xEC))) + lbl_805DDD38);
  temp_r3_2 = (*((s32 *) (((s8 *) temp_r3_3) + 4))) - 1;
  if ((*((f32 *) (((s8 *) arg0) + 0xEC))) > ((f32) temp_r3_2))
  {
    *((f32 *) (((s8 *) arg0) + 0xEC)) = (f32) lbl_805DDD3C;
  }
}

void TOKeyJungleMain__vt15(void *arg0) {
    struct VObj_8029D3A4_8029CF68 *o = (struct VObj_8029D3A4_8029CF68 *)arg0;
    o->m18();
}
void *__dt__15TOKeyJungleMainFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOKeyJungleMain;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8029D438_lbl_804DC5A0_size[sizeof(RecoveredGlobal_8029D438_lbl_804DC5A0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8029D438___vt__15TOKeyJungleMain_size[sizeof(RecoveredGlobal_8029D438___vt__15TOKeyJungleMain) == 0x74 ? 1 : -1];
u8 *TOKeyJungleMain__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029D438___vt__15TOKeyJungleMain *)&__vt__15TOKeyJungleMain).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D50;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    init_collision_body_parts((void *) (arg0), (void *) (&TOKeyJungleMain_collision_body_parts.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) < 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) > 2) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 2;
    }
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DDD3C;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DDD3C;
    return arg0;
}

u8 update_state__8TObjFishFPv(void *arg0) {
    s16 temp_r0;
    if ((s32) TObjFish__data_805D65EC == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x90);
        switch (temp_r0) {
        case 0:
            if (is_lobby_event_active() == 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 2;
                M2C_FIELD(arg0, s16 *, 0x92) = 0x28;
            }
            goto Lend;
        case 2:
            M2C_FIELD(arg0, s16 *, 0x92) = (s16) (M2C_FIELD(arg0, s16 *, 0x92) - 1);
            if (M2C_FIELD(arg0, s16 *, 0x92) <= 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 3;
            }
            goto Lend;
        case 3:
        default:
            if (is_lobby_event_active() != 0) {
                M2C_FIELD(arg0, s16 *, 0x90) = 0;
            }
        }
Lend:
        return (u8) (M2C_FIELD(arg0, s16 *, 0x90) == 3);
    }
    return 1U;
}

}
