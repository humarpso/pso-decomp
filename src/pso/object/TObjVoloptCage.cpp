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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

struct RecoveredGlobal_8004938C___vt__14TObjVoloptCage { M2C_UNK value; u8 remaining[0x14C]; };
typedef char RecoveredGlobal_8004938C___vt__14TObjVoloptCage_size[sizeof(RecoveredGlobal_8004938C___vt__14TObjVoloptCage) == 0x150 ? 1 : -1];

typedef s32 M2C_UNK;
typedef struct Obj_80049430 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    s16 f1c;
    u8 pad1e[0x28 - 0x1e];
    s16 f28;
    s16 f2a;
    s16 f2c;
    u8 pad2e[0x30 - 0x2e];
    u32 flags;
    u8 pad34[0x38 - 0x34];
    f32 pos[1];
    f32 f3c;
    u8 pad40[0x80 - 0x40];
    s32 f80;
    u8 pad84[0x326 - 0x84];
    s16 f326;
    u8 pad328[0x338 - 0x328];
    u16 f338;
    u8 pad33a[0x374 - 0x33a];
    s32 f374;
    u8 pad378[0x390 - 0x378];
    s32 f390;
} Obj_80049430;

extern "C" {
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
void update_state__14TObjVoloptCageFPv(void *arg0);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
void run_task__14TObjVoloptCageFv(u8 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv();
M2C_UNK fn_8003F3BC();
void obj_clear_flag30_20000(void *arg0);
s32 check_player_flag1__6TLobbyFPv(int);
M2C_UNK __dt__15TObjEnemyCustomFv(void *, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK send_code_45_1__10TObjPlayerFi(int);
s32 get_player_by_client_id(int);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8004938C___vt__14TObjVoloptCage __vt__14TObjVoloptCage;
u8 *__dt__14TObjVoloptCageFv(u8 *arg0, s16 arg1);
void recalc_combat_stats__10TObjPlayerFv(void *, s32, int, int, f32, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
void reset_photon_effect__12TBoss3VoloptFPv(void *);
void TObjEnemyCustom__ct();
void set_param__12TObjEneLappyFPvi(void *, int);
void init_collision_body_parts(void *, void *, int);
s32 get_player_by_client_id(int);
extern u8 lbl_804848D0[];
extern RecoveredGlobal_8004938C___vt__14TObjVoloptCage __vt__14TObjVoloptCage;
extern s32 lbl_805D2758;
extern u8 *lbl_805D4CE4;
extern s32 lbl_805D4D18;
extern s32 TObjVoloptCage__data_805D4D28;
extern const f32 lbl_805D8884;
extern const f32 lbl_805D8888;
Obj_80049430 *TObjVoloptCage__ct(Obj_80049430 *arg0, Obj_80049430 *arg1, u16 arg2, s16 arg3, s16 arg4);
}

extern "C" {

void TLobby__sub_80049568(void);
void obj_clear_flag30_20000(void *arg0);
void obj_set_flag_20000(void *arg0);
void update_state__14TObjVoloptCageFPv(void *arg0);
M2C_UNK update_breakup__14TObjVoloptCageFPv();
M2C_UNK update_collision_state__14TObjVoloptCageFPv();
M2C_UNK TObjVoloptCage__sub_80049000();
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK update_capture__14TObjVoloptCageFPv();

void update_state__14TObjVoloptCageFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 7:
        TObjVoloptCage__sub_80049000();
        return;
    case 1:
        update_capture__14TObjVoloptCageFPv();
        return;
    case 4:
        update_collision_state__14TObjVoloptCageFPv();
        return;
    case 5:
        update_breakup__14TObjVoloptCageFPv();
        return;
    }
}

    extern int lbl_805D4C3C;

void run_task__14TObjVoloptCageFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjVoloptCage__sub_800C76F0((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        if (((VObj_18 *)(arg0))->m31() != 0) {
            ((VObj_18 *)(arg0))->m61();
        } else if (((VObj_18 *)(arg0))->m30() != 0) {
            ((VObj_18 *)(arg0))->m60();
        }
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            update_state__14TObjVoloptCageFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    update_state__14TObjVoloptCageFPv((void *) (arg0));
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
}

u8 *__dt__14TObjVoloptCageFv(u8 *arg0, s16 arg1) {
    s32 temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TObjVoloptCage.value;
        temp_r3 = get_player_by_client_id((int) (M2C_FIELD(arg0, u16 *, 0x338)));
        if ((temp_r3 != 0) && (is_locally_controlled__10TObjPlayerFPv() != 0)) {
            if (check_player_flag1__6TLobbyFPv((int) (temp_r3)) != 0) {
                send_code_45_1__10TObjPlayerFi((int) (temp_r3));
            }
            obj_clear_flag30_20000((void *)((int) (temp_r3)));
        }
        fn_8003F3BC();
        free_collision_body_parts((void *) (arg0));
        __dt__15TObjEnemyCustomFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

Obj_80049430 *TObjVoloptCage__ct(Obj_80049430 *arg0, Obj_80049430 *arg1, u16 arg2, s16 arg3, s16 arg4) {
    u8 *p;
    TObjEnemyCustom__ct();
    arg0->vt = &__vt__14TObjVoloptCage.value;
    arg0->f0 = lbl_805D2758;
    arg0->f338 = arg2;
    p = (u8 *)get_player_by_client_id(arg0->f338);
    if (p != NULL) {
        VecCopy__FP3VecPC3Vec(arg0->pos, p + 0x38);
    } else {
        queue_destruction__7TObjectFv(arg0);
        return arg0;
    }
    init_collision_body_parts(arg0, lbl_804848D0, 1);
    arg0->f1c = arg3;
    arg0->f2c = arg4;
    arg0->f80 = 0;
    arg0->f28 = arg1->f28;
    arg0->f2a = arg1->f2a;
    reset_photon_effect__12TBoss3VoloptFPv(arg0);
    set_param__12TObjEneLappyFPvi(arg0, 0x2E);
    arg0->f3c = lbl_805D8884;
    recalc_combat_stats__10TObjPlayerFv(arg0, lbl_805D4D18, 0, 0, lbl_805D8888, lbl_805D8888);
    arg0->flags |= 0x40000 | 0x8000;
    arg0->flags &= ~0xA00;
    arg0->f374 = 7;
    arg0->f326 = 7;
    TObjVoloptCage__data_805D4D28 = *(s32 *)(*(u8 **)(lbl_805D4CE4 + 0x42C) + 0x12C);
    arg0->f390 = 0;
    return arg0;
}

void TLobby__sub_80049568(void) { lbl_805D4C3C = 1; }

void obj_set_flag_20000(void *arg0) {
    obj_setFlags30(arg0, 0x20000);
}

void obj_clear_flag30_20000(void *arg0) {
    obj_clearFlags30(arg0, 0x20000);
}

}
