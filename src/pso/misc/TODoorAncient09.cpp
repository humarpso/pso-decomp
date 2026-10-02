#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8016BF68_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016C010_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016BC84_lbl_80441ACC {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8016BC84_lbl_804B2B30 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Node_80160BA8 {
    u8 pad0[4];
    void *model;
    u8 pos[0x24];
    Node_80160BA8 *x2c;
    Node_80160BA8 *x30;
};

struct Door_80160BA8 {
    u8 pad0[0x34];
    Node_80160BA8 *root;
    u8 pos[0x28];
    s32 x60;
    u8 pad64[0xC8 - 0x64];
    s32 xC8;
    u32 padCC;
    s32 xD0;
    u16 xD4;
};

extern "C" {
s32 TLobby__sub_80156A80(void *, void *, int);
M2C_UNK fn_80160838(void *, void *);
u8 TODoorAncient08__sub_80229220(int);
void TODoorAncient09__vt12(u8 *arg0);
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80440CEC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 lbl_804B1238;
extern u32 lbl_805D5950;
extern void *TODoorAncient09__data_805D5954;
void TODoorAncient09__sub_801610E0(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
void TODoorAncient09__sub_80160968(void *arg0_);
s32 clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, s32);
s32 TODragonfly__sub_80158360(void *, f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern void *TODoorAncient09__data_805D5954;
extern const f32 lbl_805DB488;
void TODoorAncient09__vt15(u8 *arg0);
s32 set_indexed_flags(void *, s32, s32);
s32 TODragonfly__sub_80158360(void *, f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, void *, s32, s32);
extern void *TODoorAncient09__data_805D5954;
extern const f32 lbl_805DB48C;
void TODoorAncient09__vt13(u8 *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
u8 TODoorAncient08__sub_80229220(int);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
int TOSignCave03__sub_803DB510(void *);
extern void *TODoorAncient09__data_805D5954;
void TODoorAncient09__sub_80160BA8(Door_80160BA8 *self);
}

extern "C" {

struct TODoor9Base_801608B4 { char pad[0x14]; void **vtbl; };
struct TODoor9VObj_801608B4 : TODoor9Base_801608B4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

s32 TODoorAncient09__vt17(void *arg0);
void TODoorAncient09__vt18(void);
void TODoorAncient09__vt4(void *arg0, s16 *arg1);
void *__dt__15TODoorAncient09Fv(void *arg0, s16 arg1);
void *create__15TODoorAncient09FPv(void *arg0);
void free_rocks__15TODoorAncient09Fv(void);
void render__15TODoorAncient09Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TODoorAncient09__ct(void *, void *, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
s32 fn_801582C4(void *, f32);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
s32 get_main_phase();
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TODoorAncient09__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

s32 TODoorAncient09__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if (((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) && ((get_main_phase() == 0xF) || (is_split_screen() == 1))) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

extern const f32 lbl_805DB480;
extern const f32 lbl_805DB484;

#define VCALL_m8(obj) (((TODoor9VObj_801608B4*)(obj))->m8(M2C_FIELD(obj, f32 *, 0xC0), M2C_FIELD(obj, f32 *, 0xC4)))

void TODoorAncient09__sub_80160968(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    if (!(*(s32 *)(arg0 + 0xD0) & 1)) {
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 0:
            TBoss3Volopt__sub_8022675C(0x42A04, arg0 + 0x38, 0, 0);
            break;
        case 1:
        case 2:
            TBoss3Volopt__sub_8022675C(0x4BC07, arg0 + 0x38, 0, 0);
            break;
        case 3:
        case 4:
        case 5:
            TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            TBoss3Volopt__sub_8022675C(0x4004BC00, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            TBoss3Volopt__sub_8022675C(0x4004BC07, arg0 + 0x38, 0, 0);
            break;
        case 15:
            break;
        }
    }
}

#pragma push
#pragma fp_contract on
void TODoorAncient09__vt12(u8 *arg0) {
    s16 sp8;
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        TODoorAncient09__sub_80160968((void *)((void *) (arg0)));
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        return;
    case 2:
        if ((TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD4))) == 1)) {
            TODoorAncient09__sub_80160968((void *)((void *) (arg0)));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            M2C_FIELD(arg0, s32 *, 0xD8) = 1;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0xD8) = 0;
        return;
    case 3:
        if ((TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) && (TODoorAncient08__sub_80229220((int) (M2C_FIELD(arg0, u16 *, 0xD4))) == 1)) {
            TODoorAncient09__sub_80160968((void *)((void *) (arg0)));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            if (((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
                sp8 = 1;
                fn_80160838((void *) (arg0), (void *) (&sp8));
                TLobby__sub_80156A80((void *) (arg0), (void *) (&sp8), (int) (0));
            }
        }
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        break;
    }
}
#pragma pop

void TODoorAncient09__sub_80160BA8(Door_80160BA8 *self) {
    s32 on[2];
    Node_80160BA8 *pairs[2][2];
    Node_80160BA8 *root;
    u8 f;
    u8 g;
    Node_80160BA8 **pp;
    s32 i;
    f = 0;
    root = self->root;
    pairs[0][0] = root->x2c->x2c;
    pairs[0][1] = root->x2c->x2c->x30;
    pairs[1][0] = root->x2c->x30;
    pairs[1][1] = root->x2c->x30->x30;
    if (TODoorAncient08__sub_80229220((u16)self->xC8) != 0 || (self->xD0 & 1)) {
        f = 1;
    }
    on[0] = f;
    g = 0;
    if (TODoorAncient08__sub_80229220(self->xD4) != 0 || (self->xD0 & 1)) {
        g = 1;
    }
    on[1] = g;
    TObjPlayer__sub_803D9B2C();
    set_global_param__8TObjFishFi(((s32 *)TODoorAncient09__data_805D5954)[0]);
    TOHangerMachine01__sub_803D9C00(self->pos);
    TOHangerMachine01__sub_803D9C00(root->pos);
    rotate_matrix_y((M2C_UNK)(0), (s32)(self->x60));
    TOSignCave03__sub_803DB510(root->model);
    TOSignCave03__sub_803DB510(root->x2c->model);
    begin_effect_render__13TParticleCtrlFv();
    for (i = 0; i < 2; i++) {
        if (on[i] != 0) {
            set_global_param__8TObjFishFi(((s32 *)TODoorAncient09__data_805D5954)[1]);
        } else {
            set_global_param__8TObjFishFi(((s32 *)TODoorAncient09__data_805D5954)[0]);
        }
        TObjPlayer__sub_803D9B2C();
        pp = pairs[i];
        TOHangerMachine01__sub_803D9C00(pp[0]->pos);
        TOSignCave03__sub_803DB510(pp[0]->model);
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(pp[1]->pos);
        TOSignCave03__sub_803DB510(pp[1]->model);
        pop_matrix();
    }
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void render__15TODoorAncient09Fv(u8 *arg0) {
    s32 temp_r0;

    if ((VCALL_m8(arg0) != 0) && (fn_801582C4(arg0, lbl_805DB480) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            pop_matrix();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4) - lbl_805DB484);
            pop_matrix();
            return;
        case 0:
            TODoorAncient09__sub_80160BA8((Door_80160BA8 *)(arg0));
            break;
        }
    }
}

void TODoorAncient09__vt18(void) {  }

extern void *tl_05;

void TODoorAncient09__vt15(u8 *arg0) {
    if (*(s32 *)(arg0 + 0xD0) & 1) {
        *(s32 *)(arg0 + 0x24) = ((s32 *)TODoorAncient09__data_805D5954)[1];
        if (TODragonfly__sub_80158360(arg0, lbl_805DB488) == 1) {
            return;
        }
        *(s32 *)(arg0 + 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        *(s32 *)(arg0 + 0xE0) = 0;
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 3:
        case 4:
        case 5:
            TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
            break;
        case 0:
        case 15:
            break;
        }
    } else {
        *(s32 *)(arg0 + 0xAC) = 3;
        *(s32 *)(arg0 + 0x24) = ((s32 *)TODoorAncient09__data_805D5954)[0];
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        *(s32 *)(arg0 + 0xE0) = 0;
    }
}

void TODoorAncient09__vt13(u8 *arg0) {
    if ((*(s32 *)(arg0 + 0xD0) & 1) && TODragonfly__sub_80158360(arg0, lbl_805DB48C) == 1) {
        *(s32 *)(arg0 + 0xAC) = 1;
        *(s32 *)(arg0 + 0x24) = ((s32 *)TODoorAncient09__data_805D5954)[1];
        set_indexed_flags(arg0, 0, 8);
        *(s32 *)(arg0 + 0xE0) = 1;
        switch ((u32)get_global_state__14TOKeyMachine01Fv()) {
        case 3:
        case 4:
        case 5:
            TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
            break;
        case 6:
        case 7:
            TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
            break;
        case 8:
        case 9:
        case 10:
            TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
            break;
        case 0:
        case 15:
            break;
        }
    }
}

void *create__15TODoorAncient09FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TODoorAncient09__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5950;
extern void *TODoorAncient09__data_805D5954;

void free_rocks__15TODoorAncient09Fv(void) {
    if ((void *) TODoorAncient09__data_805D5954 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient09__data_805D5954, s32 *, 4));
        if ((void *) TODoorAncient09__data_805D5954 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient09__data_805D5954);
            TODoorAncient09__data_805D5954 = NULL;
        }
    }
    if ((u32) lbl_805D5950 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5950, 1);
        lbl_805D5950 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorAncient09[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void TODoorAncient09__sub_801610E0(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_804B1238.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5950) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    (*(s32 * *)&TODoorAncient09__data_805D5954) = temp_r3_2;
    *temp_r3_2 = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5950), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD((*(s32 * *)&TODoorAncient09__data_805D5954), s32 *, 4) = TLanguage__sub_801E4874((void *) (&lbl_80440CEC.value));
}
typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];
typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];

void *__dt__15TODoorAncient09Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient09;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
