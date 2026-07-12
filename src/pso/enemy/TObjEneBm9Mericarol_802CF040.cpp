#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_802cf040 { char pad[0x18]; };
struct V_A_802cf040 : Base_A_802cf040 {
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

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneBm9Mericarol__sub_802D073C(void *, s32);
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK, s32);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEnePanarms__sub_800F5EB4(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);

extern const f32 lbl_805DE6F4;

void handle_motion_event__19TObjEneBm9MericarolFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((V_A_802cf040 *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        TObjEneDD__sub_800BBA04(arg0, 3, temp_r5);
        M2C_FIELD(arg0, s32 *, 0x490) = 0;
        TBoss3Volopt__sub_8022675C(TObjEnePanarms__sub_800F5EB4(arg0, 0x3AD0F), arg0 + 0x38, 0, 0);
        return;
    case 3:
        if (objInBand__FP7GameObjf(M2C_FIELD(arg0, f32 *, 0xC4) - lbl_805DE6F4) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        ((V_A_802cf040 *) arg0)->m100();
        ((V_A_802cf040 *) arg0)->m86();
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x490);
        M2C_FIELD(arg0, s32 *, 0x490) = (s32) (temp_r4 + 1);
        TObjEneBm9Mericarol__sub_802D073C(arg0, temp_r4);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFFD);
    case 1:
        return;
    }
}

}
