#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); };

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
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

struct Obj_8018CBF0 { u8 pad0[0x84]; s32 id; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerJungEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2);
extern u32 lbl_805D5B98;
extern u32 lbl_805D5B9C;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80445130;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804B70A4;
void TObjContainerIdo__sub_8018C6E8(void);
void load_models__22TObjContainerJungEnemyFPv(void *arg0);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern char lbl_80445430[];
extern char lbl_8044543C[];
void TObjContainerJungEnemy__vt80(Obj_8018CBF0 *self);
}

extern "C" {

void TObjContainerJungEnemy__vt79(u8 *arg0);
void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1);
void free_resources__16TObjContainerIdoFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void dt__16TObjContainerIdoFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u32 lbl_805D5B98;
extern u32 lbl_805D5B9C;

void free_resources__16TObjContainerIdoFv(void) {
    if ((u32) lbl_805D5B9C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B9C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B9C);
        lbl_805D5B9C = 0U;
    }
    if ((u32) lbl_805D5B98 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B98, 1);
        lbl_805D5B98 = 0U;
    }
}

extern M2C_UNK __vt__16TObjContainerIdo[];

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void TObjContainerIdo__sub_8018C6E8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B70A4.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5B98) = var_r0;
    (*(u8 * *)&lbl_805D5B9C) = TLanguage__sub_801E4874((s32) &lbl_80445130.value);
}

void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjContainerIdo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xF0, -1);
        dt__16TObjContainerIdoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805DBD9C;

void TObjContainerJungEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj18*)arg0)->m77();
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

void TObjContainerJungEnemy__vt80(Obj_8018CBF0 *self) {
    load_models__22TObjContainerJungEnemyFPv(self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80445430, self->id);
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_8044543C);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TObjContainerJungEnemy__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TOMonitorMachine01__sub_803D8B5C(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x368));
        begin_effect_render__13TParticleCtrlFv();
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x374));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    case 1:
        return;
    }
}

}
