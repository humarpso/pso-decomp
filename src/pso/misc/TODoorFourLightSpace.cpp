#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
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
    virtual s32 m17();
};

struct Tbl_80289EE0 { s32 v[8]; };

struct Door_80289EE0 { u8 pad[0xD8]; s32 sw[8]; };

struct Door_8028A28C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x10];
    u8 f38[0x28];
    s32 f60;
    u8 pad64[0x24];
    s32 f88;
    u8 pad8c[0x3C];
    s32 fc8;
    u8 padcc[4];
    s32 fd0;
    u8 *fd4;
    u8 *fd8[4];
    u8 *fe8[4];
};

extern "C" {
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base();
u8 *fn_8028A714(s32);
s32 fn_8028A750(int);
s32 fn_8028A78C(int);
extern Tbl_80289EE0 lbl_80450C24;
extern s32 TODoorFourLight__collision_body_params[];
extern s32 __vt__20TODoorFourLightSpace[];
extern s32 lbl_805D3B1C;
extern const f32 lbl_805DD8F4;
extern const f32 lbl_805DD8F8;
u8 *TODoorFourLightSpace__ct(u8 *arg0, s32 arg1, s32 arg2);
void send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, s32);
void play_door_sound(void *);
u8 is_current_floor_switch_set(u16);
void TODoorFourLightSpace__vt12(u8 *arg0);
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 get_instance__12TBoss8DragonFv();
s32 set_global_param__8TObjFishFi();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
u8 is_current_floor_switch_set(u16);
void draw_ginja_model(s32);
s32 draw_lights__20TODoorFourLightSpaceFPv(void *arg0);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
u8 is_current_floor_switch_set(u16);
s32 get_instance__12TBoss8DragonFv();
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi();
void draw_ginja_model(s32);
s32 draw_model_and_lights__20TODoorFourLightRuinsFPv(void *arg0);
}

extern "C" {

struct Base_802898E8 { char pad[0x18]; };
struct VObj_802898E8 : Base_802898E8 {
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

s32 TODoorFourLightSpace__vt17(void *arg0);
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1);
void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1);
void fn_802898E8(void);
void fn_802898EC(void);
void render__20TODoorFourLightSpaceFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 is_in_view_depth(void *, f32);
s32 get_instance__12TBoss8DragonFv();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 set_global_param__8TObjFishFi();

void fn_802898E8(void) {  }
void fn_802898EC(void) {  }
s32 TODoorFourLightSpace__vt17(void *arg0) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC8);
    if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    } else if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
    } else if ((s32) *(s32 *)((s8 *)arg0 + 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            *(s32 *)((s8 *)arg0 + 0xCC) = 3;
        } else {
            *(s32 *)((s8 *)arg0 + 0xCC) = 2;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xCC) = 2;
    }
    return *(s32 *)((s8 *)arg0 + 0xC8);
}
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
    }
}

extern const f32 lbl_805DD8F0;

void TODoorFourLightSpace__vt12(u8 *arg0) {
    s16 sp8;
    s32 fail;
    s32 i;
    switch (*(s32 *)((s8 *)arg0 + 0xCC)) {
    case 1:
        play_door_sound(arg0);
        *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        break;
    case 2:
        fail = 0;
        for (i = 0; i < *(s32 *)((s8 *)arg0 + 0x88); i++) {
            if (is_current_floor_switch_set(*(s32 *)((s8 *)arg0 + 0xC8) + i) == 0) {
                fail = 1;
            }
        }
        if (fail != 0) {
            *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        } else {
            play_door_sound(arg0);
            *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        }
        break;
    case 3:
        if (!(*(s32 *)((s8 *)arg0 + 0xD0) & 1)) {
            s32 bad;
            s32 j;
            bad = 0;
            for (j = 0; j < *(s32 *)((s8 *)arg0 + 0x88); j++) {
                if (is_current_floor_switch_set(*(s32 *)((s8 *)arg0 + 0xC8) + j) == 0) {
                    bad = 1;
                }
            }
            if (bad == 0) {
                play_door_sound(arg0);
                *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
            } else {
                *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
            }
            if (bad == 0 && *(u32 *)((s8 *)arg0 + 0x80) != 0 &&
                access_object_saved_state(arg0, &sp8, 1) == 1) {
                sp8 = 1;
                send_object_state_update(arg0, &sp8);
                access_object_saved_state(arg0, &sp8, 0);
            }
        }
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        break;
    }
}

s32 draw_lights__20TODoorFourLightSpaceFPv(void *arg0) {
    u8 *self = (u8 *)arg0;
    s32 flags[4];
    s32 i;
    u8 *mdl;
    u8 **pa;
    u8 **pb;
    for (i = 0; i < 4; i++) {
        flags[i] = 1;
    }
    if (!(*(s32 *)((s8 *)self + 0xD0) & 1)) {
        s32 j;
        for (j = 0; j < *(s32 *)((s8 *)self + 0x88); j++) {
            if (is_current_floor_switch_set(*(s32 *)((s8 *)self + 0xC8) + j) == 1) {
                flags[j] = 1;
            } else {
                flags[j] = 0;
            }
        }
    }
    mdl = *(u8 **)((s8 *)self + 0xD4);
    pa = (u8 **)(self + 0xD8);
    pb = (u8 **)(self + 0xE8);
    push_matrix();
    ((void (*)(s32))set_global_param__8TObjFishFi)(*(s32 *)((s8 *)self + 0x24));
    post_translate_matrix(self + 0x38);
    rotate_matrix_y(0, *(s32 *)((s8 *)self + 0x60));
    post_translate_matrix(mdl + 8);
    push_matrix();
    post_translate_matrix(*(u8 **)((s8 *)mdl + 0x2C) + 8);
    draw_ginja_model(*(s32 *)((s8 *)(*(u8 **)((s8 *)mdl + 0x2C)) + 4));
    pop_matrix();
    post_translate_matrix(*(u8 **)((s8 *)(*(u8 **)((s8 *)mdl + 0x2C)) + 0x30) + 8);
    draw_ginja_model(*(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)mdl + 0x2C)) + 0x30)) + 4));
    post_translate_matrix(*(u8 **)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)mdl + 0x2C)) + 0x30)) + 0x2C) + 8);
    draw_ginja_model(*(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)(*(u8 **)((s8 *)mdl + 0x2C)) + 0x30)) + 0x2C)) + 4));
    begin_effect_render__13TParticleCtrlFv();
    i = 0;
    do {
        if (flags[i] == 1) {
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
        } else {
            ((void (*)(s32))set_global_param__8TObjFishFi)(*(s32 *)((s8 *)self + 0x24));
        }
        if (*pa != NULL) {
            push_matrix();
            post_translate_matrix(*pa + 8);
            draw_ginja_model(*(s32 *)((s8 *)(*pa) + 4));
            pop_matrix();
        }
        if (*pb != NULL) {
            push_matrix();
            post_translate_matrix(*pb + 8);
            draw_ginja_model(*(s32 *)((s8 *)(*pb) + 4));
            pop_matrix();
        }
        i++;
        pa++;
        pb++;
    } while (i < 4);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void render__20TODoorFourLightSpaceFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj_802898E8 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) == 1) && (is_in_view_depth(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
            pop_matrix();
            return;
        case 2:
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
            pop_matrix();
            return;
        case 0:
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                draw_lights__20TODoorFourLightSpaceFPv((void *)(arg0));
                return;
            }
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_object(*(s32 *)((s8 *)arg0 + 0xD4));
            pop_matrix();
            break;
        }
    }
}

extern s32 __vt__20TODoorFourLightSpace[];

void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TODoorFourLightSpace;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TODoorFourLightSpace__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    init_door_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TODoorFourLightSpace;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3B1C;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    init_collision_body_parts((void *) (arg0), (void *) (TODoorFourLight__collision_body_params), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0xD4) = fn_8028A78C((int) (0));
    *(s32 *)((s8 *)arg0 + 0x24) = fn_8028A750((int) (0));
    *(u8 **)((s8 *)arg0 + 0xBC) = fn_8028A714(0);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DD8F4);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DD8F8;
    {
        Tbl_80289EE0 t = lbl_80450C24;
        for (i = 0; i < 8; i++) {
            ((Door_80289EE0 *)arg0)->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(*(s32 *)((s8 *)arg0 + 0xD4), t.v[i]);
        }
    }
    return arg0;
}

}

extern "C" {
u8 is_current_floor_switch_set(u16);
void TODoorFourLightRuins__vt12(u8 *arg0);
}

extern "C" {

struct Base_8028A030 { char pad[0x18]; };
struct VObj_8028A030 : Base_8028A030 {
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

s32 TODoorFourLightRuins__vt17(void *arg0);
void TODoorFourLightRuins__vt4(void *arg0, s16 *arg1);
void *__dt__20TODoorFourLightRuinsFv(void *arg0, s16 arg1);
void render__20TODoorFourLightRuinsFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 is_in_view_depth(void *, f32);
s32 get_instance__12TBoss8DragonFv();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 set_global_param__8TObjFishFi();

s32 TODoorFourLightRuins__vt17(void *arg0) {
    s32 temp_r0;

    *(s32 *)((s8 *)arg0 + 0xC8) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xC8);
    if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    } else if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
    } else if ((s32) *(s32 *)((s8 *)arg0 + 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            *(s32 *)((s8 *)arg0 + 0xCC) = 3;
        } else {
            *(s32 *)((s8 *)arg0 + 0xCC) = 2;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xCC) = 2;
    }
    return *(s32 *)((s8 *)arg0 + 0xC8);
}

void TODoorFourLightRuins__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
    }
}

extern const f32 lbl_805DD8F0;

void TODoorFourLightRuins__vt12(u8 *arg0) {
    s16 sp8;
    s32 off;
    s32 i;
    s32 off2;
    s32 j;
    switch (*(s32 *)((s8 *)arg0 + 0xCC)) {
    case 1:
        ((s32 (*)(void *))play_door_sound)(arg0);
        *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        break;
    case 2:
        off = 0;
        for (i = 0; i < *(s32 *)((s8 *)arg0 + 0x88); i++) {
            if (is_current_floor_switch_set(*(s32 *)((s8 *)arg0 + 0xC8) + i) == 0) {
                off = 1;
            }
        }
        if (off != 0) {
            *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        } else {
            ((s32 (*)(void *))play_door_sound)(arg0);
            *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        }
        break;
    case 3:
        if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
            break;
        }
        off2 = 0;
        for (j = 0; j < *(s32 *)((s8 *)arg0 + 0x88); j++) {
            if (is_current_floor_switch_set(*(s32 *)((s8 *)arg0 + 0xC8) + j) == 0) {
                off2 = 1;
            }
        }
        if (off2 != 0) {
            *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        } else {
            ((s32 (*)(void *))play_door_sound)(arg0);
            *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        }
        if (off2 == 0 && *(u32 *)((s8 *)arg0 + 0x80) != 0 && ((s32 (*)(void *, void *, int))access_object_saved_state)(arg0, &sp8, 1) == 1) {
            sp8 = 1;
            ((s32 (*)(void *, void *))send_object_state_update)(arg0, &sp8);
            ((s32 (*)(void *, void *, int))access_object_saved_state)(arg0, &sp8, 0);
        }
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        break;
    }
}

typedef s32 (*SetParam_8028A28C)(s32);
#define self ((Door_8028A28C *)arg0)
s32 draw_model_and_lights__20TODoorFourLightRuinsFPv(void *arg0) {
    s32 lit[4];
    u8 **a;
    u8 **b;
    for (s32 k = 0; k < 4; k++) {
        lit[k] = 1;
    }
    if (!(self->fd0 & 1)) {
        s32 j;
        for (j = 0; j < self->f88; j++) {
            if (is_current_floor_switch_set(self->fc8 + j) == 1) {
                lit[j] = 1;
            } else {
                lit[j] = 0;
            }
        }
    }
    a = self->fd8;
    b = self->fe8;
    {
    u8 *p = self->fd4;
    push_matrix();
    ((SetParam_8028A28C)set_global_param__8TObjFishFi)(self->f24);
    post_translate_matrix(self->f38);
    rotate_matrix_y(0, self->f60);
    draw_ginja_model(*(s32 *)((s8 *)p + 4));
    draw_ginja_model(*(s32 *)((s8 *)(*(u8 **)((s8 *)p + 0x2C)) + 4));
    }
    begin_effect_render__13TParticleCtrlFv();
    for (s32 i = 0; i < 4; i++) {
        if (lit[i] == 1) {
            ((SetParam_8028A28C)set_global_param__8TObjFishFi)(get_instance__12TBoss8DragonFv());
        } else {
            ((SetParam_8028A28C)set_global_param__8TObjFishFi)(self->f24);
        }
        if (*a != 0) {
            push_matrix();
            post_translate_matrix(*a + 8);
            draw_ginja_model(*(s32 *)((s8 *)(*a) + 4));
            pop_matrix();
        }
        if (*b != 0) {
            push_matrix();
            post_translate_matrix(*b + 8);
            draw_ginja_model(*(s32 *)((s8 *)(*b) + 4));
            pop_matrix();
        }
        a++;
        b++;
    }
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}
#undef self

void render__20TODoorFourLightRuinsFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj_8028A030 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) == 1) && (is_in_view_depth(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
            pop_matrix();
            return;
        case 2:
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
            pop_matrix();
            return;
        case 0:
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                draw_model_and_lights__20TODoorFourLightRuinsFPv((void *)(arg0));
                return;
            }
            push_matrix();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            post_translate_matrix(arg0 + 0x38);
            rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
            draw_ginja_object(*(s32 *)((s8 *)arg0 + 0xD4));
            pop_matrix();
            break;
        }
    }
}

extern s32 __vt__20TODoorFourLightRuins[];

void *__dt__20TODoorFourLightRuinsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TODoorFourLightRuins;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_8028A5C4 { s32 v[8]; };
struct Door_8028A5C4 { u8 pad[0xD8]; s32 sw[8]; };
extern "C" {

s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base();
u8 *fn_8028A714(s32);
s32 fn_8028A750(int);
s32 fn_8028A78C(int);
extern Tbl_8028A5C4 lbl_80450BEC;
extern s32 lbl_80450C48[];
extern s32 TODoorFourLight__collision_body_params[];
extern s32 __vt__20TODoorFourLightRuins[];
extern s32 lbl_805D3B18;
extern const f32 lbl_805DD8F4;
extern const f32 lbl_805DD8F8;

u8 *TODoorFourLightRuins__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 i;

    init_door_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TODoorFourLightRuins;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3B18;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    init_collision_body_parts((void *) (arg0), (void *) (TODoorFourLight__collision_body_params), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0xD4) = fn_8028A78C((int) (0));
    *(s32 *)((s8 *)arg0 + 0x24) = fn_8028A750((int) (0));
    *(u8 **)((s8 *)arg0 + 0xBC) = fn_8028A714(0);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DD8F4);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DD8F8;
    {
        Tbl_8028A5C4 t = lbl_80450BEC;
        for (i = 0; i < 8; i++) {
            ((Door_8028A5C4 *)arg0)->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(*(s32 *)((s8 *)arg0 + 0xD4), t.v[i]);
        }
    }
    return arg0;
}
}
#pragma pop
