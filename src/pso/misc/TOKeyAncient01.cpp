#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8016AE84_8016AD58 { char pad[0x18]; };
struct VObj_8016AE84_8016AD58 : Base_8016AE84_8016AD58 {
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
};

#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m18();
};
struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual M2C_UNK m8(f32, f32); };

extern "C" {
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();
void TOKeyAncient01__vt15(u8 *arg0);
M2C_UNK TObjPlayer__sub_803D9214(int, void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(int, void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(void *);
M2C_UNK TObjDoor__sub_803DC894(void *, int, f32);
void render__14TOKeyAncient01Fv(u8 *arg0);
}

extern "C" {

void TOKeyAncient01__vt14(void *arg0);
void TOKeyAncient01__vt23(void);
void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1);
void *create__14TOKeyAncient01FPv(void *arg0);
void set_type__14TOKeyAncient01FPv(void* p);
int TLobby__send_and_handle_60(void*);
void *TOKeyAncient01__ct(void *, void *, void *);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int fn_8016AD3C(void* a0 = 0);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

void set_type__14TOKeyAncient01FPv(void* p) { *(s32*)((char*)p + 0x0) = 3; }

void TOKeyAncient01__vt23(void) {  }

void render__14TOKeyAncient01Fv(u8 *arg0) {
    if (((VObj18*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (void *) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
            TObjDoor__sub_803DC894((void *) (M2C_FIELD(arg0, u8 **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        } else {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (M2C_FIELD(arg0, u8 **, 0x34) + 8));
            TObjBoss2Tunnel__sub_803D929C((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x1C)));
            TObjContainerIdo__sub_803D96A8((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x14)));
            TObjPlayer__sub_803D9214((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 0x18)));
            TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), s32 *, 4)));
            TObjPlayer__sub_803D9B78();
        }
        TObjPlayer__sub_803D9B78();
    }
}

void TOKeyAncient01__vt15(u8 *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_18 *)(arg0))->m18();
}

void TOKeyAncient01__vt14(void *arg0) {
    struct VObj_8016AE84_8016AD58 *o = (struct VObj_8016AE84_8016AD58 *)arg0;
    o->m18();
}

extern void *tl_05;

void *create__14TOKeyAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOKeyAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__14TOKeyAncient01[];

void *__dt__14TOKeyAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
