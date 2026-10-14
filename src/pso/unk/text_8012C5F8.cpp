#include "types.h"
struct Obj_8012C714 { u8 pad[0x184]; void *f184; void *f188; u8 pad2[0x1f8 - 0x18c]; u8 f1f8[4]; };

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
    virtual s32 m49(void *, M2C_UNK, M2C_UNK, M2C_UNK);
};

extern "C" {
s32 get_player_list__10TObjPlayerFv(void);
s32 test_flags_any(void *p, s32 n);
void draw_ginja_object(void *p);
void rocket_punch_node_callback(Obj_8012C714 *self);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(void *, void *, int);
M2C_UNK increment_burst_counter(int);
s32 get_anim_state__10TObjPlayerFPv(int);
void rocket_punch_return_timer(u32);
void rocket_punch_marker(u8 *arg0);
}

extern "C" {

void rocket_punch_marker(u8 *arg0) {
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r3 == 0U) return;
    temp_r31 = temp_r3 + 0x7CC;
    if (get_anim_state__10TObjPlayerFPv((int) (temp_r31)) == 0) {
        var_r30 = 0;
        do {
            increment_burst_counter((int) (temp_r31));
            var_r30 += 1;
        } while (var_r30 != 2);
        set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x1F8), (int) (2));
        spawn_item_timer__13TItemAttackerFiii((void *) (arg0), (void *) (rocket_punch_return_timer), (int) (0x3C));
        set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x1F8), (int) (4));
        if (((VObj_18 *)(arg0))->m49(arg0 + 0x1FC, 0, 0, 1) == 1) {
            clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x1F8), (int) (4));
            ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 0);
            return;
        }
        clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x1F8), (int) (4));
        ((VObj_18 *)(arg0))->m49(arg0 + 0x208, 0, 0, 1);
    }
}

void rocket_punch_node_callback(Obj_8012C714 *self) {
    void *p;
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        if (test_flags_any(self->f1f8, 2) == 0) {
            if (test_flags_any(self->f1f8, 1)) {
                p = self->f188;
            } else {
                p = self->f184;
            }
            if (p) {
                draw_ginja_object(p);
            }
        }
        break;
    }
}

}
