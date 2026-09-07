#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801844C8 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_801844C8_lbl_804B5DA0 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_801844C8_lbl_804B5DA0_size[sizeof(RecoveredGlobal_801844C8_lbl_804B5DA0) == 0x38 ? 1 : -1];

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(void *, int);
u8 * get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
s32 fn_80184B44(void *, void *, void *, int, f32);
extern M2C_UNK lbl_804B5DA0[];
extern s32 lbl_805D3270;
extern const f32 lbl_805DBC18;
extern const f32 lbl_805DBC74;
u8 *TObjCity_Season_XmasTree__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct VBase_8018455c_80184408 { char pad[0x18]; };
struct VObj_8018455c_80184408 : VBase_8018455c_80184408 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0);
void *TObjCity_Season_XmasTree__create(void *arg0);
void *dt__24TObjCity_Season_XmasTreeFPvs(void *arg0, s16 arg1);
void render_tree__24TObjCity_Season_XmasTreeFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjCity_Season_EasterEgg__sub_80184A08(M2C_UNK, M2C_UNK, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCity_Season_XmasTree__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_XmasTree__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_804B5DA0[];

void *dt__24TObjCity_Season_XmasTreeFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5DA0;
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4)); M2C_FIELD(arg0, M2C_UNK *, 0xB4) = 0; }
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8050DC50[];
extern const f32 lbl_805DBC40;
extern const f32 lbl_805DBC44;

u8 *TObjCity_Season_XmasTree__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801844C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801844C8, spC) == 0x4) ? 1 : -1];
    Stack_801844C8 stack;
    fn_80184B44((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (2), (f32) (lbl_805DBC74));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801844C8_lbl_804B5DA0 *)&lbl_804B5DA0).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3270;
    if (((u32)get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)((void *) (arg0)))) != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        M2C_FIELD(arg0, s32 *, 0xB4) = TBoss4Type2__sub_800874F4((void *) (&stack.sp8), (int) (0x90));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    return arg0;
}

void render_tree__24TObjCity_Season_XmasTreeFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)(arg0));
    if ((temp_r3 != NULL) && (((VObj_8018455c_80184408*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(lbl_8050DC50, s32 *, 4));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x28), M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x430), s32 *, 0x14), M2C_FIELD(arg0, f32 *, 0xB0));
        TObjPlayer__sub_803D9B78();
    }
}

extern const f32 lbl_805DBC70;

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0) {
    TObjCity_Season_EasterEgg__sub_80184A08(arg0, 1, lbl_805DBC70);
}

}
