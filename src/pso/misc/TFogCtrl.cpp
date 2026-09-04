#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__8TFogCtrlFv(void);

void render__8TFogCtrlFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x800FA9DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__8TFogCtrlFv(void);
void *TQuestVmDownLoadServer__sub_800FA95C(void *);
void *__nw__7TObjectFUl(int);

extern void *lbl_805D5390;

void create_instance__8TFogCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = TQuestVmDownLoadServer__sub_800FA95C(o);
    }
    lbl_805D5390 = o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FAA14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_all__8TFogCtrlFii(s32 arg0, s32 arg1);
s32 apply_all__8TFogCtrlFii(s32 arg0, s32 arg1);
M2C_UNK TFogCtrl__sub_800FAFE0(u32, s32, s32);
M2C_UNK TFogCtrl__sub_800FB06C(u32, s32, s32);

extern M2C_UNK TFogCtrl__data_80501188[];

s32 update_all__8TFogCtrlFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TFogCtrl__data_80501188;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            TFogCtrl__sub_800FB06C(v, arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

extern M2C_UNK TFogCtrl__data_80501188[];

s32 apply_all__8TFogCtrlFii(s32 arg0, s32 arg1) {
    s32 var_r29 = 0;
    M2C_UNK *var_r30 = TFogCtrl__data_80501188;
    s32 var_r31 = 0;
    do {
        u32 v = (u32)var_r30[var_r31];
        if (v != 0U) {
            TFogCtrl__sub_800FAFE0(v, arg0, arg1);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FAB34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_all__8TFogCtrlFi(s32 arg0);
M2C_UNK TFogCtrl__sub_800FAF3C(M2C_UNK, s32);

extern M2C_UNK TFogCtrl__data_80501188[];

s32 update_all__8TFogCtrlFi(s32 arg0) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
        if ((u32) temp_r3 != 0U) {
            TFogCtrl__sub_800FAF3C(temp_r3, arg0);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FAC84
#include "types.h"

extern "C" {

s32 TFogCtrl__sub_800FAC84(void* p);

s32 TFogCtrl__sub_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FACF8
#include "types.h"

extern "C" {

void* get_entry__8TFogCtrlFi(int a0);

    extern int lbl_805D5388;
void* get_entry__8TFogCtrlFi(int a0) {  return (char*)(lbl_805D5388) + a0 * 64; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FAD54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all__8TFogCtrlFv(void);
M2C_UNK clear_active_flag__8TFogCtrlFPv(s32);

s32 is_split_screen();
extern M2C_UNK TFogCtrl__data_80501188[];

void update_all__8TFogCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;

    if (is_split_screen() == 0) {
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
            if ((u32)temp_r3 != 0U) {
                clear_active_flag__8TFogCtrlFPv(temp_r3);
            }
            var_r29 += 1;
            var_r31 += 1;
        } while (var_r29 != 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FADB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_active_flag__8TFogCtrlFPv(void *arg0);
M2C_UNK TFogCtrl__sub_800FAE1C(void *);
s32 is_split_screen();

void clear_active_flag__8TFogCtrlFPv(void *arg0) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r3 & 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r3 & 0xFFFFFFFE);
            TFogCtrl__sub_800FAE1C(arg0);
        }
    } else {
        TFogCtrl__sub_800FAE1C(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFFE);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FB12C
#include "types.h"

extern "C" {

s32 get_param__8TFogCtrlFPv(void* p);

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FBA54
#include "types.h"

extern "C" {

void TFogCtrl__sub_800FBA54(void);

void TFogCtrl__sub_800FBA54(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FBA58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TFogCtrl__sub_800FBA58(void);
M2C_UNK TFogCtrl__sub_800FBA54(M2C_UNK);

extern M2C_UNK TFogCtrl__data_80501188[];

void TFogCtrl__sub_800FBA58(void) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
        if ((u32) temp_r3 != 0U) {
            TFogCtrl__sub_800FBA54(temp_r3);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FBAAC
#include "types.h"

extern "C" {

void TFogCtrl__sub_800FBAAC(void);

void TFogCtrl__sub_800FBAAC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800FBC04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__8TFogCtrlFv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
M2C_UNK destroy_instance__22TQuestVmDownLoadServerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK fn_803E1FC8(M2C_UNK);
M2C_UNK fn_803E1FFC(f32, f32);
M2C_UNK fn_803E2070();

extern u32 lbl_805D5388;
extern f32 lbl_805DA964;
extern f32 lbl_805DA968;

void reset__8TFogCtrlFv(void) {
    TObjFogCollisionPoison__sub_801533BC();
    destroy_instance__22TQuestVmDownLoadServerFv();
    if ((u32) lbl_805D5388 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5388);
    }
    lbl_805D5388 = 0U;
    fn_803E1FC8(-1);
    fn_803E1FFC(lbl_805DA964, lbl_805DA968);
    fn_803E2070();
    begin_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A7918
#include "types.h"

extern "C" {

int update_all_default__8TFogCtrlFv(void);
void apply_all_default__8TFogCtrlFv(void);
int apply_all__8TFogCtrlFii(void*, void*);
int update_all__8TFogCtrlFi(void*);

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}
#endif
#endif
