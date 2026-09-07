#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80190DE4___vt__16TObjEvtCollision {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 TObjPlayer__sub_801569F4(void *);
extern M2C_UNK __vt__16TObjEvtCollision[];
extern s32 lbl_805D3358;
u8 *TObjEvtCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjEvtCollision__create(void *arg0);
void *__dt__16TObjEvtCollisionFv(void *arg0, s16 arg1);
s32 is_any_player_in_range__16TObjEvtCollisionFif(s32 arg0, f32 farg0);
void render__16TObjEvtCollisionFv(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
f32 fn_801315A0(s32, s32);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 is_any_player_in_range__16TObjEvtCollisionFif(s32 arg0, f32 farg0) {
    s32 var_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    if (is_split_screen() != 0) {
        for (var_r31 = 0; var_r31 < 4; var_r31 += 1) {
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
            if ((temp_r3 != 0U) && (fn_801315A0(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
                return 1;
            }
        }
        goto block_10;
    }
    temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3_2 != 0U) && (fn_801315A0(temp_r3_2 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
block_10:
    return 0;
}

extern void *tl_05;

void *TObjEvtCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjEvtCollision__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void render__16TObjEvtCollisionFv(void) {  }

extern M2C_UNK __vt__16TObjEvtCollision[];

void *__dt__16TObjEvtCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEvtCollision;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80190DE4___vt__16TObjEvtCollision_size[sizeof(RecoveredGlobal_80190DE4___vt__16TObjEvtCollision) == 0x38 ? 1 : -1];
u8 *TObjEvtCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80190DE4___vt__16TObjEvtCollision *)&__vt__16TObjEvtCollision).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3358;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0xB4) = 3;
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
