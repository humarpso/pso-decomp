#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
M2C_UNK get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK draw_ginja_object();
extern u32 lbl_805D5C68;
extern u32 lbl_805D5C6C;
extern const f32 lbl_805DBFA0;
extern const f32 lbl_805DBFA4;
void render__8TObjTankFv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80446184;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804B8F60;
extern u32 lbl_805D5C68;
extern u32 lbl_805D5C6C;
void load_globals__8TObjTankFv(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *);
extern RecoveredGlobal_8019A880_lbl_804B8F70 lbl_804B8F70;
extern M2C_UNK __vt__8TObjTank[];
extern s32 lbl_805D3444;
u8 *TObjTank__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjTank__create(void *arg0);
void *__dt__8TObjTankFv(void *arg0, s16 arg1);
void free_globals__8TObjTankFv(void);
void run_task__8TObjTankFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

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
void render__8TObjTankFv(u8 *arg0) {
    void *p;
    if ((((VObj *)arg0)->m8(lbl_805DBFA0, lbl_805DBFA4) != 0) && (p = (*(void * *)&lbl_805D5C6C))) {
        set_global_param__8TObjFishFi((u32)p);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        get_bml_model((*(s32 *)&lbl_805D5C68), 0);
        draw_ginja_object();
        pop_matrix();
    }
}

void run_task__8TObjTankFv(void) {  }

extern M2C_UNK __vt__8TObjTank[];

void *__dt__8TObjTankFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjTank;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
u8 *TObjTank__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019A880___vt__8TObjTank *)&__vt__8TObjTank).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3444;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B8F70.value), (int) (1));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void *TObjTank__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TObjTank__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5C68;
extern u32 lbl_805D5C6C;

void free_globals__8TObjTankFv(void) {
    if ((u32) lbl_805D5C6C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C6C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C6C);
        lbl_805D5C6C = 0U;
    }
    if ((u32) lbl_805D5C68 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C68, 1);
        lbl_805D5C68 = 0U;
    }
}
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void load_globals__8TObjTankFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804B8F60.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5C68) = var_r0;
    (*(u8 * *)&lbl_805D5C6C) = load_gvm_texture_file((s32) &lbl_80446184.value);
}

}
