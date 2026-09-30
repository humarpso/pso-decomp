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

extern "C" {
s32 get_main_phase();
s32 create__17TObjWarpBossMultiFPv(void *);
s32 __nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern s32 tl_05;
s32 TObjWarpBossMulti__create(s32 arg0);
void queue_destruction__7TObjectFv(void *);
void TObjPlayer__sub_80154B60(void *);
void TObjAreaWarp__ct(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TLobby__sub_8020765C(void);
extern M2C_UNK __vt__12TObjWarpBoss[];
extern s32 lbl_805D3488;
extern const f32 lbl_805DC000;
extern const f32 lbl_805DC018;
Obj_8019F578 *TObjWarpBoss__ct(Obj_8019F578 *self, int _w1, void * _w2);
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
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__12TObjAreaWarpFv(void *, M2C_UNK);
M2C_UNK close_windows__17TObjWarpBossMultiFPv(void *);

extern M2C_UNK __vt__12TObjWarpBoss[];

void *__dt__12TObjWarpBossFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpBoss;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
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
    self->fBC = TLobby__sub_8020765C();
    self->fA4 = 0;
    TObjPlayer__sub_80154B60(self);
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
int fn_8019F9AC(void) {  return lbl_805D5CA4; }

    extern int lbl_805D5CA0;
int fn_8019F9B4(void) {  return lbl_805D5CA0; }

    extern int lbl_805D5C9C;
int fn_8019F9BC(void) {  return lbl_805D5C9C; }

    extern int lbl_805D5C98;
int fn_8019F9C4(void) {  return lbl_805D5C98; }

    extern int lbl_805D5C94;
int fn_8019F9CC(void) {  return lbl_805D5C94; }

    extern int lbl_805D5C90;
int fn_8019F9D4(void) {  return lbl_805D5C90; }

    extern int lbl_805D5C8C;
int fn_8019F9DC(void) {  return lbl_805D5C8C; }

}
