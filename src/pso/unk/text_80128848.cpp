#include "types.h"
#include "pso/player/TObjPlayer.h"

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
    virtual s32 m49(void *, s32, s32, s32);
};

extern "C" {
s32 TObjPlayer__sub_80128A70();
void draw_status_icons__10TObjPlayerFPvPv(void *, void *, void *);
u8 * init_shot_state__10TObjPlayerFv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

u8 *TObjPlayer::create_shot_state(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_shot_state__10TObjPlayerFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer::apply_m49_state_a() {
    u8 *arg0 = (u8 *)this;
    TObjPlayer__sub_80128A70();
    if (((VObj_18 *)(arg0))->m49(arg0 + 0x1FC, 0, 0, 1) != 0) {
        ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 0);
        return;
    }
    ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 1);
}
void TObjPlayer::draw_status_icon_set() {
    u8 *arg0 = (u8 *)this;
    draw_status_icons__10TObjPlayerFPvPv(arg0, arg0 + 0x1FC, arg0 + 0x208);
}

}
