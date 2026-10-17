#include "types.h"
#include "pso/enemy/DarkGunner.h"
#include "pso/object/TObjControl.h"
#include "pso/player/TObjPlayer_800A0408.h"
#include "pso/player/TObjPlayer_800D8FDC.h"
#include "pso/system/memory.h"
#include "pso/player/TUnk_80490470.h"

extern "C" {

extern const f32 lbl_805D9958;
extern const f32 lbl_805D995C;
extern const f32 lbl_805D9960;
extern const f32 lbl_805D9964;

void TUnk_80490470::calc_recoil_offsets() {
    f32 temp_f1;
    f32 var_f0;

    temp_f1 = *(f32 *)&this->unk_18;
    if (temp_f1 > lbl_805D9960) {
        if (temp_f1 > lbl_805D995C) {
            *(f32 *)&this->unk_0 = (f32) lbl_805D9958;
        } else {
            *(f32 *)&this->unk_0 = (f32) (temp_f1 - lbl_805D995C);
        }
        *(f32 *)&this->m_4 = (f32) lbl_805D9958;
        *(f32 *)&this->unk_8 = (f32) lbl_805D9958;
        *(f32 *)&this->m_c = (f32) lbl_805D9958;
        return;
    }
    *(f32 *)&this->unk_0 = (f32) lbl_805D9964;
    var_f0 = *(f32 *)&this->unk_18 - lbl_805D9960;
    if (var_f0 < lbl_805D9964) {
        var_f0 = lbl_805D9964;
    }
    *(f32 *)&this->m_4 = var_f0;
    *(f32 *)&this->unk_8 = var_f0;
    *(f32 *)&this->m_c = var_f0;
}

    extern const float lbl_805D9958;
    extern const float lbl_805D9964;
void TUnk_80490470::reset_obstruction_fade() { *(float *)&this->unk_18 = lbl_805D9958; *(float *)&this->unk_0 = lbl_805D9964; this->m_4 = lbl_805D9964; *(float *)&this->unk_8 = lbl_805D9964; this->m_c = lbl_805D9964; }

    extern const float lbl_805D995C;
void TUnk_80490470::vfunc_4() { *(float *)&this->unk_18 = lbl_805D995C; *(float *)&this->unk_0 = lbl_805D9958; this->m_4 = lbl_805D9958; *(float *)&this->unk_8 = lbl_805D9958; this->m_c = lbl_805D9958; }

}

struct Base_800A04F0 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A04F0 : Base_800A04F0 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

struct Base_800A0554 { f32 v0, v4, v8, vc; f32 rate; };

struct Obj_800A0554 : Base_800A0554 {
    virtual void m0();
    virtual void m1(s32);
    f32 f18;
};

extern "C" {
extern const f32 lbl_805D9968;
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self);
extern const f32 lbl_805D996C;
void TObjPlayer__sub_800A0554(Obj_800A0554 *self);
void TUnk_80490470::set_rate_from_divisor(s32 arg1) {
    *(f32 *)&this->unk_10 = (f32) (lbl_805D995C / (f32) arg1);
}
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_800A04F0(Obj_800A04F0 *self) {
    self->m1(10);
    self->f18 = lbl_805D9968 * self->rate + lbl_805D995C;
    self->v0 = lbl_805D9960;
    self->v4 = lbl_805D9960;
    self->v8 = lbl_805D9960;
    self->vc = lbl_805D9960;
}
#pragma pop

void TObjPlayer__sub_800A0554(Obj_800A0554 *self) {
    self->m1(10);
    self->f18 = -(lbl_805D996C * self->rate);
    self->v0 = lbl_805D9958;
    self->v4 = lbl_805D9958;
    self->v8 = lbl_805D9958;
    self->vc = lbl_805D9958;
}

extern s32 lbl_80490470[];

void *__dt__13TUnk_80490470Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = lbl_80490470;
        __dt__13TUnk_80494AE0Fv(arg0, 0);
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

}

#include "pso/player/TObjPlayer.h"

struct Obj_800A0654 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A06B4 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A0728 { u8 pad[0x374]; s32 mode; s32 timer; s32 count; u8 pad2[4]; u16 ids[1]; };

extern "C" {
void TObjPlayer__sub_800A0654(Obj_800A0654 *self);
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self);
int TObjPlayer__sub_800D9718(void);

void*TUnk_80490470::init_vtable_and_field18() { TObjPlayer__sub_800D9718(); *(int*)((char*)this + 0x14) = (int)lbl_80490470; *(float *)&this->unk_18 = lbl_805D9958; return this; }
void TObjPlayer__sub_800A0654(Obj_800A0654 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            ((TObjPlayer *)e)->apply_fall_damage_flag();
        }
    }
}
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            if (TObjPlayer__sub_800A1808(e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void TObjPlayer::trigger_targets_action() {
    Obj_800A0728 *self = (Obj_800A0728 *)this;
    s32 i;
    self->timer = 0x78;
    self->mode = 6;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            ((TObjPlayer *)e)->trigger_action_if_not_flagged();
        }
    }
}

}
