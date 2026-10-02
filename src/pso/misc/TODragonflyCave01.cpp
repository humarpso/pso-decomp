#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };
struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(void *);
};

extern "C" {
u8 *TODragonfly__ct(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
s32 rand(void);
extern M2C_UNK __vt__17TODragonflyCave01[];
extern s32 lbl_805D2F9C;
extern u32 TODragonflyCave01__data_805D5990;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB564;
extern const f32 lbl_805DB568;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
u8 *TODragonflyCave01__ct(u8 *arg0, void *arg1);
}

extern "C" {
u8 *TODragonfly__ct(u8 *arg0);
s32 rand(void);
}

extern "C" {

void *TODragonflyCave01__create(void *arg0);
void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1);
void release_static_instance__17TODragonflyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__dt__11TODragonflyFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void *TODragonflyCave01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TODragonflyCave01__ct((u8 *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TODragonflyCave01__data_805D5990;

void release_static_instance__17TODragonflyCave01Fv(void) {
    if ((u32) TODragonflyCave01__data_805D5990 != 0U) {
        TLobby__sub_8001FE7C((void*)TODragonflyCave01__data_805D5990, 1);
        TODragonflyCave01__data_805D5990 = 0U;
    }
}

void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_global_state__14TOKeyMachine01Fv();
extern u8 lbl_804B1880[];
extern u8 lbl_804B18A0[];

void TODragonflyCave01__sub_80164494(void) {
    void *o;

    switch (get_global_state__14TOKeyMachine01Fv()) {
    default:
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = TLobby__sub_80020004(o, 1, lbl_804B1880, 0, 0, 0);
        }
        TODragonflyCave01__data_805D5990 = (u32)o;
        break;
    case 0x10:
    case 0x15:
    case 0x16:
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = TLobby__sub_80020004(o, 1, lbl_804B18A0, 0, 0, 0);
        }
        TODragonflyCave01__data_805D5990 = (u32)o;
        break;
    }
}

extern M2C_UNK __vt__17TODragonflyCave01[];

void *__dt__17TODragonflyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TODragonflyCave01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
f32 TBoss8Dragon__sub_803D64C0(s32);
extern M2C_UNK __vt__17TODragonflyCave01[];
extern s32 lbl_805D2F9C;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB564;
extern const f32 lbl_805DB568;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;

#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct DfBase_80164cc4_80164760 { char pad[0x18]; };
struct DfV_80164cc4_80164760 : DfBase_80164cc4_80164760 {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf10(); virtual void vf11();
    virtual void vf12();
};

struct RecoveredGlobal_80164764_lbl_8050BEE0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80164764_lbl_8050BFA0 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_80164764_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80164DEC___vt__11TODragonfly { M2C_UNK value; u8 remaining[0x38]; };

struct Self_8016492C { u8 pad[0x38]; u8 pos[0x70 - 0x38]; f32 radius; u8 pad74[0xAC - 0x74]; s32 state; u8 padb0[0xD4 - 0xB0]; u8 target[0xE0 - 0xD4]; u8 vec[0xC]; };

struct O_80164A90 { u8 pad[0x38]; u8 pos[0x34]; f32 f6c; f32 f70; u8 pad74[0xAC - 0x74]; s32 st; u8 padb0[0xCC - 0xB0]; s32 cc; u8 padd0[4]; u8 d4[0xC]; u8 e0[0xC]; };

extern "C" {
s32 TODragonfly__sub_80158360(s32, f32);
s32 rand(void);
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB588;
extern const f32 lbl_805DB58C;
void TODragonfly__sub_80164990(u8 *arg0);
s32 TODragonfly__sub_80158360(s32, f32);
s32 rand(void);
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB58C;
extern const f32 lbl_805DB590;
void TODragonfly__sub_80164B34(s32 arg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_camera_distance__10TObjPlayerFi(void *);
s32 rand(void);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
f32 TBoss6Type1__sub_803D9370(void *, void *);
s32 TObjPlayer__sub_803D97F0(void *);
M2C_UNK pop_matrix();
extern const f64 lbl_804411B0;
extern RecoveredGlobal_80164764_lbl_8050BEE0 lbl_8050BEE0;
extern RecoveredGlobal_80164764_lbl_8050BFA0 lbl_8050BFA0;
extern RecoveredGlobal_80164764_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB580;
s32 TODragonfly__sub_80164764(u8 *arg0, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_map_object_base(void *, int);
s32 rand(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern M2C_UNK __vt__11TODragonfly[];
extern s32 lbl_805D2F98;
extern s32 tl_05;
extern const f32 lbl_805DB560;
extern const f32 lbl_805DB56C;
extern const f32 lbl_805DB570;
extern const f32 lbl_805DB574;
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB57C;
extern const f32 lbl_805DB580;
extern const f32 lbl_805DB594;
u8 *TODragonfly__ct(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DB584;
void TODragonfly__sub_8016492C(Self_8016492C *self);
f32 horizontal_distance_squared(void *, void *);
s32 TODragonfly__sub_80158360(s32, f32);
s32 TODragonfly__sub_80164764(u8 *arg0, f32 farg0);
f32 TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 lbl_805DB578;
extern const f32 lbl_805DB584;
extern const f32 lbl_805DB590;
void TODragonfly__sub_80164A90(O_80164A90 *arg0);
}

extern "C" {

struct Base_80164c34_80164760 { char pad[0x18]; };
struct VObj_80164c34_80164760 : Base_80164c34_80164760 {
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

void TODragonfly__sub_80164760(void);
void *__dt__11TODragonflyFv(void *arg0, s16 arg1);
void draw_model__11TODragonflyFPv(u8 *arg0);
void update__11TODragonflyFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv(void *);

#pragma push
#pragma fp_contract on
u8 *TODragonflyCave01__ct(u8 *arg0, void *arg1) {
    TODragonfly__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TODragonflyCave01;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2F9C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, void **, 0x34) = M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyCave01__data_805D5990), u8 **, 0x42C), void **, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyCave01__data_805D5990), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xBC) = M2C_FIELD(M2C_FIELD((*(u8 * *)&TODragonflyCave01__data_805D5990), u8 **, 0x430), void **, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB560;
    M2C_FIELD(arg0, f32 *, 0xB8) = lbl_805DB564;
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DB568;
    M2C_FIELD(arg0, f32 *, 0xC4) = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), u8 **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, f32 *, 0xF4) = lbl_805DB56C * (f32)M2C_FIELD(arg0, s32 *, 0x84) + lbl_805DB560;
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32)(lbl_805DB570 * (lbl_805DB574 / (lbl_805DB578 / M2C_FIELD(arg0, f32 *, 0xF4))));
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32)(lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32)rand())));
    M2C_FIELD(arg0, f32 *, 0xEC) = lbl_805DB56C * (f32)M2C_FIELD(arg0, s32 *, 0x88) + lbl_805DB560;
    M2C_FIELD(arg0, f32 *, 0xF0) = M2C_FIELD(arg0, f32 *, 0xEC) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xFC));
    return arg0;
}
#pragma pop

void TODragonfly__sub_80164760(void) {  }

extern const f32 lbl_805DB580;

typedef char RecoveredGlobal_80164764_lbl_8050BEE0_size[sizeof(RecoveredGlobal_80164764_lbl_8050BEE0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80164764_lbl_8050BFA0_size[sizeof(RecoveredGlobal_80164764_lbl_8050BFA0) == 0x40 ? 1 : -1];
typedef char RecoveredGlobal_80164764_lbl_8058D490_size[sizeof(RecoveredGlobal_80164764_lbl_8058D490) == 0x30 ? 1 : -1];
s32 TODragonfly__sub_80164764(u8 *arg0, f32 farg0) {
    M2C_FIELD(&lbl_8050BEE0.value, f32 *, 0) = (f32) lbl_805DB580;
    M2C_FIELD(&lbl_8050BEE0.value, f32 *, 4) = farg0;
    M2C_FIELD(&lbl_8050BEE0.value, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 0xD0) * (lbl_805DB57C * (f32) rand()));
    M2C_FIELD(&lbl_8050BFA0.value, s32 *, 4) = (s32) (lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32) rand())));
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    rotate_matrix_y((M2C_UNK)((int) (0)), (s32)((int) (M2C_FIELD(&lbl_8050BFA0.value, s32 *, 4))));
    TScene__sub_803D8DB4((int) (0), (void *) (&lbl_8050BEE0.value), (void *) (&lbl_8050BEE0.value));
    pop_matrix();
    TBoss4Zako__sub_803D8910((void *) (&lbl_8050BEE0.value), (void *) (arg0 + 0x50));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (void *) (&lbl_8050BEE0.value));
    TBoss6Type1__sub_803D9370((void *) (&lbl_8050BEE0.value), (void *) (arg0 + 0x38));
    if (check_camera_distance__10TObjPlayerFi((void *) (&lbl_8050BEE0.value)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (lbl_804411B0 * get_ad_end_text_start__10TObjPlayerFv((f64) M2C_FIELD(&lbl_8050BEE0.value, f32 *, 0), (f64) M2C_FIELD(&lbl_8050BEE0.value, f32 *, 8)));
        M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(&lbl_8050BEE0.value, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x70));
        M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(&lbl_8050BEE0.value, f32 *, 4) * M2C_FIELD(arg0, f32 *, 0x70));
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (M2C_FIELD(&lbl_8050BEE0.value, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x70));
        return 1;
    }
    return 0;
}

void TODragonfly__sub_8016492C(Self_8016492C *self) {
    f32 d = horizontal_distance_squared(self->target, self->pos);
    if (d < (lbl_805DB584 + self->radius) * (lbl_805DB584 + self->radius)) {
        self->state = 2;
    } else {
        TBoss4Zako__sub_803D8910(self->pos, self->vec);
    }
}

#pragma push
#pragma fp_contract on
void TODragonfly__sub_80164990(u8 *arg0) {
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0xCC);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r5 + 1);
    if (lbl_805DB578 < (f32) temp_r5) {
        if (TODragonfly__sub_80158360((s32) arg0, lbl_805DB588) == 1) {
            if (TODragonfly__sub_80164764((u8 *)(arg0), lbl_805DB578 + M2C_FIELD(arg0, f32 *, 0x6C)) == 1) {
                M2C_FIELD(arg0, s32 *, 0xAC) = 3;
                M2C_FIELD(arg0, s32 *, 0xCC) = 0;
            }
        } else if (TODragonfly__sub_80164764((u8 *)(arg0), M2C_FIELD(arg0, f32 *, 0x6C) * ((lbl_805DB58C * (lbl_805DB57C * (f32) rand())) - lbl_805DB560)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
    }
}
#pragma pop

void TODragonfly__sub_80164A90(O_80164A90 *arg0) {
    f32 t;
    f32 d;
    if (TODragonfly__sub_80158360((s32)arg0, lbl_805DB590) == 1) {
        if (TODragonfly__sub_80164764((u8 *)arg0, lbl_805DB578 + arg0->f6c) == 1) {
            arg0->st = 3;
            arg0->cc = 0;
        }
    } else {
        d = horizontal_distance_squared(arg0->d4, arg0->pos);
        t = lbl_805DB584 + arg0->f70;
        if (d < t * t) {
            arg0->st = 0;
            return;
        }
        TBoss4Zako__sub_803D8910(arg0->pos, arg0->e0);
    }
}

#pragma push
#pragma fp_contract on
void TODragonfly__sub_80164B34(s32 arg0) {
    s32 temp_r4;
    if (TODragonfly__sub_80158360(arg0, lbl_805DB590) == 1) {
        if (TODragonfly__sub_80164764((u8 *)((void *) arg0), lbl_805DB578 + M2C_FIELD(arg0, f32 *, 0x6C)) == 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
    } else {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xCC);
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r4 + 1);
        if ((lbl_805DB578 < (f32) temp_r4) && (TODragonfly__sub_80164764((u8 *)((void *) arg0), M2C_FIELD(arg0, f32 *, 0x6C) * ((lbl_805DB58C * (lbl_805DB57C * (f32) rand())) - lbl_805DB560)) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        }
    }
}
#pragma pop

void draw_model__11TODragonflyFPv(u8 *arg0) {
    if (((VObj_80164c34_80164760 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        translate_matrix(0, lbl_805DB580, M2C_FIELD(arg0, f32 *, 0xF0), lbl_805DB580);
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        pop_matrix();
    }
}

void update__11TODragonflyFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) + M2C_FIELD(arg0, s32 *, 0xF8));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xFC)));
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((DfV_80164cc4_80164760 *)arg0)->vf12();
        return;
    }
    update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TODragonfly__sub_80164B34((s32)(arg0));
        return;
    case 1:
        TODragonfly__sub_80164A90((O_80164A90 *)(arg0));
        return;
    case 2:
        TODragonfly__sub_80164990((u8 *)(arg0));
        return;
    case 3:
        TODragonfly__sub_8016492C((Self_8016492C *)(arg0));
        return;
    }
}

extern M2C_UNK __vt__11TODragonfly[];

void *__dt__11TODragonflyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TODragonfly;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TODragonfly__ct(u8 *arg0) {
    init_map_object_base((void *) (arg0), (int) (tl_05));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80164DEC___vt__11TODragonfly *)&__vt__11TODragonfly).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F98;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (lbl_805DB594 + M2C_FIELD(arg0, f32 *, 0x68));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xD4), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB580;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB580;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB580;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) ((lbl_805DB56C * (f32) M2C_FIELD(arg0, s32 *, 0x84)) + lbl_805DB560);
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (lbl_805DB570 * (lbl_805DB574 / (lbl_805DB578 / M2C_FIELD(arg0, f32 *, 0xF4))));
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (lbl_805DB570 * (lbl_805DB574 * (lbl_805DB57C * (f32) rand())));
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) ((lbl_805DB56C * (f32) M2C_FIELD(arg0, s32 *, 0x88)) + lbl_805DB560);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * TBoss8Dragon__sub_803D64C0((s32)((int) (M2C_FIELD(arg0, s32 *, 0xFC)))));
    return arg0;
}
#pragma pop

}
