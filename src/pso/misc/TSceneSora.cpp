#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_instance__10TSceneSoraFv(void);
s32 TSceneSora__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
extern s32 tl_05;

void create_instance__10TSceneSoraFv(void) {
    s32 var_r3;

    if ((u32) TSceneSora__data_805D6054 != 0U) {
        var_r3 = __nw__7TObjectFUl(0xA4);
        if (var_r3 != 0) {
            var_r3 = TSceneSora__ct(var_r3, tl_05);
        }
        TSceneSora__data_805D6050 = var_r3;
        return;
    }
    TSceneSora__data_805D6050 = 0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A7964
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_active__10TSceneSoraFPv(void *arg0);
M2C_UNK TObjPlayer__sub_800D8A6C();
M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK update__11TCameraCtrlFv();
M2C_UNK update__10TSceneSoraFv(void *);
M2C_UNK update_all_default__8TFogCtrlFv(void *);

extern void *tl_05;

void update_if_active__10TSceneSoraFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x154) & 1)) {
        update__11TCameraCtrlFv();
        update__10TSceneSoraFv(arg0);
        update_all_default__8TFogCtrlFv(arg0);
        TObjPlayer__sub_800D8A6C();
    }
    if (tl_05 != 0) {
        allow_rendering__7TObjectFv(tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A79C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_scene__10TSceneSoraFi(s32 arg0);
M2C_UNK TCameraCtrl__sub_801A7B14();
M2C_UNK TObjPlayer__sub_800D8A60();
M2C_UNK apply_all_default__8TFogCtrlFv(s32);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK reset_state__10TSceneSoraFv(s32);

extern void *tl_05;

void enter_scene__10TSceneSoraFi(s32 arg0) {
    TCameraCtrl__sub_801A7B14();
    reset_state__10TSceneSoraFv(arg0);
    apply_all_default__8TFogCtrlFv(arg0);
    TObjPlayer__sub_800D8A60();
    if (tl_05 != NULL) {
        disallow_rendering__7TObjectFv(tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A7A10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__10TSceneSoraFv(void);
void reset_state__10TSceneSoraFv(void);
M2C_UNK set_ready__6TSceneFv();
M2C_UNK reset_counter__6TSceneFv();

extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;

void update__10TSceneSoraFv(void) {
    set_ready__6TSceneFv();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 1;
    }
}

extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;

void reset_state__10TSceneSoraFv(void) {
    reset_counter__6TSceneFv();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A7A78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__10TSceneSoraFPv(void *arg0);
u16 TCameraCtrl__sub_8006A5DC();
void *TCameraCtrl__sub_8006C1F0();
M2C_UNK fn_801A73B0(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern f32 lbl_805DC0D4;

void update_state__10TSceneSoraFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC);
    switch (temp_r0) {
    case 0:
        fn_801A73B0(lbl_805DC0D4);
        return;
    case 1:
        if ((M2C_FIELD(TCameraCtrl__sub_8006C1F0(), u16 *, 2) & 1) || (TCameraCtrl__sub_8006A5DC() != 5)) {
            queue_destruction__7TObjectFv(arg0);
        }
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F3E4
#include "types.h"

extern "C" {

void TSceneSora__sub_8029F3E4(void);

void TSceneSora__sub_8029F3E4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1);
M2C_UNK set_instance__6TSceneFi(M2C_UNK);
M2C_UNK set_active_scene__6TSceneFi(M2C_UNK);
M2C_UNK set_id__6TSceneFi(M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804DC7C4[];
extern s32 lbl_805D65F0;
extern s16 lbl_805D65F8;
extern s8 lbl_805D65FA;

void *destroy__10TSceneSoraFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
        lbl_805D65F8 = 0;
        lbl_805D65FA = 0;
        lbl_805D65F0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        set_id__6TSceneFi(0);
        set_active_scene__6TSceneFi(0);
        set_instance__6TSceneFi(0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F4C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create_instance__10TSceneSoraFPv(void *arg0);
M2C_UNK __ct__7TObjectFP7TObject();
void *__nw__7TObjectFUl(M2C_UNK);
void *fn_803281B8(void *, M2C_UNK, M2C_UNK, s32);

extern M2C_UNK lbl_804DC7C4[];
extern s32 tl_05;
extern void *lbl_805D65F4;
extern s16 lbl_805D65F8;
extern s8 lbl_805D65FA;
extern s32 lbl_805D65FC;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;

void *create_instance__10TSceneSoraFPv(void *arg0) {
    void *obj;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
    lbl_805D65F8 = 0;
    lbl_805D65FA = 0;
    if ((void *) lbl_805D65F4 != NULL) {
        return arg0;
    }
    lbl_805D65F4 = arg0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) lbl_805D65FC;
    obj = __nw__7TObjectFUl(0x20);
    if (obj != NULL) {
        obj = fn_803281B8(obj, 0x28, 1, tl_05);
    }
    M2C_FIELD(arg0, void **, 0x20) = obj;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DDD8C;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DDD90;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DDD8C;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F574
#include "types.h"

extern "C" {

s32 get_state__10TSceneSoraFPv(void* p);

s32 get_state__10TSceneSoraFPv(void* p) { return *(s32*)((char*)p + 0x20); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F57C
#include "types.h"

extern "C" {

void set_scene_flag__10TSceneSoraFi(int a0);

    extern int lbl_805D65F0;
void set_scene_flag__10TSceneSoraFi(int a0) { lbl_805D65F0 = a0; }

}
#endif
#endif
