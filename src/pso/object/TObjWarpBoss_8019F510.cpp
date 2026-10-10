#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8019F578 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x88 - 0x1C];
    s32 f88;
    u8 pad8C[0xA4 - 0x8C];
    s32 fA4;
    u8 padA8[0xAC - 0xA8];
    f32 fAC;
    u8 padB0[0xB4 - 0xB0];
    void *fB4;
    u8 padB8[0xBC - 0xB8];
    s32 fBC;
    u8 padC0[0xC4 - 0xC0];
    f32 fC4;
    u8 padC8[0xD0 - 0xC8];
    s32 fD0;
    s32 fD4;
    u8 padD8[0xDC - 0xD8];
    s16 fDC;
    s16 fDE;
    s16 fE0;
    s16 fE2;
    u8 padE4[0x144 - 0xE4];
    s32 f144[4];
    u8 pad154[0x164 - 0x154];
    s32 f164;
    s32 f168;
    s32 f16C;
    u8 pad170[0x180 - 0x170];
    s32 f180;
};

typedef s32 M2C_UNK;
extern "C" {
s32 get_main_phase();
s32 create__17TObjWarpBossMultiFPv(void *);
s32 __nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 tl_05;
s32 TObjWarpBossMulti__create(s32 arg0);
void queue_destruction__7TObjectFv(void *);
void register_entity_by_id(void *);
void TObjAreaWarp__ct(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_boss_warp_destination(void);
extern M2C_UNK __vt__12TObjWarpBoss[];
extern s32 lbl_805D3488;
extern const f32 lbl_805DC000;
extern const f32 lbl_805DC018;
Obj_8019F578 *TObjWarpBoss__ct(Obj_8019F578 *self, int _w1, void * _w2);
s32 get_bml_motion(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
s32 load_resource_from_descriptor(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 is_global_state_in_table__19TContainerAncient01Fv();
s32 get_global_state__14TOKeyMachine01Fv();
extern u32 lbl_805D5C88;
extern int lbl_805D5C8C;
extern int lbl_805D5C90;
extern int warp_boss_model;
extern int warp_boss_motion;
extern int warp_boss_bml_motion;
extern int warp_boss_model_handle;
extern int lbl_805D5CA4;
extern "C" u8 lbl_80446480[];
extern "C" u8 lbl_80446494[];
extern "C" u8 lbl_804464AC[];
extern "C" u8 lbl_804464C8[];
extern "C" u8 lbl_804464E4[];
extern "C" u8 lbl_80446500[];
extern "C" u8 lbl_80446514[];
extern "C" u8 lbl_8044652C[];
extern "C" u8 lbl_80446544[];
extern "C" u8 lbl_8044655C[];
extern "C" u8 lbl_80446574[];
extern "C" u8 lbl_80446590[];
extern "C" u8 lbl_804465AC[];
extern "C" u8 lbl_804465C4[];
extern "C" u8 lbl_804465E0[];
extern "C" u8 lbl_804465FC[];
extern void *boss_warp_model_names[4];
extern void *boss_warp_motion_names[3];
extern void *lbl_804B94BC[4];
extern void *lbl_804B94CC[3];
extern void *lbl_804B94E8[3];
extern __declspec(section ".data") void *lbl_804B94F4[2];
void load_models__8TObjFishFv(void);
}

extern "C" {

void TObjFish__sub_8019F72C(void);
void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK close_windows__17TObjWarpBossMultiFPv(void *);

extern M2C_UNK __vt__12TObjWarpBoss[];

void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpBoss;
        unregister_object_by_id((M2C_UNK *)arg0);
        close_windows__17TObjWarpBossMultiFPv(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D5C88;

Obj_8019F578 *TObjWarpBoss__ct(Obj_8019F578 *self, int _w1, void * _w2) {
    int i;
    TObjAreaWarp__ct(self);
    self->vt18 = ((s32 *)&__vt__12TObjWarpBoss);
    self->f0 = lbl_805D3488;
    self->fC4 = lbl_805DC000;
    self->fAC = lbl_805DC018;
    self->fBC = get_boss_warp_destination();
    self->fA4 = 0;
    register_entity_by_id(self);
    self->f164 = 0;
    self->f168 = 0;
    self->f180 = 0;
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        self->f16C = -1;
    } else if (self->f88 < 0 || self->f88 > 0xFF) {
        self->f16C = -1;
    } else {
        self->f16C = self->f88;
    }
    if (self->f16C >= 0) {
        self->fDC = 4;
        self->fDE = 4;
    } else {
        self->fDC = 0;
        self->fDE = 0;
    }
    self->fE0 = 0;
    self->fE2 = 0;
    self->fD0 = 0;
    self->fD4 = 0;
    if (self->fB4 != NULL) {
        queue_destruction__7TObjectFv(self->fB4);
        self->fB4 = NULL;
    }
    for (i = 0; i < 4; i++) {
        self->f144[i] = 0;
    }
    return self;
}

s32 TObjWarpBossMulti__create(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;
    if ((is_not_split_screen__13TRaderMapCoreFv() == 0) && (get_main_phase() == 0xE)) {
        return create__17TObjWarpBossMultiFPv((void *) (arg0));
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return create__17TObjWarpBossMultiFPv((void *) (arg0));
    }
    temp_r3 = __nw__7TObjectFUl((int) (0x184));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TObjWarpBoss__ct((Obj_8019F578 *)((int) (temp_r3)), (int)((int) (tl_05)), (void *)((void *) (arg0))));
    }
    return var_r0;
}

void TObjFish__sub_8019F72C(void) {
    if ((u32) lbl_805D5C88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C88, 1);
        lbl_805D5C88 = 0U;
    }
}

    extern int lbl_805D5CA4;

void *boss_warp_model_names[4] = {
    (void *)&lbl_80446480, (void *)&lbl_80446494, (void *)&lbl_804464AC, (void *)0x0,
};
void *boss_warp_motion_names[3] = {
    (void *)&lbl_804464C8, (void *)&lbl_804464E4, (void *)0x0,
};
void *lbl_804B94AC[4] = {
    (void *)&lbl_80446500, (void *)&boss_warp_model_names, (void *)&boss_warp_motion_names, (void *)0x30002,
};
void *lbl_804B94BC[4] = {
    (void *)&lbl_80446514, (void *)&lbl_8044652C, (void *)&lbl_80446544, (void *)0x0,
};
void *lbl_804B94CC[3] = {
    (void *)&lbl_8044655C, (void *)&lbl_80446574, (void *)0x0,
};
void *lbl_804B94D8[4] = {
    (void *)&lbl_80446590, (void *)&lbl_804B94BC, (void *)&lbl_804B94CC, (void *)0x30002,
};
void *lbl_804B94E8[3] = {
    (void *)&lbl_804465AC, (void *)&lbl_804465C4, (void *)0x0,
};
__declspec(section ".data") void *lbl_804B94F4[2] = {
    (void *)&lbl_804465E0, (void *)0x0,
};
void *lbl_804B94FC[4] = {
    (void *)&lbl_804465FC, (void *)&lbl_804B94E8, (void *)&lbl_804B94F4, (void *)0x20001,
};
void load_models__8TObjFishFv(void) {
    s32 st;
    s32 r;
    st = get_global_state__14TOKeyMachine01Fv();
    if (st >= 8 && st <= 0xA) {
        r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (r != 0) {
            r = ((s32 (*)(s32, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK)) load_resource_from_descriptor)(r, 5, lbl_804B94D8, 0, 0, 0);
        }
        (*(s32 *)&lbl_805D5C88) = r;
        (*(s32 *)&lbl_805D5C8C) = get_bml_model(r, 0);
        (*(s32 *)&lbl_805D5C90) = get_bml_model((*(s32 *)&lbl_805D5C88), 2);
        (*(s32 *)&warp_boss_model) = get_bml_model((*(s32 *)&lbl_805D5C88), 1);
        (*(s32 *)&warp_boss_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 1);
        (*(s32 *)&warp_boss_bml_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 0);
        (*(s32 *)&warp_boss_model_handle) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 2);
        (*(s32 *)&lbl_805D5CA4) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 2);
        return;
    }
    if (is_global_state_in_table__19TContainerAncient01Fv() != 0 || st == 0x1C || st == 0x1D) {
        r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (r != 0) {
            r = ((s32 (*)(s32, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK)) load_resource_from_descriptor)(r, 5, lbl_804B94FC, 0, 0, 0);
        }
        (*(s32 *)&lbl_805D5C88) = r;
        (*(s32 *)&lbl_805D5C8C) = get_bml_model(r, 0);
        (*(s32 *)&lbl_805D5C90) = get_bml_model((*(s32 *)&lbl_805D5C88), 1);
        (*(s32 *)&warp_boss_model) = get_bml_model((*(s32 *)&lbl_805D5C88), 1);
        (*(s32 *)&warp_boss_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 0);
        (*(s32 *)&warp_boss_bml_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 0);
        (*(s32 *)&warp_boss_model_handle) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 0);
        (*(s32 *)&lbl_805D5CA4) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 0);
        return;
    }
    r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = ((s32 (*)(s32, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK)) load_resource_from_descriptor)(r, 5, lbl_804B94AC, 0, 0, 0);
    }
    (*(s32 *)&lbl_805D5C88) = r;
    (*(s32 *)&lbl_805D5C8C) = get_bml_model(r, 0);
    (*(s32 *)&lbl_805D5C90) = get_bml_model((*(s32 *)&lbl_805D5C88), 2);
    (*(s32 *)&warp_boss_model) = get_bml_model((*(s32 *)&lbl_805D5C88), 1);
    (*(s32 *)&warp_boss_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 1);
    (*(s32 *)&warp_boss_bml_motion) = get_bml_motion((*(s32 *)&lbl_805D5C88), 0);
    (*(s32 *)&warp_boss_model_handle) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 2);
    (*(s32 *)&lbl_805D5CA4) = TObjFish__sub_8001EDB0((*(s32 *)&lbl_805D5C88), 2);
}

int fn_8019F9AC(void) {  return lbl_805D5CA4; }

    extern int warp_boss_model_handle;
int fn_8019F9B4(void) {  return warp_boss_model_handle; }

    extern int warp_boss_bml_motion;
int fn_8019F9BC(void) {  return warp_boss_bml_motion; }

    extern int warp_boss_motion;
int fn_8019F9C4(void) {  return warp_boss_motion; }

    extern int warp_boss_model;
int fn_8019F9CC(void) {  return warp_boss_model; }

    extern int lbl_805D5C90;
int fn_8019F9D4(void) {  return lbl_805D5C90; }

    extern int lbl_805D5C8C;
int fn_8019F9DC(void) {  return lbl_805D5C8C; }

}
