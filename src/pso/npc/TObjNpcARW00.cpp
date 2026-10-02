#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_80148038___vt__12TObjNpcARW00 {
    M2C_UNK value;
    u8 remaining[0x174];
};

struct Npc_801480FC {
    u8 pad0[0x60];
    s32 f60;
    u8 pad64[0x358 - 0x64];
    f32 f358;
    f32 f35C;
    f32 f360;
    f32 f364;
    u8 pad368[0x384 - 0x368];
    s32 f384;
    u8 pad388[0x38C - 0x388];
    s32 f38C;
    u8 pad390[0x3A0 - 0x390];
    s32 f3A0;
    s32 f3A4;
    s32 f3A8;
    s32 f3AC;
};

extern "C" {
M2C_UNK play_sound_effect(int, void *, int, int);
void TObjNpcARW00__vt88(s32 arg0);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 TObjNpcFemaleBase__sub_80149CE0(void *);
extern M2C_UNK __vt__12TObjNpcARW00[];
extern s32 lbl_805D2D18;
extern u32 TObjNpcARW00__data_805D5730;
extern u32 TObjNpcARW00__data_805D5734;
u8 *TObjNpcARW00__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *create_named_object(const char *name);
void *TLanguage__sub_801E4874(const char *name);
extern u32 TObjNpcARW00__data_805D5730;
extern u32 TObjNpcARW00__data_805D5734;
extern char lbl_8043F4A8[];
extern char lbl_8043F4BC[];
void TObjNpcARW00__sub_80147FA4(void);
void set_global_count__12TObjNpcEnemyFi(s32);
void TObjEneBm5GibonU__sub_803D853C(s32, const char *, ...);
extern char lbl_8043F4DC[];
extern char lbl_8043F4F8[];
extern char lbl_8043F514[];
extern char lbl_8043F52C[];
extern const f32 lbl_805DB1B8;
void TObjNpcEnemy__sub_801480FC(Npc_801480FC *o);
}

extern "C" {

void TObjNpcFemaleBase__sub_801480F4(void);
void TObjNpcFemaleBase__sub_801480F8(void);
void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcARW00Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void __dl__7TObjectFPv(void *);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcARW00__data_805D5730;
extern u32 TObjNpcARW00__data_805D5734;

void free_resources__12TObjNpcARW00Fv(void) {
    if ((u32) TObjNpcARW00__data_805D5734 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcARW00__data_805D5734);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcARW00__data_805D5734);
        TObjNpcARW00__data_805D5734 = 0U;
    }
    if ((u32) TObjNpcARW00__data_805D5730 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcARW00__data_805D5730);
        TObjNpcARW00__data_805D5730 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcARW00[];

void TObjNpcARW00__sub_80147FA4(void) {
    TObjNpcARW00__data_805D5730 = (u32)create_named_object(lbl_8043F4A8);
    TObjNpcARW00__data_805D5734 = (u32)TLanguage__sub_801E4874(lbl_8043F4BC);
}

void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcARW00;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80148038___vt__12TObjNpcARW00_size[sizeof(RecoveredGlobal_80148038___vt__12TObjNpcARW00) == 0x178 ? 1 : -1];
u8 *TObjNpcARW00__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjNpcFemaleBase__sub_80149CE0((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80148038___vt__12TObjNpcARW00 *)&__vt__12TObjNpcARW00).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2D18;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) *(*(s32 * *)&TObjNpcARW00__data_805D5730);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (*(s32 *)&TObjNpcARW00__data_805D5734);
    fn_80148274((void *) (arg0));
    return arg0;
}

void TObjNpcARW00__vt88(s32 arg0) {
    play_sound_effect((int) (0x40004C15), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjNpcFemaleBase__sub_801480F4(void) {  }
void TObjNpcFemaleBase__sub_801480F8(void) {  }
void TObjNpcEnemy__sub_801480FC(Npc_801480FC *o) {
    o->f384 = o->f60;
    o->f38C = 0;
    if (lbl_805DB1B8 <= o->f358) {
        o->f38C = 1;
        o->f3A0 = o->f358 - lbl_805DB1B8;
    } else {
        o->f3A0 = o->f358;
    }
    if (lbl_805DB1B8 <= o->f35C) {
        o->f38C = 1;
        o->f3A4 = o->f35C - lbl_805DB1B8;
    } else {
        o->f3A4 = o->f35C;
    }
    o->f3A8 = o->f364;
    o->f3AC = o->f360;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x1A001D, lbl_8043F4DC, o->f358);
    TObjEneBm5GibonU__sub_803D853C(0x1A001E, lbl_8043F4F8, o->f35C);
    TObjEneBm5GibonU__sub_803D853C(0x1A001F, lbl_8043F514, o->f3AC);
    TObjEneBm5GibonU__sub_803D853C(0x1A0020, lbl_8043F52C, o->f3A8);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
