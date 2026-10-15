#include "types.h"
struct Obj_80128E08 { u8 pad[0x184]; void *f184; void *f188; u8 pad2[0x1fc - 0x18c]; u8 f1fc[4]; };

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
s32 get_player_list__10TObjPlayerFv(void);
s32 test_flags_any(void *p, s32 n);
void draw_ginja_object(void *p);
void srank_punch_node_callback(Obj_80128E08 *self);
s32 set_flags__10TObjPlayerFUl(void *, int);
s32 clear_flags__11TAdRicoRingFUl(void *, int);
s32 spawn_item_timer__13TItemAttackerFlll(void *, void *, int);
s32 increment_burst_counter(int);
s32 get_burst_counter(int);
s32 TObjPlayer__sub_80128A70();
void clear_rico_ring_flag__10TObjPlayerFUi(u32);
void srank_punch_marker(u8 *arg0);
}

extern "C" {

void srank_punch_marker(u8 *arg0) {
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;
    TObjPlayer__sub_80128A70();
    temp_r3 = *(u32 *)((s8 *)arg0 + 0xF0);
    if (temp_r3 == 0U) return;
    temp_r31 = temp_r3 + 0x7CC;
    if (get_burst_counter((int) (temp_r31)) == 0) {
        var_r30 = 0;
        do {
            increment_burst_counter((int) (temp_r31));
            var_r30 += 1;
        } while (var_r30 != 2);
        set_flags__10TObjPlayerFUl((void *) (arg0 + 0x1FC), (int) (2));
        spawn_item_timer__13TItemAttackerFlll((void *) (arg0), (void *) (clear_rico_ring_flag__10TObjPlayerFUi), (int) (0x3C));
        set_flags__10TObjPlayerFUl((void *) (arg0 + 0x1FC), (int) (4));
        if (((VObj_18 *)(arg0))->m49(arg0 + 0x200, 0, 0, 1) == 1) {
            clear_flags__11TAdRicoRingFUl((void *) (arg0 + 0x1FC), (int) (4));
            ((VObj_18 *)(arg0))->m49(arg0 + 0x20C, 0, 0, 0);
            return;
        }
        clear_flags__11TAdRicoRingFUl((void *) (arg0 + 0x1FC), (int) (4));
        ((VObj_18 *)(arg0))->m49(arg0 + 0x20C, 0, 0, 1);
    }
}

void srank_punch_node_callback(Obj_80128E08 *self) {
    void *p;
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        if (test_flags_any(self->f1fc, 2) == 0) {
            if (test_flags_any(self->f1fc, 1)) {
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
