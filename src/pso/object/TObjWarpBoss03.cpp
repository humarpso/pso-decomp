// ---- pso/unk/text_8019F9E4
#include "types.h"
#include "pso/object/TObjWarpBoss03.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019F9E4_lbl_804A7438 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 TObjRoomId__sub_80141CF4(void *, void *, f32);
extern RecoveredGlobal_8019F9E4_lbl_804A7438 lbl_804A7438;



typedef char RecoveredGlobal_8019F9E4_lbl_804A7438_size[sizeof(RecoveredGlobal_8019F9E4_lbl_804A7438) == 0x10 ? 1 : -1];
void TObjWarpBoss03::sub_8019F9E4() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_18_26a62c *)(arg0))->m8(4e+02f, 2e+01f) != 0) {
        TObjRoomId__sub_80141CF4((u8 *)&this->position, &lbl_804A7438.value, (f32) (2.0f * *(f32 *)((s8 *)arg0 + 0xAC)));
    }
}

}

// ---- pso/object/TObjWarpBoss03
#include "types.h"
#include "pso/object/TObjWarpBoss03.h"
#include "pso/object/TObjAreaWarp.h"

extern "C" {

void *TObjWarpBoss03__ct(void *arg0);
void *TObjWarpJungMain__create(void *arg0);
void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1);
void *TObjAreaWarp__ct(void *arg0);
void *TObjWarpJungMain__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void TObjWarpBoss03::debug_print_area_num() { this->TObjAreaWarp::debug_print_area_num(); sub_8019F9E4(); }
void TObjWarpBoss03::run_task() { { (void)(handle_area_selection()); return; } }

extern s32 __vt__14TObjWarpBoss03[];

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjWarpBoss03;
        __dt__12TObjAreaWarpFv((u8 *)arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}


extern void *TObjWarpBoss03__name;

void *TObjWarpBoss03__ct(void *warp_boss03) {
    TObjAreaWarp__ct(warp_boss03);
    *(s32 **)((s8 *)warp_boss03 + 0x18) = __vt__14TObjWarpBoss03;
    *(void * *)&((TObjWarpBoss03 *)warp_boss03)->m_name = TObjWarpBoss03__name;
    *(f32 *)((s8 *)warp_boss03 + 0xAC) = 2e+01f;
    return warp_boss03;
}

extern void *tl_05;

void *TObjWarpJungMain__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJungMain__ct(o, tl_05, arg0);
    }
    return o;
}

}
