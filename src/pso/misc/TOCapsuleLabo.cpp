#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase802AF370_802af370_802AF2C8 { char pad[0x18]; };
struct VObj802AF370_802af370_802AF2C8 : VBase802AF370_802af370_802AF2C8 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {

void TOCapsuleLabo__vt13(void *arg0);
void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1);
void render__13TOCapsuleLaboFv(u8 *arg0);
void unload_static_data__13TOCapsuleLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_key_object__5TOKeyFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

extern u32 TOCapsuleLabo__data_805D6708;

void unload_static_data__13TOCapsuleLaboFv(void) {
    if ((u32) TOCapsuleLabo__data_805D6708 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCapsuleLabo__data_805D6708, 1);
        TOCapsuleLabo__data_805D6708 = 0U;
    }
}

extern s32 *lbl_805D670C;

void render__13TOCapsuleLaboFv(u8 *arg0) {
    s32 temp_r31_3;
    u8 *temp_r31;
    u8 *temp_r31_2;

    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj802AF370_802af370_802AF2C8 *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            if ((s32 *) lbl_805D670C != NULL) {
                *lbl_805D670C &= 0xFFFFFFF7;
            }
        } else if ((s32 *) lbl_805D670C != NULL) {
            *lbl_805D670C |= 8;
        }
        temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
        temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xE4)));
        TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = M2C_FIELD(temp_r31_2, s32 *, 0x2C);
        begin_effect_render__13TParticleCtrlFv();
        TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
        TObjBoss2Tunnel__sub_803DB470((int) (temp_r31_3));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B78();
    }
}

void TOCapsuleLabo__vt13(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (M2C_FIELD(arg0, s32 *, 0xE4) + 0x222);
}

extern M2C_UNK __vt__13TOCapsuleLabo[];

void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCapsuleLabo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
