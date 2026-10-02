#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseV_800ed578 { char pad[0x18]; };
struct VObjV_800ed578 : BaseV_800ed578 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
    virtual M2C_UNK m32();
    virtual M2C_UNK m33();
    virtual M2C_UNK m34();
    virtual M2C_UNK m35();
    virtual M2C_UNK m36();
    virtual M2C_UNK m37();
    virtual M2C_UNK m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual M2C_UNK m41();
    virtual M2C_UNK m42();
    virtual M2C_UNK m43();
    virtual M2C_UNK m44();
    virtual M2C_UNK m45();
    virtual M2C_UNK m46();
    virtual M2C_UNK m47();
    virtual M2C_UNK m48();
    virtual M2C_UNK m49();
    virtual M2C_UNK m50();
    virtual M2C_UNK m51();
    virtual M2C_UNK m52();
    virtual M2C_UNK m53();
    virtual M2C_UNK m54();
    virtual M2C_UNK m55();
    virtual M2C_UNK m56();
    virtual M2C_UNK m57();
    virtual M2C_UNK m58();
    virtual M2C_UNK m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
    virtual M2C_UNK m62();
    virtual M2C_UNK m63();
    virtual M2C_UNK m64();
    virtual M2C_UNK m65();
    virtual M2C_UNK m66();
    virtual M2C_UNK m67();
    virtual M2C_UNK m68();
    virtual M2C_UNK m69();
    virtual M2C_UNK m70();
    virtual M2C_UNK m71();
    virtual M2C_UNK m72();
    virtual M2C_UNK m73();
    virtual M2C_UNK m74();
    virtual M2C_UNK m75();
    virtual M2C_UNK m76();
    virtual M2C_UNK m77();
    virtual M2C_UNK m78();
    virtual M2C_UNK m79();
    virtual M2C_UNK m80();
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual M2C_UNK m91();
    virtual M2C_UNK m92();
    virtual M2C_UNK m93();
    virtual M2C_UNK m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
    virtual M2C_UNK m97();
    virtual M2C_UNK m98();
    virtual M2C_UNK m99(M2C_UNK *);
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
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct Vec_800ED4BC { f32 x, y, z; };

struct Obj_800ED4BC { u8 pad0[0x38]; f32 f38; u8 pad3C[4]; f32 f40; u8 pad44[0x2FC - 0x44]; Vec_800ED4BC v2FC; u8 pad308[0x3C0 - 0x308]; Vec_800ED4BC *f3C0; u8 pad3C4[0x3D8 - 0x3C4]; f32 f3D8; u8 pad3DC[0x3F8 - 0x3DC]; Vec_800ED4BC v3F8; };

extern "C" {
M2C_UNK clear_attack_receipts();
M2C_UNK transition_enemy_state(void *, int);
void TObjEneRe4Bit__vt60(u8 *arg0);
M2C_UNK transition_enemy_state(void *, int);
void TObjEneRe4Bit__vt61(u8 *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneRe4Bit__sub_800ED150(void *);
void copy_pos__13TObjEneRe4BitFPv(void* p);
void run_task__13TObjEneRe4BitFv(u8 *arg0);
int VecCopy__FP3VecPC3Vec(void*, void*);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 lbl_805DA77C;
extern const f32 lbl_805DA780;
void TObjEneRe4Bit__sub_800ED4BC(Obj_800ED4BC *arg0);
}

extern "C" {

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6);
void TObjEneRe4Bit__vt26(void);
void TObjEneRe4Bit__vt59(void);
void TObjEneRe4Bit__vt86(void *arg0);
void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1);
void copy_pos__13TObjEneRe4BitFPv(void* p);
void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEneRe4Bit__sub_800ED7FC(void *);
void TObjPlayer__sub_800A05B8(void *, int);
int VecCopy__FP3VecPC3Vec(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
M2C_UNK init_object__9TObjEneDDFPv();
M2C_UNK init_vtable_and_field18__10TObjPlayerFPv(void *);
s16 obj_getField1c(void *);

#pragma push
#pragma fp_contract on
void TObjEneRe4Bit__sub_800ED4BC(Obj_800ED4BC *arg0) {
    Vec_800ED4BC sp;
    f32 s;
    VecCopy__FP3VecPC3Vec((void*)(&sp), (void*)(arg0->f3C0));
    sp.y = sp.y + arg0->f3D8;
    TBoss6Type1__sub_803D9370(&sp, &arg0->v2FC);
    s = lbl_805DA77C * update_scale__15TObjBoss2TunnelFPv(&sp);
    arg0->v3F8.x = lbl_805DA780 * (sp.x * s + arg0->v3F8.x);
    arg0->v3F8.y = lbl_805DA780 * (sp.y * s + arg0->v3F8.y);
    arg0->v3F8.z = lbl_805DA780 * (sp.z * s + arg0->v3F8.z);
    TBoss4Zako__sub_803D8910(&arg0->v2FC, &arg0->v3F8);
    arg0->f38 = arg0->v2FC.x;
    arg0->f40 = arg0->v2FC.z;
}
#pragma pop

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec((void*)(&sp8), (void*)(arg0 + 0x2FC));
    if (((VObjV_800ed578 *)arg0)->m99(&sp8) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFF7FF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x800);
}

void TObjEneRe4Bit__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}
void copy_pos__13TObjEneRe4BitFPv(void* p) { VecCopy__FP3VecPC3Vec((void*)((char*)p + 0x74), (void*)((char*)p + 0x2fc)); }
void TObjEneRe4Bit__vt59(void) {  }

void TObjEneRe4Bit__vt60(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 5) {
        if (M2C_FIELD(arg0, s32 *, 0x3CC) & 0x1000) {
            clear_attack_receipts();
            return;
        }
        transition_enemy_state((void *)(arg0), (int) (5));
    }
}

void TObjEneRe4Bit__vt61(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 6) {
        if (temp_r0 == 2) {
            transition_enemy_state((void *)(arg0), (int) (6));
            M2C_FIELD(arg0, s32 *, 0x404) = 3;
            return;
        }
        transition_enemy_state((void *)(arg0), (int) (6));
    }
}

void TObjEneRe4Bit__vt26(void) {  }

extern M2C_UNK __vt__13TObjEneRe4Bit[];

void run_task__13TObjEneRe4BitFv(u8 *arg0) {
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if ((((VObj_18 *)(arg0))->m81() == 1) || (temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC), (((temp_r3 & 0x2000) == 0) != 0))) {
        ((VObj_18 *)(arg0))->m83();
        TObjEneRe4Bit__sub_800ED150((void *) (arg0));
    } else {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r3 & 0xFFFFDFFF);
    }
    copy_pos__13TObjEneRe4BitFPv((void*)((void *) (arg0)));
    ((VObj_18 *)(arg0))->m86();
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
}

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x3DC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TObjEneRe4Bit[];
extern s32 lbl_805D2AE8;

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6) {
    init_object__9TObjEneDDFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
    init_vtable_and_field18__10TObjPlayerFPv((void *) (arg0 + 0x3DC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2AE8;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x3C4) = obj_getField1c((void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg5;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg6;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C8) = arg4;
    VecCopy__FP3VecPC3Vec((void*)((void *) (arg0 + 0x38)), (void*)((void *) (arg3)));
    TObjEneRe4Bit__sub_800ED7FC((void *) (arg0));
    return arg0;
}

}
