#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_state_242__16TObjEneRe2FlowerFPv(void* p);
s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0);
void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
s32 get_flag_11__16TObjEneRe2FlowerFPv();
int TBoss8Dragon__sub_800BB7D4(void*, void*);

void begin_state_242__16TObjEneRe2FlowerFPv(void* p) { if (*(int*)((char*)p + 0x3d4) == 0) { TBoss8Dragon__sub_800BB7D4(p, (void*)242); *(int*)((char*)p + 0x3d4) = 20; } }

s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 2) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return 1;
    }
    return 0;
}

void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3_2, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x44) & 0xFFFFFFFE);
}

void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3_2, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x44) | 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800C294C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_A_800c294c { char pad[0x18]; };
struct V_A_800c294c : Base_A_800c294c {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

extern "C" {

void handle_event__16TObjEneRe2FlowerFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK noop__9TObjEneDDFv(void *, s32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
M2C_UNK fn_800C3A60(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);

extern const f32 lbl_805D9FC0;

void handle_event__16TObjEneRe2FlowerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        ((V_A_800c294c *) arg0)->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x410) = 0;
        TBoss3Volopt__sub_8022675C(fn_800C3A60(arg0, 0x4003A315), arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x200);
        return;
    case 3:
        if (objInBand__FP7GameObjf(M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805D9FC0) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        ((V_A_800c294c *) arg0)->m100();
        ((V_A_800c294c *) arg0)->m86();
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x410);
        M2C_FIELD(arg0, s32 *, 0x410) = (s32) (temp_r4 + 1);
        noop__9TObjEneDDFv(arg0, temp_r4);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFD);
    case 1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C3B80
#include "types.h"

extern "C" {

int get_flag_11__16TObjEneRe2FlowerFPv(void* p);
void TObjEneRe2Flower__sub_800C3BA8(void);

int get_flag_11__16TObjEneRe2FlowerFPv(void* p) { return (*(u32*)((char*)p + 0x3c4) >> 11) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C3BA8
#include "types.h"

extern "C" {

int get_flag_11__16TObjEneRe2FlowerFPv(void* p);
void TObjEneRe2Flower__sub_800C3BA8(void);

void TObjEneRe2Flower__sub_800C3BA8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C3E14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe2Flower__sub_800C3E14(void);
void update_state__16TObjEneRe2FlowerFPv(void *arg0);
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0);
void TObjEneRe2Flower__sub_800C3EA4(void);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
s32 begin_state_242__16TObjEneRe2FlowerFPv(void);
s32 TBoss8Dragon__sub_800BB780(void * a0 = 0);

void TObjEneRe2Flower__sub_800C3E14(void) {  }
void update_state__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 9) {
        if (temp_r0 == 8) {
            begin_state_242__16TObjEneRe2FlowerFPv();
            TBoss8Dragon__sub_800BB780(arg0);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 9);
    }
}
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void TObjEneRe2Flower__sub_800C3EA4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C4048
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804931FC[];

void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804931FC;
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3F4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C443C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__16TObjEneRe2FlowerFv(void);
void *create__16TObjEneRe2FlowerFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneRe2Flower__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_800C4D44();
void *__nw__7TObjectFUl(int);

extern u32 lbl_805D5174;

void destroy_instance__16TObjEneRe2FlowerFv(void) {
    TObjPlayer__sub_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe2FlowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjEneRe2Flower__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#endif
