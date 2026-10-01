#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8018493C {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_8018493C_lbl_804B5E10 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8018493C_lbl_804B5E10_size[sizeof(RecoveredGlobal_8018493C_lbl_804B5E10) == 0x38 ? 1 : -1];

struct Info_80184A08 { u32 f0; u32 n; };

struct Ent_80184A08 { u32 f0; Info_80184A08 *info; };

struct Anim_80184A08 { u8 pad[0x430]; Ent_80184A08 *ents; };

struct Obj_80184A08 { u8 pad[0xB0]; f32 t; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(void *, int);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
s32 fn_80184B44(void *, void *, void *, int, f32);
extern M2C_UNK lbl_804B5E10[];
extern s32 lbl_805D3268;
extern const f32 lbl_805DBC18;
extern const f32 lbl_805DBC78;
extern const f32 lbl_805DBC7C;
u8 *TObjCity_Season_EasterEgg__ct(u8 *arg0, s32 arg1, s32 arg2);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
s32 TObjCity_Season_EasterEgg__sub_80184A08(Obj_80184A08 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

void *TObjCity_Season_EasterEgg__create(void *arg0);
void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0);
void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0) {
    s32 temp_r3;

    if (get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)(arg0)) != 0U) {
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

extern void *tl_05;

void *TObjCity_Season_EasterEgg__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjCity_Season_EasterEgg__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_804B5E10[];

void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5E10;
        if (M2C_FIELD(arg0, void **, 0xB8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB8)); M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCity_Season_EasterEgg__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8018493C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8018493C, spC) == 0x4) ? 1 : -1];
    Stack_8018493C stack;
    fn_80184B44((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (0), (f32) (lbl_805DBC78));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018493C_lbl_804B5E10 *)&lbl_804B5E10).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3268;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    if (get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)((void *) (arg0))) != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        M2C_FIELD(arg0, s32 *, 0xB8) = TBoss4Type2__sub_800874F4((void *) (&stack.sp8), (int) (0x90));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC7C;
        M2C_FIELD(arg0, s32 *, 0xBC) = TBoss4Type2__sub_800874F4((void *) (&stack.sp8), (int) (0x91));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    }
    return arg0;
}
s32 TObjCity_Season_EasterEgg__sub_80184A08(Obj_80184A08 *arg0, s32 arg1, f32 farg0) {
    Anim_80184A08 *a;
    f32 lim;
    a = (Anim_80184A08 *)get_anim_frame__25TObjCity_Season_EasterEggFPv(arg0);
    if (a != NULL) {
        lim = (f32)(a->ents[arg1].info->n - 1);
        arg0->t += farg0;
        if (arg0->t >= lim) {
            arg0->t -= lim;
        }
        return 1;
    }
    return 0;
}

}
