#include "types.h"
#include "pso/object/TObjHashiBase.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80191BEC_80191B94 { char pad[0x18]; };
struct VObj_80191BEC_80191B94 : Base_80191BEC_80191B94 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(s32);
};

struct VBase { char pad[0x18]; };

struct VDisp : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

#include <stddef.h>
struct Stack_80191874 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    f32 sp18;
};

struct RecoveredGlobal_80191874_lbl_804FF610 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, void *, f32);
void TObjHashiBase__sub_80191A38(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
f32 xz_distance_squared(void *, void *);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern RecoveredGlobal_80191874_lbl_804FF610 lbl_804FF610;
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBE2C;
extern const f32 lbl_805DBE30;
s16 TObjHashiBase__sub_80191874(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

void *TObjHashiBase__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__13TObjHashiBaseFv(void *arg0, s16 arg1);
void handle_6x78(void *arg0);
u8 TODoorAncient08__sub_80229220(u16, f32);
void __dl__7TObjectFPv(void *);
M2C_UNK bswap_6x78__11TObjInfoColFPv();
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK fn_80191D14(u16, M2C_UNK);
s32 fn_80191D34(u16);
M2C_UNK fn_80191D5C(u16);
M2C_UNK init_map_object_base();

extern M2C_UNK __vt__13TObjHashiBase[];

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredGlobal_80191874_lbl_804FF610_size[sizeof(RecoveredGlobal_80191874_lbl_804FF610) == 0xC ? 1 : -1];
s16 TObjHashiBase__sub_80191874(u8 *arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_80191874, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80191874, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80191874, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80191874, sp18) == 0x10) ? 1 : -1];
    Stack_80191874 stack;
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (xz_distance_squared((void *) (lbl_805D4DF0 + 0x178), (void *) (arg0 + 0x38)) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return 1;
    }
    TCameraCtrl__sub_803D8934((int) (0), (void *) (arg0 + 0x38), (void *) (&stack.sp10));
    if (stack.sp18 > lbl_805DBE2C) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (stack.sp18 < -farg0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DBE2C) {
        stack.sp10 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg1) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.sp14 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg1) + M2C_FIELD(arg0, f32 *, 0x3C);
        stack.sp18 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg1) + M2C_FIELD(arg0, f32 *, 0x40);
        TParticleCtrl__sub_803D8D1C((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DBE2C) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            return 0;
        }
        goto block_13;
    }
    stack.sp10 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg1) - M2C_FIELD(arg0, f32 *, 0x38));
    stack.sp14 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg1) - M2C_FIELD(arg0, f32 *, 0x3C));
    stack.sp18 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg1) - M2C_FIELD(arg0, f32 *, 0x40));
    TParticleCtrl__sub_803D8D1C((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
    if (stack.sp8 > lbl_805DBE30) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
block_13:
    M2C_FIELD(arg0, s16 *, 0x1E) = 1;
    return 1;
}
#pragma pop

void TObjHashiBase__sub_80191A38(u8 *arg0) {
    void *p;
    if (((VDisp *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        p = M2C_FIELD(arg0, void **, 0xBC);
        if (p != NULL) {
            TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x34), p, M2C_FIELD(arg0, f32 *, 0xB0));
        } else {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        }
        pop_matrix();
    }
}

extern "C" void set_indexed_flags(void*,s32,u32);
}
typedef char BridgeSize[sizeof(TObjHashiBase)==0xD4?1:-1];
typedef char BridgePhase[offsetof(TObjHashiBase,phase)==0xAC?1:-1];
typedef char BridgeRaisedY[offsetof(TObjHashiBase,raisedHeight)==0xCC?1:-1];
void TObjHashiBase::update() {
    f32 height;
    s32 index;
    switch (phase) {
    case 0:
        if (((u8 (*)(u16))TODoorAncient08__sub_80229220)((u16)switchId) != 0) {
            phase=1;
            return;
        }
        break;
    case 1:
        position[1]=position[1]+riseSpeed;
        if(position[1]>(height=raisedHeight)) {
            position[1]=height;
            phase=2;
            return;
        }
        break;
    case 2:
        index=0;
        while(index<colliderCount) {
            set_indexed_flags(this,index,8);
            ++index;
        }
        phase=3;
        break;
    case 3:break;
    }
}

extern "C" {
void *__dt__13TObjHashiBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjHashiBase;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TObjHashiBase[];
extern s32 lbl_805D3374;
extern const f32 lbl_805DBE24;
extern const f32 lbl_805DBE28;
extern const f32 lbl_805DBE34;
extern const f32 lbl_805DBE38;

void *TObjHashiBase__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjHashiBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3374;
    ((VObj_80191BEC_80191B94 *)arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DBE24;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBE28;
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xC8), lbl_805DBE24) == 1) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 2;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DBE34;
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) - lbl_805DBE38);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DBE34;
    }
    return arg0;
}

void handle_6x78(void *arg0) {
    bswap_6x78__11TObjInfoColFPv();
    if (fn_80191D34(M2C_FIELD(arg0, u16 *, 4)) != 0) {
        fn_80191D14(M2C_FIELD(arg0, u16 *, 4), 0);
        return;
    }
    fn_80191D5C(M2C_FIELD(arg0, u16 *, 4));
}

}
