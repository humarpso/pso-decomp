#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80183F24 {
    M2C_UNK sp8;
    f32 spC;
};

struct RecoveredGlobal_80183F24_lbl_804B5D00 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80183F24_lbl_804B5D00_size[sizeof(RecoveredGlobal_80183F24_lbl_804B5D00) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80184054_lbl_8050DC38 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80183FC0_lbl_8050DC38 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80183FC0_lbl_8050DC50 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(void *, int);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
s32 fn_80184B44(void *, void *, void *, int, f32);
extern RecoveredGlobal_80183F24_lbl_804B5D00 lbl_804B5D00;
extern s32 lbl_805D327C;
extern const f32 lbl_805DBC4C;
extern const f32 lbl_805DBC64;
u8 *TObjCity_Season_21_21__ct(u8 *arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_80184054_lbl_8050DC38 lbl_8050DC38;
void fn_80184054(u8 *arg0);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjFish__sub_803E46BC(void *);
extern RecoveredGlobal_80184054_lbl_8050DC38 lbl_8050DC38;
extern RecoveredGlobal_80183FC0_lbl_8050DC50 lbl_8050DC50;
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC68;
void TLobby__sub_80183FC0(u8 *arg0);
}

extern "C" {

u8 *TObjCity_Season_21_21__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80183F24, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80183F24, spC) == 0x4) ? 1 : -1];
    Stack_80183F24 stack;
    fn_80184B44((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (4), (f32) (lbl_805DBC64));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5D00.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D327C;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    if (get_anim_frame__25TObjCity_Season_EasterEggFPv((void *) (arg0)) != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC4C;
        M2C_FIELD(arg0, s32 *, 0xB8) = TBoss4Type2__sub_800874F4((void *) (&stack.sp8), (int) (0x90));
    } else {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    return arg0;
}
typedef char RecoveredGlobal_80184054_lbl_8050DC38_size[sizeof(RecoveredGlobal_80184054_lbl_8050DC38) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_80183FC0_lbl_8050DC38_size[sizeof(RecoveredGlobal_80183FC0_lbl_8050DC38) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80183FC0_lbl_8050DC50_size[sizeof(RecoveredGlobal_80183FC0_lbl_8050DC50) == 0x18 ? 1 : -1];
void TLobby__sub_80183FC0(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_80183FC0_lbl_8050DC38 *)&lbl_8050DC38).value, u8 **, 0xC));
    if ((temp_r31 != NULL) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC44, lbl_805DBC68) != 0)) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_8050DC50.value, s32 *, 0xC)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        TObjFish__sub_803E46BC((void *) (M2C_FIELD(M2C_FIELD(temp_r31, u8 **, 0x42C), s32 *, 8)));
        pop_matrix();
    }
}

void fn_80184054(u8 *arg0) {
    if ((u32) M2C_FIELD(&lbl_8050DC38.value, u32 *, 0xC) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x40);
    }
}

}
