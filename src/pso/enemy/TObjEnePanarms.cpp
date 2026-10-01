#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800E1D38_800E158C { char pad[0x18]; };
struct VObj_800E1D38_800E158C : Base_800E1D38_800E158C {
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
};

#include <dolphin/mtx.h>
#include <stddef.h>
typedef struct { f32 x, y, z; } Vec_800E1A44;
extern "C" {
void TObjEnePanarms__sub_800E1B78(u8 *, u8 *, s32 *);
extern Vec_800E1A44 lbl_8043CD40[];
extern s32 lbl_8043CD58[];
void TObjEnePanarms__sub_800E1B50(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjEneDellBiter__sub_80087350(void *, int);
extern const f32 TObjEnePanarms__data_805DA544;
void TObjEnePanarms__sub_800E15B4(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern Vec_800E1A44 lbl_8043CD60[];
extern s32 lbl_8043CD78[];
void TObjEnePanarms__sub_800E1A44(u8 *arg0);
}

extern "C" {

void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2);
void TObjEnePanarms__sub_800E1D38(void *arg0);
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void init_state__14TObjEnePanarmsFi(s32 arg0);
void reset_split__14TObjEnePanarmsFPv(void *arg0);
void reset_state__14TObjEnePanarmsFPv(void* a0);
int TObjEnePanarms__sub_800E1C98(void*, int);
void TObjEnePanarms__sub_800E1E64(void* p);

    extern const float TObjEnePanarms__data_805DA524;
void reset_state__14TObjEnePanarmsFPv(void* a0) { *(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) = (*(int*)((char*)*(int*)((char*)a0 + 0x37c) + 0x18) & 0xfffffffe); *(float*)((char*)a0 + 0x3b0) = TObjEnePanarms__data_805DA524; *(int*)((char*)a0 + 0x384) = 0; *(int*)((char*)a0 + 0x388) = 0; }

void TObjEnePanarms__sub_800E15B4(u8 *arg0) {
    Vec position;
    if (!(M2C_FIELD(arg0, s32 *, 0x45C) & 7)) {
        VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg0 + 0x3A4));
        position.y += TObjEnePanarms__data_805DA544;
        TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0xF3));
    }
}

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E1A44(u8 *arg0) {
    f32 x;
    f32 z;
    f32 s;
    f32 c;
    x = lbl_8043CD60[M2C_FIELD(arg0, s32 *, 0x380)].x;
    z = lbl_8043CD60[M2C_FIELD(arg0, s32 *, 0x380)].z;
    s = TBoss8Dragon__sub_803D64C0(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    c = TBoss8Dragon__sub_803D64DC(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    VecCopy__FP3VecPC3Vec(arg0 + 0x38C, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
    M2C_FIELD(arg0, f32 *, 0x38C) += x * c + z * s;
    M2C_FIELD(arg0, f32 *, 0x394) += -x * s + z * c;
    M2C_FIELD(arg0, s32 *, 0x398) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x398) += lbl_8043CD78[M2C_FIELD(arg0, s32 *, 0x380)];
}
#pragma pop

void TObjEnePanarms__sub_800E1B50(u8 *arg0) {
    TObjEnePanarms__sub_800E1B78(arg0, arg0 + 0x38, (s32 *)(arg0 + 0x60));
}

#pragma push
#pragma fp_contract on
void TObjEnePanarms__sub_800E1B78(u8 *arg0, u8 *arg1, s32 *arg2) {
    f32 x;
    f32 z;
    f32 s;
    f32 c;

    x = lbl_8043CD40[M2C_FIELD(arg0, s32 *, 0x380)].x;
    z = lbl_8043CD40[M2C_FIELD(arg0, s32 *, 0x380)].z;
    s = TBoss8Dragon__sub_803D64C0(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    c = TBoss8Dragon__sub_803D64DC(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60));
    VecCopy__FP3VecPC3Vec(arg1, M2C_FIELD(arg0, u8 **, 0x39C) + 0x38);
    M2C_FIELD(arg1, f32 *, 0) += x * c + z * s;
    M2C_FIELD(arg1, f32 *, 8) += -x * s + z * c;
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x39C), s32 *, 0x60) - lbl_8043CD58[M2C_FIELD(arg0, s32 *, 0x380)];
    }
}
#pragma pop

void TObjEnePanarms__sub_800E1C8C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x39C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3A0) = arg2;
}

void TObjEnePanarms__sub_800E1D38(void *arg0) {
    struct VObj_800E1D38_800E158C *o = (struct VObj_800E1D38_800E158C *)arg0;
    o->m61();
}

void reset_split__14TObjEnePanarmsFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x378) != 0) {
        TObjEnePanarms__sub_800E1C98((void*)(arg0), 0);
    }
}
int TObjEnePanarms__sub_800E1D94(void* p) { return TObjEnePanarms__sub_800E1C98(p, 5); }
int do_action_2__14TObjEnePanarmsFPv(void* p) { return TObjEnePanarms__sub_800E1C98(p, 2); }
void init_state__14TObjEnePanarmsFi(s32 arg0) {
    TObjEnePanarms__sub_800E1A44((u8 *)(arg0));
    TObjEnePanarms__sub_800E1C98((void*)(arg0), 3);
}

}
