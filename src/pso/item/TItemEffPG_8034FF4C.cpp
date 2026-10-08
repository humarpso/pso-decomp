#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct PgBase_8034FF4C { char pad[0x18]; };
struct PgV_8034FF4C : PgBase_8034FF4C {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual s32 vf05();
};

struct RecoveredGlobal_8035007C___vt__10TItemEffPG { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_8035007C___vt__10TItemEffPG_size[sizeof(RecoveredGlobal_8035007C___vt__10TItemEffPG) == 0x20 ? 1 : -1];

extern "C" {
void *__nw__7TObjectFUl(int);
s32 construct_attack_collision(void *, void *, void *);
s32 TItemEffPG__sub_8034FCF0(int, void *, void *);
extern M2C_UNK __vt__10TItemEffPG[];
extern s32 lbl_805D4350;
extern const float lbl_805DFE14;
extern const f32 lbl_805DFE18;
u8 *TItemEffPG__ct(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1);
void create__10TItemEffPGFPvPv(void *arg0, void *arg1);
void* init_params__10TItemEffPGFPv(void* a0);
void run_task__10TItemEffPGFv(void *arg0);
M2C_UNK check_hits__14TItemAttackColFPv(void *);
M2C_UNK TItemEffPG__sub_8034FA50(void *);
int TObjPlayer__sub_802E451C(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 has_game_join_id();
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__10TItemEffPGFv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_r31;

    var_r31 = 1;
    if (has_game_join_id() == 0) {
        var_r31 = 0;
    }
    if (((PgV_8034FF4C *)arg0)->vf05() == 0) {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC4)) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0xC8));
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC4);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x40)) {
                M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
            }
        }
        check_hits__14TItemAttackColFPv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x14) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
        TItemEffPG__sub_8034FA50(M2C_FIELD(arg0, void **, 0xD0));
        M2C_FIELD(arg0, u32 *, 0xD0) = 0U;
    }
}

extern M2C_UNK __vt__10TItemEffPG[];

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TItemEffPG;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TItemEffPG__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_r3;
    s32 var_r0;
    construct_attack_collision((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035007C___vt__10TItemEffPG *)&__vt__10TItemEffPG).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4350;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(arg2, f32 *, 0x28);
    if ((*(const f32 *)&lbl_805DFE14) < M2C_FIELD(arg0, f32 *, 0xC4)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (*(const f32 *)&lbl_805DFE14);
    }
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg2, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) * lbl_805DFE18);
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x68)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TItemEffPG__sub_8034FCF0((int) (temp_r3), (void *) (arg0), (void *) (arg2));
    }
    M2C_FIELD(arg0, s32 *, 0xD0) = var_r0;
    return arg0;
}

void create__10TItemEffPGFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        TItemEffPG__ct((u8 *)(o), (s32)(arg0), (u8 *)(arg1));
    }
}

    extern const float lbl_805DFE14;
    extern const float lbl_805DFE1C;
    extern const float lbl_805DFE20;
void* init_params__10TItemEffPGFPv(void* a0) { TObjPlayer__sub_802E451C(); *(int*)((char*)a0 + 0x10) = 10; *(float*)((char*)a0 + 0x28) = lbl_805DFE14; *(float*)((char*)a0 + 0x2c) = lbl_805DFE1C; *(float*)((char*)a0 + 0x30) = lbl_805DFE20; return a0; }

}
