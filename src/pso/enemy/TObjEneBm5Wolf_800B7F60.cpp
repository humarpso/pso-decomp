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
    virtual M2C_UNK m103();
};

struct RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800B85D0_TObjEneBm5Wolf__data_80500B78 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800B85A0_TObjEneBm5Wolf__data_80500B8C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800B8600_TObjEneBm5Wolf__data_80500B78 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct Node_800B850C { void *obj; Node_800B850C *next; };

struct Wolf_800B850C { u8 pad[0x3dc]; s32 id; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
u32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK all_parents_unqueued_for_destruction__7TObjectFv();
void TObjEneBm5Wolf__sub_800B8024(u8 *arg0);
void update__14TObjEneBm5WolfFPvPv(s32, s32);
extern RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C TObjEneBm5Wolf__data_80500B8C;
void TObjEneBm5Wolf__sub_800B8570(s32 arg0);
void update__14TObjEneBm5WolfFPvPv(s32, s32);
extern RecoveredGlobal_800B85D0_TObjEneBm5Wolf__data_80500B78 TObjEneBm5Wolf__data_80500B78;
void TObjEneBm5Wolf__sub_800B85D0(s32 arg0);
void apply_to_position__14TObjEneBm5WolfFPvPv(s32, s32);
extern RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C TObjEneBm5Wolf__data_80500B8C;
void TObjEneBm5Wolf__sub_800B85A0(s32 arg0);
void apply_to_position__14TObjEneBm5WolfFPvPv(s32, s32);
extern RecoveredGlobal_800B85D0_TObjEneBm5Wolf__data_80500B78 TObjEneBm5Wolf__data_80500B78;
void TObjEneBm5Wolf__sub_800B8600(s32 arg0);
extern RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C TObjEneBm5Wolf__data_80500B8C;
Wolf_800B850C *play_sound__14TObjEneBm5WolfFPv(Node_800B850C *);
Wolf_800B850C *TObjEneBm5Wolf__sub_800B850C(s32 id);
}

extern "C" {

void TObjEneBm5Wolf__sub_800B7FB4(void);
void TObjEneBm5Wolf__sub_800B8020(void);
void release_global_805D5120__14TObjEneBm5WolfFv(void);
void set_state15__14TObjEneBm5WolfFPv(void* p);
void set_state__14TObjEneBm5WolfFPv(void *arg0);
void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0) {
    f32 temp_f2;

    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x40C);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x3C)));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC));
}

void TObjEneBm5Wolf__sub_800B7FB4(void) {  }
void set_state15__14TObjEneBm5WolfFPv(void* p) { if (*(short*)((char*)p + 0x326) != 15) { TObjEneDD__sub_800BBA18(p, (void*)15); } }
void set_state__14TObjEneBm5WolfFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x10) && (temp_r0 != 0x11)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x10));
    }
}
void TObjEneBm5Wolf__sub_800B8020(void) {  }

extern u32 TObjEneBm5Wolf__data_805D5120;

void TObjEneBm5Wolf__sub_800B8024(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r3_2;
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x3E0))) != 0U) {
        all_parents_unqueued_for_destruction__7TObjectFv();
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x414);
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x414) = (s32) (temp_r3 - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
                temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
                if ((temp_r0 != 0x10) && (temp_r0 != 0x11)) {
                    TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (0xE)));
                }
            }
        }
        ((VObj_18 *)(arg0))->m83();
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x326);
        if (temp_r3_2 == 0) {
            ((VObj_18 *)(arg0))->m83();
        } else if (temp_r3_2 == 1) {
            VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg0 + 0x50)));
            TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (7)));
            ((VObj_18 *)(arg0))->m83();
        }
    }
    update_collision_center__14TObjEneBm5WolfFPv((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

typedef char RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C_size[sizeof(RecoveredGlobal_800B8570_TObjEneBm5Wolf__data_80500B8C) == 0xC ? 1 : -1];

Wolf_800B850C *TObjEneBm5Wolf__sub_800B850C(s32 id) {
    Node_800B850C *n;
    for (n = ((Node_800B850C * *)&TObjEneBm5Wolf__data_80500B8C)[0]; n != 0; n = n->next) {
        Wolf_800B850C *w = play_sound__14TObjEneBm5WolfFPv(n);
        if (w != 0 && w->id == id) {
            return w;
        }
    }
    return 0;
}

void TObjEneBm5Wolf__sub_800B8570(s32 arg0) {
    update__14TObjEneBm5WolfFPvPv((s32) &TObjEneBm5Wolf__data_80500B8C.value, arg0 + 0x3CC);
}

typedef char RecoveredGlobal_800B85D0_TObjEneBm5Wolf__data_80500B78_size[sizeof(RecoveredGlobal_800B85D0_TObjEneBm5Wolf__data_80500B78) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_800B85A0_TObjEneBm5Wolf__data_80500B8C_size[sizeof(RecoveredGlobal_800B85A0_TObjEneBm5Wolf__data_80500B8C) == 0xC ? 1 : -1];
void TObjEneBm5Wolf__sub_800B85A0(s32 arg0) {
    apply_to_position__14TObjEneBm5WolfFPvPv((s32) &(*(RecoveredGlobal_800B85A0_TObjEneBm5Wolf__data_80500B8C *)&TObjEneBm5Wolf__data_80500B8C).value, arg0 + 0x3CC);
}

void TObjEneBm5Wolf__sub_800B85D0(s32 arg0) {
    update__14TObjEneBm5WolfFPvPv((s32) &TObjEneBm5Wolf__data_80500B78.value, arg0 + 0x3C0);
}

typedef char RecoveredGlobal_800B8600_TObjEneBm5Wolf__data_80500B78_size[sizeof(RecoveredGlobal_800B8600_TObjEneBm5Wolf__data_80500B78) == 0x14 ? 1 : -1];
void TObjEneBm5Wolf__sub_800B8600(s32 arg0) {
    apply_to_position__14TObjEneBm5WolfFPvPv((s32) &(*(RecoveredGlobal_800B8600_TObjEneBm5Wolf__data_80500B78 *)&TObjEneBm5Wolf__data_80500B78).value, arg0 + 0x3C0);
}

void release_global_805D5120__14TObjEneBm5WolfFv(void) {
    if ((u32) TObjEneBm5Wolf__data_805D5120 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5Wolf__data_805D5120, 1);
        TObjEneBm5Wolf__data_805D5120 = 0U;
    }
}

}
