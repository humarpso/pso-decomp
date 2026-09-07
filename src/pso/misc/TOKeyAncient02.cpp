#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual M2C_UNK m8(f32, f32); };

struct RecoveredGlobal_8016B5A4_lbl_80441A74 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8016B5A4_lbl_804B2A7C {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 is_split_screen();
s32 TOKey__sub_8016A280(void *);
s32 TOKey__sub_8016A310(void *);
s32 TOKeyAncient03__vt13(u8 *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(int);
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;
void render__14TOKeyAncient02Fv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 TObjFish__sub_8001EDC4(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8016B5A4_lbl_80441A74 lbl_80441A74;
extern RecoveredGlobal_8016B5A4_lbl_804B2A7C lbl_804B2A7C;
extern u32 lbl_805D5A00;
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;
void TOKeyAncient02__sub_8016B5A4(void);
}

extern "C" {

void TOKeyAncient02__vt23(void);
void TOKeyAncient03__vt23(void);
void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1);
void *create__14TOKeyAncient02FPv(void *arg0);
void free_static__14TOKeyAncient02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyAncient02__ct(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOKeyAncient02__vt23(void) {  }

extern void *tl_05;

void render__14TOKeyAncient02Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    u8 *temp_r31_5;
    if (((VObj18*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = M2C_FIELD(arg0, u8 **, 0x34);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        set_monitor_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x68));
        begin_effect_render__13TParticleCtrlFv();
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        temp_r31_3 = M2C_FIELD(temp_r31_2, u8 **, 0x30);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        set_global_param__8TObjFishFi((int) (M2C_FIELD((*(s32 *)&lbl_805D5A08), M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0xD4) * 4))));
        begin_effect_render__13TParticleCtrlFv();
        temp_r31_4 = (u8 *)((*(u8 * *)&lbl_805D5A04));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
        temp_r31_5 = M2C_FIELD(temp_r31_4, u8 **, 0x2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_5 + 8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xEC)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_5, s32 *, 4)));
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

void *create__14TOKeyAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOKeyAncient02__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A00;
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;

void free_static__14TOKeyAncient02Fv(void) {
    if ((void *) lbl_805D5A08 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A08, s32 *, 4));
        if ((void *) lbl_805D5A08 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A08);
            lbl_805D5A08 = NULL;
        }
    }
    if ((u32) lbl_805D5A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A00, 1);
        lbl_805D5A00 = 0U;
    }
    lbl_805D5A04 = 0;
}

extern M2C_UNK __vt__14TOKeyAncient02[];

typedef char RecoveredGlobal_8016B5A4_lbl_80441A74_size[sizeof(RecoveredGlobal_8016B5A4_lbl_80441A74) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8016B5A4_lbl_804B2A7C_size[sizeof(RecoveredGlobal_8016B5A4_lbl_804B2A7C) == 0x10 ? 1 : -1];
void TOKeyAncient02__sub_8016B5A4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B2A7C.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5A00) = (unsigned char *) ((void *) var_r0);
    (*(s32 *)&lbl_805D5A08) = alloc_buffer__11TOBoss4RockFPv((void *)8);
    M2C_FIELD((*(s32 *)&lbl_805D5A08), s32 *, 0) = TObjFish__sub_8001EDB0((*(u8 * *)&lbl_805D5A00), 0);
    M2C_FIELD((*(s32 *)&lbl_805D5A08), u8 **, 4) = TLanguage__sub_801E4874((s32) &lbl_80441A74.value);
    lbl_805D5A04 = TObjFish__sub_8001EDC4((*(u8 * *)&lbl_805D5A00), 0);
}

void *__dt__14TOKeyAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient02;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOKeyAncient03__vt23(void) {  }
s32 TOKeyAncient03__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = TOKey__sub_8016A280((void *) (arg0));
        } else {
            var_r3 = TOKey__sub_8016A310((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = TOKey__sub_8016A280((void *) (arg0));
        break;
    }
    return var_r31;
}

}
