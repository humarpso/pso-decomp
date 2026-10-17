#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/player/TUnk_80490470.h"
#include "pso/enemy/TObjEneRe7BeruraPunch.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/enemy/TObjEneDellBiter.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Stack_80096300
{
  s32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80096750_lbl_8048F930 {
    s32 value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch {
    s32 value;
    u8 remaining[0x5C];
};

struct Vec_8009640C { f32 x, y, z; };

struct Ang_8009640C { s32 x, y, z; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVecterUnder(s32 *, s32);
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
extern const f32 lbl_805D97B8;
u16 obj_getField1c(void *);
extern RecoveredGlobal_80096750_lbl_8048F930 TObjEneRe7BeruraPunch__collision_body_templates;
extern s32 __vt__21TObjEneRe7BeruraPunch[];
extern s32 lbl_805D2990;
u8 *TObjEneRe7BeruraPunch__ct(u8 *arg0, s32 arg1, s32 arg2);
void queue_destruction__7TObjectFv(void *);
void *create_particle_emitter(void *, int);
u32 find_entity_by_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
extern const f32 lbl_805D97B0;
extern const f32 lbl_805D97BC;
extern const f32 lbl_805D97C0;
extern const f32 lbl_805D97C4;
struct BeruraBase_800962F4 { char pad[0x14]; };
struct BeruraObj_800962F4 : BeruraBase_800962F4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};
struct EneBBase_800962F4 { char pad[0x14]; };
struct EneBVObj_800962F4 : EneBBase_800962F4 {
    virtual void m0();
    virtual void m1(s32);
};

void TObjEneRe7BeruraPunch__sub_800962F4(void* p);
void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1);
void delete_buffer__12TBoss8DragonFis(void *, int);
s32 TBoss8Dragon__sub_800BC5EC(s32, s32);
void __dt__13TUnk_80490470Fv(void *, int);
void __dl__7TObjectFPv(void *);
s32 fill_value_array(s32);

void TObjEneRe7BeruraPunch__sub_800962F4(void* p) { *(s32*)((char*)p + 0xb4) = 0; }

extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

typedef struct Stack_80096300 Stack_80096300;
void TObjEneRe7BeruraPunch::snap_to_ground() {
    u8 *arg0 = (u8 *)this;
  Stack_80096300 stack;
  f32 new_var;
  u8 *temp_r3;
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0xDC));
  stack.spC = lbl_805D97B8;
  temp_r3 = csnVecterUnder(&stack.sp8, 0x16EF);
  if (temp_r3 != 0)
  {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (*((s32 *) (((s8 *) temp_r3) + 4))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xE8), (void *) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0xC));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x38)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xDC)));
    *((f32 *) (((s8 *) arg0) + 0x40)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xE4)));
  }
  new_var = *((f32 *) (((s8 *) arg0) + 0xE0));
  *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) (new_var - (*((f32 *) (((s8 *) arg0) + 0x3C))));
  if ((*((f32 *) (((s8 *) arg0) + 0xCC))) < TObjEneRe7BeruraPunch__data_805D97A0)
  {
    *((f32 *) (((s8 *) arg0) + 0xE0)) = (f32) (TObjEneRe7BeruraPunch__data_805D97A0 + (*((f32 *) (((s8 *) arg0) + 0x3C))));
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) TObjEneRe7BeruraPunch__data_805D97A0;
  }
  if ((new_var && new_var) && new_var)
  {
  }
}

void TObjEneRe7BeruraPunch::reset() {
    u8 *arg0 = (u8 *)this;
    fill_value_array(*(s32 *)&this->_padD8);
    this->m_f4 = (f32) lbl_805D9798;
    ((BeruraObj_800962F4*)(arg0 + 0xF8))->m2();
    *(s32 *)&this->unk_118 = 0;
    this->m_114 = (f32) lbl_805D9794;
}

void TObjEneRe7BeruraPunch::run_task() {
    u8 *arg0 = (u8 *)this;
    Ang_8009640C ang;
    Vec_8009640C v;
    f32 s;
    f32 c;
    if (find_entity_by_id(this->m_b0) == 0U || all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    switch (*(s32 *)&this->m_b4) {
    case 0:
        break;
    case 1:
        ((TObjEneRe7BeruraPunch *)arg0)->update_flight();
        break;
    case 2:
        ((TObjEneRe7BeruraPunch *)arg0)->update_velocity_and_snap();
        break;
    }
    if (*(s32 *)&this->m_b4 == 1) {
        ang.x = 0;
        ang.y = this->rotation_y + 0x4000;
        ang.z = -0x4000;
        s = -sin_table_lookup(this->rotation_y);
        c = -cos_table_lookup(this->rotation_y);
        if (*(void * *)&this->m_d0 == NULL) {
            *(void * *)&this->m_d0 = create_particle_emitter((u8 *)&this->position, 0xDD);
            if (*(void * *)&this->m_d0 != NULL) {
                ((TBoss4Type2 *)(*(void * *)&this->m_d0))->set_flags(2);
                ((TParticleCtrl *)(*(void * *)&this->m_d0))->enable();
            }
        } else {
            v.x = lbl_805D97BC * s;
            v.y = lbl_805D97B0;
            v.z = lbl_805D97BC * c;
            vec3_add_to(&v, (u8 *)&this->m_dc);
            ((TNowLoading *)(*(void * *)&this->m_d0))->copy_pos(&v);
            ((TBoss4Type2 *)(*(void * *)&this->m_d0))->copy_vec3(&ang);
        }
        if (*(void * *)&this->m_d4 == NULL) {
            *(void * *)&this->m_d4 = create_particle_emitter((u8 *)&this->position, 0x150);
            if (*(void * *)&this->m_d4 != NULL) {
                ((TBoss4Type2 *)(*(void * *)&this->m_d4))->set_flags(2);
                ((TParticleCtrl *)(*(void * *)&this->m_d4))->enable();
            }
        } else {
            v.x = lbl_805D97C0 * s;
            v.y = lbl_805D97C4;
            v.z = lbl_805D97C0 * c;
            vec3_add_to(&v, (u8 *)&this->m_dc);
            ((TNowLoading *)(*(void * *)&this->m_d4))->copy_pos(&v);
            ((TBoss4Type2 *)(*(void * *)&this->m_d4))->copy_vec3(&ang);
        }
    } else {
        if (*(void * *)&this->m_d0 != NULL) {
            ((TParticleCtrl *)(*(void * *)&this->m_d0))->enable();
        }
        if (*(void * *)&this->m_d4 != NULL) {
            ((TParticleCtrl *)(*(void * *)&this->m_d4))->enable();
        }
    }
}

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TObjEneRe7BeruraPunch;
        if (*(void **)((s8 *)arg0 + 0xD0) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD0)); *(s32 *)((s8 *)arg0 + 0xD0) = 0; }
        if (*(void **)((s8 *)arg0 + 0xD4) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xD4)); *(s32 *)((s8 *)arg0 + 0xD4) = 0; }
        if (*(void **)((s8 *)arg0 + 0xD8) != NULL) { delete_buffer__12TBoss8DragonFis(*(void **)((s8 *)arg0 + 0xD8), 1); *(s32 *)((s8 *)arg0 + 0xD8) = 0; }
        __dt__13TUnk_80490470Fv((s8 *)arg0 + 0xF8, -1);
        ((TUnk_804928CC *)arg0)->destroy_enemy_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjEneRe7BeruraPunch::init() {
    u8 *arg0 = (u8 *)this;
    s32 var_r0;
    u32 var_a;

    *(s32 *)&this->m_b4 = 0;
    *(s32 *)&this->m_b8 = 0;
    *(f32 *)&this->unk_BC = (f32) lbl_805D9794;
    this->m_c0 = (f32) lbl_805D9794;
    *(f32 *)&this->unk_C4 = (f32) lbl_805D9794;
    this->m_c8 = (f32) lbl_805D9794;
    *(f32 *)&this->unk_CC = (f32) lbl_805D9794;
    *(s32 *)&this->m_d0 = 0;
    *(s32 *)&this->m_d4 = 0;
    var_a = ((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    var_r0 = var_a;
    if (var_r0 != 0) {
        var_r0 = TBoss8Dragon__sub_800BC5EC(var_a, 9);
    }
    *(s32 *)&this->_padD8 = var_r0;
    ((EneBVObj_800962F4*)(arg0 + 0xF8))->m1(0);
    reset();
}
typedef char RecoveredGlobal_80096750_lbl_8048F930_size[sizeof(RecoveredGlobal_80096750_lbl_8048F930) == 0x58 ? 1 : -1];
typedef char RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch_size[sizeof(RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch) == 0x60 ? 1 : -1];
u8 *TObjEneRe7BeruraPunch__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804928CC *)arg0)->init_instance((void *)arg1, (void *)arg2, (void *)(&TObjEneRe7BeruraPunch__collision_body_templates.value), (void *)2);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch *)&__vt__21TObjEneRe7BeruraPunch).value;
    ((TUnk_80490470 *)(arg0 + 0xF8))->init_vtable_and_field18();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2990;
    *(u16 *)((s8 *)arg0 + 0xB0) = obj_getField1c((void *) (arg2));
    ((TObjEneRe7BeruraPunch *)arg0)->init();
    return arg0;
}

}
