#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
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

struct RecoveredGlobal_802C8034___vt__18TObjTradeCollision {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 is_player_outside_trade_radius(void *, int);
M2C_UNK TWindowSubTradeMain__sub_802D3940(int);
M2C_UNK TWindowSubTradeMain__sub_802D3958(int);
s32 disallow_rendering__7TObjectFv(void *);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
extern M2C_UNK __vt__18TObjTradeCollision[];
extern s32 lbl_805D3EF8;
u8 *TObjTradeCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjTradeCollision__create(void *arg0);
void *__dt__18TObjTradeCollisionFv(void *arg0, s16 arg1);
void render__18TObjTradeCollisionFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

void render__18TObjTradeCollisionFv(void) {  }

extern M2C_UNK __vt__18TObjTradeCollision[];

void run_task__18TObjTradeCollisionFv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        if (is_player_outside_trade_radius((void *) (arg0), (int) (var_r31)) != 0) {
            TWindowSubTradeMain__sub_802D3958((int) (var_r31));
        } else {
            TWindowSubTradeMain__sub_802D3940((int) (var_r31));
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void *__dt__18TObjTradeCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjTradeCollision;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_802C8034___vt__18TObjTradeCollision_size[sizeof(RecoveredGlobal_802C8034___vt__18TObjTradeCollision) == 0x38 ? 1 : -1];
u8 *TObjTradeCollision__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802C8034___vt__18TObjTradeCollision *)&__vt__18TObjTradeCollision).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3EF8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void *TObjTradeCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjTradeCollision__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

}
