#include "types.h"
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
void queue_destruction__7TObjectFv(void *);
extern s32 lbl_805D4D14;
extern const f32 lbl_805D8850;
extern const f32 lbl_805D8854;
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_80484888[];
extern u8 *tl_07;
extern const f32 lbl_805D8848;
u8 *TBoss3Volopt__sub_8004885C(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, u8 *arg4, f32 farg0, f32 farg1);
void queue_destruction__7TObjectFv(void *);
void spawn_directional_particle(void *, void *, s32);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 lbl_805D8838;
extern const f32 lbl_805D883C;
extern const f32 lbl_805D8840;
extern const f32 lbl_805D8844;
void update_particle_emitter__12TBoss3VoloptFPv(u8 *arg0);
}

extern "C" {

void TBoss3Volopt__sub_800485C8(void);
void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TBoss3Volopt__sub_800485C8(void) {  }

extern s32 lbl_80484870[];

void *TBoss3Volopt::dt(s16 arg1) {
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
extern s32 lbl_80484870[];

void *TBoss3Volopt::ct(void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(this, tl_05);
    *(s32 **)((s8 *)this + 0x18) = lbl_80484870;
    *(void **)((s8 *)this + 0x1C) = arg1;
    *(void **)((s8 *)this + 0x20) = arg2;
    return this;
}

extern s32 lbl_80484888[];

#pragma push
#pragma fp_contract on
void update_particle_emitter__12TBoss3VoloptFPv(u8 *arg0) {
    Raw_80048674 v;
    s32 ang;
    f32 d;
    *(f32 *)((s8 *)arg0 + 0x28) += *(f32 *)((s8 *)arg0 + 0x24);
    while (*(f32 *)((s8 *)arg0 + 0x28) >= lbl_805D8844) {
        ang = lbl_805D8838 * (lbl_805D883C * (lbl_805D8840 * (f32)rand()));
        v = *(Raw_80048674 *)(arg0 + 0x2C);
        d = *(f32 *)((s8 *)arg0 + 0x44) * (lbl_805D8840 * (f32)rand());
        *(f32 *)((s8 *)(&v) + 0) += d * cos_table_lookup(ang);
        *(f32 *)((s8 *)(&v) + 8) += d * sin_table_lookup(ang);
        spawn_directional_particle(&v, arg0 + 0x38, *(s32 *)((s8 *)arg0 + 0x1C));
        *(f32 *)((s8 *)arg0 + 0x28) -= lbl_805D8844;
    }
    if (--*(s32 *)((s8 *)arg0 + 0x20) <= 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

void *TBoss3Volopt__sub_80048804(void *arg0, s16 arg1) {
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
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg1);
    *(s32 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x20) = arg3;
    *(f32 *)((s8 *)arg0 + 0x24) = farg0;
    if (arg4 != NULL) {
        ((TObjPlayer *)(arg0 + 0x38))->copy_xyz(arg4);
    } else {
        *(s32 *)((s8 *)arg0 + 0x38) = 0;
        *(s32 *)((s8 *)arg0 + 0x3C) = 0;
        *(s32 *)((s8 *)arg0 + 0x40) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) lbl_805D8848;
    *(f32 *)((s8 *)arg0 + 0x44) = farg1;
    return arg0;
}

void TBoss3Volopt::fade_out_and_finish() {
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

extern "C" {
extern u32 TBoss3Volopt__fade_active_flag;
extern const f32 lbl_805D8850;
extern const f32 lbl_805D8858;
}

extern "C" {

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1);
void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 lbl_804848A0[];

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804848A0;
        ((TBoss3Volopt *)arg0)->destroy_task_object((s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804999E8[];

void *TBoss3Volopt::destroy_task_object(s16 arg1) {
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
extern const f32 lbl_805D8858;
extern s32 lbl_804848A0[];

void *TBoss3Volopt::init_fade_color(void *arg1, void *arg2) {
    init_object((void *)(tl_fade));
    *(s32 **)((s8 *)this + 0x18) = lbl_804848A0;
    *(void **)((s8 *)this + 0x24) = arg2;
    *(f32 *)((s8 *)this + 0x1C) = lbl_805D8858;
    *(u8 *)((s8 *)this + 0x20) = 255;
    *(u8 *)((s8 *)this + 0x21) = 255;
    *(u8 *)((s8 *)this + 0x22) = 255;
    lbl_805D4D14 = 0;
    return this;
}

extern s32 lbl_804848B8[];

#pragma push
#pragma opt_common_subs off
void TBoss3Volopt::update_fade_out() {
    u8 *arg0 = (u8 *)this;
    s32 (*temp_r12)();
    *(f32 *)((s8 *)arg0 + 0x1C) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C) + lbl_805D8850);
    if (*(f32 *)((s8 *)arg0 + 0x1C) >= lbl_805D8858) {
        *(f32 *)((s8 *)arg0 + 0x1C) = (f32) lbl_805D8858;
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

void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804848B8;
        ((TBoss3Volopt *)arg0)->destroy_task_object((s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805D8854;
extern s32 lbl_804848B8[];
extern u32 TBoss3Volopt__fade_active_flag;

void *TBoss3Volopt::init_fade(void *arg1, void *arg2) {
    init_object((void *)((void *)(tl_fade)));
    *(s32 **)((s8 *)this + 0x18) = lbl_804848B8;
    *(void **)((s8 *)this + 0x24) = arg2;
    *(f32 *)((s8 *)this + 0x1C) = lbl_805D8854;
    *(u8 *)((s8 *)this + 0x20) = 255;
    *(u8 *)((s8 *)this + 0x21) = 255;
    *(u8 *)((s8 *)this + 0x22) = 255;
    TBoss3Volopt__fade_active_flag = 0;
    return this;
}

extern s32 lbl_804999E8[];

void *TBoss3Volopt::init_object(void *) {
    ((void (*)(void *))__ct__7TObjectFP7TObject)(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804999E8;
    return this;
}

}
