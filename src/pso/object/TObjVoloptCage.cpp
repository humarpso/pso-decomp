#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__14TObjVoloptCageFPv(void *arg0);
M2C_UNK TObjVoloptCage__sub_80048CDC();
M2C_UNK TObjVoloptCage__sub_80048E80();
M2C_UNK update_capture__14TObjVoloptCageFPv();
M2C_UNK TObjVoloptCage__sub_80049000();

void update_state__14TObjVoloptCageFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 7:
        TObjVoloptCage__sub_80049000();
        return;
    case 1:
        update_capture__14TObjVoloptCageFPv();
        return;
    case 4:
        TObjVoloptCage__sub_80048E80();
        return;
    case 5:
        TObjVoloptCage__sub_80048CDC();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80048F40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_capture__14TObjVoloptCageFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_801B5328(s32, void *, M2C_UNK, M2C_UNK, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_80019248();
M2C_UNK TLobby__sub_80049568();
M2C_UNK obj_set_flag_20000(s32);

M2C_UNK obj_setFlags30(void *, M2C_UNK);
struct TObjVoloptCage_base { char pad[0x18]; };
struct TObjVoloptCage_VObj : TObjVoloptCage_base {
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
extern const f32 lbl_805D8870;

void update_capture__14TObjVoloptCageFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
        if (temp_r3 != 0) {
            if (TObjPlayer__sub_80019248() != 0) {
                TObjPlayer__sub_801B5328(temp_r3, arg0 + 0x38, -1, 0, lbl_805D8870);
                obj_set_flag_20000(temp_r3);
            }
            TLobby__sub_80049568();
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38C) - 1;
        M2C_FIELD(arg0, s32 *, 0x38C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            obj_setFlags30(arg0, 0x800);
            ((TObjVoloptCage_VObj*)arg0)->m61();
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800490E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800490E8 { char pad[0xC]; };
struct VObj_800490E8 : Base_800490E8 {
    virtual void m0(int);
};

extern "C" {

void destroy__14TObjVoloptCageFv(void);

extern struct VObj_800490E8 *lbl_805D4D20;

void destroy__14TObjVoloptCageFv(void) {
    if (lbl_805D4D20 != NULL) {
        lbl_805D4D20->m0(1);
    }
    lbl_805D4D20 = NULL;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8004912C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_break_model__14TObjVoloptCageFv(void);
s32 TBreakUpMdl__sub_8009705C(s32, s32);
s32 dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK, void *);

extern void *lbl_805D4C10;
extern s32 lbl_805D4D18;
extern s32 lbl_805D4D1C;
extern s32 lbl_805D4D20;
extern s32 lbl_805D4D24;

void init_break_model__14TObjVoloptCageFv(void) {
    s32 var_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(lbl_805D4C10, void **, 0x42C);
    lbl_805D4D24 = M2C_FIELD(temp_r4, s32 *, 0x128);
    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10, temp_r4);
    if (var_r0 != 0) {
        var_r0 = TBreakUpMdl__sub_8009705C(var_r0, lbl_805D4D24);
    }
    lbl_805D4D20 = var_r0;
    lbl_805D4D18 = register_boss__6TLobbyFPv(0x26);
    lbl_805D4D1C = dispatch_shared_handler_a__6TLobbyFPv(0x26);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80049190
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TObjVoloptCageFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern s32 lbl_805D4D24;
extern s32 TObjVoloptCage__data_805D4D28;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D887C;
extern const f32 lbl_805D8880;

struct TObjVoloptCageBase { char pad[0x18]; };
struct TObjVoloptCageVObj : TObjVoloptCageBase {
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

void render__14TObjVoloptCageFv(u8 *arg0) {
    if (((TObjVoloptCageVObj *)arg0)->m8(lbl_805D887C, lbl_805D8880) != 0) {
        set_global_param__8TObjFishFi(TObjVoloptCage__data_805D4D28);
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(lbl_805D4D24);
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C76F0
#include "types.h"

extern "C" {

void TObjVoloptCage__sub_800C76F0(void);

void TObjVoloptCage__sub_800C76F0(void) {  }

}
#endif
#endif
