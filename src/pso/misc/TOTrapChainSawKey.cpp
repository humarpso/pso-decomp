#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_373ea7 { char pad[0x18]; };

struct VObj_18_373ea7 : VBase_18_373ea7 {
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
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

struct RecoveredGlobal_802C8910_lbl_804E0CC0 {
    M2C_UNK value;
    u8 remaining[0xDC];
};

extern "C" {
void set_damage__20TOTrapChainSawDamageFPvi(void *, void *);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, int, int);
M2C_UNK TOTrapChainSawKey__sub_802C8F68(void *, int);
M2C_UNK TOTrapChainSawDamage__sub_802C9C00(void *, int);
void TOTrapChainSawDamage__vt25(u8 *arg0);
M2C_UNK TOTrapChainSaw__ct();
M2C_UNK TObjEneGibbles__sub_80156780(void *, int, int);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
extern M2C_UNK __vt__17TOTrapChainSawKey[];
extern RecoveredGlobal_802C8910_lbl_804E0CC0 lbl_804E0CC0;
extern s32 lbl_805D3F08;
u8 *TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2);
void TOTrapChainSaw__sub_802C9090(void);
void set_global_count__12TObjNpcEnemyFi(s32);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_80471F88[];
extern u8 lbl_80471FA8[];
void TOTrapChainSawDamage__vt12(void);
}

extern "C" {

void TOTrapChainSawDamage__vt23(void *arg0);
void TOTrapChainSawDamage__vt24(void* p);
int TOTrapChainSawKey__vt13(void* p);
void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1);
void *create__17TOTrapChainSawKeyFPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjDoor__sub_803DC894(void *, void *, f32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void rotate_matrix_y(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
int decode_params__14TOTrapChainSawFPv(void*);
void set_global_param__8TObjFishFi(void *);

int TOTrapChainSawKey__vt13(void* p) { return decode_params__14TOTrapChainSawFPv(p); }

extern void *tl_05;

void *create__17TOTrapChainSawKeyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct((u8 *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__17TOTrapChainSawKey[];

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802C8910_lbl_804E0CC0_size[sizeof(RecoveredGlobal_802C8910_lbl_804E0CC0) == 0xE0 ? 1 : -1];
u8 *TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2) {
    TOTrapChainSaw__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F08;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    TObjEneGibbles__sub_80156780((void *) (arg0), (int) ((u8 *)(&lbl_804E0CC0.value) + (M2C_FIELD(arg0, s32 *, 0xF8) * 0x58)), (int) (2));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void TOTrapChainSawDamage__vt26(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x104) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x104), M2C_FIELD(arg0, void **, 0xD4));
    }
    if (M2C_FIELD(arg0, void **, 0x108) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x108), M2C_FIELD(arg0, void **, 0xD4));
    }
}

#pragma push
#pragma fp_contract on
void TOTrapChainSawDamage__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + 1);
    void *p;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 5) && ((p = M2C_FIELD(arg0, void **, 0x104)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 0xA) && ((p = M2C_FIELD(arg0, void **, 0x108)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    TOTrapAncient01__sub_80226578(TOTrapChainSawKey__sub_802C8F68((void *) (arg0), (int) (0)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}
#pragma pop

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

void TOTrapChainSawDamage__vt12(void) {
    TOTrapChainSaw__sub_802C9090();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_80471FA8);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_80471F88);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TOTrapChainSawDamage__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9B2C();
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0xD4));
    TObjDoor__sub_803DC894(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
}

}
