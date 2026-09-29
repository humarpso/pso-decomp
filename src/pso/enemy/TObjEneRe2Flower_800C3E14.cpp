#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_14_2f517b { char pad[0x14]; };

struct VObj_14_2f517b : VBase_14_2f517b {
    virtual void m0();
    virtual void m1();
    virtual M2C_UNK m2();
};

struct VBase_18_6eb1ad { char pad[0x18]; };

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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

struct Stack_800C44C4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
struct RecoveredGlobal_800C44C4_lbl_8043BB90 {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BB90_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BB90) == 0x10 ? 1 : -1];
struct RecoveredGlobal_800C44C4_lbl_8043BBE0 {
    M2C_UNK value;
    u8 remaining[0x10];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BBE0_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BBE0) == 0x14 ? 1 : -1];
struct RecoveredGlobal_800C44C4_lbl_8043BBF4 {
    M2C_UNK value;
    u8 remaining[0x14];
};
typedef char RecoveredGlobal_800C44C4_lbl_8043BBF4_size[sizeof(RecoveredGlobal_800C44C4_lbl_8043BBF4) == 0x18 ? 1 : -1];
struct RecoveredGlobal_800C44C4_lbl_8049316C {
    M2C_UNK value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800C44C4_lbl_8049316C_size[sizeof(RecoveredGlobal_800C44C4_lbl_8049316C) == 0x10 ? 1 : -1];

extern "C" {
s32 check_v2_mode__9TObjEneDDFv();
u8 *TObjEneDD__sub_800BB940(M2C_UNK *, M2C_UNK *);
u8 *TObjEneDD__sub_800BB9AC(M2C_UNK *);
s32 TObjPlayer__sub_800C4D88();
s32 TObjPlayer__sub_800F0928();
s32 get_global_state__14TOKeyMachine01Fv();
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_800C44C4_lbl_8043BB90 lbl_8043BB90;
extern RecoveredGlobal_800C44C4_lbl_8043BBE0 lbl_8043BBE0;
extern RecoveredGlobal_800C44C4_lbl_8043BBF4 lbl_8043BBF4;
extern RecoveredGlobal_800C44C4_lbl_8049316C lbl_8049316C;
extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern s32 lbl_805D5180;
extern const f32 lbl_805D9FAC;
extern const f32 lbl_805D9FBC;
void TObjPlayer__sub_800C44C4(void);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
s32 TObjEneDD__sub_800BBA18(void * a0, s32 a1);
M2C_UNK TObjEneRe2Flower__sub_800C3DC4(void *);
void TObjEneRe2Flower__sub_800C3F70(u8 *arg0);
s32 TObjEneDD__sub_800C2628(void *, void *);
s32 handle_event__16TObjEneRe2FlowerFPvi(void *, void *);
s32 fn_800C2A88(void *, void *);
s32 fn_800C2AC4(void *, void *);
s32 TObjEneDD__sub_800C2CE0(void *, void *);
s32 TObjEneRe2Flower__sub_800C2E64(void *, void *);
s32 fn_800C3088(void *, void *);
s32 fn_800C32DC(void *, void *);
s32 TObjEneDD__sub_800C34FC(void *, void *);
s32 handle_flower_state_change(void *, void *);
s32 handle_state__9TObjEneDDFPvi(void *, void *);
s32 dispatch_action__9TObjEneDDFPvi(void *, void *);
void TObjEneRe2Flower__sub_800C3EA8(s32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TObjEneRe2Flower__sub_800C3E14(void);
void TObjEneRe2Flower__sub_800C3EA4(void);
void *create__16TObjEneRe2FlowerFPv(void *arg0);
void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1);
void destroy_instance__16TObjEneRe2FlowerFv(void);
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0);
void update_state__16TObjEneRe2FlowerFPv(void *arg0);
s32 TBoss8Dragon__sub_800BB780(void * a0 = 0);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
void TObjEneGibbles__sub_80156720(void *);
void *TObjEneRe2Flower__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_800C4D44();
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 begin_state_242__16TObjEneRe2FlowerFPv(void);
void queue_destruction__7TObjectFv(void *);

void TObjEneRe2Flower__sub_800C3E14(void) {  }
void update_state__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 9) {
        if (temp_r0 == 8) {
            begin_state_242__16TObjEneRe2FlowerFPv();
            TBoss8Dragon__sub_800BB780(arg0);
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 9);
    }
}
void set_mode0xA_unless_0xAor0xB__16TObjEneRe2FlowerFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xA) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void TObjEneRe2Flower__sub_800C3EA4(void) {  }

extern M2C_UNK lbl_804931FC[];

void TObjEneRe2Flower__sub_800C3EA8(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        dispatch_action__9TObjEneDDFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        handle_state__9TObjEneDDFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        handle_flower_state_change((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneDD__sub_800C34FC((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        fn_800C32DC((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        fn_800C3088((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        TObjEneDD__sub_800C2CE0((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        fn_800C2AC4((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRe2Flower__sub_800C2E64((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        handle_event__16TObjEneRe2FlowerFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        TObjEneDD__sub_800C2628((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        fn_800C2A88((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void TObjEneRe2Flower__sub_800C3F70(u8 *arg0) {
    s16 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_6eb1ad *)(arg0))->m103();
        return;
    }
    if (((VObj_18_6eb1ad *)(arg0))->m81() != 4) {
        ((VObj_18_6eb1ad *)(arg0))->m83();
    } else {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r3 == 0) || (temp_r3 == 1)) {
            ((VObj_14_2f517b *)((u8 *)(arg0) + (1012)))->m2();
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (s32)((int) (2)));
        }
    }
    TObjEneRe2Flower__sub_800C3DC4((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18_6eb1ad *)(arg0))->m98();
}

void *destroy__16TObjEneRe2FlowerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804931FC;
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3F4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D5174;

void destroy_instance__16TObjEneRe2FlowerFv(void) {
    TObjPlayer__sub_800C4D44();
    if ((u32) lbl_805D5174 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5174, 1);
        lbl_805D5174 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneRe2FlowerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjEneRe2Flower__ct(o, tl_04, arg0);
    }
    return o;
}

void TObjPlayer__sub_800C44C4(void) {
    Stack_800C44C4 stack;

    u8 *temp_r5;

    if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
        lbl_805D5174 = (u32) TObjEneDD__sub_800BB940(&lbl_8049316C.value, &lbl_8043BBE0.value);
    } else if (check_v2_mode__9TObjEneDDFv() != 0) {
        lbl_805D5174 = (u32) TObjEneDD__sub_800BB940(&lbl_8049316C.value, &lbl_8043BBF4.value);
    } else {
        lbl_805D5174 = (u32) TObjEneDD__sub_800BB9AC(&lbl_8049316C.value);
    }
    lbl_805D5178 = 0;
    lbl_805D517C = 0;
    lbl_805D5180 = 0;
    TObjPlayer__sub_800C4D88();
    TObjPlayer__sub_800F0928();
    stack.sp8 = M2C_FIELD(&lbl_8043BB90.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043BB90.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043BB90.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8043BB90.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D5174, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D5174, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x37), (int) (M2C_FIELD(temp_r5, s32 *, 8)), (int) (M2C_FIELD(temp_r5, s32 *, 0xC)), (void *) (&stack.sp8), (f32) (lbl_805D9FBC), (f32) (lbl_805D9FAC));
}

}
