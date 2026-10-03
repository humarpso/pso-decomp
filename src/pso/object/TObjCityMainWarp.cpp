#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase80185EC8_80185EC8 { char pad[0x18]; };
struct VObj80185EC8_80185EC8 : VBase80185EC8_80185EC8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
struct Base_80186030_80185EC8 { char pad[0x18]; };
struct VObj_80186030_80185EC8 : Base_80186030_80185EC8 {
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
};

struct RecoveredGlobal_8018605C_lbl_804447F4 { M2C_UNK value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_8018605C_lbl_804447F4_size[sizeof(RecoveredGlobal_8018605C_lbl_804447F4) == 0x40 ? 1 : -1];

struct RecoveredGlobal_8018605C_lbl_80444834 { M2C_UNK value; u8 remaining[0x40]; };
typedef char RecoveredGlobal_8018605C_lbl_80444834_size[sizeof(RecoveredGlobal_8018605C_lbl_80444834) == 0x44 ? 1 : -1];

typedef s32 M2C_UNK;
struct Obj_801864B4 {
    u8 pad[0x38];
    u8 pos[0x88 - 0x38];
    s32 mode;
    u8 pad8c[0xAC - 0x8C];
    f32 xac;
    u8 padb0[0xC0 - 0xB0];
    void *vi;
    f32 xc4;
    s32 a[17];
    s32 b[17];
    s32 x150;
};

extern "C" {
s32 get_instance__6TLobbyFv(void);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
extern RecoveredGlobal_8018605C_lbl_804447F4 lbl_804447F4;
extern RecoveredGlobal_8018605C_lbl_80444834 lbl_80444834;
s32 TObjCityMainWarp__vt15(u8 *arg0);
s32 get_instance__6TLobbyFv(void);
void set_active_bit__16TObjCityMainWarpFv(s32 id);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
void unlock_main_warp_destination(s32 id);
s32 is_split_screen();
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TObjAreaWarp__ct(void *, void *, void *);
void *init__13TAdVIConfigGCFPvf(void *, void *, f32);
extern M2C_UNK __vt__16TObjCityMainWarp[];
extern s32 lbl_805D32A8;
extern const f32 lbl_805DBC90;
extern const f32 lbl_805DBCA4;
void *TObjCityMainWarp__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void clear_enabled_main_warps(void);
void TObjCityMainWarp__vt12(void* p);
s32 TObjCityMainWarp__vt14(s32 arg0);
void TObjCityMainWarp__vt16(void *arg0);
void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1);
void clear_active_bit__16TObjCityMainWarpFv(void);
void *create__16TObjCityMainWarpFPv(void *arg0);
void render__16TObjCityMainWarpFv(u8 *arg0);
s32 is_quest_active();
s32 get_game_play_mode();
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
s32 get_floor_warp_bit__16TObjCityMainWarpFi();
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
int TObjWarpBase__vt12(void*);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
int clear_flag__11TWindowCtrlFv(void);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 is_warp_enabled__12TObjAreaWarpFi(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC98;

void render__16TObjCityMainWarpFv(u8 *arg0) {
    if (((VObj80185EC8_80185EC8 *) arg0)->m8(lbl_805DBC80, lbl_805DBC98) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_object(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

s32 TObjCityMainWarp__vt14(s32 arg0) {
    if ((get_game_play_mode() == 1) && (is_quest_active() == 0)) {
        return 0;
    }
    return is_warp_enabled__12TObjAreaWarpFi(arg0);
}

void TObjCityMainWarp__vt16(void *arg0) {
    struct VObj_80186030_80185EC8 *o = (struct VObj_80186030_80185EC8 *)arg0;
    o->m15();
}

s32 TObjCityMainWarp__vt15(u8 *arg0) {
    M2C_UNK *var_r4;
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r5;
    var_r31 = (u8 *)(arg0);
    if (get_instance__6TLobbyFv() == 0) {
        var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
        if ((var_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(var_r3) != 0)) {
            var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
            var_r4 = (M2C_UNK *)(&lbl_804447F4.value);
            var_r5 = (u8 *)(var_r31 + (TWindowSubComCard__sub_80265BF8(var_r3) * 4));
            var_r3 = (u8 *)((void *)1U);
            var_r4 = (M2C_UNK *)(&lbl_804447F4.value);
            M2C_FIELD(var_r31, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_804447F4.value, M2C_UNK *, (M2C_FIELD(var_r5, s32 *, 0xC8) * 4));
            return 1;
        }
        var_r3 = (u8 *)(NULL);
        return 0;
    }
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
    if ((var_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(var_r3) != 0)) {
        var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
        var_r4 = (M2C_UNK *)(&lbl_80444834.value);
        var_r5 = (u8 *)(var_r31 + (TWindowSubComCard__sub_80265BF8(var_r3) * 4));
        var_r3 = (u8 *)((void *)1U);
        var_r4 = (M2C_UNK *)(&lbl_80444834.value);
        M2C_FIELD(var_r31, s32 *, 0xBC) = (s32) M2C_FIELD(&lbl_80444834.value, M2C_UNK *, (M2C_FIELD(var_r5, s32 *, 0x10C) * 4));
        return 1;
    }
    var_r3 = (u8 *)(NULL);
    return 0;
}

void TObjCityMainWarp__vt12(void* p) { if (*(unsigned int*)((char*)p + 0xb0) != 0) { TObjWarpBase__vt12(p); clear_flag__11TWindowCtrlFv(); } }

extern void *tl_05;

void *create__16TObjCityMainWarpFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x154);
    if (o != NULL) {
        o = TObjCityMainWarp__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__16TObjCityMainWarp[];

void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCityMainWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjCityMainWarp__data_805D5B50;

void *TObjCityMainWarp__ct(void *arg0, void *arg1, void *arg2) {
    Obj_801864B4 *self = (Obj_801864B4 *)arg0;
    s32 i;
    s32 j;
    void *p;
    TObjAreaWarp__ct(self, arg1, arg2);
    *(M2C_UNK **)((u8 *)self + 0x18) = __vt__16TObjCityMainWarp;
    *(s32 *)self = lbl_805D32A8;
    self->xac = lbl_805DBCA4;
    self->xc4 = lbl_805DBC90;
    for (i = 0; i < 17; i++) {
        self->a[i] = 0;
    }
    for (j = 0; j < 17; j++) {
        self->b[j] = 0;
    }
    if (is_split_screen() == 1) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFPvf(p, self->pos, lbl_805DBCA4);
        }
        self->vi = p;
    } else {
        self->vi = NULL;
    }
    self->x150 = self->mode;
    if (self->x150 < 0) {
        self->x150 = 0;
    }
    if (self->x150 > 2) {
        self->x150 = 2;
    }
    return self;
}

void unlock_main_warp_destination(s32 id) {
    if (get_instance__6TLobbyFv() == 0) {
        set_active_bit__16TObjCityMainWarpFv(id);
        if (id == 8) {
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x30);
        }
    } else {
        switch (id) {
        case 5: case 6: case 7: case 8: case 9:
        case 12: case 13: case 14: case 15:
            break;
        default:
            set_active_bit__16TObjCityMainWarpFv(id);
            break;
        }
    }
}

void clear_enabled_main_warps(void) { TObjCityMainWarp__data_805D5B50 = 0; }

void clear_active_bit__16TObjCityMainWarpFv(void) {
    s32 temp_r3;

    temp_r3 = get_floor_warp_bit__16TObjCityMainWarpFi();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 &= ~(1 << temp_r3);
    }
}

}
