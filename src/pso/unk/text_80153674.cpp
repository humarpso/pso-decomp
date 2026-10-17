#include "types.h"
#include "pso/unk/text_80153674.h"
#include "pso/object/TObjFogCollisionPoison.h"
#include "pso/object/TObjFogCollisionSwitch.h"
#include "pso/object/TObjFogCollision.h"

struct VBase_801537CC { char pad[0x18]; };

struct VObj_801537CC : VBase_801537CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
};

struct O_801538D4 { u8 pad[0x8C]; s32 v; };

extern "C" {
extern const f32 lbl_805DB250;
s32 TObjFogCollision__sub_80153F70(void *self);
s32 TObjFogCollision__sub_80153F68(void *self);
s32 is_split_screen();
s32 init_base__22TObjFogCollisionPoisonFPUcs(void *, void *, u16);
s32 TObjFogCollisionSwitch__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern s32 __vt__22TObjFogCollisionPoison[];
extern s32 lbl_805D2E80;
extern s32 local_client_id;
void vfunc_14__16TObjFogCollisionFv(O_801538D4 *);
void debug_printf_at(int, void *, ...);
extern char lbl_80440090[];
extern char lbl_804400A4[];
extern char lbl_804400B8[];
void record_fog_collision_hit(s32 arg0, s32 arg1, s32 arg2);
u8 is_current_floor_switch_set(u16);
void __dl__7TObjectFPv(void *);
void *__dt__22TObjFogCollisionSwitchFv(void *arg0, s16 arg1);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);

extern s32 game_difficulty_selection;
extern const f32 lbl_805DB254;
extern const f32 lbl_805DB258;
extern const f32 lbl_805DB25C;

void run_task__22TObjFogCollisionPoisonFv(void *self) {
    if (TObjFogCollision__sub_80153F70(self)) {
        return;
    }
    if (TObjFogCollision__sub_80153F68(self)) {
        return;
    }
}

void TObjFogCollisionPoison::vfunc_13(s32) {
    f32 var_f2;

    *(s32 *)&this->m_98 = (s32) get_random_float__21TObjEneMe3ShinowaRealFv(this->target_scale);
    switch ((s32) game_difficulty_selection) {
    default:
    case 0:
        var_f2 = lbl_805DB250;
        break;
    case 1:
        var_f2 = lbl_805DB254;
        break;
    case 2:
        var_f2 = lbl_805DB258;
        break;
    case 3:
        var_f2 = lbl_805DB25C;
        break;
    }
    *(s32 *)&this->m_98 = (s32) ((f32) *(s32 *)&this->m_98 * var_f2);
}

void *__dt__22TObjFogCollisionPoisonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjFogCollisionPoison;
        __dt__22TObjFogCollisionSwitchFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *TObjFogCollisionPoison__ct(void *arg0, void *arg1, void *arg2) {
    u16 i;
    void *o;
    TObjFogCollisionSwitch__ct(arg0, arg1, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjFogCollisionPoison;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D2E80;
    ((VObj_801537CC *)arg0)->m11();
    if (is_split_screen() != 0) {
        for (i = 0; i != 4; i++) {
            o = __nw__7TObjectFUl(0x2C);
            if (o != NULL) {
                init_base__22TObjFogCollisionPoisonFPUcs(o, arg0, i);
            }
        }
    } else {
        o = __nw__7TObjectFUl(0x2C);
        if (o != NULL) {
            init_base__22TObjFogCollisionPoisonFPUcs(o, arg0, local_client_id);
        }
    }
    return arg0;
}

void *create__22TObjFogCollisionPoisonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjFogCollisionPoison__ct(o, tl_05, arg0);
    }
    return o;
}

void TObjFogCollisionSwitch::vfunc_14() {
    O_801538D4 *arg0 = (O_801538D4 *)this;
    vfunc_14__16TObjFogCollisionFv(arg0);
    if (((TObjFogCollisionSwitch *)arg0)->sub_80153A0C() != 0) {
        debug_printf_at(0x13001E, lbl_80440090);
    } else {
        debug_printf_at(0x13001E, lbl_804400A4);
    }
    debug_printf_at(0x130022, lbl_804400B8, arg0->v);
}

void run_task__22TObjFogCollisionSwitchFv(void *arg0) {
    s32 st;
    u16 i;
    if (TObjFogCollision__sub_80153F70(arg0) == 0 && TObjFogCollision__sub_80153F68(arg0) == 0) {
        st = ((TObjFogCollisionSwitch *)arg0)->sub_80153A0C();
        if (st == is_current_floor_switch_set(*(s32 *)&((TObjFogCollisionSwitch *)arg0)->m_8c)) {
            for (i = 0; i != 4; i++) {
                if (((TObjFogCollision *)arg0)->check_collision(i) != 0) {
                    record_fog_collision_hit(i, ((TObjFogCollisionSwitch *)arg0)->m_84, *(s32 *)((s8 *)arg0 + 0x88) == 0);
                }
            }
        }
    }
}

s32 TObjFogCollisionSwitch::sub_80153A0C() {
    return *(f32 *)&this->m_70 >= lbl_805DB250;
}

}
