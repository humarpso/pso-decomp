#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_9e83f9 { char pad[0x18]; };

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct Stack_800C32DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(int);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
u32 TBoss4Type2__sub_800874F4(void *, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 enable__13TParticleCtrlFPv(int);
s32 clamp_frame_index__9TObjEneDDFi(int);
s32 check_v2_mode__9TObjEneDDFv();
s32 set_field_378__9TObjEneDDFPvi(void *, int);
s32 TObjEneDD__sub_800BBA18(void *, int);
s32 noop__9TObjEneDDFv(void *);
s32 fn_800C3A60(void *, int);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *);
s32 set_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 TObjPlayer__sub_800C4A5C(int, void *, void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 TBoss1Dragon__sub_80143504(void *);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
u32 __nw__7TObjectFUl(int);
s32 create_ex__9TTecMegidFiiii(void *, void *, int, int);
extern u8 *lbl_805D5170;
extern const f32 lbl_805D9FD8;
extern const f32 lbl_805D9FDC;
void fn_800C32DC(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_800C32DC(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800C32DC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C32DC, spC) == 0x4) ? 1 : -1];
    Stack_800C32DC stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((VObj_18_9e83f9 *)(arg0))->m94();
        set_child_flags__16TObjEneRe2FlowerFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFF7);
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (3));
        M2C_FIELD(arg0, u32 *, 0x428) = 0U;
        break;
    case 3:
        if ((check_hit_flag__16TObjEneRe2FlowerFPv((void *) (arg0)) == 0) && (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0)) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (3));
            break;
        }
    case 1:
        break;
    case 0:
        TBoss1Dragon__sub_80143504((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x428) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x428) = TBoss4Type2__sub_800874F4((void *) (arg0 + 0x3E8), (int) (0xD1));
            temp_r3 = M2C_FIELD(arg0, u32 *, 0x428);
            if (temp_r3 != 0U) {
                enable__13TParticleCtrlFPv((int) (temp_r3));
            }
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_2 != 0U) {
            if (M2C_FIELD(arg0, f32 *, 0xC0) < lbl_805D9FD8) {
                copy_pos__11TNowLoadingFPvPv((int) (temp_r3_2), (void *) (arg0 + 0x3E8));
            } else {
                enable__13TParticleCtrlFPv((int) (temp_r3_2));
            }
        }
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9FDC)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x3DC));
            stack.spC = lbl_805D9FDC + M2C_FIELD(arg0, f32 *, 0x3C);
            if ((get_flag_11__16TObjEneRe2FlowerFPv((void *) (arg0)) != 0) || (check_v2_mode__9TObjEneDDFv() != 0)) {
                create_ex__9TTecMegidFiiii((void *) (arg0), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (clamp_frame_index__9TObjEneDDFi((int) (M2C_FIELD(lbl_805D5170, s32 *, 0x18)))));
            } else {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x104));
                if (temp_r3_3 != 0U) {
                    TObjPlayer__sub_800C4A5C((int) (temp_r3_3), (void *) (arg0), (void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
                }
            }
            TBoss3Volopt__sub_8022675C((void *) (fn_800C3A60((void *) (arg0), (int) (0x4003A10E))), (void *) (arg0 + 0x3DC), (int) (0), (int) (0));
        }
        ((VObj_18_9e83f9 *)(arg0))->m100();
        ((VObj_18_9e83f9 *)(arg0))->m86();
        noop__9TObjEneDDFv((void *) (arg0));
        break;
    case 5:
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x428);
        if (temp_r3_4 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3_4));
            M2C_FIELD(arg0, u32 *, 0x428) = 0U;
        }
        break;
    }
}

}
