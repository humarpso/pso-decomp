#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__18TObjLazerFenceNormFv(void *arg0);
M2C_UNK TObjLazerFenceNorm__sub_80192CCC();
M2C_UNK reset_by_door__18TObjLazerFenceNormFPv();

void run_task__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        TObjLazerFenceNorm__sub_80192CCC();
        return;
    case 1:
        reset_by_door__18TObjLazerFenceNormFPv();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80192C00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw_model__18TObjLazerFenceNormFPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjBoss2Tunnel__sub_803DB470(void *);
void set_global_param__8TObjFishFi(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);

extern void *lbl_805D5C28;

void draw_model__18TObjLazerFenceNormFPv(void *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0xBC));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192C54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFenceNormBase { char pad[0x18]; };
struct LazerFenceNormVObj : LazerFenceNormBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__18TObjLazerFenceNormFv(void *arg0);
M2C_UNK fn_80192B5C(void *);
M2C_UNK draw_model__18TObjLazerFenceNormFPv(void *);

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    if (((LazerFenceNormVObj*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
        switch (temp_r0) {
        case 0:
            fn_80192B5C(arg0);
            return;
        case 1:
            draw_model__18TObjLazerFenceNormFPv(arg0);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192D70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_by_door__18TObjLazerFenceNormFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void reset_by_door__18TObjLazerFenceNormFPv(void *arg0) {
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s16 *, 0xB0)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192E08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__18TObjLazerFenceNorm[];

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLazerFenceNorm;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192F74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLazerFenceNorm__create(void *arg0);
void *TObjLazerFenceNorm__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLazerFenceNorm__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjLazerFenceNorm__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192FC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__18TObjLazerFenceNormFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5C28;
extern u32 lbl_805D5C2C;

void free_resources__18TObjLazerFenceNormFv(void) {
    if ((u32) lbl_805D5C2C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C2C, 1);
        lbl_805D5C2C = 0U;
    }
    if ((u32) lbl_805D5C28 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C28);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C28);
        lbl_805D5C28 = 0U;
    }
}

}
#endif
#endif
