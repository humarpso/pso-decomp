#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80193A84_lbl_8050DCF0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct VBase_18_582a4f { char pad[0x18]; };

struct VObj_18_582a4f : VBase_18_582a4f {
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
    virtual M2C_UNK m18();
};

struct RecoveredGlobal_80193B4C_lbl_8050DCF0 {
    u8 * value;
    u8 remaining[0x14];
};

struct Sw_80193978 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x58]; u16 fE8; };

typedef s32 M2C_UNK;
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
struct Base_801935D8 { char pad[0x18]; };

struct V_801935D8 : Base_801935D8 {
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void init(void *);
};

struct Fence_801935D8 {
    s32 id;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1C[0x30 - 0x1C];
    u32 flags;
    u8 pad34[0x68 - 0x34];
    f32 f68;
    u8 pad6C[0x84 - 0x6C];
    s32 f84;
    u8 pad88[0x8C - 0x88];
    s32 f8C;
    u8 pad90[0xAC - 0x90];
    s32 fAC;
    f32 fB0;
    u8 padB4[0xB8 - 0xB4];
    u16 fB8;
    s16 fBA;
};

extern "C" {
extern RecoveredGlobal_80193A84_lbl_8050DCF0 lbl_8050DCF0;
void TLazerFenceSw__vt14(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
s32 fn_80156BBC(void *, void *);
s32 fn_80156C38(void *);
M2C_UNK TLazerFenceSw__sub_801936E0(void *);
M2C_UNK set_current_scene__6TSceneFi(int);
extern const f32 lbl_805DBE7C;
extern const f32 lbl_805DBE80;
void render__13TLazerFenceSwFv(u8 *arg0);
extern const f32 TLazerFenceSw__data_805DBE84;
extern RecoveredGlobal_80193A84_lbl_8050DCF0 lbl_8050DCF0;
void TLazerFenceSw__vt15(u8 *arg0);
void TOKey__sub_8016AA20();
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u16 lbl_80445CB8[];
extern u8 lbl_80445CD8[];
void TLazerFenceSw__vt24(Sw_80193978 *arg0);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
M2C_UNK fn_80156CEC(void *);
M2C_UNK init_vtable_804AF8D8__14TOAirconCave01FPv(void *);
M2C_UNK init_key__5TOKeyFPv(void *, void *);
u8 *TOKey__ct(void *);
M2C_UNK TLazerFenceSw__sub_8018A554(void *, f32);
extern u16 lbl_80445CB8[];
extern u8 lbl_804B8370[];
extern M2C_UNK __vt__13TLazerFenceSw[];
extern s32 lbl_805D33B0;
extern const f32 TLazerFenceSw__data_805DBE84;
extern const f32 lbl_805DBE8C;
extern const f32 lbl_805DBE90;
void *TLazerFenceSw__ct(void *arg0, void *arg1, void *arg2);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
void TObjPlayer__sub_801569F4(void *);
void TObjLazerFence4__sub_80193188(void *);
extern u16 lbl_80445BE0[];
extern u8 lbl_804B8128[];
extern M2C_UNK __vt__15TObjLazerFence4[];
extern s32 lbl_805D33A8;
extern const f32 lbl_805DBE6C;
void *TObjLazerFence4__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TLazerFenceSw__sub_80193C5C(void);
void TLazerFenceSw__vt16(void *arg0);
void TLazerFenceSw__vt17(void *arg0);
void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1);
void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1);
void *create__13TLazerFenceSwFPv(void *arg0);
void *create__15TObjLazerFence4FPv(void *arg0);
void run_task__13TLazerFenceSwFv(u8 *arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, s32);
void TOKey__sub_8016A8D0(void *);
M2C_UNK TOKey__sub_8016AAE0(void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
void call_vt21__12TBoss3VoloptFPv(void *);
void destroy__14TOAirconCave01FPvs(void *, int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK fn_80156CA0(void *);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void *create__15TObjLazerFence4FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TObjLazerFence4__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TObjLazerFence4[];

void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLazerFence4;
        TObjPlayer__sub_80154A00((void *)((M2C_UNK *)arg0));
        TObjEneGibbles__sub_80156720((void *)(arg0));
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern const f32 TLazerFenceSw__data_805DBE84;

#define self ((Fence_801935D8 *)arg0)
void *TObjLazerFence4__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    ((void (*)(void *, void *, void *))TObjPlayer__sub_801569F4)(self, arg1, arg2);
    self->vt = (void *)__vt__15TObjLazerFence4;
    self->id = lbl_805D33A8;
    ((V_801935D8 *)self)->init(arg2);
    self->fAC = 0;
    self->fB0 = lbl_805DBE6C;
    self->fBA = self->f84;
    i = self->f68;
    if (i < 0) {
        i = 0;
    }
    if (i > 3) {
        i = 3;
    }
    self->fB8 = lbl_80445BE0[i];
    TObjLazerFence4__sub_80193188(self);
    TObjEneGibbles__sub_80156780(self, lbl_804B8128 + (self->f8C % 2) * 0xDC, 5);
    self->flags |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(self);
    refresh_collision_body_centers(self);
    return self;
}
#undef self

#pragma push
#pragma opt_common_subs off
void render__13TLazerFenceSwFv(u8 *arg0) {
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBE7C, lbl_805DBE80) != 0) {
        if (get_state_flag__9TMainTaskFv() != 1) {
            set_depth_buffer_settings_id__FUl((int) (3));
            set_current_scene__6TSceneFi((int) (0x80));
            if (fn_80156BBC((void *) (arg0 + 0xF0), (void *) (arg0 + 0x38)) != 0) {
                if (fn_80156C38((void *) (arg0 + 0xF0)) != 0) {
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m6();
                    TLazerFenceSw__sub_801936E0((void *) (arg0));
                    ((VObj_14_aa9368 *)((u8 *)(arg0) + (240)))->m7();
                } else {
                    TLazerFenceSw__sub_801936E0((void *) (arg0));
                }
            }
            set_current_scene__6TSceneFi((int) (0x8F));
            func_80141618__Fv();
        }
    }
}
#pragma pop

void TLazerFenceSw__vt24(Sw_80193978 *arg0) {
    TOKey__sub_8016AA20();
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    arg0->fE8 = lbl_80445CB8[arg0->f8C % 4];
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_80445CD8);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TLazerFenceSw__vt16(void *arg0) {
    TOKey__sub_8016A8D0(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 TLazerFenceSw__data_805DBE84;

void TLazerFenceSw__vt17(void *arg0) {
    call_vt21__12TBoss3VoloptFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xB0) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
}

extern const f32 lbl_805DBE88;

typedef char RecoveredGlobal_80193A84_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193A84_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt14(u8 *arg0) {
    u32 temp_r4;
    u32 temp_r4_2;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_r4 = M2C_FIELD(M2C_FIELD(&lbl_8050DCF0.value, u8 **, 0), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xB0) > (f32) temp_r4) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) temp_r4;
    }
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_r4_2 = M2C_FIELD(M2C_FIELD(&lbl_8050DCF0.value, u8 **, 4), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0xEC) > (f32) temp_r4_2) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) temp_r4_2;
    }
}

typedef char RecoveredGlobal_80193B4C_lbl_8050DCF0_size[sizeof(RecoveredGlobal_80193B4C_lbl_8050DCF0) == 0x18 ? 1 : -1];
void TLazerFenceSw__vt15(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    if (M2C_FIELD(arg0, f32 *, 0xB0) > (f32) (u32) (M2C_FIELD((*(RecoveredGlobal_80193B4C_lbl_8050DCF0 *)&lbl_8050DCF0).value, s32 *, 4) - 1)) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TLazerFenceSw__data_805DBE84;
    }
    ((VObj_18_582a4f *)(arg0))->m18();
}

void run_task__13TLazerFenceSwFv(u8 *arg0) {
    fn_80156CA0(arg0 + 0xF0);
    TOKey__sub_8016AAE0(arg0);
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (M2C_FIELD(arg0, f32 *, 0x110) + lbl_805DBE88);
}

extern void *tl_05;

void *create__13TLazerFenceSwFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x118);
    if (o != NULL) {
        o = TLazerFenceSw__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern void *lbl_805D5C30;
extern s32 TLazerFenceSw__data_805D5C34;

void TLazerFenceSw__sub_80193C5C(void) {
    if (lbl_805D5C30 != 0) {
        TLobby__sub_8001FE7C(lbl_805D5C30, 1);
        lbl_805D5C30 = 0;
    }
    free_if_valid__10TObjPlayerFi(TLazerFenceSw__data_805D5C34);
    TLazerFenceSw__data_805D5C34 = 0;
}

extern M2C_UNK __vt__13TLazerFenceSw[];

void *__dt__13TLazerFenceSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TLazerFenceSw;
        TObjPlayer__sub_80154A00((void *)(arg0));
        TObjEneGibbles__sub_80156720((void *)(arg0));
        destroy__14TOAirconCave01FPvs((s8 *)arg0 + 0xF0, -1);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
void *TLazerFenceSw__ct(void *arg0, void *arg1, void *arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, u8 **, 0x18) = ((u8 *)&__vt__13TLazerFenceSw);
    init_vtable_804AF8D8__14TOAirconCave01FPv((u8 *)arg0 + 0xF0);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D33B0;
    init_key__5TOKeyFPv(arg0, arg2);
    if (M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    M2C_FIELD(arg0, u16 *, 0xE8) = lbl_80445CB8[M2C_FIELD(arg0, s32 *, 0x8C) % 4];
    M2C_FIELD(arg0, f32 *, 0xB8) = lbl_805DBE8C;
    M2C_FIELD(arg0, f32 *, 0xEC) = TLazerFenceSw__data_805DBE84;
    TObjEneGibbles__sub_80156780(arg0, lbl_804B8370, 1);
    M2C_FIELD(arg0, s32 *, 0x30) |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(arg0);
    fn_80156CEC((u8 *)arg0 + 0xF0);
    TLazerFenceSw__sub_8018A554((u8 *)arg0 + 0xF0, lbl_805DBE90);
    M2C_FIELD(arg0, f32 *, 0x110) = TLazerFenceSw__data_805DBE84;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    return arg0;
}
#pragma pop

}
