#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TItemEffPG__sub_8034FA50(void* p);

void TItemEffPG__sub_8034FA50(void* p) { *(s32*)((char*)p + 0x58) = 1; }

}
#else
#if PSO_CLASS_PACKAGE == 0x8034F9A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_fields__10TItemEffPGFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804F0AF8[];

void *init_fields__10TItemEffPGFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0AF8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = -30947;
    M2C_FIELD(arg0, u32 *, 0x1FC) = -7281;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034FC7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804F0BF0[];

void *__dt__10TItemEffPGFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0BF0;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034FDAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 countdown_timer__10TItemEffPGFPv(void *arg0);
void *destroy__10TItemEffPGFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TItemEffPGFv(void *, int);

s32 countdown_timer__10TItemEffPGFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (temp_r4 - 1);
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804F0C08[];

void *destroy__10TItemEffPGFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C08;
        __dt__10TItemEffPGFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034FE28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void TItemEffPG__ct(void *);

extern M2C_UNK lbl_804F0C08[];

void *initialize__10TItemEffPGFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    TItemEffPG__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C08;
    M2C_FIELD(arg0, void **, 0xD4) = arg3;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034FE6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2);
void *initialize__10TItemEffPGFPvPvPvPv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__10TItemEffPGFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        initialize__10TItemEffPGFPvPvPvPv(o, arg0, arg1, arg2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034FF4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1);
void run_task__10TItemEffPGFv(void *arg0);
M2C_UNK TItemEffPG__sub_8034FA50(void *);
void __dl__7TObjectFPv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 has_game_join_id();
M2C_UNK TItemAttackCol__sub_802E4918(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

}

struct PgBase { char pad[0x18]; };
struct PgV : PgBase {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual s32 vf05();
};

extern "C" {

void run_task__10TItemEffPGFv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 var_r31;

    var_r31 = 1;
    if (has_game_join_id() == 0) {
        var_r31 = 0;
    }
    if (((PgV *)arg0)->vf05() == 0) {
        var_r31 = 0;
    }
    if (var_r31 != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC4)) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0xC8));
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC4);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x40)) {
                M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
            }
        }
        TItemAttackCol__sub_802E4918(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x14) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
        TItemEffPG__sub_8034FA50(M2C_FIELD(arg0, void **, 0xD0));
        M2C_FIELD(arg0, u32 *, 0xD0) = 0U;
    }
}

extern M2C_UNK __vt__10TItemEffPG[];

void *__dt__10TItemEffPGFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TItemEffPG;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80350124
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__10TItemEffPGFPvPv(void *arg0, void *arg1);
void* init_params__10TItemEffPGFPv(void* a0);
void *TItemEffPG__ct(void *, void *, void *);
int TObjPlayer__sub_802E451C(void);
void *__nw__7TObjectFUl(int);

void create__10TItemEffPGFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        TItemEffPG__ct(o, arg0, arg1);
    }
}

    extern const float lbl_805DFE14;
    extern const float lbl_805DFE1C;
    extern const float lbl_805DFE20;
void* init_params__10TItemEffPGFPv(void* a0) { TObjPlayer__sub_802E451C(); *(int*)((char*)a0 + 0x10) = 10; *(float*)((char*)a0 + 0x28) = lbl_805DFE14; *(float*)((char*)a0 + 0x2c) = lbl_805DFE1C; *(float*)((char*)a0 + 0x30) = lbl_805DFE20; return a0; }

}
#endif
#endif
