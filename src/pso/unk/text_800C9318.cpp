#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_0f49f2 { char pad[0x18]; };

struct VObj_18_0f49f2 : VBase_18_0f49f2 {
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
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual void m113();
    virtual void m114();
    virtual M2C_UNK m115(void *);
};

struct Stack_800C9318 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
s32 handle_message__13TObjEneMe1GeeFii(M2C_UNK, s32);
void create_breakup_mdl__12TBoss3VoloptFiiiii(s32, s32, s32, s32, s32);
u8 * TPhotonMylla__sub_80154CB4(u16);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern s32 TObjEneMe1Gee__data_805D51C4;
extern const f32 TObjEneMe1Gee__data_805DA0C8;
void TObjEneMe1Gee__vt110(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneMe1Gee__vt110(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800C9318, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C9318, spC) == 0x4) ? 1 : -1];
    Stack_800C9318 stack;
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, u8 **, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x48C));
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C0));
            ((VObj_18_0f49f2 *)(temp_r3))->m115(arg0);
        }
        create_breakup_mdl__12TBoss3VoloptFiiiii(TObjEneMe1Gee__data_805D51C4, 0, M2C_FIELD(arg0, s32 *, 0x24), (s32) (arg0 + 0x2FC), M2C_FIELD(arg0, s32 *, 0x60));
        TBoss3Volopt__sub_8022675C(handle_message__13TObjEneMe1GeeFii((s32) arg0, 0x3A843), (u32) (arg0 + 0x38), 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x2FC);
        stack.spC -= TObjEneMe1Gee__data_805DA0C8;
        refresh_and_send_entity_flags__12TBoss8DragonFPv(arg0);
        return;
    case 0:
        queue_destruction__7TObjectFv(arg0);
    case 3:
    case 5:
        return;
    }
}

}
