#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/misc/TODoorAncient09.h"
#include "pso/misc/TODoorCave01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOBarrierEnergy01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
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
    virtual s32 m17();
};

struct RecoveredGlobal_801611CC_lbl_804B1248 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801611CC___vt__15TODoorAncient09 {
    s32 value;
    u8 remaining[0x50];
};

struct State_80161320 { s16 a; s16 b; };

struct Pkt_80161320 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80161320 { u8 pad[4]; s16 kind; };

struct Self_80161320 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80161320 *obj; };

struct Door_801615C4 {
    u8 pad0[0x80];
    void *obj;
    u8 pad84[0xC8 - 0x84];
    s32 base;
    s32 state;
    u32 flags;
    s32 count;
    s32 num;
};

extern "C" {
s32 set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(f32);
s32 play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DB494;
extern const f32 lbl_805DB498;
extern const f32 lbl_805DB49C;
extern const f32 lbl_805DB4A0;
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_801611CC_lbl_804B1248 TODoorAncient09__collision_body_template;
extern RecoveredGlobal_801611CC___vt__15TODoorAncient09 __vt__15TODoorAncient09;
extern s32 lbl_805D2F58;
extern u8 *door_ancient09_bml_resource;
extern s32 *TODoorAncient09__texture_lists;
extern const f32 lbl_805DB480;
extern const f32 lbl_805DB484;
u8 *TODoorAncient09__ct(u8 *arg0, s32 arg1, s32 arg2);
void update_and_send_60__6TLobbyFPv(void *);
u8 is_current_floor_switch_set(u16);
}

extern "C" {

s32 play_sound_effect(s32, void *, s32, s32);
s32 is_any_player_within_radius_xz(f32);
s32 get_main_phase();

typedef char RecoveredGlobal_801611CC_lbl_804B1248_size[sizeof(RecoveredGlobal_801611CC_lbl_804B1248) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_801611CC___vt__15TODoorAncient09_size[sizeof(RecoveredGlobal_801611CC___vt__15TODoorAncient09) == 0x54 ? 1 : -1];
u8 *TODoorAncient09__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__15TODoorAncient09.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F58;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TODoorAncient09__texture_lists;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)door_ancient09_bml_resource + 0x42C)) + 8);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)door_ancient09_bml_resource + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB484);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) (*(f32 *)((s8 *)arg0 + 0xB4) / lbl_805DB480);
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorAncient09__collision_body_template.value), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x84);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0;
    } else if (temp_r0 > 0xFE) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0xFE;
    }
    ((TODoorAncient09 *)(arg0))->init_door_switch_binding();
    *(s16 *)((s8 *)arg0 + 0xD4) = (s16) (*(s32 *)((s8 *)arg0 + 0x84) + 1);
    *(s32 *)((s8 *)arg0 + 0xD8) = 0;
    *(s32 *)((s8 *)arg0 + 0xDC) = 0;
    *(s32 *)((s8 *)arg0 + 0xE0) = 0;
    *(s32 *)((s8 *)arg0 + 0xE4) = 0;
    return arg0;
}

void TODoorCave01::vfunc_20() {  }

void TODoorCave01::send_state(void *src_arg) {
    Self_80161320 *self = (Self_80161320 *)this;
    State_80161320 *src = (State_80161320 *)src_arg;
    State_80161320 st;
    Obj_80161320 *obj;
    if (src != 0) {
        ((TLobby *)(&st))->copy_short_fields(src);
    } else {
        ((TUnk_804AF8A0 *)self)->access_object_saved_state((void *)((s32)&st), (s16)1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80161320 pkt;
        ((TOBarrierEnergy01 *)(&pkt))->init();
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFPv(&pkt);
    }
}

void TODoorCave01::vfunc_6(s16 *arg1, s32) {
    u8 *arg0 = (u8 *)this;
    if ((s16) *arg1 == 1) {
        this->m_d0 = (s32) (this->m_d0 | 0xF0000 | 1);
    }
}

s32 TODoorCave01::init_door_switch_binding() {
    s32 temp_r0;

    *(s32 *)&this->unk_C8 = (s32) this->m_84;
    temp_r0 = *(s32 *)&this->unk_C8;
    if (temp_r0 > 0x100) {
        this->m_cc = 0;
    } else if (temp_r0 < 0) {
        this->m_cc = 1;
    } else if ((s32) *(s32 *)&this->m_8c < 0) {
        if ((get_main_phase() == 0xF) || (TRaderMapCore::is_not_split_screen() == 1)) {
            this->m_cc = 3;
        } else {
            this->m_cc = 2;
        }
    } else {
        this->m_cc = 2;
    }
    return *(s32 *)&this->unk_C8;
}

extern const f32 lbl_805DB490;

void TODoorCave01::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    if (((u8) ((u32) __cntlzw(this->m_d0 & 1) >> 5) == 1) || (is_any_player_within_radius_xz(lbl_805DB490) != 1)) {
        *(s32 *)&this->m_ac = 3;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
        play_sound_effect(0x42807, arg0 + 0x38, 0, 0);
    }
}
void TODoorCave01::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if ((this->m_d0 & 1) && (is_any_player_within_radius_xz((f32) (lbl_805DB494)) == 1)) {
        *(s32 *)&this->m_ac = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((s32)((int) (0x42807)), (void *)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    }
    if (this->m_d0 & 0x100000) {
        this->m_e0 = (f32) (this->m_e0 + lbl_805DB498);
        if (lbl_805DB49C <= this->m_e0) {
            this->m_d0 = (s32) (this->m_d0 & 0xFFEFFFFF);
        }
    } else {
        this->m_e0 = (f32) (this->m_e0 - lbl_805DB498);
        if (this->m_e0 <= lbl_805DB4A0) {
            this->m_d0 = (s32) (this->m_d0 | 0x100000);
        }
    }
}

void TODoorCave01::update_door_switch_state() {
    u8 *arg0 = (u8 *)this;
    Door_801615C4 *d = (Door_801615C4 *)arg0;
    State_80161320 st;
    s32 i;

    switch (d->state) {
    case 1:
        ((TUnk_804B0BB8 *)arg0)->play_door_sound();
        d->flags |= 0xF0001;
        d->count = 4;
        break;
    case 2:
        d->flags &= 0xFFF0FFFF;
        d->count = 4 - d->num;
        for (i = 0; i < d->num; i++) {
            if (is_current_floor_switch_set(d->base + i) == 1) {
                d->count++;
            }
        }
        for (i = 0; i < d->count; i++) {
            d->flags |= 1 << (i + 0x10);
        }
        if (d->count == 4) {
            ((TUnk_804B0BB8 *)arg0)->play_door_sound();
            d->flags |= 1;
        } else {
            d->flags &= ~1;
        }
        break;
    case 3:
        if (d->flags & 1) {
            d->flags |= 0xF0000;
            break;
        }
        d->flags &= 0xFFF0FFFF;
        d->count = 4 - d->num;
        for (i = 0; i < d->num; i++) {
            if (is_current_floor_switch_set(d->base + i) == 1) {
                d->count++;
            }
        }
        for (i = 0; i < d->count; i++) {
            d->flags |= 1 << (i + 0x10);
        }
        if (d->count == 4) {
            ((TUnk_804B0BB8 *)arg0)->play_door_sound();
            d->flags |= 1;
            if (d->obj != NULL && ((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *)(&st), (s16)1) != 0) {
                st.a = 1;
                ((TODoorCave01 *)arg0)->send_state(&st);
                ((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *)(&st), (s16)0);
            }
        }
        break;
    default:
        d->flags &= 0xFFF0FFFE;
        break;
    }
}

}
