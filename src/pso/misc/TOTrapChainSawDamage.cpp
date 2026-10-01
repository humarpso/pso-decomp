#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_62e3d5 { char pad[0x18]; };

struct VObj_18_62e3d5 : VBase_18_62e3d5 {
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
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual f32 m28(f32);
};

struct P_802C8BD0 { s32 a; f32 b; };

#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
struct T_802C8F68 { s32 r[3][3]; };

typedef s32 M2C_UNK;
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
struct VBase_802C8E24 { char pad[0x18]; };

struct VObj_802C8E24 : VBase_802C8E24 {
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
};

struct Copy_802C8E24 { u32 a; struct { u32 w[14]; } b; };

struct Ent_802C8E24 { u8 b[0x58]; };

struct Pair_802C8C60 { s32 v[2]; };

struct Obj_802C8C60 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x70 - 0x28];
    f32 f70;
    u8 pad74[0xB4 - 0x74];
    f32 fB4;
    f32 fB8;
    s32 fBC;
    u8 padC0[0xC8 - 0xC0];
    s32 fC8;
    u8 padCC[0xF8 - 0xCC];
    s32 fF8;
};

extern "C" {
M2C_UNK obj_setFlags30(void *, int);
void TOTrapChainSawDamage__vt16(u8 *arg0, u8 *arg1);
extern T_802C8F68 lbl_80471EEC;
s32 get_global_state__14TOKeyMachine01Fv();
s32 TOTrapChainSawKey__sub_802C8F68(s32 arg0, s32 arg1);
void *TOTrapChainSaw__ct(void *, void *, void *);
void *TOTrapChainSawEdge__ct(void *, void *, void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TObjPlayer__sub_80154E3C(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
void *__nw__7TObjectFUl(int);
extern M2C_UNK __vt__20TOTrapChainSawDamage[];
extern s32 lbl_805D3F04;
extern Ent_802C8E24 lbl_804E0C10[];
extern const f32 lbl_805DE624;
extern const f32 lbl_805DE628;
void *TOTrapChainSawDamage__ct(void *arg0, void *arg1, void *arg2);
s32 fn_802C9924(s32);
s32 TOTrapChainSawKey__sub_802C9960(s32);
s32 TOTrapChainSawKey__sub_802C999C(s32);
extern s32 lbl_80471F28[];
extern s32 lbl_80471F30[];
extern const f32 lbl_805DE618;
extern const f32 lbl_805DE61C;
void TOTrapChainSawDamage__vt14(Obj_802C8C60 *arg0);
}

extern "C" {

void TOTrapChainSawDamage__vt13(void *arg0);
void TOTrapChainSawDamage__vt22(void *arg0);
void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void *create__20TOTrapChainSawDamageFPv(void *arg0);
M2C_UNK TOTrapChainSaw__sub_802C9600();
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK decode_params__14TOTrapChainSawFPv();
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TOTrapChainSawDamage__vt22(void *arg0) {
    TOTrapChainSaw__sub_802C9600();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 0x100);
        return;
    }
    set_indexed_flags(arg0, 1, 0x100);
}

void TOTrapChainSawDamage__vt16(u8 *arg0, u8 *arg1) {
    P_802C8BD0 p;
    p.a = 0;
    p.b = ((VObj_18_62e3d5 *)(arg0))->m28(M2C_FIELD(arg0, f32 *, 0xFC));
    P_802C8BD0 q = p;
    ((VObj_18_62e3d5 *)(arg1))->m21(arg0, (s32 *)&q, 0, -1, -1);
    obj_setFlags30((void *) (arg1), (int) (0x400));
}

void TOTrapChainSawDamage__vt14(Obj_802C8C60 *arg0) {
    Pair_802C8C60 a = *(Pair_802C8C60 *)lbl_80471F28;
    Pair_802C8C60 b = *(Pair_802C8C60 *)lbl_80471F30;
    s32 v;
    arg0->fF8 = (s32)arg0->f70;
    v = arg0->fF8;
    arg0->fF8 = v < 0 ? 0 : (v > 1 ? 1 : v);
    arg0->fC8 = TOTrapChainSawKey__sub_802C999C(a.v[arg0->fF8]);
    arg0->fBC = TOTrapChainSawKey__sub_802C9960(b.v[arg0->fF8]);
    arg0->f24 = fn_802C9924(0);
    arg0->fB4 = lbl_805DE618;
    arg0->fB8 = lbl_805DE61C;
}

void TOTrapChainSawDamage__vt13(void *arg0) {
    decode_params__14TOTrapChainSawFPv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}

extern void *tl_05;

void *create__20TOTrapChainSawDamageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawDamage__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__20TOTrapChainSawDamage[];

void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TOTrapChainSawDamage;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define self ((u8 *)arg0)
void *TOTrapChainSawDamage__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    TOTrapChainSaw__ct(arg0, arg1, arg2);
    *(M2C_UNK **)(self + 0x18) = __vt__20TOTrapChainSawDamage;
    *(s32 *)(self + 0) = lbl_805D3F04;
    ((VObj_802C8E24 *)arg0)->m13();
    ((VObj_802C8E24 *)arg0)->m14();
    TObjEneGibbles__sub_80156780(arg0, &lbl_804E0C10[*(s32 *)(self + 0xF8)], 2);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    *(f32 *)(self + 0x3C) += lbl_805DE624;
    {
        Copy_802C8E24 c = *(Copy_802C8E24 *)arg2;
        *(f32 *)((u8 *)&c + 0x10) += lbl_805DE628;
        o = __nw__7TObjectFUl(0x108);
        if (o != NULL) {
            o = TOTrapChainSawEdge__ct(o, arg0, &c);
        }
        *(void **)(self + 0x104) = o;
        *(f32 *)((u8 *)&c + 0x10) += lbl_805DE624;
        o = __nw__7TObjectFUl(0x108);
        if (o != NULL) {
            o = TOTrapChainSawEdge__ct(o, arg0, &c);
        }
        *(void **)(self + 0x108) = o;
    }
    return arg0;
}
#undef self

s32 TOTrapChainSawKey__sub_802C8F68(s32 arg0, s32 arg1) {
    T_802C8F68 t = lbl_80471EEC;
    s32 *p = t.r[0];
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 34:
        p = t.r[1];
        break;
    case 35:
        p = t.r[2];
        break;
    }
    return p[arg1];
}

}
