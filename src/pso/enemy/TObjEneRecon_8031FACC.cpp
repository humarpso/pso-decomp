#include "types.h"

struct VBase_18_965ca6 { char pad[0x18]; };

struct VObj_18_965ca6 : VBase_18_965ca6 {
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
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual s32 m95();
};

struct Stack_8031FB6C {
    s32 sp8;
    f32 spC;
};

struct Obj_8031FACC { u8 pad[0x3F4]; s32 f3F4; s32 f3F8; u8 pad2[0x410 - 0x3FC]; s32 f410; s32 f414; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVectorUnder(s32 *, void *, s32);
s32 set_part_local_pos__9TObjEneDDFPvPvi(void *, void *, int);
extern const f32 lbl_805DF450;
extern const f32 lbl_805DF460;
void TObjEneRecon__sub_8031FB6C(u8 *arg0);
s32 has_child_in_anim_5__12TObjEneReconFPv();
f32 trunc_float__17TWindowSubComCardFf(f32);
extern const f32 lbl_805DF45C;
u8 TObjEneRecon__sub_8031FACC(Obj_8031FACC *arg0);
}

extern "C" {

u8 TObjEneRecon__sub_8031FACC(Obj_8031FACC *arg0) {
    s32 r;
    s32 t;
    if (has_child_in_anim_5__12TObjEneReconFPv() == 1) {
        return 0;
    }
    t = (s32)trunc_float__17TWindowSubComCardFf((f32)arg0->f3F8 * lbl_805DF45C);
    r = 0;
    if (arg0->f410 <= t && arg0->f414 < arg0->f3F4) {
        r = 1;
    }
    return (u8)r;
}

void TObjEneRecon__sub_8031FB6C(u8 *arg0) {
    Stack_8031FB6C stack;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3DC) == 1) {
        stack.spC -= lbl_805DF450;
    } else {
        stack.spC += lbl_805DF450;
    }
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15));
    if ((temp_r3 == NULL) || (*(f32 *)((s8 *)arg0 + 0x300) >= (lbl_805DF460 + *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 4)))) {
        ((VObj_18_965ca6 *)(arg0))->m95();
    }
    set_part_local_pos__9TObjEneDDFPvPvi((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
}

}
