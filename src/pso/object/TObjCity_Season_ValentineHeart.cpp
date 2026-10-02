#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801846E0 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_801846E0_lbl_804B5DD8 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_801846E0_lbl_804B5DD8_size[sizeof(RecoveredGlobal_801846E0_lbl_804B5DD8) == 0x38 ? 1 : -1];

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_emitter(void *, int);
u8 * get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
s32 fn_80184B44(void *, void *, void *, int, f32);
extern M2C_UNK lbl_804B5DD8[];
extern s32 lbl_805D326C;
extern const f32 lbl_805DBC18;
extern const f32 lbl_805DBC78;
u8 *TObjCity_Season_ValentineHeart__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct VBase_8018455c_80184620 { char pad[0x18]; };
struct VObj_8018455c_80184620 : VBase_8018455c_80184620 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void *TObjCity_Season_ValentineHeart__create(void *arg0);
void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1);
void notify_fish_on_easter_egg(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

void *TObjCity_Season_ValentineHeart__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_ValentineHeart__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK lbl_804B5DD8[];

void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5DD8;
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

u8 *TObjCity_Season_ValentineHeart__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801846E0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801846E0, spC) == 0x4) ? 1 : -1];
    Stack_801846E0 stack;
    fn_80184B44((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (1), (f32) (lbl_805DBC78));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801846E0_lbl_804B5DD8 *)&lbl_804B5DD8).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D326C;
    if (((u32)get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)((void *) (arg0)))) != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        M2C_FIELD(arg0, s32 *, 0xB4) = create_particle_emitter((void *) (&stack.sp8), (int) (0x90));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    return arg0;
}

void notify_fish_on_easter_egg(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_anim_frame__25TObjCity_Season_EasterEggFPv((void *)(arg0));
    if ((temp_r3 != NULL) && (((VObj_8018455c_80184620*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFi(lbl_8050DC50[0]);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_chunk_object(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x18));
        draw_chunk_object(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x42C), s32 *, 0x8));
        pop_matrix();
    }
}

}
