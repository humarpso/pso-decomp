#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8009ED5C_8009ECE0 {
    char pad[0x18];
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
};

struct VBase_18_7dcedb { char pad[0x18]; };

struct VObj_18_7dcedb : VBase_18_7dcedb {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
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
    virtual M2C_UNK m112();
};

struct RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin { M2C_UNK value; u8 remaining[0x1D4]; };
typedef char RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin_size[sizeof(RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin) == 0x1D8 ? 1 : -1];

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
void TObjEneMe1CanadinLeader__sub_8009E504(void *);
void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0);
int set_player_state_default__12TBoss8DragonFPv(void *);
u8 * TPhotonMylla__sub_80154CB4(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void run_task__17TObjEneMe1CanadinFv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 calc_move_vector__17TObjEneMe1CanadinFiPv(void *, void *);
void TObjEneMe1Canadin__sub_8009F004(void *);
void init_object__9TObjEneDDFPv(void *);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
extern M2C_UNK __vt__17TObjEneMe1Canadin[];
extern void *lbl_805D29B0;
u8 *TObjEneMe1Canadin__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5);
}

extern "C" {

void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);
void TObjEneMe1Canadin__vt104(void *arg0);
void *__dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1);
void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0);
void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv(void *arg0);
void set_state_12__17TObjEneMe1CanadinFPv(void* p);
void update__17TObjEneMe1CanadinFPv(void *arg0);
void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E334(void *);
M2C_UNK TObjEneMe1CanadinLeader__sub_8009E350(void *);
void TObjEneMe1Canadin__sub_8009F004(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void queue_destruction__7TObjectFv(void *);

extern void *lbl_805D4FD0;

void TObjEneMe1Canadin__vt104(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D4FD0, void **, 0x42C), s32 *, 0x1C);
}

void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *arg0) {
    if ((s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x354)) == 0) {
        TObjEneMe1CanadinLeader__sub_8009E350(arg0);
        return;
    }
    TObjEneMe1CanadinLeader__sub_8009E334(arg0);
}

extern const f32 lbl_805D98D0;

void update__17TObjEneMe1CanadinFPv(void *arg0) {
    struct VBase_8009ED5C_8009ECE0 *o = (struct VBase_8009ED5C_8009ECE0 *)arg0;
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - M2C_FIELD(arg0, f32 *, 0x3C));
    if (M2C_FIELD(arg0, f32 *, 0x3F4) < lbl_805D98D0) {
        o->m96();
    } else {
        o->m95();
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x3F4);
}

#include "types.h"
extern "C" {

void copy_pos__17TObjEneMe1CanadinFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC));
}

}

void TObjEneMe1Canadin__sub_8009EE18(void) {  }
void set_state_12__17TObjEneMe1CanadinFPv(void* p) { if (*(short*)((char*)p + 0x326) != 12) { TObjEneDD__sub_800BBA18(p, (void*)12); } }
void set_mode0xD_unless_0xBor0xD__17TObjEneMe1CanadinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xD) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0xD));
    }
}
void TObjEneMe1Canadin__sub_8009EE84(void) {  }

extern M2C_UNK __vt__17TObjEneMe1Canadin[];

void run_task__17TObjEneMe1CanadinFv(u8 *arg0) {
    u8 *temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_7dcedb *)(arg0))->m112();
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) && ((M2C_FIELD(arg0, u8 **, 0x3C0) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x4C8)), temp_r3 = M2C_FIELD(arg0, u8 **, 0x3C0), ((temp_r3 == NULL) != 0)) || (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) == 0))) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (((VObj_18_7dcedb *)(arg0))->m81() != 4) {
        ((VObj_18_7dcedb *)(arg0))->m83();
        TObjEneMe1CanadinLeader__sub_8009E504(arg0);
    }
    copy_pos__17TObjEneMe1CanadinFPv((u8 *)(arg0));
    set_player_state_default__12TBoss8DragonFPv(arg0);
    ((VObj_18_7dcedb *)(arg0))->m98();
}

void *__dt__17TObjEneMe1CanadinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
        if (M2C_FIELD(arg0, void **, 0x4A0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4A0)); M2C_FIELD(arg0, M2C_UNK *, 0x4A0) = 0; }
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x408));
        M2C_FIELD(arg0, M2C_UNK *, 0x408) = 0;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3CC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TObjEneMe1Canadin[];
extern void *lbl_805D29B0;

u8 *TObjEneMe1Canadin__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5) {
    init_object__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8009F2E0___vt__17TObjEneMe1Canadin *)&__vt__17TObjEneMe1Canadin).value;
    init_common__18TObjEneMe3SinowZoaFPv((void *) (arg0 + 0x3CC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) (*(s32 *)&lbl_805D29B0);
    M2C_FIELD(arg0, u8 **, 0x3C0) = arg2;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x3C0)));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg5;
    calc_move_vector__17TObjEneMe1CanadinFiPv((void *) (M2C_FIELD(arg0, u8 **, 0x3C0)), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg3)));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C0), s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    TObjEneMe1Canadin__sub_8009F004((void *) (arg0));
    return arg0;
}

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29B0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    update_by_field_0x354__17TObjEneMe1CanadinFPv((void *)(arg0));
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    TObjEneMe1Canadin__sub_8009F004(arg0);
    return arg0;
}

}
