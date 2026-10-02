#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
struct Base_B_8017AC98 { char pad[0x18]; };
struct V_B_8017AC98 : Base_B_8017AC98 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual s32 m8(f32, f32);
};
struct Base_8017B84C_8017AC98 { char pad[0x18]; };
struct VObj_8017B84C_8017AC98 : Base_8017B84C_8017AC98 {
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
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
};

struct Obj_8017ACA0 {
    u8 pad[0x326];
    s16 state;
    u8 pad328[0x34C - 0x328];
    s32 angle;
};

struct Trap_8017ADC4 {
    u8 pad0[0x2A8];
    void *target;
    u8 pad2AC[0x326 - 0x2AC];
    s16 mode;
    s16 state;
    u8 pad32A[0x33C - 0x32A];
    u16 player;
    u8 pad33E[0x344 - 0x33E];
    f32 h344;
    f32 h348;
    u8 pad34C[0x350 - 0x34C];
    s32 reset;
    s32 timer;
};

extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
void TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void scroll_ginja_mesh_uvs(u32, s32, s32, u16, s32);
extern s32 lbl_805D53A4;
extern s32 lbl_805D5ADC;
extern u32 lbl_805D5AE0;
extern s32 lbl_805D5AE4;
void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self);
void *get_bml_model(void *, int);
void *TLobby__sub_80020004(void *, int, char *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
u8 *count_linked_switches__23TObjSeabedSuisoBrakableFUii(void *, int);
u32 get_global_state__14TOKeyMachine01Fv();
extern char lbl_804B4AD8[];
extern u32 TOTrapAncient02__data_805D5AD8;
extern s32 lbl_805D5ADC;
extern u32 lbl_805D5AE0;
extern s32 lbl_805D5AE4;
void TOTrapAncient02__sub_8017B4EC(void);
u16 obj_getField1c(void *);
void obj_setFlags30(void *, u32);
void fn_8002AE64(void *);
s32 check_player_flag1__6TLobbyFPv();
void TObjPlayer__sub_800A7798(void *, f32);
void submit_cursor_candidate(void *, s32);
void send_code_45_1__10TObjPlayerFi(s32);
s32 get_player_by_client_id(s32);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DBA78;
extern const f32 lbl_805DBA80;
void TOTrapAncient02__vt80(Trap_8017ADC4 *self);
}

extern "C" {

void TOTrapAncient02R__vt78(void *arg0);
void TOTrapAncient02__vt84(void);
void TOTrapAncient02__vt86(void);
void *__dt__15TOTrapAncient02Fv(void *arg0, s16 arg1);
void *create__15TOTrapAncient02FPv(void *arg0);
void destroy_instance__15TOTrapAncient02Fv(void);
void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0);
void draw_model__15TOTrapAncient02FPv(void *arg0);
void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model(int);
void *TOTrapAncient02__ct(void *, void *, void *);
M2C_UNK TOTrapAncient02__sub_800837D4(int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOTrapFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK func_80141618__Fv();
s32 get_state_flag__9TMainTaskFv();
s32 is_split_screen();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK setup_particle_tev(int);

void TOTrapAncient02__vt84(void) {  }
void TOTrapAncient02__vt86(void) {  }

void TOTrapAncient02__sub_8017ACA0(Obj_8017ACA0 *self) {
    if (lbl_805D5ADC != lbl_805D53A4 && lbl_805D5AE0 != 0) {
        lbl_805D5ADC = lbl_805D53A4;
        scroll_ginja_mesh_uvs(lbl_805D5AE0, 0, 0xE, lbl_805D5AE4, 1);
    }
    self->angle += 0x888;
    switch (self->state) {
    case 1:
    case 2:
    case 3:
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 3:
        case 4:
        case 5:
            TOTrapAncient01__sub_80226578(0x4461B, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 6:
        case 7:
            TOTrapAncient01__sub_80226578(0x4004C612, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 8:
        case 9:
        case 10:
            TOTrapAncient01__sub_80226578(0x4004C618, self, (u8 *)self + 0x38, 0, 0);
            return;
        case 21:
        case 22:
            TOTrapAncient01__sub_80226578(0x4004C610, self, (u8 *)self + 0x38, 0, 0);
        case 0:
            return;
        case 1:
            return;
        case 2:
            return;
        case 11:
            return;
        case 12:
            return;
        case 13:
            return;
        case 14:
            return;
        case 15:
            return;
        case 16:
            return;
        case 17:
            return;
        case 18:
            return;
        case 19:
            return;
        case 20:
            return;
        }
        break;
    }
}

void TOTrapAncient02__vt80(Trap_8017ADC4 *self) {
    s32 p;
    submit_cursor_candidate(self, -1);
    switch (self->state) {
    case 0:
    case 1:
        self->state = 2;
    case 2:
        if (self->target != NULL) {
            obj_setFlags30(self->target, 0x200);
            fn_8002AE64(self->target);
            TObjPlayer__sub_800A7798(self->target, lbl_805DBA78);
            self->timer--;
            if (self->timer < 0) {
                self->state = 3;
                self->timer = self->reset;
                if (self->target != NULL && lbl_805D53A0 == obj_getField1c(self->target)) {
                    p = get_player_by_client_id(lbl_805D53A0);
                    if (p != 0 && check_player_flag1__6TLobbyFPv() != 0) {
                        send_code_45_1__10TObjPlayerFi(p);
                    }
                }
            }
        } else {
            self->state = 3;
            self->timer = self->reset;
        }
        break;
    case 3:
        if (lbl_805DBA80 < self->h348) {
            self->h348 -= lbl_805DBA78;
        } else {
            self->state = 4;
            self->h348 = lbl_805DBA80;
        }
        break;
    case 4:
        if (lbl_805DBA80 < self->h344) {
            self->h344 -= lbl_805DBA78;
        } else {
            self->mode = 0;
            self->state = 0;
            self->h344 = lbl_805DBA80;
            self->player = 0xFFFF;
            self->target = NULL;
        }
        break;
    }
}

void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
    setup_particle_tev((int) (1));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    pop_matrix();
    TObjPlayer__sub_803D9B2C();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    pop_matrix();
}

void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    TObjPlayer__sub_803D9B2C();
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    TObjPlayer__sub_803D9B2C();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    pop_matrix();
    TObjPlayer__sub_803D9B2C();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    pop_matrix();
}

extern const f32 lbl_805DBA94;
extern const f32 lbl_805DBAA4;

void draw_model__15TOTrapAncient02FPv(void *arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        M2C_FIELD(arg0, s32 *, 0x340) = ((V_B_8017AC98 *) arg0)->m8(lbl_805DBAA4, lbl_805DBA94);
        if (((s32) M2C_FIELD(arg0, s32 *, 0x340) == 1) && (((s32) M2C_FIELD(arg0, s32 *, 0x358) == 0) || (is_split_screen() != 0) || (dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) == 0))) {
            set_depth_buffer_settings_id__FUl(3);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x358) != 0) {
                render_particle_chain__15TOTrapAncient02FPv((u8 *)(arg0));
            } else {
                draw_effect_chain__15TOTrapAncient02FPv((u8 *)(arg0));
            }
            func_80141618__Fv();
        }
    }
}

extern void *tl_05;

void *create__15TOTrapAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x35C);
    if (o != NULL) {
        o = TOTrapAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOTrapAncient02__data_805D5AD8;

void destroy_instance__15TOTrapAncient02Fv(void) {
    if ((u32) TOTrapAncient02__data_805D5AD8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapAncient02__data_805D5AD8, 1);
        TOTrapAncient02__data_805D5AD8 = 0U;
    }
}

extern M2C_UNK __vt__15TOTrapAncient02[];

void TOTrapAncient02__sub_8017B4EC(void) {
    char *base = lbl_804B4AD8;
    void *obj;
    switch (((s32 (*)()) get_global_state__14TOKeyMachine01Fv)()) {
    case 0x13:
    case 0x14:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = TLobby__sub_80020004(obj, 1, base + 0x20, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(obj, 0), 2) + 4);
        lbl_805D5AE4 = 2;
        lbl_805D5ADC = 0;
        break;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x22:
    case 0x23:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = TLobby__sub_80020004(obj, 1, base + 0x38, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(count_linked_switches__23TObjSeabedSuisoBrakableFUii(get_bml_model(obj, 0), 2) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    default:
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (obj != 0) {
            obj = TLobby__sub_80020004(obj, 1, base + 8, 0, 0, 0);
        }
        TOTrapAncient02__data_805D5AD8 = (u32) obj;
        lbl_805D5AE0 = *(u32 *)(*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)obj + 0x42C) + 8) + 0x2C) + 0x2C) + 4);
        lbl_805D5AE4 = 1;
        lbl_805D5ADC = 0;
        break;
    }
}

void *__dt__15TOTrapAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TOTrapAncient02;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOTrapFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOTrapAncient02R__vt78(void *arg0) {
    struct VObj_8017B84C_8017AC98 *o = (struct VObj_8017B84C_8017AC98 *)arg0;
    o->m77();
}

}
