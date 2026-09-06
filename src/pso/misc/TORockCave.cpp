#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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
    virtual M2C_UNK m8(f32, f32);
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
};

extern "C" {
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void TORockCave__sub_80175134(u8 *arg0);
}

extern "C" {

void *TORockCave__ct(void *arg0);
void TORockCave__sub_80175460(void);
void TORockCave__sub_80175464(void);
void *__dt__10TORockCaveFv(void *arg0, s16 arg1);
void free_instances__10TORockCaveFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TOSensor__sub_80175468(void);
void TObjPlayer__sub_801569F4(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u32 lbl_805D5A80;
extern u32 lbl_805D5A84;

void TORockCave__sub_80175134(u8 *arg0) {
    if (((VObj_18 *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        ((VObj_18 *)(arg0))->m12();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        ((VObj_18 *)(arg0))->m13();
    }
}

void free_instances__10TORockCaveFv(void) {
    if ((u32) lbl_805D5A84 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A84, 1);
        lbl_805D5A84 = 0U;
    }
    if ((u32) lbl_805D5A80 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A80, 1);
        lbl_805D5A80 = 0U;
    }
}

extern M2C_UNK __vt__10TORockCave[];

void *__dt__10TORockCaveFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;
extern const f32 lbl_805DB974;
extern M2C_UNK __vt__10TORockCave[];
extern const f32 lbl_805DB978;
extern void *lbl_805D30F8;

void *TORockCave__ct(void *arg0) {
    TObjPlayer__sub_801569F4(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TORockCave;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D30F8;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DB974;
    M2C_FIELD(arg0, f32 *, 0xB0) = lbl_805DB978;
    return arg0;
}

void TORockCave__sub_80175460(void) {  }
void TORockCave__sub_80175464(void) {  }

}
