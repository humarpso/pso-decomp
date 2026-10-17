#include "types.h"
#include "pso/misc/TWindowSubTradeMain_802D3924.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjTradeCollision.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_802C8034___vt__18TObjTradeCollision {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 is_player_outside_trade_radius__18TObjTradeCollisionFUl(void *, int);
extern s32 __vt__18TObjTradeCollision[];
extern s32 TObjTradeCollision__name;
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjTradeCollision::render() {  }

void run_task__18TObjTradeCollisionFv(s32 arg0) {
    s32 var_r31;
    var_r31 = 0;
    do {
        if (is_player_outside_trade_radius__18TObjTradeCollisionFUl((void *) (arg0), (int) (var_r31)) != 0) {
            set_trade_range_bit((var_r31));
        } else {
            clear_trade_range_bit((var_r31));
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void *__dt__18TObjTradeCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjTradeCollision;
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_802C8034___vt__18TObjTradeCollision_size[sizeof(RecoveredGlobal_802C8034___vt__18TObjTradeCollision) == 0x38 ? 1 : -1];
u8 *TObjTradeCollision__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802C8034___vt__18TObjTradeCollision *)&__vt__18TObjTradeCollision).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjTradeCollision__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) ((TObjTradeCollision *)arg0)->scale;
    disallow_rendering__7TObjectFv((arg0));
    return arg0;
}

void *TObjTradeCollision__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TObjTradeCollision__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

}
