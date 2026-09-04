#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__20TBoss3VoloptHiraisinFPv(void *arg0);
void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1);
void *TBoss3VoloptHiraisin__sub_80041AA0(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjEneGibbles__sub_80156720(void *);

extern void *tl_04;

void *create__20TBoss3VoloptHiraisinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TBoss3VoloptHiraisin__sub_80041AA0(o, tl_04, arg0);
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

}
#else
#if PSO_CLASS_PACKAGE == 0x800410EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjEnemyCustom__sub_800C7860(void *, s32);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_80483BB8[];
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern s32 lbl_805D4C88;

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r4_2;

    create_breakup_mdl__12TBoss3VoloptFiiiii(lbl_805D4C88, lbl_80483BB8, TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__data_805D4C80, 0x10), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
    trigger_dell_biter_events__10TObjPlayerFPv(arg0 + 0x2FC);
    TBoss3Volopt__sub_8022675C(0x4001C112, arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x33E) = temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32C) = temp_r4;
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4_2 & ~0xA00);
    TObjEnemyCustom__sub_800C7860(arg0, temp_r4_2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004155C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);
M2C_UNK TBoss3VoloptHiraisin__sub_8004118C();
M2C_UNK TBoss3VoloptHiraisin__sub_800411F0();
M2C_UNK TBoss3VoloptHiraisin__sub_80041314();
M2C_UNK fn_80040FDC();

void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
    case 1:
        TBoss3VoloptHiraisin__sub_8004118C();
        break;
    case 4:
        TBoss3VoloptHiraisin__sub_80041314();
        break;
    case 5:
        TBoss3VoloptHiraisin__sub_800411F0();
        break;
    case 7:
        fn_80040FDC();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004172C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8004172C { char pad[0xC]; };
struct VObj_8004172C : Base_8004172C {
    virtual void m0(int);
};

extern "C" {

void destroy__20TBoss3VoloptHiraisinFv(void);

extern void *lbl_805D4C88;

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C *o = (struct VObj_8004172C *)lbl_805D4C88;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D4C88 = NULL;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80041770
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_models__20TBoss3VoloptHiraisinFv(void);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_object__6TLobbyFPv(M2C_UNK);
s32 dispatch_shared_handler_b__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 *collect_and_count__12TBoss3VoloptFUii(M2C_UNK, M2C_UNK);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80041B08
#include "types.h"

extern "C" {

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
int VecCopy__FP3VecPC3Vec(s32, s32);

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80041C1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80041C78 { char pad[0x18]; };
struct VObj_80041C78 : Base_80041C78 {
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

extern "C" {

void damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(void *arg0);
void update_state__20TBoss3VoloptHiraisinFPv(void *arg0);
M2C_UNK link_photon__10TObjPlayerFUs(u16, M2C_UNK);

extern s32 lbl_805D4C14;

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
            ((VObj_80041C78 *)arg0)->m57();
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFBFFFF);
        break;
    }
}

}
#endif
#endif
