#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80041C78_80041770 { char pad[0x18]; };
struct VObj_80041C78_80041770 : Base_80041C78_80041770 {
    virtual void pad0(); virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void pad4(); virtual void pad5(); virtual void pad6(); virtual void pad7();
    virtual void pad8(); virtual void pad9(); virtual void pad10(); virtual void pad11();
    virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15();
    virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19();
    virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23();
    virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27();
    virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35();
    virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39();
    virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47();
    virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51();
    virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void m57();
};

struct VBase_18_8712ff { char pad[0x18]; };

struct VObj_18_8712ff : VBase_18_8712ff {
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual M2C_UNK m61();
};

#include <stddef.h>
struct Stack_80041BB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct E_80041B34 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct G_80041B34 { u8 pad[0x42c]; E_80041B34 *entries; };

struct O_80041B34 { u8 pad[0x24]; s32 f24; u8 pad2[0x34 - 0x28]; s32 f34; };

struct O_80041D0C { u8 pad[0x30]; u32 f30; u8 pad2[0x37c - 0x34]; s32 f37c; };

struct S_80041A08 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s16 f1c;
    u8 pad1e[0x0a];
    s16 f28, f2a, f2c;
    u8 pad2e[0x0a];
    f32 f38, f3c, f40;
    u8 pad44[0x3c];
    s32 f80;
};

struct HBase_800418C8 { char pad[0x18]; };

struct Hira_800418C8 : HBase_800418C8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80();
    u8 pad1C[0x38 - 0x1C];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 unkB8;
    u8 padBA[0xD8 - 0xBA];
    void *unkD8;
    s32 unkDC;
    u8 padE0[0x2B8 - 0xE0];
    s16 hp2B8;
    s16 hp2BA;
    u8 pad2BC[0x2FC - 0x2BC];
    f32 home[3];
    u8 pad308[0x32C - 0x308];
    s16 hp32C;
    s16 hp32E;
    u8 pad330[0x33E - 0x330];
    s16 unk33E;
    u8 pad340[0x350 - 0x340];
    void *unk350;
    u8 pad354[0x368 - 0x354];
    s32 unk368;
};

typedef struct Param_800418C8 {
    u8 pad0[0x1C];
    u8 unk1C[0x6C - 0x1C];
    u8 unk6C[0x88 - 0x6C];
    u8 unk88[4];
} Param_800418C8;

struct Hira_80041D3C {
    u8 pad0[0x38];
    u8 pos[0x37C - 0x38];
    s32 state;
    u8 pad380[0x38C - 0x380];
    s16 idx;
};

extern "C" {
extern f32 lbl_804FEE68[];
extern const f32 lbl_805D8700;
void obj_setFlags30(void *, u32);
void TBoss3VoloptHiraisin__sub_80041B64(u8 *arg0);
s32 fn_80086D50(void *, void *, int);
s32 TObjEneDellBiter__sub_80087350(void *, int);
void TBoss3VoloptHiraisin__sub_80041BB4(u8 *arg0);
s32 TObjEnemyCustom__ct(void *);
extern M2C_UNK __vt__20TBoss3VoloptHiraisin[];
extern s32 lbl_805D2738;
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
void TBoss3VoloptHiraisin__sub_80041B34(O_80041B34 *self, s32 i);
void TBoss3VoloptHiraisin__sub_80041D0C(O_80041D0C *self);
void TObjPlayer__sub_80018990(void *, s32, s32, s32, f32, f32);
int VecCopy__FP3VecPC3Vec(s32, s32);
void add_flags_2e4__10TObjPlayerFPvUi(void *, u32);
void obj_setFlags30(void *, u32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
void TBoss3VoloptHiraisin__sub_80041B34(O_80041B34 *self, s32 i);
void TObjEnemyCustom__sub_800C7860(void *);
void set_param__12TObjEneLappyFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
extern Param_800418C8 lbl_80483BB8;
extern s32 lbl_805D4C70;
extern s32 lbl_805D4C74;
extern s32 lbl_805D4C78;
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern const f32 lbl_805D8728;
extern const f32 lbl_805D8734;
void TBoss3VoloptHiraisin__sub_800418C8(Hira_800418C8 *self);
void TBoss3VoloptHiraisin__sub_80041B64(u8 *arg0);
void TBoss3VoloptHiraisin__sub_80041BB4(u8 *arg0);
void damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(void *arg0);
u8 *TPhotonMylla__sub_80154CB4(u16);
int TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern s8 lbl_804FEED0[];
extern u16 lbl_805D4C18;
void TBoss3VoloptHiraisin__sub_80041D3C(Hira_80041D3C *self);
}

extern "C" {

void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1);
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
void *create__20TBoss3VoloptHiraisinFPv(void *arg0);
void damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(void *arg0);
void init_models__20TBoss3VoloptHiraisinFv(void);
void update_state__20TBoss3VoloptHiraisinFPv(void *arg0);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
int VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 *collect_and_count__12TBoss3VoloptFUii(M2C_UNK, M2C_UNK);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 dispatch_shared_handler_b__6TLobbyFPv(M2C_UNK);
M2C_UNK link_photon__10TObjPlayerFUs(u16, M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(M2C_UNK);

extern s32 lbl_805D4C10;
extern s32 lbl_805D4C70;
extern s32 lbl_805D4C74;
extern s32 lbl_805D4C78;
extern s32 lbl_805D4C7C;
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern s32 *lbl_805D4C84;
extern s32 lbl_805D4C88;

void init_models__20TBoss3VoloptHiraisinFv(void) {
    s32 *temp_r3;
    s32 var_r31;

    TBoss3VoloptHiraisin__data_805D4C80 = lbl_805D4C10;
    temp_r3 = collect_and_count__12TBoss3VoloptFUii(TObjFish__sub_8001EDC4(lbl_805D4C10, 0x10), 0xB);
    lbl_805D4C84 = temp_r3;
    *temp_r3 &= 0xFFFFFFFD;
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (var_r31 != 0) {
        var_r31 = TBreakUpMdl__sub_8009705C(var_r31, TObjFish__sub_8001EDC4(TBoss3VoloptHiraisin__data_805D4C80, 0x10));
    }
    lbl_805D4C88 = var_r31;
    lbl_805D4C70 = register_boss__6TLobbyFPv(0x24);
    lbl_805D4C74 = dispatch_shared_handler_b__6TLobbyFPv(0x24);
    lbl_805D4C78 = register_object__6TLobbyFPv(0x24);
    lbl_805D4C7C = dispatch_shared_handler_a__6TLobbyFPv(0x24);
}

extern void *tl_04;

void *create__20TBoss3VoloptHiraisinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TBoss3VoloptHiraisin__sub_80041AA0((u8 *)(o), (M2C_UNK)(tl_04), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__20TBoss3VoloptHiraisin[];

void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss3VoloptHiraisin;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct O_80041B34;
#pragma opt_propagation off
void TBoss3VoloptHiraisin__sub_800418C8(Hira_800418C8 *self) {
    Param_800418C8 *prm;
    prm = &lbl_80483BB8;
    VecCopy__FP3VecPC3Vec((s32)self->home, (s32)self->pos);
    self->home[1] -= lbl_805D8734;
    copy_position__20TBoss3VoloptHiraisinFi((s32)self);
    self->unkDC = *(s32 *)(TBoss3VoloptHiraisin__data_805D4C80 + 0x430);
    self->unkD8 = prm->unk1C;
    set_field_d8__10TObjPlayerFPvi(self, self->unkD8);
    TObjEneGibbles__sub_80156780(self, prm->unk88, 1);
    self->unk368 = 0;
    self->unk350 = prm->unk6C;
    TObjPlayer__sub_80018990(self, lbl_805D4C70, lbl_805D4C74, lbl_805D4C78, lbl_805D8728, lbl_805D8728);
    self->unkB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->unkB8);
    set_field_b8__14TObjEnePanarmsFPvs(self, self->unkB8);
    self->hp32C = self->hp2B8;
    self->hp32E = self->hp2BA;
    self->unk33E = self->hp32C;
    set_param__12TObjEneLappyFPvi(self, 0x2E);
    reset_photon_effect__12TBoss3VoloptFPv(self);
    TBoss3VoloptHiraisin__sub_80041B34((O_80041B34 *)((struct O_80041B34 *)self), (s32)(0x10));
    TObjEnemyCustom__sub_800C7860(self);
    add_flags_2e4__10TObjPlayerFPvUi(self, 4);
    obj_setFlags30(self, 0x8000);
    self->m80();
}

S_80041A08 *TBoss3VoloptHiraisin__ct(S_80041A08 *o, S_80041A08 *src, s16 a, s16 b) {
    s32 g;
    TObjEnemyCustom__ct(o);
    o->vt = __vt__20TBoss3VoloptHiraisin;
    g = lbl_805D2738;
    o->f0 = g;
    o->f1c = a;
    o->f2c = b;
    o->f80 = 0;
    o->f28 = src->f28;
    o->f2a = src->f2a;
    o->f3c = lbl_805D8700;
    o->f38 = lbl_804FEE68[0];
    o->f40 = lbl_804FEE68[2];
    ((s32 (*)(void *, void *, s32))TBoss3VoloptHiraisin__sub_800418C8)(o, lbl_804FEE68, g);
    return o;
}

typedef char RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin_size[sizeof(RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin) == 0x14C ? 1 : -1];
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjEnemyCustom__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin *)&__vt__20TBoss3VoloptHiraisin).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2738;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TBoss3VoloptHiraisin__sub_800418C8((Hira_800418C8 *)((void *) (arg0)));
    return arg0;
}

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

extern s32 lbl_805D4C14;

void TBoss3VoloptHiraisin__sub_80041B34(O_80041B34 *self, s32 i) {
    self->f34 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__data_805D4C80)->entries[i].f8;
    self->f24 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__data_805D4C80)->entries[i].fc;
}

void TBoss3VoloptHiraisin__sub_80041B64(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x40000);
    obj_setFlags30(arg0, 0x800U);
    ((VObj_18_8712ff *)(arg0))->m61();
}

void TBoss3VoloptHiraisin__sub_80041BB4(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80041BB4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80041BB4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80041BB4, sp10) == 0x8) ? 1 : -1];
    Stack_80041BB4 stack;
    stack.sp8 = 0;
    stack.spC = M2C_FIELD(arg0, s32 *, 0x60);
    stack.sp10 = 0;
    fn_80086D50((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) (((u32)__cntlzw(M2C_FIELD(arg0, s16 *, 0x38C) & 3) >> 5) + 0x61));
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0x45));
}

void damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) && ((s32) lbl_805D4C14 >= 0) && ((s32) ((s32) lbl_805D4C14 / 4) == (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x38C) / 4))) {
        link_photon__10TObjPlayerFUs(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
    }
}

void update_state__20TBoss3VoloptHiraisinFPv(void *arg0) {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02040000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
        temp_r4 -= 1;
        M2C_FIELD(arg0, s16 *, 0x33C) = temp_r4;
        if (temp_r4 <= 0) {
            ((VObj_80041C78_80041770 *)arg0)->m57();
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFBFFFF);
        break;
    }
}
void TBoss3VoloptHiraisin__sub_80041D0C(O_80041D0C *self) {
    switch (self->f37c) {
    case -1:
        break;
    case 0:
        self->f30 &= ~0x40000;
        self->f37c = 1;
        break;
    case 1:
        break;
    }
}
void TBoss3VoloptHiraisin__sub_80041D3C(Hira_80041D3C *self) {
    s32 base;
    s32 all;
    s32 j;
    u8 *p;
    switch (self->state) {
    case 0:
        TBoss3Volopt__sub_8022675C(0x4003A804, self->pos, 0, 0);
        damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(self);
        TBoss3VoloptHiraisin__sub_80041BB4((u8 *)self);
        lbl_804FEED0[self->idx] = 1;
        if (self->idx % 4 > 0) {
            all = 1;
            base = (self->idx / 4) * 4;
            for (j = base + 1; j < base + 4; j++) {
                if (lbl_804FEED0[j] == 0) {
                    all = 0;
                }
            }
            if (all != 0) {
                p = TPhotonMylla__sub_80154CB4(lbl_805D4C18 + base);
                if (p != NULL) {
                    TBoss3VoloptHiraisin__sub_80041B64(p);
                }
            }
        } else {
            for (j = self->idx + 1; j < self->idx + 4; j++) {
                p = TPhotonMylla__sub_80154CB4(lbl_805D4C18 + j);
                if (p != NULL) {
                    TBoss3VoloptHiraisin__sub_80041B64(p);
                }
            }
        }
        self->state = 1;
        break;
    case -1:
        return;
    case 1:
        break;
    case 2:
        break;
    }
}

}
