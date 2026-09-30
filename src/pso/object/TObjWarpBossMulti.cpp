#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VWarp_8019DD34 { char pad[0x18]; };
struct TObjWarpBossMulti_8019DD34 : VWarp_8019DD34 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct P_A_8019DD34 { char pad[0x18]; };
struct P_V_8019DD34 : P_A_8019DD34 {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual s32 m31();
};

struct RecoveredGlobal_8019E418_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Wb_8019DE74 { u8 pad0[0xF4]; s32 fF4; };

struct Obj_8019E238 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x38 - 0x1C];
    u8 f38[0xA4 - 0x38];
    s32 fA4;
    u8 padA8[0xAC - 0xA8];
    f32 fAC;
    u8 padB0[0xBC - 0xB0];
    s32 fBC;
    void *fC0;
    s32 fC4[4];
};

extern "C" {
s32 is_lobby_active__17TObjWarpBossMultiFv(void);
s32 TObjWarpBossMulti__sub_8019E570(s32, f32);
extern RecoveredGlobal_8019E418_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DC01C;
s32 TObjWarpBossMulti__sub_8019E418(u8 *arg0);
void update__17TObjWarpBossMultiFPv(void *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_8044663C[];
extern u8 lbl_80446650[];
void TObjWarpBossMulti__vt18(Wb_8019DE74 *arg0);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TObjPlayer__sub_80154B60(void *);
void TObjAreaWarp__ct(void *);
void init_warp_params__17TObjWarpBossMultiFPv(void* a0);
void update__17TObjWarpBossMultiFPv(void *arg0);
s32 TLobby__sub_8020765C(void);
void *init__13TAdVIConfigGCFPvf(void *, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
extern M2C_UNK __vt__17TObjWarpBossMulti[];
extern s32 lbl_805D348C;
extern const f32 lbl_805DC018;
Obj_8019E238 *TObjWarpBossMulti__ct(Obj_8019E238 *self, void * _w1, void * _w2);
}

extern "C" {

void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1);
void *create__17TObjWarpBossMultiFPv(void *arg0);
void init_warp_params__17TObjWarpBossMultiFPv(void* a0);
void render__17TObjWarpBossMultiFv(u8 *arg0);
void update__17TObjWarpBossMultiFPv(void *arg0);
void update_warp_boss_visibility(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK allow_rendering__7TObjectFv(u32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 check_flag_100__10TObjPlayerFPv(void *);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK disallow_rendering__7TObjectFv(u32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 fn_8013157C(s32, void *);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *create__17TObjWarpBossMultiFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjWarpBossMulti__ct((Obj_8019E238 *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

    extern const float lbl_805DC000;
    extern const float lbl_805DC004;
void init_warp_params__17TObjWarpBossMultiFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = fn_8019F9DC(); *(int*)((char*)a0 + 0xd8) = fn_8019F9D4(); *(int*)((char*)a0 + 0xdc) = fn_8019F9CC(); *(int*)((char*)a0 + 0xe0) = fn_8019F9C4(); *(int*)((char*)a0 + 0xe4) = fn_8019F9BC(); *(int*)((char*)a0 + 0xe8) = fn_8019F9B4(); *(int*)((char*)a0 + 0xec) = fn_8019F9AC(); *(float*)((char*)a0 + 0xf8) = lbl_805DC000; *(float*)((char*)a0 + 0xfc) = lbl_805DC004; }

void update__17TObjWarpBossMultiFPv(void *arg0) {
    s32 temp_r0;

    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = -1;
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xF4) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF4) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
}

extern s32 lbl_805D4DF0;
extern const f32 lbl_805DC008;
extern const f32 lbl_805DC00C;
extern const f32 lbl_805DC010;

void TObjWarpBossMulti__vt18(Wb_8019DE74 *arg0) {
    update__17TObjWarpBossMultiFPv(arg0);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_8044663C);
    }
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_80446650, arg0->fF4);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__17TObjWarpBossMultiFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (fn_8013157C(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((TObjWarpBossMulti_8019DD34*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE8));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xEC));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
        switch (temp_r0) {
        case 0:
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD8), M2C_FIELD(arg0, s32 *, 0xE0), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        case 1:
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        }
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK __vt__17TObjWarpBossMulti[];

void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjWarpBossMulti;
        TObjPlayer__sub_80154A00(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D53A0;

Obj_8019E238 *TObjWarpBossMulti__ct(Obj_8019E238 *self, void * _w1, void * _w2) {
    int i;
    TObjAreaWarp__ct(self);
    self->vt18 = ((s32 *)&__vt__17TObjWarpBossMulti);
    self->f0 = lbl_805D348C;
    self->fBC = TLobby__sub_8020765C();
    self->fA4 = 0;
    TObjPlayer__sub_80154B60(self);
    update__17TObjWarpBossMultiFPv(self);
    init_warp_params__17TObjWarpBossMultiFPv((void*)(self));
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFPvf(p, self->f38, lbl_805DC018);
        }
        self->fC0 = p;
    } else {
        self->fC0 = NULL;
    }
    self->fAC = lbl_805DC018;
    for (i = 0; i < 4; i++) {
        self->fC4[i] = 0;
    }
    return self;
}

void update_warp_boss_visibility(void *arg0) {
    void *temp_r3;
    s32 var_r30;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    var_r30 = 1;
    if ((temp_r3 != NULL) && (((P_V_8019DD34 *) temp_r3)->m31() != 0)) {
        var_r30 = 0;
    }
    if ((temp_r3 != NULL) && (check_flag_100__10TObjPlayerFPv(temp_r3) != 0)) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x168));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0xB0));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x164));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x168));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0xB0));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x164));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    }
}
typedef char RecoveredGlobal_8019E418_lbl_8050E208_size[sizeof(RecoveredGlobal_8019E418_lbl_8050E208) == 0x1B0 ? 1 : -1];
s32 TObjWarpBossMulti__sub_8019E418(u8 *arg0) {
    if (is_lobby_active__17TObjWarpBossMultiFv() == 0) {
        return 0;
    }
    if ((M2C_FIELD(&lbl_8050E208.value, f32 *, 0x44) > lbl_805DC01C) || (TObjWarpBossMulti__sub_8019E570((s32) arg0, M2C_FIELD(arg0, f32 *, 0xAC)) == 0U)) {
        return 1;
    }
    return 0;
}

}
