#include "types.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/player/TUnk_80490470.h"
#include "pso/enemy/TObjEneBalClaw.h"
#include "pso/enemy/TObjEneBalClawClaw.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw { s32 value; u8 remaining[0x148]; };
typedef char RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw_size[sizeof(RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw) == 0x14C ? 1 : -1];

struct Ent_8008D68C { void *obj; u32 x4; s16 a; s16 b; s16 c; s16 d; };

struct V_8008D700 { f32 x, y, z; };

struct O_8008D700 { u8 pad0[0x30]; u32 flags; u8 pad34[0x378]; f32 f3ac; f32 f3b0; f32 f3b4; u8 pad3b8[4]; f32 f3bc; };

struct Obj_8008D79C { u8 pad0[0x388]; s32 flags; u8 pad38C[0x3B8 - 0x38C]; s32 f3B8; f32 f3BC; };

extern "C" {
u8 * TObjEnemyCustom__ct(void *);
extern s32 __vt__14TObjEneBalClaw[];
extern s32 lbl_805D2968;
extern const f32 lbl_805D960C;
u8 *TObjEneBalClaw__ct(u8 *arg0);
extern Ent_8008D68C lbl_8048EC1C[];
extern s32 balclaw_last_shared_update_frame;
extern s32 actor_frame_tick;
void TObjPlayer__sub_8023DEE0(void *obj, s32 a, s32 b, u16 c);
void TObjEneBalClaw__sub_8008D68C(void);
extern V_8008D700 lbl_80439B34;
extern f32 lbl_805D9600;
extern const f32 lbl_805D9604;
f32 sin_table_lookup(s32);
extern const f32 lbl_805D9608;
}

extern "C" {

void TObjEneBalClawClaw__sub_8008DC14(void);
void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dt__13TUnk_80490470Fv(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);

extern f32 lbl_805D9600;

void TObjEneBalClaw__sub_8008D68C(void) {
    s32 i;
    if (balclaw_last_shared_update_frame != actor_frame_tick) {
        balclaw_last_shared_update_frame = actor_frame_tick;
        for (i = 0; i < 7; i++) {
            Ent_8008D68C *e = &lbl_8048EC1C[i];
            TObjPlayer__sub_8023DEE0(e->obj, e->a, e->b, e->c);
        }
    }
}

void TObjEneBalClaw::render_scaled(s32 arg1) {
    O_8008D700 *arg0 = (O_8008D700 *)this;
    f32 a;
    f32 t;
    if (!(arg0->flags & 0x800) && arg1 != 0) {
        a = arg0->f3ac;
        t = lbl_805D9600 - (lbl_805D9604 * ((arg0->f3b4 + arg0->f3bc) - a)) * (lbl_805D9600 / (arg0->f3b0 - a));
        V_8008D700 v = lbl_80439B34;
        v.x = t;
        v.y = t;
        v.z = t;
        ((TObjEnemy *)arg0)->render_with_position_override((u8 *)(&v), (s32)0);
    }
}

void TObjEneBalClaw::update_wobble() {
    Obj_8008D79C *arg0 = (Obj_8008D79C *)this;
    if (arg0->flags & 0x20000) {
        arg0->f3B8 = arg0->f3B8 + 0x200;
        arg0->f3BC = lbl_805D9608 * sin_table_lookup(arg0->f3B8);
        return;
    }
    arg0->f3BC = (arg0->f3BC - 0.2f > 0.0f) ? arg0->f3BC - 0.2f : 0.0f;
}

void TObjEneBalClaw::update_claw_angle() {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    if (!(*(s32 *)&this->actorFlags & 0x800)) {
        temp_r4 = this->m_a4;
        *(s32 *)((s8 *)temp_r4 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r4 + 0x18) & 0xFFFFFFF9);
        if (*(s32 *)&this->m_388 & 0x10000) {
            temp_f1 = this->m_3b4;
            temp_f0 = *(f32 *)&this->unk_3B0;
            if (temp_f1 < temp_f0) {
                this->m_3b4 = (f32) (temp_f1 + lbl_805D9600);
                return;
            }
            this->m_3b4 = temp_f0;
            temp_r3 = this->m_a4;
            *(s32 *)((s8 *)temp_r3 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3 + 0x18) | 4);
            return;
        }
        temp_f1_2 = this->m_3b4;
        temp_f0_2 = this->m_3ac;
        if (temp_f1_2 > temp_f0_2) {
            this->m_3b4 = (f32) (temp_f1_2 - lbl_805D9600);
            return;
        }
        this->m_3b4 = temp_f0_2;
        temp_r3_2 = this->m_a4;
        *(s32 *)((s8 *)temp_r3_2 + 0x18) = (s32) (*(s32 *)((s8 *)temp_r3_2 + 0x18) | 2);
    }
}

extern u32 lbl_805D4F20;

void TObjEneBalClaw::vfunc_62() {
    u8 *arg0 = (u8 *)this;
    ((TObjEneMe1GiGue *)arg0)->set_state(4);
    *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 1);
}

void TObjEneBalClaw::release_global_805D4F20() {
    if ((u32) lbl_805D4F20 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4F20, 1);
        lbl_805D4F20 = 0U;
    }
}

extern s32 __vt__14TObjEneBalClaw[];

void *__dt__14TObjEneBalClawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjEneBalClaw;
        __dt__13TUnk_80490470Fv((s8 *)arg0 + 0x390, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjEneBalClaw__ct(u8 *arg0) {
    TObjEnemyCustom__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8008DB6C___vt__14TObjEneBalClaw *)&__vt__14TObjEneBalClaw).value;
    ((TUnk_80490470 *)(arg0 + 0x390))->init_vtable_and_field18();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2968;
    ((TUnk_804806E8 *)arg0)->add_flags_2e4(8);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000);
    *(s32 *)((s8 *)arg0 + 0x3B8) = 0;
    *(f32 *)((s8 *)arg0 + 0x3BC) = (f32) lbl_805D960C;
    ((TObjEneBalClaw *)arg0)->clear_attack_flag();
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x20000);
    return arg0;
}

void TObjEneBalClaw::vfunc_61() {  }
void TObjEneBalClaw::vfunc_59() {  }
s32 TObjEneBalClaw::is_target_in_attack_range() { return 0; }
void TObjEneBalClaw::clear_attack_flag() { this->m_388 &= 0xfffeffff; }
void TObjEneBalClawClaw__sub_8008DC14(void) {  }

}
