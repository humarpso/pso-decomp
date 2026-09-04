#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__20TODragonflyMachine01Fv(void);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

extern s32 lbl_805D599C;
extern s32 lbl_805D59A0;

void update_timer__20TODragonflyMachine01Fv(void) {
    if ((s32) lbl_805D599C == 6) {
        TObjPlayer__sub_803D9214(0, lbl_805D59A0);
    }
    lbl_805D599C += 1;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801652D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__20TODragonflyMachine01FPv(void *arg0);
void run_task__20TODragonflyMachine01Fv(void *arg0);
void *TODragonflyMachine01__ct(void *, void *);
M2C_UNK TODragonflyMachine01__sub_80164F50(void *);
void *__nw__7TObjectFUl(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv(void *);
M2C_UNK TODragonfly__sub_8016492C(void *);
M2C_UNK TODragonfly__sub_80164990(void *);
M2C_UNK TODragonfly__sub_80164A90(void *);
M2C_UNK TODragonfly__sub_80164B34(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);

}

struct DfBase { char pad[0x18]; };
struct DfV : DfBase {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf10(); virtual void vf11();
    virtual void vf12();
};

extern "C" {

void run_task__20TODragonflyMachine01Fv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) + M2C_FIELD(arg0, s32 *, 0xF8));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xFC)));
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((DfV *)arg0)->vf12();
        return;
    }
    update_anim_phase__17TOBarrierEnergy01FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TODragonflyMachine01__sub_80164F50(arg0);
        TODragonfly__sub_80164B34(arg0);
        return;
    case 1:
        TODragonfly__sub_80164A90(arg0);
        return;
    case 2:
        TODragonflyMachine01__sub_80164F50(arg0);
        TODragonfly__sub_80164990(arg0);
        return;
    case 3:
        TODragonfly__sub_8016492C(arg0);
        return;
    }
}

void *create__20TODragonflyMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x108);
    if (o != NULL) {
        o = TODragonflyMachine01__ct(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801653FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unload_static_data__20TODragonflyMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TODragonflyMachine01__data_805D5998;

void unload_static_data__20TODragonflyMachine01Fv(void) {
    if ((u32) TODragonflyMachine01__data_805D5998 != 0U) {
        TLobby__sub_8001FE7C((void*)TODragonflyMachine01__data_805D5998, 1);
        TODragonflyMachine01__data_805D5998 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801654E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TODragonflyMachine01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);

extern M2C_UNK __vt__20TODragonflyMachine01[];

void *__dt__20TODragonflyMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODragonflyMachine01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
