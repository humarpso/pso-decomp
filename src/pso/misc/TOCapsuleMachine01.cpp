#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern u8 *TOCapsuleMachine01__data_805D58C0;
extern s32 lbl_805D58C4;
extern s32 TOCapsuleMachine01__data_805D58C8;
void TOCapsuleMachine01__sub_8015A6F0(void);
}

extern "C" {

struct Base_8015A5E8 { char pad[0x18]; };
struct VObj_8015A5E8 : Base_8015A5E8 {
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

void *__dt__18TOCapsuleMachine01Fv(void *arg0, s16 arg1);
void *create__18TOCapsuleMachine01FPv(void *arg0);
void render__18TOCapsuleMachine01Fv(u8 *arg0);
void run_task__18TOCapsuleMachine01Fv(void);
M2C_UNK PPCSync();
void *TOCapsuleMachine01__ct(void *, void *);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D53A4;
extern s32 TOCapsuleMachine01__data_805D58C8;
extern s32 lbl_805D58CC;

void run_task__18TOCapsuleMachine01Fv(void) {
    if ((s32) TOCapsuleMachine01__data_805D58C8 != (s32) lbl_805D53A4) {
        TOCapsuleMachine01__data_805D58C8 = lbl_805D53A4;
        TOComputerMachine01__sub_8023DDC8(lbl_805D58CC, 0, 5, 4, 1);
        PPCSync();
    }
}

void render__18TOCapsuleMachine01Fv(u8 *arg0) {
    if (((VObj_8015A5E8 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
    }
}

void *create__18TOCapsuleMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOCapsuleMachine01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__18TOCapsuleMachine01[];

void TOCapsuleMachine01__sub_8015A6F0(void) {
    TOCapsuleMachine01__data_805D58C8 = 0;
    lbl_805D58C4 = 0;
    if ((void *) TOCapsuleMachine01__data_805D58C0 != NULL) {
        TLobby__sub_8001FE7C(TOCapsuleMachine01__data_805D58C0, 1);
        TOCapsuleMachine01__data_805D58C0 = NULL;
    }
}

void *__dt__18TOCapsuleMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOCapsuleMachine01;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
