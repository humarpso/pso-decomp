#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct Stack_8009BF0C {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK refresh_and_send_entity_flags__12TBoss8DragonFPv(void *);
M2C_UNK create_breakup_mdl__12TBoss3VoloptFiiiii(void *, int, int, void *, int);
M2C_UNK trigger_dell_biter_events__10TObjPlayerFPv(void *, f32);
u8 *find_entity_by_id(u16);
M2C_UNK play_sound_effect(int, void *, int, int);
extern s32 lbl_805D4FE0;
extern const f32 TObjEneMe1Canadin__data_805D98AC;
void TObjEneMe1Canadin__vt110(u8 *arg0, s32 arg1);
}

extern "C" {

void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
void update_walk_animation__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback();
f32 TBoss8Dragon__sub_803D64C0(s32, f32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK move_with_wall_slide_commit__9TObjEneDDFPvfff(void *, f32, f32, f32);

extern const f32 lbl_805D98A8;

void update_by_state__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x484) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60), temp_f1);
        M2C_FIELD(arg0, f32 *, 0x488) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
        return;
    case 0:
        advance_animation_playback();
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
        move_with_wall_slide_commit__9TObjEneDDFPvfff(arg0, M2C_FIELD(arg0, f32 *, 0x484), M2C_FIELD(arg0, f32 *, 0x488), lbl_805D98A8);
    case 3:
    case 5:
    case 1:
        return;
    }
}

void update_walk_animation__17TObjEneMe1CanadinFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 0:
        advance_animation_playback();
        M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x470) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 7) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
    case 3:
    case 5:
    case 1:
        return;
    }
}
void TObjEneMe1Canadin__vt110(u8 *arg0, s32 arg1) {
    Stack_8009BF0C stack;
    f32 temp_f1;
    u8 *temp_r3;
    switch (arg1) {
    case 4:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, u8 **, 0x3C0) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x4C8));
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C0));
            ((VObj_18_0f49f2 *)(temp_r3))->m115(arg0);
        }
        create_breakup_mdl__12TBoss3VoloptFiiiii((void *) (lbl_805D4FE0), (int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (arg0 + 0x2FC), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x400000);
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x2FC));
        temp_f1 = stack.spC;
        stack.spC = temp_f1 - TObjEneMe1Canadin__data_805D98AC;
        trigger_dell_biter_events__10TObjPlayerFPv((void *) (&stack.sp8), (f32) (temp_f1));
        refresh_and_send_entity_flags__12TBoss8DragonFPv((void *) (arg0));
        play_sound_effect((int) (0x4003AA1E), (void *) (arg0 + 0x2FC), (int) (0), (int) (0));
        return;
    case 0:
        queue_destruction__7TObjectFv();
    case 3:
    case 5:
        return;
    }
}

}
