#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneMorfos__vt26(void);
void TObjEneMorfos__vt61(void* p);

int TObjEneDD__sub_800BBA18(void*, void*);

void TObjEneMorfos__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { TObjEneDD__sub_800BBA18(p, (void*)11); } }
void TObjEneMorfos__vt26(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80332558
#include "types.h"

extern "C" {

void TObjEneMorfos__vt103(void* p);

int get_target_info__9TObjEneDDFPv(void*);
int TObjEneMorfos__sub_8033471C(void*);

void TObjEneMorfos__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneMorfos__sub_8033471C(p); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803326C4
#include "types.h"

extern "C" {

int get_instance__13TObjEneMorfosFv(void);

    extern int TObjEneMorfos__data_805D6D14;
int get_instance__13TObjEneMorfosFv(void) {  return TObjEneMorfos__data_805D6D14; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803327B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__13TObjEneMorfosFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneMorfos__sub_803326CC(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];

s32 render_model_if_visible__13TObjEneMorfosFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv((void *) (main_task)) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3C8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x10) {
                TObjEneMorfos__sub_803326CC((void *) (arg0));
            }
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80334124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m93();
    virtual void m94();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m100();
};

extern "C" {

void state_appear__13TObjEneMorfosFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);
s32 TObjEneMorfos__sub_803344F0();
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);

extern const f32 TObjEneMorfos__data_805DF86C;
extern const f32 TObjEneMorfos__data_805DF874;
extern const f32 lbl_805DF894;

void state_appear__13TObjEneMorfosFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((F_V *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF8);
        set_field_378__9TObjEneDDFPvi(arg0, 4);
        M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
        M2C_FIELD(arg0, s32 *, 0x4B0) = 0;
        M2C_FIELD(arg0, f32 *, 0x4C4) = (f32) TObjEneMorfos__data_805DF874;
        return;
    case 3:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x4B0) == 2) && (TObjEneMorfos__sub_803344F0() == 0)) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        }
        break;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B0);
        switch (temp_r0) {
        case 0:
            if (update_linked_position__14TObjEneEpsilonFPv(TObjEneMorfos__data_805DF86C) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4B0) = 1;
                TObjEneEpsilon__sub_800B96A4(arg0);
                update_velocity__9TObjEneDDFPv(arg0);
            }
            break;
        case 1:
            M2C_FIELD(arg0, f32 *, 0x4C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4C4) + lbl_805DF894);
            M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x4C4));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3D4) >= 0xC) {
                M2C_FIELD(arg0, s32 *, 0x3D4) = 0xC;
                M2C_FIELD(arg0, s32 *, 0x4B0) = 2;
            }
            play_effect_if_v2__10TObjPlayerFi(-0x100);
            break;
        }
        ((F_V *) arg0)->m100();
        ((F_V *) arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3D4) = 0xC;
        ((F_V *) arg0)->m94();
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80334704
#include "types.h"

extern "C" {

int TObjEneMorfos__sub_80334704(void);

    extern int TObjEneMorfos__data_805D6D10;
    extern float lbl_805D6D30;
    extern float lbl_805D6D34;
int TObjEneMorfos__sub_80334704(void) { lbl_805D6D30 = *(float*)((char*)TObjEneMorfos__data_805D6D10 + 0x0); lbl_805D6D34 = *(float*)((char*)TObjEneMorfos__data_805D6D10 + 0x4); return TObjEneMorfos__data_805D6D10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803347A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMorfos__vt86(void *arg0);

void TObjEneMorfos__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803347BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_hover_target_position__13TObjEneMorfosFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneMorfos__data_805DF89C;

void set_hover_target_position__13TObjEneMorfosFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneMorfos__data_805DF89C + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneMorfos__data_805DF89C));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80334808
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80141FA8(s32);
void TObjEneMorfos__vt59(void);

s32 approach_value__13TObjEneMorfosFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80334968
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80141FA8(s32);
void TObjEneMorfos__vt59(void);

void TObjEneMorfos__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80334F88
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2);
void TObjEneMorfos__sub_8033471C(void *);
void TObjEneMorfos__sub_80334D74(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__13TObjEneMorfos[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D4230;

void *TObjEneMorfos__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMorfos;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1004));
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1032));
    __construct_array((void *)((char *)arg0 + 1060), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4230;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    TObjEneMorfos__sub_8033471C(arg0);
    TObjEneMorfos__sub_80334D74(arg0);
    M2C_FIELD(arg0, u32 *, 0x494) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335024
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__13TObjEneMorfosFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneMorfosArm__sub_8033542C();

extern u32 TObjEneMorfos__data_805D6D14;

void unload_static_data__13TObjEneMorfosFv(void) {
    TObjEneMorfosArm__sub_8033542C();
    if ((u32) TObjEneMorfos__data_805D6D14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMorfos__data_805D6D14, 1);
        TObjEneMorfos__data_805D6D14 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80335060
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjEneMorfosFPv(void *arg0);
void *TObjEneMorfos__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__13TObjEneMorfosFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneMorfos__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803377B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804EF130[];

void *__dt__13TObjEneMorfosFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF130;
        if (M2C_FIELD(arg0, void **, 0xE0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE0)); }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
