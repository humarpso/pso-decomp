#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct Tbl_80289EE0 { s32 v[8]; };

struct Door_80289EE0 { u8 pad[0xD8]; s32 sw[8]; };

typedef s32 M2C_UNK;
extern "C" {
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(int, int);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK init_door_base();
u8 *fn_8028A714(M2C_UNK);
s32 fn_8028A750(int);
s32 fn_8028A78C(int);
extern Tbl_80289EE0 lbl_80450C24;
extern M2C_UNK lbl_804D3500[];
extern M2C_UNK __vt__20TODoorFourLightSpace[];
extern s32 lbl_805D3B1C;
extern const f32 lbl_805DD8F4;
extern const f32 lbl_805DD8F8;
u8 *TODoorFourLightSpace__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, s32);
void fn_8015D5D4(void *);
u8 TODoorAncient08__sub_80229220(u16);
void TODoorFourLightSpace__vt12(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK get_instance__12TBoss8DragonFv();
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
u8 TODoorAncient08__sub_80229220(u16);
void draw_ginja_model(s32);
M2C_UNK TODoorFourLightSpace__sub_80289B4C(void *arg0);
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
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 fn_801582C4(void *, f32);
M2C_UNK get_instance__12TBoss8DragonFv();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_param__8TObjFishFi();

void fn_802898E8(void) {  }
void fn_802898EC(void) {  }
s32 TODoorFourLightSpace__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

extern const f32 lbl_805DD8F0;

void TODoorFourLightSpace__vt12(u8 *arg0) {
    s16 sp8;
    s32 fail;
    s32 i;
    switch (M2C_FIELD(arg0, s32 *, 0xCC)) {
    case 1:
        fn_8015D5D4(arg0);
        M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
        break;
    case 2:
        fail = 0;
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x88); i++) {
            if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, s32 *, 0xC8) + i) == 0) {
                fail = 1;
            }
        }
        if (fail != 0) {
            M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
        } else {
            fn_8015D5D4(arg0);
            M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
        }
        break;
    case 3:
        if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1)) {
            s32 bad;
            s32 j;
            bad = 0;
            for (j = 0; j < M2C_FIELD(arg0, s32 *, 0x88); j++) {
                if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, s32 *, 0xC8) + j) == 0) {
                    bad = 1;
                }
            }
            if (bad == 0) {
                fn_8015D5D4(arg0);
                M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
            } else {
                M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
            }
            if (bad == 0 && M2C_FIELD(arg0, u32 *, 0x80) != 0 &&
                TLobby__sub_80156A80(arg0, &sp8, 1) == 1) {
                sp8 = 1;
                TObjPlayer__sub_80154954(arg0, &sp8);
                TLobby__sub_80156A80(arg0, &sp8, 0);
            }
        }
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
        break;
    }
}

M2C_UNK TODoorFourLightSpace__sub_80289B4C(void *arg0) {
    u8 *self = (u8 *)arg0;
    s32 flags[4];
    s32 i;
    u8 *mdl;
    u8 **pa;
    u8 **pb;
    for (i = 0; i < 4; i++) {
        flags[i] = 1;
    }
    if (!(M2C_FIELD(self, s32 *, 0xD0) & 1)) {
        s32 j;
        for (j = 0; j < M2C_FIELD(self, s32 *, 0x88); j++) {
            if (TODoorAncient08__sub_80229220(M2C_FIELD(self, s32 *, 0xC8) + j) == 1) {
                flags[j] = 1;
            } else {
                flags[j] = 0;
            }
        }
    }
    mdl = M2C_FIELD(self, u8 **, 0xD4);
    pa = (u8 **)(self + 0xD8);
    pb = (u8 **)(self + 0xE8);
    TObjPlayer__sub_803D9B2C();
    ((void (*)(s32))set_global_param__8TObjFishFi)(M2C_FIELD(self, s32 *, 0x24));
    TOHangerMachine01__sub_803D9C00(self + 0x38);
    rotate_matrix_y(0, M2C_FIELD(self, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(mdl + 8);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(M2C_FIELD(mdl, u8 **, 0x2C) + 8);
    draw_ginja_model(M2C_FIELD(M2C_FIELD(mdl, u8 **, 0x2C), s32 *, 4));
    pop_matrix();
    TOHangerMachine01__sub_803D9C00(M2C_FIELD(M2C_FIELD(mdl, u8 **, 0x2C), u8 **, 0x30) + 8);
    draw_ginja_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(mdl, u8 **, 0x2C), u8 **, 0x30), s32 *, 4));
    TOHangerMachine01__sub_803D9C00(M2C_FIELD(M2C_FIELD(M2C_FIELD(mdl, u8 **, 0x2C), u8 **, 0x30), u8 **, 0x2C) + 8);
    draw_ginja_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(mdl, u8 **, 0x2C), u8 **, 0x30), u8 **, 0x2C), s32 *, 4));
    begin_effect_render__13TParticleCtrlFv();
    i = 0;
    do {
        if (flags[i] == 1) {
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
        } else {
            ((void (*)(s32))set_global_param__8TObjFishFi)(M2C_FIELD(self, s32 *, 0x24));
        }
        if (*pa != NULL) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(*pa + 8);
            draw_ginja_model(M2C_FIELD(*pa, s32 *, 4));
            pop_matrix();
        }
        if (*pb != NULL) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(*pb + 8);
            draw_ginja_model(M2C_FIELD(*pb, s32 *, 4));
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

    if ((((VObj_802898E8 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) && (fn_801582C4(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            pop_matrix();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
            pop_matrix();
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                TODoorFourLightSpace__sub_80289B4C((void *)(arg0));
                return;
            }
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0xD4));
            pop_matrix();
            break;
        }
    }
}

extern M2C_UNK __vt__20TODoorFourLightSpace[];

void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightSpace;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TODoorFourLightSpace__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 i;
    init_door_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightSpace;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B1C;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (lbl_804D3500), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xD4) = fn_8028A78C((int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = fn_8028A750((int) (0));
    M2C_FIELD(arg0, u8 **, 0xBC) = fn_8028A714(0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DD8F4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DD8F8;
    {
        Tbl_80289EE0 t = lbl_80450C24;
        for (i = 0; i < 8; i++) {
            ((Door_80289EE0 *)arg0)->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0xD4), t.v[i]);
        }
    }
    return arg0;
}

}

extern "C" {
u8 TODoorAncient08__sub_80229220(u16);
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
M2C_UNK TODoorFourLightRuins__sub_8028A28C(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);
s32 fn_801582C4(void *, f32);
M2C_UNK get_instance__12TBoss8DragonFv();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_param__8TObjFishFi();

s32 TODoorFourLightRuins__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

void TODoorFourLightRuins__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

extern const f32 lbl_805DD8F0;

void TODoorFourLightRuins__vt12(u8 *arg0) {
    s16 sp8;
    s32 off;
    s32 i;
    s32 off2;
    s32 j;
    switch (M2C_FIELD(arg0, s32 *, 0xCC)) {
    case 1:
        ((M2C_UNK (*)(void *))fn_8015D5D4)(arg0);
        M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
        break;
    case 2:
        off = 0;
        for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x88); i++) {
            if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, s32 *, 0xC8) + i) == 0) {
                off = 1;
            }
        }
        if (off != 0) {
            M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
        } else {
            ((M2C_UNK (*)(void *))fn_8015D5D4)(arg0);
            M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
            break;
        }
        off2 = 0;
        for (j = 0; j < M2C_FIELD(arg0, s32 *, 0x88); j++) {
            if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, s32 *, 0xC8) + j) == 0) {
                off2 = 1;
            }
        }
        if (off2 != 0) {
            M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
        } else {
            ((M2C_UNK (*)(void *))fn_8015D5D4)(arg0);
            M2C_FIELD(arg0, s32 *, 0xD0) |= 1;
        }
        if (off2 == 0 && M2C_FIELD(arg0, u32 *, 0x80) != 0 && ((s32 (*)(void *, void *, int))TLobby__sub_80156A80)(arg0, &sp8, 1) == 1) {
            sp8 = 1;
            ((M2C_UNK (*)(void *, void *))TObjPlayer__sub_80154954)(arg0, &sp8);
            ((s32 (*)(void *, void *, int))TLobby__sub_80156A80)(arg0, &sp8, 0);
        }
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) &= ~1;
        break;
    }
}

void render__20TODoorFourLightRuinsFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj_8028A030 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) && (fn_801582C4(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            pop_matrix();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
            pop_matrix();
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                TODoorFourLightRuins__sub_8028A28C(arg0);
                return;
            }
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0xD4));
            pop_matrix();
            break;
        }
    }
}

extern M2C_UNK __vt__20TODoorFourLightRuins[];

void *__dt__20TODoorFourLightRuinsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightRuins;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
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
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK init_door_base();
u8 *fn_8028A714(M2C_UNK);
s32 fn_8028A750(int);
s32 fn_8028A78C(int);
extern Tbl_8028A5C4 lbl_80450BEC;
extern M2C_UNK lbl_80450C48[];
extern M2C_UNK lbl_804D3500[];
extern M2C_UNK __vt__20TODoorFourLightRuins[];
extern s32 lbl_805D3B18;
extern const f32 lbl_805DD8F4;
extern const f32 lbl_805DD8F8;

u8 *TODoorFourLightRuins__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 i;

    init_door_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightRuins;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B18;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (lbl_804D3500), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xD4) = fn_8028A78C((int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = fn_8028A750((int) (0));
    M2C_FIELD(arg0, u8 **, 0xBC) = fn_8028A714(0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DD8F4);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DD8F8;
    {
        Tbl_8028A5C4 t = lbl_80450BEC;
        for (i = 0; i < 8; i++) {
            ((Door_8028A5C4 *)arg0)->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(M2C_FIELD(arg0, s32 *, 0xD4), t.v[i]);
        }
    }
    return arg0;
}
}
#pragma pop
