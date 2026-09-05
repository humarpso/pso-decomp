#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801708A4_8016F6F8 { char pad[0x18]; };
struct VObj_801708A4_8016F6F8 : Base_801708A4_8016F6F8 {
    virtual int v00();
    virtual int v01();
    virtual int v02();
    virtual int v03();
    virtual int v04();
    virtual int v05();
    virtual int v06();
    virtual int v07();
    virtual int v08();
    virtual int v09();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual void v20(int, f32);
};

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
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual M2C_UNK m78();
    virtual void m79();
    virtual M2C_UNK m80();
};

struct VBase_18_d0f3c0 { char pad[0x18]; };

struct VObj_18_d0f3c0 : VBase_18_d0f3c0 {
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
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79();
};

extern "C" {
u32 TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
void TOMineTrap__sub_8017070C(u8 *arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
void set_indexed_flags(void *, s32, s32);
int TObjPlayer__sub_80154E3C(void*);
void TOMineTrap__sub_80170A5C(u8 *arg0);
}

extern "C" {

void TOMineTrap__sub_80170CD4(void* p);
f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1);
void detonate_if_triggered__10TOMineTrapFi(s32 arg0);
void sync_position__10TOMineTrapFPv(void* p);
f32 trigger_explosion__10TOMineTrapFPv(void *arg0);
void update_trigger__10TOMineTrapFPv(void *arg0);
s32 TLobby__sub_80156A80(void*, s16 *, M2C_UNK);
s32 TOMineTrap__sub_801702C8();
u32 TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
s32 TObjPlayer__sub_80019248(s32);
M2C_UNK TObjPlayer__sub_80154954(void *, s16 *);
int TObjPlayer__sub_80154E3C(void*);
int VecCopy__FP3VecPC3Vec(void*, void*);
s16 obj_getS16_116(s32);
M2C_UNK set_position_xy__10TObjPlayerFPvff(f32, f32);

extern f32 lbl_805DB864;

void detonate_if_triggered__10TOMineTrapFi(s32 arg0) {
    if (TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0x45) != 0U) {
        set_position_xy__10TObjPlayerFPvff(lbl_805DB864, lbl_805DB864);
    }
}

extern f32 lbl_805DB85C;

void TOMineTrap__sub_8017070C(u8 *arg0) {
    TObjEneDellBiter__sub_80087350((s32)((void *) (arg0 + 0x2FC)), (M2C_UNK)((int) (0x47)));
    ((VObj_18 *)(arg0))->m80();
    ((VObj_18 *)(arg0))->m78();
}

f32 trigger_explosion__10TOMineTrapFPv(void *arg0) {
    s16 sp8;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void*)(arg0), (s16 *)(&sp8), (M2C_UNK)(1)) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        TObjPlayer__sub_80154954(arg0, &sp8);
    }
    return lbl_805DB85C;
}

extern f32 lbl_805DB85C;
extern f32 TOMineTrap__data_805DB868;

f32 calc_trigger_range__10TOMineTrapFPvi(void *arg0, s32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return lbl_805DB85C;
    }
    if ((TObjPlayer__sub_80019248(arg1) != 0) && (obj_getS16_116(arg1) != 0)) {
        ((VObj_801708A4_8016F6F8 *)arg0)->v20(0, TOMineTrap__data_805DB868);
    }
    return lbl_805DB85C;
}

void update_trigger__10TOMineTrapFPv(void *arg0) {
    s16 sp8;

    if (((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x4000U) && ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) && (TLobby__sub_80156A80((void*)(arg0), (s16 *)(&sp8), (M2C_UNK)(1)) != 0)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        sp8 = M2C_FIELD(arg0, s16 *, 0x326);
        TObjPlayer__sub_80154954(arg0, &sp8);
    }
}

void TOMineTrap__sub_80170A5C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 2;
    set_indexed_flags(arg0, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_80154E3C((void*)((void *) (arg0)));
    ((VObj_18_d0f3c0 *)(arg0))->m79();
}

void TOMineTrap__sub_80170CD4(void* p) { sync_position__10TOMineTrapFPv((void*)(p)); }

void sync_position__10TOMineTrapFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x38, (char*)p + 0x334); TObjPlayer__sub_80154E3C(p); }

}
