#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80052C58_lbl_80486218 {
    M2C_UNK value;
    u8 remaining[0x8];
};

typedef s32 M2C_UNK;
typedef struct Vec_80052CDC {
    f32 x, y, z;
} Vec_80052CDC;

typedef struct Params_80052CDC {
    s32 owner;
    s16 a[3];
    s16 b;
    s16 c;
    u8 pad[0x14 - 0xE];
    Vec_80052CDC pos;
    u8 pad20[0x48 - 0x20];
} Params_80052CDC;

typedef struct Spot_80052CDC {
    Vec_80052CDC pos;
    u8 padc[0x18 - 0xC];
} Spot_80052CDC;

typedef struct Obj_80052CDC {
    u8 pad0[0x38C];
    s32 owner;
    u8 pad390[0x398 - 0x390];
    s32 timer;
    u8 pad39c[0x3A8 - 0x39C];
    s32 idx;
    u8 pad3ac[0x3C4 - 0x3AC];
    s32 max;
    s32 count;
    u8 pad3cc[0x3D0 - 0x3CC];
    s32 f3d0;
    u8 pad3d4[0x444 - 0x3D4];
    Spot_80052CDC spots[1];
} Obj_80052CDC;

struct Ent_8005294C { u8 b[0xC]; };

struct Obj_8005294C { u8 pad[0x484]; Ent_8005294C ents[1]; };

extern "C" {
void request_destroy__11TBoss4Type2FUi(u32);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
M2C_UNK TBoss4Type2__sub_80054DA8();
M2C_UNK TBoss4Type2__sub_80054F6C();
u32 TBoss4Type2__sub_800874F4(int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern const f32 lbl_805D8AF8;
extern const f32 lbl_805D8AFC;
extern const f32 lbl_805D8B00;
extern const f32 lbl_805D8B04;
void TBoss4Type2__sub_800525AC(u8 *arg0);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK TBoss4Type2__sub_800535A8(void *);
void update_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
void TBoss4Type2__sub_80052CA0(u8 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
void tick_state_398_timer__11TBoss4Type2FPv(void *arg0);
void TBoss4Type2__sub_80052EE8(void);
void TBoss4Type2__sub_80052EEC(void* p);
int check_state_transition__11TBoss4Type2FPv(void*);
void update_state_transition__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_8005307C(void* p);
M2C_UNK TBoss4Type2__sub_80053504(void *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
void update_flag800_state__11TBoss4Type2FPv(void *arg0);
int check_state_transition__11TBoss4Type2FPv(void*);
void check_state_if_idle__11TBoss4Type2FPv(void* p);
void TBoss4Type2__sub_800531BC(void* p);
void TBoss4Type2__sub_80054530(void *, s32);
extern RecoveredGlobal_80052C58_lbl_80486218 lbl_80486218;
void TBoss4Type2__sub_80052C58(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4DarkFalz__sub_8004AF5C(s32, s16 *, s16 *);
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);
void TBoss4DarkFalz__sub_8004D990(s32);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
void *create__9TBoss4UroFi(Params_80052CDC *);
void TObjEneDellBiter__sub_80087350(void *, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern u8 TBoss4DarkFalz__data_804FF1E8[];
void TBoss4DarkFalz__sub_80052CDC(Obj_80052CDC *arg0);
u8 *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
M2C_UNK TBoss4Type2__sub_800542B0(void *, int);
void request_destroy__11TBoss4Type2FUi(u32);
void TObjEneDellBiter__sub_80087350(void *, s32);
u32 TBoss4Type2__sub_800874F4(int, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK create__11TTecRaBartaFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK create__10TTecRaFoieFPvPvPvPv(void *, void *, void *, s32);
M2C_UNK queue_event_1D__12TBoss3VoloptFss(s16, s16);
extern const f32 lbl_805D8B10;
extern const f32 lbl_805D8B14;
void TBoss4Type2__sub_8005294C(u8 *arg0);
}

extern "C" {

void TBoss4Type2__sub_800528B8(void *arg0);
void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0);
void init_timer__11TBoss4Type2FPv(u8 *arg0);
void update_scale_state__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
M2C_UNK TBoss4Type2__sub_80054FC0(void *, f32);
M2C_UNK TRaderMapCore__sub_80053914(void *, M2C_UNK *);
f32 calc_boss4_scale__10TObjPlayerFi();
void create__16TObjDFBeamCursorFPvPv(void *, void *);
M2C_UNK set_map_position__13TRaderMapCoreFPvPv(void *, M2C_UNK *);

extern f32 lbl_805D8B08;

#pragma push
#pragma fp_contract on
void TBoss4Type2__sub_800525AC(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    s32 temp_r0_2;
    u32 temp_r3;
    u32 temp_r3_10;
    u32 temp_r3_11;
    u32 temp_r3_12;
    u32 temp_r3_13;
    u32 temp_r3_14;
    u32 temp_r3_15;
    u32 temp_r3_16;
    u32 temp_r3_17;
    u32 temp_r3_18;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    u32 temp_r3_9;
    u8 *temp_r31;
    u8 *temp_r30;
    temp_r31 = (u8 *)(arg0 + 0x484);
    temp_r30 = (u8 *)(arg0 + 0x490);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398);
    if (temp_r0 == 6) {
        TBoss4Type2__sub_80054F6C();
    } else if (temp_r0 == 1) {
        TBoss4Type2__sub_80054DA8();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0xD) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1 > lbl_805D8AF8) {
            temp_r3 = M2C_FIELD(arg0, u32 *, 0x41C);
            if (temp_r3 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3);
                M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
            }
            temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x424);
            if (temp_r3_2 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_2);
                M2C_FIELD(arg0, u32 *, 0x424) = 0U;
            }
        } else if (temp_f1 >= lbl_805D8AFC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) == 0) {
                temp_r3_3 = TBoss4Type2__sub_800874F4((int) (temp_r31), (int) (0x142));
                M2C_FIELD(arg0, u32 *, 0x41C) = temp_r3_3;
                if (temp_r3_3 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x41C), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0) {
                temp_r3_4 = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x142));
                M2C_FIELD(arg0, u32 *, 0x424) = temp_r3_4;
                if (temp_r3_4 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x424), 0x40U);
                }
            }
        }
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x41C);
        if (temp_r3_5 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_5, temp_r31);
        }
        temp_r3_6 = M2C_FIELD(arg0, u32 *, 0x424);
        if (temp_r3_6 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_6, temp_r30);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0xE) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1_2 > lbl_805D8B00) {
            temp_r3_7 = M2C_FIELD(arg0, u32 *, 0x41C);
            if (temp_r3_7 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_7);
                M2C_FIELD(arg0, u32 *, 0x41C) = 0U;
            }
            temp_r3_8 = M2C_FIELD(arg0, u32 *, 0x420);
            if (temp_r3_8 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_8);
                M2C_FIELD(arg0, u32 *, 0x420) = 0U;
            }
            temp_r3_9 = M2C_FIELD(arg0, u32 *, 0x424);
            if (temp_r3_9 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_9);
                M2C_FIELD(arg0, u32 *, 0x424) = 0U;
            }
            temp_r3_10 = M2C_FIELD(arg0, u32 *, 0x428);
            if (temp_r3_10 != 0) {
                request_destroy__11TBoss4Type2FUi(temp_r3_10);
                M2C_FIELD(arg0, u32 *, 0x428) = 0U;
            }
        } else if (temp_f1_2 >= lbl_805D8B04) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x41C) == 0) {
                temp_r3_11 = TBoss4Type2__sub_800874F4((int) (temp_r31), (int) (0x13A));
                M2C_FIELD(arg0, u32 *, 0x41C) = temp_r3_11;
                if (temp_r3_11 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x41C), 0x40U);
                }
                TBoss3Volopt__sub_8022675C((int) (0x40039717), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x420) == 0) {
                temp_r3_12 = TBoss4Type2__sub_800874F4((int) (temp_r31), (int) (0x13B));
                M2C_FIELD(arg0, u32 *, 0x420) = temp_r3_12;
                if (temp_r3_12 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x420), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x424) == 0) {
                temp_r3_13 = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x13A));
                M2C_FIELD(arg0, u32 *, 0x424) = temp_r3_13;
                if (temp_r3_13 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x424), 0x40U);
                }
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x428) == 0) {
                temp_r3_14 = TBoss4Type2__sub_800874F4((int) (temp_r30), (int) (0x13B));
                M2C_FIELD(arg0, u32 *, 0x428) = temp_r3_14;
                if (temp_r3_14 != 0) {
                    set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x428), 0x40U);
                }
            }
        }
        temp_r3_15 = M2C_FIELD(arg0, u32 *, 0x41C);
        if (temp_r3_15 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_15, temp_r31);
        }
        temp_r3_16 = M2C_FIELD(arg0, u32 *, 0x420);
        if (temp_r3_16 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_16, temp_r31);
        }
        temp_r3_17 = M2C_FIELD(arg0, u32 *, 0x424);
        if (temp_r3_17 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_17, temp_r30);
        }
        temp_r3_18 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_18 != 0) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3_18, temp_r30);
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss4Type2__sub_800542B0((void *) (arg0), (int) (1));
    }
}
#pragma pop

void TBoss4Type2__sub_800528B8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8B08) {
            TBoss4Type2__sub_800535A8((void *)(arg0));
            return;
        }
        TBoss4Type2__sub_80053504((void *)((void *)(arg0)));
    }
}

extern const f32 lbl_805D8B0C;

void init_timer__11TBoss4Type2FPv(u8 *arg0) {
    TBoss4Type2__sub_80054FC0((void *) (arg0 + 0x38), (f32) (lbl_805D8B0C));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

extern const f64 lbl_80437620[];

void TBoss4Type2__sub_8005294C(u8 *arg0) {
    s32 idx;
    Ent_8005294C *ent;
    u32 r;
    idx = M2C_FIELD(arg0, s32 *, 0x374) - 8;
    ent = &((Obj_8005294C *)arg0)->ents[idx];
    if (M2C_FIELD(arg0, f32 *, 0x3E8) > lbl_805D8B10) {
        if (M2C_FIELD(arg0, u32 *, 0x418) != 0) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, u32 *, 0x418));
            M2C_FIELD(arg0, u32 *, 0x418) = 0;
        }
    } else if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B14 && M2C_FIELD(arg0, u32 *, 0x418) == 0) {
        if ((M2C_FIELD(arg0, u32 *, 0x418) = TBoss4Type2__sub_800874F4((int)ent, 0xF7)) != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)M2C_FIELD(arg0, u32 *, 0x418), 0x40);
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B14 && M2C_FIELD(arg0, f32 *, 0x3E8) <= lbl_805D8B10) {
        TOTrapAncient01__sub_80226578(0x4003B512, arg0, arg0 + 0x38, 0, 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x398) == 0x26) {
        if ((r = ((u32 (*)(void *, s32))TObjEneDellBiter__sub_80087350)(ent, 0xFD)) != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)r, 0x40);
        }
        TBoss3Volopt__sub_8022675C(0x4003A813, arg0 + 0x38, 0, 1);
        if (idx == 0) {
            create__11TTecRaBartaFPvPvPvPv(arg0, arg0 + 0x3B8, arg0 + 0x3B8, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x1C));
        } else {
            create__10TTecRaFoieFPvPvPvPv(arg0, arg0 + 0x3B8, arg0 + 0x3B8, M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x36), s32 *, 0x18));
        }
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    if (--M2C_FIELD(arg0, s32 *, 0x398) < 0) {
        TBoss4Type2__sub_800542B0(arg0, 1);
    }
}

void update_scale_state__11TBoss4Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_80437620[0]) {
            TBoss4Type2__sub_80053504((void *)((void *)(arg0)));
            return;
        }
        var_r31 = 8;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 8) {
            var_r31 = 9;
        }
        TRaderMapCore__sub_80053914(arg0, &sp8);
        set_map_position__13TRaderMapCoreFPvPv(arg0, &sp8);
        TBoss4Type2__sub_80053CEC(arg0, var_r31);
    }
}

void init_child_and_set_timer__11TBoss4Type2FPv(void *arg0) {
    create__16TObjDFBeamCursorFPvPv(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}
typedef struct { char pad[0x444]; struct { char b[0x18]; } arr[1]; } Foo;
void update_attack_countdown__11TBoss4Type2FPv(u8 *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x2D) {
        TBoss3Volopt__sub_8022675C((int)(0x4003AD11), (void *)(&((Foo *) arg0)->arr[M2C_FIELD(arg0, s32 *, 0x3A8)]), (int)(0), (int)(1));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_800542B0((void *)(arg0), (int)(1));
    }
}
void update_state__11TBoss4Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) == 1) {
            TBoss4Type2__sub_800535A8((void *)(arg0));
            return;
        }
        TBoss4Type2__sub_80053504((void *)((void *)(arg0)));
    }
}

typedef char RecoveredGlobal_80052C58_lbl_80486218_size[sizeof(RecoveredGlobal_80052C58_lbl_80486218) == 0xC ? 1 : -1];
void TBoss4Type2__sub_80052C58(u8 *arg0) {
    TBoss4Type2__sub_80054530(arg0, M2C_FIELD(&lbl_80486218.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3A8) * 4)));
    M2C_FIELD(arg0, s32 *, 0x398) = 0x3C;
}

void TBoss4Type2__sub_80052CA0(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x3D0) = 5;
        TBoss4Type2__sub_800542B0((void *)((void *)(arg0)), (int)((M2C_UNK)(7)));
    }
}

void TBoss4DarkFalz__sub_80052CDC(Obj_80052CDC *arg0) {
    Params_80052CDC p;
    Spot_80052CDC *s;
    s32 t;
    s = &arg0->spots[arg0->idx];
    t = arg0->timer;
    if (t < 0x106 && (t & 0x1F) == 0 && arg0->count < arg0->max) {
        TBoss4DarkFalz__sub_8004B4F0(p.a, TBoss4DarkFalz__data_804FF1E8);
        if (TBoss4DarkFalz__sub_8004AF5C(arg0->owner, p.a, &p.b) != 0) {
            p.owner = arg0->owner;
            p.c = 1;
            VecCopy__FP3VecPC3Vec(&p.pos, s);
            if (create__9TBoss4UroFi(&p) != NULL) {
                TObjEneDellBiter__sub_80087350(s, 0x7D);
                TBoss3Volopt__sub_8022675C(0x4003A810, s, 0, 1);
                arg0->count++;
            }
        }
    }
    TBoss4DarkFalz__sub_8004D990(arg0->owner);
    if (arg0->timer == 0x106) {
        TBoss3Volopt__sub_8022675C(0x4003AD0F, s, 0, 1);
    }
    if (--arg0->timer < 0) {
        arg0->f3d0 = 5;
        TBoss4Type2__sub_800542B0(arg0, 7);
    }
}

void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void tick_state_398_timer__11TBoss4Type2FPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_800542B0((void *)(arg0), (int)(4));
    }
}
void TBoss4Type2__sub_80052EE8(void) {  }
void TBoss4Type2__sub_80052EEC(void* p) { *(s32*)((char*)p + 0x398) = 75; }
void update_state_transition__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_8005307C(void* p) { *(u32*)((char*)p + 0x398) = *(u32*)((char*)p + 0x3cc); }
void update_flag800_state__11TBoss4Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss4Type2__sub_80053CEC((void *)(arg0), (M2C_UNK)(4));
        return;
    }
    TBoss4Type2__sub_80053504((void *)(arg0));
}
void check_state_if_idle__11TBoss4Type2FPv(void* p) { if (*(int*)((char*)p + 0x398) == 0) { check_state_transition__11TBoss4Type2FPv(p); } }
void TBoss4Type2__sub_800531BC(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
