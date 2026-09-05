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
    virtual void m79();
    virtual void m80();
    virtual M2C_UNK m81();
};
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_801A1F48();
void TOMineTrap__sub_80170524(u8 *arg0);
}

extern "C" {

int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);
void TOMineTrap__sub_80170570(void);
void attach_to_keymachine__10TOMineTrapFi(s32 arg0);
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1);
void init_trap__10TOMineTrapFv(void);
void spawn_effect__10TOMineTrapFi(s32 arg0);
void update_state__10TOMineTrapFPv(void *arg0);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, M2C_UNK, M2C_UNK);
s32 TOMineTrap__sub_801702C8(void);
s32 TObjPlayer__sub_80019248(u32 a0 = 0);
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_main_phase();

int TOMineTrap__sub_80170340(void) { return 1; }
int TOMineTrap__sub_80170348(void) { return 1; }
void TOMineTrap__sub_80170350(void) {  }
void TOMineTrap__sub_80170354(void) {  }
s32 check_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}
s32 can_trigger__10TOMineTrapFPvUi(void *arg0, u32 arg1) {
    if (TOMineTrap__sub_801702C8() == 1) {
        return 0;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 2) && (arg1 == (u32) M2C_FIELD(arg0, u32 *, 0x2A8))) {
        return 0;
    }
    if (TObjPlayer__sub_80019248(arg1) != 0) {
        return 1;
    }
    return 0;
}

void TOMineTrap__sub_80170524(u8 *arg0) {
    fn_801A1F48();
    ((VObj_18 *)(arg0))->m81();
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x334), (void *) (arg0 + 0x38));
}

void TOMineTrap__sub_80170570(void) {  }
void init_trap__10TOMineTrapFv(void) { TAdSinglePlyChrSelectGC__sub_80132F2C((void*)16, (void*)16); }
void update_state__10TOMineTrapFPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x348) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        return;
    }
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x344) = 1;
        return;
    }
    if (get_main_phase() == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x344) = 0;
        M2C_FIELD(arg0, s32 *, 0x8C) = 0x1E;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x344) = 2;
}

extern s8 lbl_804420A8[];

void spawn_effect__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_804420A8 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

extern s8 lbl_80442018[];

void attach_to_keymachine__10TOMineTrapFi(s32 arg0) {
    s32 idx = get_global_state__14TOKeyMachine01Fv();
    s32 elem = *(s32 *)(lbl_80442018 + idx * 4);
    if (elem != -1) {
        TBoss3Volopt__sub_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

}
