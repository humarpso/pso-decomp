#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <dolphin/mtx.h>
#include <stddef.h>

struct D_800D40FC { u8 pad[0x18]; s32 arr[1]; };

struct Hit_800D4200 { s32 a; f32 b; };

struct VBase_18_e08757 { char pad[0x18]; };

struct VObj_18_e08757 : VBase_18_e08757 {
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
    virtual M2C_UNK m21(void *, Hit_800D4200 *, M2C_UNK, M2C_UNK, M2C_UNK);
};

struct Info_800D4200 { u8 pad[0xc]; f32 xc; u8 pad10[8]; s32 flags; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, int);
extern const f32 lbl_805DA2A0;
extern const f32 lbl_805DA2A4;
void TObjGyaranzoMissile__sub_800D4110(u8 *arg0, M2C_UNK *arg1, f32 farg0);
extern s32 lbl_805D51EC;
f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0);
extern s32 lbl_805D51EC;
s32 TObjGyaranzoMissile__sub_800D40FC(s32 i);
s32 TObjPlayer__sub_80019570();
M2C_UNK queue_destruction__7TObjectFv(void *);
u8 *get_battle_param__10TObjPlayerFi(s32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
s32 TObjGyaranzoMissile__sub_800D40FC(s32 i);
M2C_UNK TObjPlayer__sub_800F06B4(int, int);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK init_all_slots__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
extern Hit_800D4200 lbl_8043C440[];
extern const f32 lbl_805DA2A8;
void TObjGyaranzoMissile__sub_800D4200(u8 *arg0);
}

extern "C" {

void TObjGyaranzoMissile__sub_800D40D8(void);
void TObjGyaranzoMissile__sub_800D40DC(void);
int TObjGyaranzoMissile__sub_800D40E0(void);
void TObjGyaranzoMissile__sub_800D40E8(void);
void draw__19TObjGyaranzoMissileFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);

void TObjGyaranzoMissile__sub_800D40D8(void) {  }
void TObjGyaranzoMissile__sub_800D40DC(void) {  }
int TObjGyaranzoMissile__sub_800D40E0(void) { return 0; }
void TObjGyaranzoMissile__sub_800D40E8(void) {  }

extern s32 some_id_805c6f74;

f32 TObjGyaranzoMissile__sub_800D40EC(s32 arg0) {
    return M2C_FIELD((lbl_805D51EC + (arg0 * 4)), f32 *, 0);
}

s32 TObjGyaranzoMissile__sub_800D40FC(s32 i) {
    return (*(D_800D40FC * *)&lbl_805D51EC)->arr[i];
}

void TObjGyaranzoMissile__sub_800D4110(u8 *arg0, M2C_UNK *arg1, f32 farg0) {
    Vec position;
    f32 temp_f1;
    s32 temp_r31;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x38));
    temp_r31 = TObjPlayer__sub_80156844((void *) (arg0), (void *) (&position.x), (int) (0));
    if (arg1 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&position.x));
    }
    if (temp_r31 == 1) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DA2A0);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0xB0));
        temp_f1 = position.y + farg0;
        position.y = temp_f1;
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= temp_f1) {
            M2C_FIELD(arg0, f32 *, 0x3C) = temp_f1;
            M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DA2A4;
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF7FFFFF);
}

void TObjGyaranzoMissile__sub_800D4200(u8 *arg0) {
    u8 *self;
    s32 i;
    u8 *t;
    self = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xD8));
    M2C_FIELD(arg0, Info_800D4200 **, 0xA4)->xc = lbl_805DA2A8;
    init_all_slots__10TObjPlayerFv();
    check_object_collisions__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801564A0(arg0);
    if (M2C_FIELD(arg0, Info_800D4200 **, 0xA4)->flags & 0x180000) {
        for (i = 0; i < 0x10; i++) {
            t = get_battle_param__10TObjPlayerFi(i);
            if (t == NULL) {
                break;
            }
            if (TObjPlayer__sub_80019570() != 0 && t != self) {
                Hit_800D4200 tmp = lbl_8043C440[0];
                tmp.b = TObjGyaranzoMissile__sub_800D40FC(3);
                {
                    Hit_800D4200 h = tmp;
                    ((VObj_18_e08757 *)(t))->m21(self, &h, 0, -1, -1);
                }
            }
        }
    }
    TObjEneDellBiter__sub_80087350(arg0 + 0x38, 0xFB);
    TBoss3Volopt__sub_8022675C((void *)TObjPlayer__sub_800F06B4(0x4003A80C, 0x19), arg0 + 0x38, 0, 0);
    queue_destruction__7TObjectFv(arg0);
}

void draw__19TObjGyaranzoMissileFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xBC));
    rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0xC0));
    some_id_805c6f74 &= 0xFFFFFBFF;
    TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0xC4));
    TObjPlayer__sub_803D9B78();
}

}
