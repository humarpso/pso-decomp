#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8019CF38_8019CCF0 { char pad[0x18]; };
struct VObj8019CF38_8019CCF0 : VBase8019CF38_8019CCF0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019D030___vt__17TObjMapWarpForest { M2C_UNK value; u8 remaining[0x50]; };
typedef char RecoveredGlobal_8019D030___vt__17TObjMapWarpForest_size[sizeof(RecoveredGlobal_8019D030___vt__17TObjMapWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019CA24_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
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

struct RecoveredGlobal_8019CE40___vt__12TObjAreaWarp {
    M2C_UNK value;
    u8 remaining[0x50];
};

struct Vec_8019D0A8 { f32 x, y, z; };

struct Warp_8019D0A8 {
    u8 pad0[0x60];
    s32 yaw;
    u8 pad64[0x68 - 0x64];
    Vec_8019D0A8 pos;
    u8 pad74[0x84 - 0x74];
    s32 yaw2;
    u8 pad88[0xBC - 0x88];
    Vec_8019D0A8 ends[4];
};

struct VBase_8019D250 { char pad[0x18]; };

struct VObj_8019D250 : VBase_8019D250 {
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
    virtual void m13(s32);
    virtual s32 m14();
    virtual void m15();
    virtual s32 m16(s32);
    virtual void m17();
    virtual void m18(u16);
};

struct Vec_8019D250 { f32 x, y, z; };

struct Data_8019D250 {
    u8 pad0[0x84];
    s32 f84;
    u8 pad88[0xAC - 0x88];
    f32 fAC;
    void *fB0;
    u8 padB4[0xBC - 0xB4];
    Vec_8019D250 ends[4];
    void *win[4];
};

typedef s32 M2C_UNK;
struct VBase_8019CAB0 { char pad[0x18]; };

struct VObj_8019CAB0 : VBase_8019CAB0 {
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
    virtual void m13(s32);
    virtual s32 m14();
    virtual void m15();
    virtual s32 m16(s32);
    virtual void m17(void *);
};

struct Data_8019CAB0 {
    u8 pad0[0xAC];
    f32 fAC;
    void *fB0;
    u8 padB4[0xC0 - 0xB4];
    void *fC0;
};

extern "C" {
s32 TObjMapWarp__ct(void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
extern RecoveredGlobal_8019D030___vt__17TObjMapWarpForest __vt__17TObjMapWarpForest;
extern s32 lbl_805D3464;
extern const f32 lbl_805DBFE4;
u8 *TObjMapWarpForest__ct(u8 *arg0);
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
s32 TLobby__sub_80207770(s32);
s32 play_sound_effect(s32, u32, s16, s32);
M2C_UNK TKeyBoardControl__sub_8000F998();
M2C_UNK send_6x21_inter_level_warp(void *, void *);
M2C_UNK set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK TNpcPlayer__sub_8034E7A0();
extern RecoveredGlobal_8019CA24_lbl_80515BA0 lbl_80515BA0;
void TObjAreaWarp__sub_8019CA24(u8 *arg0, s32 arg1);
u8 * TObjWarpBase__vt0(void *, s16);
u8 * destroy__13TAdVIConfigGCFPvs(void *, s16);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__12TObjAreaWarp[];
u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjMapWarp__sub_80141CB0(void *, void *, u32, u32);
M2C_UNK TObjMapWarp__sub_80141CB4(void *, f32);
M2C_UNK set_global_count__12TObjNpcEnemyFi(u32);
M2C_UNK TObjEneBm5GibonU__sub_803D853C(s32, const char *, ...);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern Vec_8019D0A8 lbl_804462FC;
extern char lbl_80446430[];
extern char lbl_80446440[];
extern char lbl_80446450[];
extern char lbl_80446460[];
extern Vec_8019D0A8 lbl_804B910C[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805DBFF8;
extern const f32 lbl_805DBFFC;
void TObjMapWarp__sub_8019D0A8(u8 *arg0);
u16 obj_getField1c(void *);
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 test_player_body_overlap_at(void *, void *, Vec_8019D250 *);
s32 can_warp__11TObjMapWarpFiUs(void *, u16);
void *find_warp_player_in_range(void *, u16, f32);
s32 get_map_id__13TRaderMapCoreFPv(void *);
s32 is_target_valid__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C8CCC(u16, Vec_8019D250 *, s32);
void TWindow__close(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 lbl_805D53A0;
void process_player_warps__11TObjMapWarpFPv(VObj_8019D250 *self);
u16 obj_getField1c(void *);
s32 is_split_screen();
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
void *find_warp_player_in_range(void *, u16, f32);
s32 get_map_id__13TRaderMapCoreFPv(void *);
void TWindow__close(void *);
s32 find_active_player__12TObjAreaWarpFPv(void *);
s32 get_field_14__13TAdVIConfigGCFPv(void *);
M2C_UNK TAdVIConfigGC__sub_80307DF4(void *);
extern s32 lbl_805D53A0;
void TObjAreaWarp__sub_8019CAB0(VObj_8019CAB0 *self);
}

extern "C" {

void *TObjAreaWarp__ct(void *arg0);
s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0);
void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1);
void render__17TObjMapWarpForestFv(u8 *arg0);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, u16);
s32 TLobby__sub_8030A7B0();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object(s32);
s32 TObjCityMainWarp__sub_80186AF4();
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
s32 TObjLuker__sub_801329B0();
s32 get_current_floor();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TObjWarpBase__ct();
s32 TObjWarpBase__vt13(s32);
u32 get_player_by_client_id(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 check_flag_100__10TObjPlayerFPv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_8019DD14(s32, M2C_UNK);
M2C_UNK get_player_floor__6TLobbyFi(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK set_global_param__8TObjFishFi(s32);

typedef char RecoveredGlobal_8019CA24_lbl_80515BA0_size[sizeof(RecoveredGlobal_8019CA24_lbl_80515BA0) == 0x28 ? 1 : -1];
void TObjAreaWarp__sub_8019CA24(u8 *arg0, s32 arg1) {
    set_area__6TLobbyFPvi((void *) (&lbl_80515BA0.value), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (int) (TLobby__sub_80207770(M2C_FIELD(arg0, s32 *, 0xBC))));
    TKeyBoardControl__sub_8000F998();
    get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0.value);
    TNpcPlayer__sub_8034E7A0();
    send_6x21_inter_level_warp((void *) (arg1), (void *) (get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0.value)));
    play_sound_effect(0x40003205, 0U, 0, 0);
}

void TObjAreaWarp__sub_8019CAB0(VObj_8019CAB0 *self) {
    Data_8019CAB0 *d = (Data_8019CAB0 *)self;
    s32 found;
    s32 i;
    void *t;
    if (self->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        if (d->fB0 != NULL) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->fB0);
            allow_rendering__7TObjectFv(d->fB0);
        }
        if (is_split_screen() != 0) {
            found = 0;
            if (d->fC0 != NULL) {
                TAdVIConfigGC__sub_80307DF4(d->fC0);
                if (get_field_14__13TAdVIConfigGCFPv(d->fC0) == 0) {
                    self->m12();
                    return;
                }
            }
            for (i = 0; i < 4; i++) {
                t = find_warp_player_in_range(self, i, d->fAC);
                if (t != NULL) {
                    found = 1;
                    if (d->fC0 != NULL) {
                        self->m13(find_active_player__12TObjAreaWarpFPv(d->fC0));
                    } else {
                        self->m13(obj_getField1c(t));
                    }
                    if (self->m16(i) != 0) {
                        self->m12();
                        self->m17(t);
                    }
                }
            }
            if (found == 0) {
                self->m12();
            }
        } else {
            void *t2 = find_warp_player_in_range(self, lbl_805D53A0, d->fAC);
            if (t2 != NULL) {
                self->m13(lbl_805D53A0);
                if (self->m16(get_map_id__13TRaderMapCoreFPv(t2)) != 0) {
                    self->m12();
                    self->m17(t2);
                }
            } else {
                self->m12();
            }
        }
    }
}

s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0) {
    s32 var_r31;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = 0;
loop_2:
        if ((get_player_by_client_id((s32)(var_r31)) != 0U) && (check_flag_100__10TObjPlayerFPv() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return TObjWarpBase__vt13(arg0);
}

void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = TCheckRoomSequence__sub_802664A8(get_window_layout_position(0x33), 1, arg1);
        if (TLobby__sub_8030A7B0() == 1) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0xBC));
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TObjLuker__sub_801329B0(), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = get_player_by_client_id((s32)(M2C_FIELD(arg0, u16 *, 0xB8)));
        if (temp_r3 != 0U) {
            fn_8019DD14(temp_r3 + 0x550, 4);
        }
    }
}

extern M2C_UNK __vt__12TObjAreaWarp[];
extern s32 lbl_805D3468;
extern s32 lbl_805D5C80;

typedef char RecoveredGlobal_8019CE40___vt__12TObjAreaWarp_size[sizeof(RecoveredGlobal_8019CE40___vt__12TObjAreaWarp) == 0x54 ? 1 : -1];
u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019CE40___vt__12TObjAreaWarp *)&__vt__12TObjAreaWarp).value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC0));
        if (temp_r3 != NULL) {
            destroy__13TAdVIConfigGCFPvs(temp_r3, 1);
            M2C_FIELD(arg0, u8 **, 0xC0) = NULL;
        }
        ((VObj_18_26c409 *)(arg0))->m12();
        TObjWarpBase__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void *TObjAreaWarp__ct(void *arg0) {
    TObjWarpBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjAreaWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3468;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) lbl_805D5C80 != 0) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (get_current_floor() + 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    return arg0;
}

extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;

void render__17TObjMapWarpForestFv(u8 *arg0) {
    if (((VObj8019CF38_8019CCF0 *) arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x100));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x104), M2C_FIELD(arg0, s32 *, 0x108), M2C_FIELD(arg0, f32 *, 0xFC));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}
u8 *TObjMapWarpForest__ct(u8 *arg0) {
    TObjMapWarp__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TObjMapWarpForest.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3464;
    M2C_FIELD(arg0, s32 *, 0x100) = register_warp__16TObjMapForceWarpFPv((int) (4));
    M2C_FIELD(arg0, s32 *, 0x104) = register_warp__16TObjMapForceWarpFPv((int) (5));
    M2C_FIELD(arg0, s32 *, 0x108) = register_area_warp_object__16TAdStorySelectGCFPv((int) (2));
    M2C_FIELD(arg0, s32 *, 0x10C) = get_story_select__16TAdStorySelectGCFv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBFE4;
    return arg0;
}
void TObjMapWarp__sub_8019D0A8(u8 *arg0) {
    Warp_8019D0A8 *self = (Warp_8019D0A8 *)arg0;
    Vec_8019D0A8 *end;
    s32 i;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_80446430);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_80446440);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_80446450);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80446460);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    for (i = 0; i < 4; i++) {
        Vec_8019D0A8 b;
        Vec_8019D0A8 a = lbl_804462FC;
        push_matrix_from(lbl_8058D490);
        TOHangerMachine01__sub_803D9C00(&self->pos);
        rotate_matrix_y((M2C_UNK)(0), (s32)(self->yaw));
        end = &self->ends[i];
        TCameraCtrl__sub_803D8934(0, &lbl_804B910C[i], end);
        pop_matrix();
        push_matrix_from(lbl_8058D490);
        TOHangerMachine01__sub_803D9C00(end);
        rotate_matrix_y((M2C_UNK)(0), (s32)(self->yaw2));
        TCameraCtrl__sub_803D8934(0, &a, &a);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&b, end);
        b.y += lbl_805DBFF8;
        a.y += lbl_805DBFF8;
        TObjMapWarp__sub_80141CB0(&b, &a, 0xFFFF0000, 0xFFFF0000);
        TObjMapWarp__sub_80141CB4(end, lbl_805DBFFC);
    }
}
void process_player_warps__11TObjMapWarpFPv(VObj_8019D250 *self) {
    Data_8019D250 *d = (Data_8019D250 *)self;
    s32 i;
    void *t;
    s32 j;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        for (i = 0; i < 4; i++) {
            if (can_warp__11TObjMapWarpFiUs(self, i) == 0) {
                if (d->win[i] != NULL) {
                    TWindow__close(d->win[i]);
                    d->win[i] = NULL;
                }
            } else {
                if (d->win[i] != NULL) {
                    clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->win[i]);
                    allow_rendering__7TObjectFv(d->win[i]);
                }
                t = find_warp_player_in_range(self, i, d->fAC);
                if (t != NULL) {
                    self->m13(obj_getField1c(t));
                    if (is_target_valid__10TObjPlayerFPv(t) != 0 && self->m16(get_map_id__13TRaderMapCoreFPv(t)) != 0) {
                        for (j = 0; j < 4; j++) {
                            if (test_player_body_overlap_at(self, t, &d->ends[j]) == 0) {
                                TObjPlayer__sub_801C8CCC(obj_getField1c(t), &d->ends[j], d->f84);
                            }
                        }
                    }
                } else {
                    self->m18(i);
                }
            }
        }
        return;
    }
    if (self->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        void *t2;
        s32 j2;
        if (d->fB0 != NULL) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->fB0);
            allow_rendering__7TObjectFv(d->fB0);
        }
        t2 = find_warp_player_in_range(self, lbl_805D53A0, d->fAC);
        if (t2 != NULL) {
            self->m13(lbl_805D53A0);
            if (is_target_valid__10TObjPlayerFPv(t2) != 0 && self->m16(get_map_id__13TRaderMapCoreFPv(t2)) != 0) {
                for (j2 = 0; j2 < 4; j2++) {
                    if (test_player_body_overlap_at(self, t2, &d->ends[j2]) == 0) {
                        TObjPlayer__sub_801C8CCC(obj_getField1c(t2), &d->ends[j2], d->f84);
                    }
                }
            }
        } else {
            self->m12();
        }
    }
}

}
