#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VOuter_8018C06C {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};
struct VMem_8018C06C {
    char pad[0x14];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void *create__16TObjContainerIdoFPv(void *arg0);
void render__16TObjContainerIdoFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
void *TObjContainerIdo__ct(void *, void *, void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
s32 TObjEneEpsilonGuard__sub_800D7B1C(void *, void *);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *__nw__7TObjectFUl(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_param__8TObjFishFi(u32);

extern s32 lbl_805D5B98;
extern const u32 lbl_805D5B9C;
extern const f32 lbl_805DBD6C;
extern const f32 lbl_805DBD70;

void render__16TObjContainerIdoFv(u8 *arg0) {
    s32 var_r31;

    if (((VOuter_8018C06C*)arg0)->m8(lbl_805DBD6C, lbl_805DBD70) != 0) {
        var_r31 = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
            var_r31 = TObjEneEpsilonGuard__sub_800D7B1C(arg0 + 0xF0, arg0 + 0x38);
        }
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m6();
        }
        {
            u32 temp = (u32) lbl_805D5B9C;
            if (temp != 0U) {
                set_global_param__8TObjFishFi(temp);
            }
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xC0);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjFish__sub_8001EDC4(lbl_805D5B98, 0);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjFish__sub_8001EDC4(lbl_805D5B98, 1);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m7();
        }
    }
}

extern void *tl_05;

void *create__16TObjContainerIdoFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjContainerIdo__ct(o, tl_05, arg0);
    }
    return o;
}

}
