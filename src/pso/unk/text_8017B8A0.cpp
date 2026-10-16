#include "types.h"
#include "pso/misc/TOTrapAncient02R.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOVS2Wall01.h"

struct Obj_8017B8A0 {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8017B8D4 { u8 pad[0x18]; };

struct V_8017B8D4 : B_8017B8D4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct Sub_8017BAFC { u8 pad[4]; s16 f4; };

struct Obj_8017BAFC { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; Sub_8017BAFC *sub; u8 pad2[0x2A2]; s16 state; u8 pad3[0x14]; s32 f33C; };

struct Pkt_8017BAFC { u16 a; u16 b; s32 c; s32 d; u16 e; s16 f; };

struct Pkt_8017B9B0 { u16 a; u16 b; s32 c; s32 d; u16 e; u16 f; };

struct Ent_8017B9B0 { s16 a; s16 b; };

struct VBase_8017B9B0 { u8 pad[0x18]; };

struct VObj_8017B9B0 : VBase_8017B9B0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(void *, s32);
    u8 pad2[0x326 - 0x1C];
    s16 state;
};

extern "C" {
void init_trap_param_clamped(u8 *arg0);
void clamp_trap_level_param(u8 *arg0);
void init_trap_object_id(u8 *arg0);
extern const f32 lbl_805DBA78;
void receive_direct_attack__16TOTrapAncient02RFPvPvPvll(Obj_8017B8A0 *self);
extern const f32 lbl_805DBA78;
void receive_weapon_special_attack__16TOTrapAncient02RFPvPv(V_8017B8D4 *self);
s32 access_object_saved_state(void *, void *, int);
void save_and_send_state__11TOVS2Wall01FPvUs(Obj_8017BAFC *arg0, u16 arg1);
s32 check_value_equals__13TQuestColCtrlFPll(void *, int);
VObj_8017B9B0 *find_entity_by_id();
s32 access_object_saved_state(void *, void *, int);
void init__11TOVS2Wall01Fi(void *);
void TOVS2Wall01__sub_8017CA48(void *, s32);
s32 TOVS2Wall01__sub_8017CA50(void *);
extern s32 TOVS2Wall01__class_name;
extern Ent_8017B9B0 *TLobby__data_805D6140;
void handle_6x86_hit_destructible_object(Pkt_8017B9B0 *arg0);
}

extern "C" {

void TOVS2Wall01__sub_8017B9AC(void);

f32 TOTrapAncient02R::receive_direct_attack(void *, void *, void *, s32, s32) {
    Obj_8017B8A0 *self = (Obj_8017B8A0 *)this;
    self->m20(0, lbl_805DBA78);
}

f32 TOTrapAncient02R::receive_weapon_special_attack(void *, void *) {
    V_8017B8D4 *self = (V_8017B8D4 *)this;
    self->m20(0, lbl_805DBA78);
}

void init_trap_param_clamped(u8 *arg0) {
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x368) = (s32) *(f32 *)((s8 *)arg0 + 0x6C);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x368);
    if (temp_r0 < 1) {
        *(s32 *)((s8 *)arg0 + 0x368) = 1;
        return;
    }
    if (temp_r0 > 0x100) {
        *(s32 *)((s8 *)arg0 + 0x368) = 0x100;
    }
}

void clamp_trap_level_param(u8 *arg0) {
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x35C) = (s32) *(s32 *)((s8 *)arg0 + 0x8C);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x35C);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x35C) = 0;
        return;
    }
    if (temp_r0 >= 5) {
        *(s32 *)((s8 *)arg0 + 0x35C) = 4;
    }
}

void init_trap_object_id(u8 *arg0) {
    s32 temp_r0;
    *(s32 *)((s8 *)arg0 + 0x364) = (s32) *(s32 *)((s8 *)arg0 + 0x88);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x364);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        *(s32 *)((s8 *)arg0 + 0x364) = -1;
    }
}

void TOVS2Wall01__sub_8017B9AC(void) {  }

void handle_6x86_hit_destructible_object(Pkt_8017B9B0 *arg0) {
    Ent_8017B9B0 spC;
    Ent_8017B9B0 sp8;
    VObj_8017B9B0 *o;
    u16 id;
    if (arg0 == NULL) {
        return;
    }
    ((TOVS2Wall01 *)arg0)->byteswap_hit_packet();
    id = arg0->b;
    if (id == 0xFFFF) {
        return;
    }
    if (id < 0x4000) {
        return;
    }
    o = ((VObj_8017B9B0 *(*)(u16))find_entity_by_id)(id);
    if (o != NULL) {
        if (check_value_equals__13TQuestColCtrlFPll(o, TOVS2Wall01__class_name) == 0) {
            return;
        }
        switch (arg0->e) {
        case 0:
            switch (o->state) {
            case 1:
                break;
            default:
                o->state = 0;
            case 0:
                if (arg0->f < TOVS2Wall01__sub_8017CA50(o)) {
                    TOVS2Wall01__sub_8017CA48(o, arg0->f);
                }
                break;
            }
            break;
        case 1:
            o->state = 1;
            init__11TOVS2Wall01Fi(o);
            break;
        }
        access_object_saved_state(o, &spC, 1);
        spC.a = o->state;
        access_object_saved_state(o, &spC, 0);
        o->m4(&spC, 0);
    } else {
        *(s32 *)&sp8 = *(s32 *)&TLobby__data_805D6140[arg0->d];
        if (sp8.a != 1) {
            sp8.a = arg0->c;
            TLobby::apply_table_entry(arg0->d, &sp8);
        }
    }
}

void save_and_send_state__11TOVS2Wall01FPvUs(Obj_8017BAFC *arg0, u16 arg1) {
    s16 sp8;
    Pkt_8017BAFC pkt;
    s16 v = arg0->state;
    Sub_8017BAFC *sub;
    if (arg1 == 1) {
        v = 1;
    }
    if ((arg0->sub != NULL) && (access_object_saved_state(arg0, &sp8, 1) != 0)) {
        sp8 = v;
        access_object_saved_state(arg0, &sp8, 0);
        sub = arg0->sub;
        ((TOVS2Wall01 *)(&pkt))->init();
        pkt.b = arg0->f1C;
        pkt.c = sp8;
        pkt.d = sub->f4;
        pkt.e = arg1;
        pkt.f = arg0->f33C;
        ((TOVS2Wall01 *)(&pkt))->update_and_send();
    }
}

}
