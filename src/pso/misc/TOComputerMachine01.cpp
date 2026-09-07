#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TOComputerMachine01__sub_8023DDC8(int, int, int, int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(void *);
extern RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50 TOComputerMachine01__data_8050DB50;
extern s32 lbl_805D53A4;
extern s32 TOComputerMachine01__data_805D58E4;
void render__19TOComputerMachine01Fv(u8 *arg0);
}

extern "C" {

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1);
void *create__19TOComputerMachine01FPv(void *arg0);
void *TOComputerMachine01__ct(void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

typedef char RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50_size[sizeof(RecoveredGlobal_8015B350_TOComputerMachine01__data_8050DB50) == 0x10 ? 1 : -1];
void render__19TOComputerMachine01Fv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;
    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj_18_26a62c *)(arg0))->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        if ((s32) TOComputerMachine01__data_805D58E4 != (s32) lbl_805D53A4) {
            TOComputerMachine01__data_805D58E4 = lbl_805D53A4;
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(&TOComputerMachine01__data_8050DB50.value, s32 *, 0)), (int) (0), (int) (2), (int) (7), (int) (1));
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(&TOComputerMachine01__data_8050DB50.value, s32 *, 4)), (int) (0), (int) (-2), (int) (7), (int) (1));
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(&TOComputerMachine01__data_8050DB50.value, s32 *, 8)), (int) (0), (int) (1), (int) (7), (int) (1));
            TOComputerMachine01__sub_8023DDC8((int) (M2C_FIELD(&TOComputerMachine01__data_8050DB50.value, s32 *, 0xC)), (int) (0), (int) (-1), (int) (7), (int) (1));
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        temp_r31 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(temp_r31, s32 *, 4)));
        begin_effect_render__13TParticleCtrlFv();
        temp_r31_2 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0x2C));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(temp_r31_2, s32 *, 4)));
        temp_r31_3 = (u8 *)(M2C_FIELD(temp_r31_2, u8 **, 0x30));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(temp_r31_3, s32 *, 4)));
        temp_r31_4 = (u8 *)(M2C_FIELD(temp_r31_3, u8 **, 0x30));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(temp_r31_4, s32 *, 4)));
        TOSignCave03__sub_803DB510((void *) (M2C_FIELD(M2C_FIELD(temp_r31_4, u8 **, 0x30), s32 *, 4)));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

void *create__19TOComputerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOComputerMachine01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__19TOComputerMachine01[];

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOComputerMachine01;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
