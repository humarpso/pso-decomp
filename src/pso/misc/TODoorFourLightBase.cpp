#include "types.h"

struct VBase_18_721d61 { char pad[0x18]; };

struct VObj_18_721d61 : VBase_18_721d61 {
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
    virtual s32 m19();
    virtual s32 m20();
};

struct DPre_802A0994 { s32 f0; u8 pad[0x14]; };

struct Door_802A0994 : DPre_802A0994 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
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
    u8 pad1c[0xD8 - 0x1C];
    s32 a[8];
    s32 f;
};

struct Door_802A0670 {
    u8 pad0[0x38];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xC8 - 0x64];
    s32 fC8;
    u8 padCC[0xD0 - 0xCC];
    s32 fD0;
    u8 *fD4;
    u32 *a[4];
    u32 *b[4];
    s32 fF8;
};

struct VBase_802A07E0 { char pad[0x18]; };

struct VObj_802A07E0 : VBase_802A07E0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19();
    virtual s32 m20();
};

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 rotate_matrix_by_node_angles(void *, void *);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 draw_ginja_model(int);
void draw_node_tree__19TODoorFourLightBaseFPvPv(u8 *arg0, u8 *arg1);
void init_door_base(void *, void *);
extern s32 __vt__19TODoorFourLightBase[];
extern s32 TODoorFourLightBase__class_name;
Door_802A0994 *TODoorFourLightBase__ct(Door_802A0994 *arg0, void *arg1, s32 arg2);
s32 end_effect_render__13TParticleCtrlFv();
u8 is_current_floor_switch_set(int);
void draw_node_tree__19TODoorFourLightBaseFPvPv(u8 *arg0, u8 *arg1);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
void render_lights__19TODoorFourLightBaseFPv(Door_802A0670 *self);
s32 send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
s32 play_door_sound(void *);
u8 is_current_floor_switch_set(int);
void TODoorFourLightBase__vt12(u8 *arg0);
void render_lights__19TODoorFourLightBaseFPv(Door_802A0670 *self);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
void render__19TODoorFourLightBaseFv(u8 *arg0);
}

extern "C" {

s32 TODoorFourLightBase__vt17(void *arg0);
void TODoorFourLightBase__vt4(void *arg0, s16 *arg1);
void *__dt__19TODoorFourLightBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

s32 TODoorFourLightBase__vt17(void *arg0) {
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

void TODoorFourLightBase__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) | 1);
    }
}

extern s32 __vt__19TODoorFourLightBase[];

void TODoorFourLightBase__vt12(u8 *arg0) {
    s16 sp8;
    switch (*(s32 *)((s8 *)arg0 + 0xCC)) {
    case 1:
        play_door_sound(arg0);
        *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        break;
    case 2: {
        s32 found = 0;
        s32 i;
        for (i = 0; i < *(s32 *)((s8 *)arg0 + 0xF8); i++) {
            if (((u8 (*)(u16))is_current_floor_switch_set)(*(s32 *)((s8 *)arg0 + 0xC8) + i) == 0) {
                found = 1;
            }
        }
        if (found != 0) {
            *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        } else {
            play_door_sound(arg0);
            *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        }
        break;
    }
    case 3: {
        s32 found;
        s32 i;
        if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
            break;
        }
        found = 0;
        for (i = 0; i < *(s32 *)((s8 *)arg0 + 0xF8); i++) {
            if (((u8 (*)(u16))is_current_floor_switch_set)(*(s32 *)((s8 *)arg0 + 0xC8) + i) == 0) {
                found = 1;
            }
        }
        if (found != 0) {
            *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        } else {
            play_door_sound(arg0);
            *(s32 *)((s8 *)arg0 + 0xD0) |= 1;
        }
        if (found == 0 && *(void **)((s8 *)arg0 + 0x80) != NULL && access_object_saved_state(arg0, &sp8, 1) == 1) {
            sp8 = 1;
            send_object_state_update(arg0, &sp8);
            access_object_saved_state(arg0, &sp8, 0);
        }
        break;
    }
    default:
        *(s32 *)((s8 *)arg0 + 0xD0) &= ~1;
        break;
    }
}

void draw_node_tree__19TODoorFourLightBaseFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = *(s32 *)((s8 *)var_r30 + 0);
        if (temp_r31 & 0x100000) {
            set_global_param__8TObjFishFi((void *) (((VObj_18_721d61 *)(arg0))->m20()));
        } else {
            set_global_param__8TObjFishFi((void *) (((VObj_18_721d61 *)(arg0))->m19()));
        }
        if (*(s32 *)((s8 *)var_r30 + 0) & 0x200000) {
            begin_effect_render__13TParticleCtrlFv();
        } else {
            end_effect_render__13TParticleCtrlFv();
        }
        push_matrix();
        if (!(temp_r31 & 1)) {
            post_translate_matrix((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            rotate_matrix_by_node_angles((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            scale_current_matrix((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 8)) {
            draw_ginja_model((int) (*(s32 *)((s8 *)var_r30 + 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x2C));
            if (temp_r4 != NULL) {
                draw_node_tree__19TODoorFourLightBaseFPvPv(arg0, temp_r4);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x30));
    } while (var_r30 != NULL);
}

void render_lights__19TODoorFourLightBaseFPv(Door_802A0670 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->a[i] != NULL) {
            *self->a[i] |= 0x100000;
            *self->a[i] |= 0x200000;
        }
        if (self->b[i] != NULL) {
            *self->b[i] |= 0x100000;
            *self->a[i] |= 0x200000;
        }
    }
    if (!(self->fD0 & 1)) {
        for (i = 0; i < self->fF8; i++) {
            if (is_current_floor_switch_set((u16)(self->fC8 + i)) == 1) {
                if (self->a[i] != NULL) {
                    *self->a[i] |= 0x100000;
                }
                if (self->b[i] != NULL) {
                    *self->b[i] |= 0x100000;
                }
            } else {
                if (self->a[i] != NULL) {
                    *self->a[i] &= ~0x100000;
                }
                if (self->b[i] != NULL) {
                    *self->b[i] &= ~0x100000;
                }
            }
        }
    }
    push_matrix();
    post_translate_matrix(self->f38);
    rotate_matrix_y(0, self->f60);
    draw_node_tree__19TODoorFourLightBaseFPvPv((u8 *)self, self->fD4);
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

struct Door_802A0670;
void render__19TODoorFourLightBaseFv(u8 *arg0) {
    VObj_802A07E0 *self = (VObj_802A07E0 *)arg0;
    if (self->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 1) {
        return;
    }
    switch (*(s32 *)((s8 *)arg0 + 0xAC)) {
    case 1:
    case 3:
        push_matrix();
        set_global_param__8TObjFishFi((void *)self->m20());
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB0));
        pop_matrix();
        break;
    case 2:
        push_matrix();
        set_global_param__8TObjFishFi((void *)self->m20());
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
        pop_matrix();
        break;
    case 0:
        if (*(s32 *)((s8 *)arg0 + 0xCC) == 2 || *(s32 *)((s8 *)arg0 + 0xCC) == 3) {
            render_lights__19TODoorFourLightBaseFPv((Door_802A0670 *)arg0);
            break;
        }
        push_matrix();
        set_global_param__8TObjFishFi((void *)self->m20());
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(*(s32 *)((s8 *)arg0 + 0xD4));
        pop_matrix();
        break;
    }
}

void *__dt__19TODoorFourLightBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TODoorFourLightBase;
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Door_802A0994 *TODoorFourLightBase__ct(Door_802A0994 *arg0, void *arg1, s32 arg2) {
    s32 i;
    init_door_base(arg0, arg1);
    *(void **)((u8 *)arg0 + 0x18) = ((s32 *)&__vt__19TODoorFourLightBase);
    arg0->f0 = TODoorFourLightBase__class_name;
    arg0->m5(arg2);
    arg0->m17();
    for (i = 0; i < 8; i++) {
        arg0->a[i] = 0;
    }
    arg0->f = 0;
    return arg0;
}

}
