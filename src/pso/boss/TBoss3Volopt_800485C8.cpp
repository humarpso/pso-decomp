#include "types.h"
#include "pso/boss/TUnk_80484888.h"
#include "pso/boss/TBoss3Volopt_800485C8.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80086D50.h"
#include "pso/system/vector.h"
#include "pso/boss/TUnk_804999E8.h"
#include "pso/boss/TUnk_804848B8.h"
#include "pso/boss/TUnk_804848A0.h"
#include "pso/boss/TUnk_80484870.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8004885C_lbl_80484888 {
    s32 value;
    u8 remaining[0x14];
};

#pragma push
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
struct Raw_80048674 { u8 b[12]; };

extern "C" {
extern s32 lbl_805D4D14;
extern const f32 lbl_805D8850;
extern const f32 lbl_805D8854;
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_80484888[];
extern u8 *tl_07;
extern const f32 lbl_805D8848;
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 lbl_805D8838;
extern const f32 lbl_805D883C;
extern const f32 lbl_805D8840;
extern const f32 lbl_805D8844;
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TUnk_80484870::run_task() {  }

extern s32 lbl_80484870[];

void *TUnk_80484870::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_80484870;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern void *tl_05;

void *TUnk_80484870::ct(void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(this, tl_05);
    *(s32 **)((s8 *)this + 0x18) = lbl_80484870;
    *(void * *)&(*(u16 *)((u8 *)this + 0x1C)) = arg1;
    *(void * *)&(*(u8 *)((u8 *)this + 0x20)) = arg2;
    return this;
}

#pragma push
#pragma fp_contract on
void update_particle_emitter__12TBoss3VoloptFPv(u8 *arg0) {
    Raw_80048674 v;
    s32 ang;
    f32 d;
    ((TUnk_80484888 *)arg0)->m_28 += *(f32 *)((s8 *)arg0 + 0x24);
    while (((TUnk_80484888 *)arg0)->m_28 >= lbl_805D8844) {
        ang = lbl_805D8838 * (lbl_805D883C * (lbl_805D8840 * (f32)rand()));
        v = *(Raw_80048674 *)(arg0 + 0x2C);
        d = *(f32 *)((s8 *)arg0 + 0x44) * (lbl_805D8840 * (f32)rand());
        *(f32 *)((s8 *)&v + 0) += d * cos_table_lookup(ang);
        *(f32 *)((s8 *)&v + 8) += d * sin_table_lookup(ang);
        spawn_directional_particle(&v, arg0 + 0x38, *(s32 *)((s8 *)arg0 + 0x1C));
        ((TUnk_80484888 *)arg0)->m_28 -= lbl_805D8844;
    }
    if (--((TUnk_80484888 *)arg0)->m_20 <= 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void *__dt__13TUnk_80484888Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80484888;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8004885C_lbl_80484888_size[sizeof(RecoveredGlobal_8004885C_lbl_80484888) == 0x18 ? 1 : -1];
u8 *TBoss3Volopt__sub_8004885C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4, f32 farg0, f32 farg1) {
    __ct__7TObjectFP7TObject(arg0, tl_07);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8004885C_lbl_80484888 *)&lbl_80484888).value;
    VecCopy((Vec *)(arg0 + 0x2C), (const Vec *)arg1);
    *(s32 *)((s8 *)arg0 + 0x1C) = arg2;
    ((TUnk_80484888 *)arg0)->m_20 = arg3;
    *(f32 *)((s8 *)arg0 + 0x24) = farg0;
    if (arg4 != NULL) {
        ((TObjPlayer *)(arg0 + 0x38))->copy_xyz(arg4);
    } else {
        ((TUnk_80484888 *)arg0)->m_38 = 0;
        *(s32 *)((s8 *)arg0 + 0x3C) = 0;
        ((TUnk_80484888 *)arg0)->m_40 = 0;
    }
    ((TUnk_80484888 *)arg0)->m_28 = (f32) lbl_805D8848;
    *(f32 *)((s8 *)arg0 + 0x44) = farg1;
    return arg0;
}

void TUnk_804848A0::run_task() {
    u8 *arg0 = (u8 *)this;
  s32 (*temp_r12)();
  const f32 *new_var;
  if (!arg0)
  {
  }
  *((f32 *) (((s8 *) arg0) + 0x1C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x1C))) - lbl_805D8850);
  if ((*((f32 *) (((s8 *) arg0) + 0x1C))) <= (*(new_var = &lbl_805D8854)))
  {
    *((f32 *) (((s8 *) arg0) + 0x1C)) = (f32) (*new_var);
    temp_r12 = *((s32 (**)()) (((s8 *) arg0) + 0x24));
    if (temp_r12 != 0)
    {
      temp_r12();
    }
    else
    {
      queue_destruction__7TObjectFv(arg0);
    }
    lbl_805D4D14 = 1;
  }
}

}

#pragma pop

extern u32 TBoss3Volopt__fade_active_flag;
extern const f32 lbl_805D8858;

extern "C" {

extern s32 lbl_804848A0[];

void *__dt__13TUnk_804848A0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804848A0;
        ((TUnk_804999E8 *)arg0)->destroy_task_object((s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804999E8[];

void *TUnk_804999E8::destroy_task_object(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804999E8;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern void *tl_fade;

void *TUnk_804848A0::init_fade_color(void *arg1, void *arg2) {
    init_object(tl_fade);
    *(s32 **)((s8 *)this + 0x18) = lbl_804848A0;
    *(void * *)&(*(s32 *)((u8 *)this + 0x24)) = arg2;
    *(f32 *)&(*(u16 *)((u8 *)this + 0x1C)) = lbl_805D8858;
    (*(u8 *)((u8 *)this + 0x20)) = 255;
    *(u8 *)((s8 *)this + 0x21) = 255;
    (*(u8 *)((u8 *)this + 0x22)) = 255;
    lbl_805D4D14 = 0;
    return this;
}

extern s32 lbl_804848B8[];

#pragma push
#pragma opt_common_subs off
void TBoss3Volopt::update_fade_out() {
    u8 *arg0 = (u8 *)this;
    s32 (*temp_r12)();
    *(f32 *)&this->m_1c = (f32) (*(f32 *)&this->m_1c + lbl_805D8850);
    if (*(f32 *)&this->m_1c >= lbl_805D8858) {
        *(f32 *)&this->m_1c = (f32) lbl_805D8858;
        temp_r12 = *(s32 (**)())((s8 *)arg0 + 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        } else {
            ((s32 (*)())queue_destruction__7TObjectFv)();
        }
        (*(s32 *)&TBoss3Volopt__fade_active_flag) = 1;
    }
}
#pragma pop

void *__dt__13TUnk_804848B8Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804848B8;
        ((TUnk_804999E8 *)arg0)->destroy_task_object((s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TUnk_804848B8::init_fade(void *arg1, void *arg2) {
    init_object(tl_fade);
    *(s32 **)((s8 *)this + 0x18) = lbl_804848B8;
    *(void * *)&(*(s32 *)((u8 *)this + 0x24)) = arg2;
    *(f32 *)&(*(u16 *)((u8 *)this + 0x1C)) = lbl_805D8854;
    (*(u8 *)((u8 *)this + 0x20)) = 255;
    *(u8 *)((s8 *)this + 0x21) = 255;
    (*(u8 *)((u8 *)this + 0x22)) = 255;
    TBoss3Volopt__fade_active_flag = 0;
    return this;
}

void *TUnk_804999E8::init_object(void *) {
    ((void (*)(void *))__ct__7TObjectFP7TObject)(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804999E8;
    return this;
}

}
