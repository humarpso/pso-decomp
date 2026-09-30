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

extern "C" {
M2C_UNK obj_setFlags30(void *, int);
void TOTrapChainSawDamage__vt16(u8 *arg0, u8 *arg1);
extern T_802C8F68 lbl_80471EEC;
s32 get_global_state__14TOKeyMachine01Fv();
s32 TOTrapChainSawKey__sub_802C8F68(s32 arg0, s32 arg1);
}

extern "C" {

void TOTrapChainSawDamage__vt13(void *arg0);
void TOTrapChainSawDamage__vt22(void *arg0);
void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void *create__20TOTrapChainSawDamageFPv(void *arg0);
void *TOTrapChainSawDamage__ct(void *, void *, void *);
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

void TOTrapChainSawDamage__vt13(void *arg0) {
    decode_params__14TOTrapChainSawFPv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}

extern void *tl_05;

void *create__20TOTrapChainSawDamageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawDamage__ct(o, tl_05, arg0);
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
