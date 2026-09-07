#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8036D6D4 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8036D4E0_lbl_8047ACE8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(int);
s32 rand__11TOBoss4RockFv();
extern const f32 lbl_805E03D0;
extern const f32 lbl_805E03D8;
extern const f32 lbl_805E03E4;
s32 TBoss6RockChase__sub_8036D6D4(s32 arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDC4(int, int);
s32 TObjPlayer__sub_801569F4(void *);
s32 TBoss6Rock__sub_80353A04();
s32 TBoss6Rock__sub_80353A0C();
s32 rand__11TOBoss4RockFv();
extern RecoveredGlobal_8036D4E0_lbl_8047ACE8 lbl_8047ACE8;
extern M2C_UNK __vt__15TBoss6RockChase[];
extern s32 lbl_805D44F0;
extern const f32 TBoss6RockChase__data_805E03B8;
extern const f32 lbl_805E03CC;
extern const f32 lbl_805E03D0;
extern const f32 lbl_805E03D4;
extern const f32 lbl_805E03D8;
extern const f32 lbl_805E03DC;
extern const f32 lbl_805E03E0;
u8 *TBoss6RockChase__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1);
void render__15TBoss6RockChaseFv(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
int TObjBoss2Tunnel__sub_803DB470(void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

void render__15TBoss6RockChaseFv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x5c)); TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x64)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0xc4)); TObjBoss2Tunnel__sub_803DB470(*(void**)((char*)p + 0xc0)); TObjPlayer__sub_803D9B78(); }

extern M2C_UNK __vt__15TBoss6RockChase[];

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6RockChase;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8036D4E0_lbl_8047ACE8_size[sizeof(RecoveredGlobal_8036D4E0_lbl_8047ACE8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase_size[sizeof(RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase) == 0x38 ? 1 : -1];
u8 *TBoss6RockChase__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase *)&__vt__15TBoss6RockChase).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44F0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xB0) = arg3;
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (lbl_805E03CC * (lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (lbl_805E03D4 * ((lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()) - lbl_805E03D8));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (lbl_805E03DC * (lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (lbl_805E03D4 * ((lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()) - lbl_805E03D8));
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (lbl_805E03E0 * ((lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()) - lbl_805E03D8));
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TBoss6RockChase__data_805E03B8;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0xC0) = TObjFish__sub_8001EDC4((int) (TBoss6Rock__sub_80353A0C()), (int) (M2C_FIELD(&lbl_8047ACE8.value, M2C_UNK *, (arg3 * 8))));
    M2C_FIELD(arg0, s32 *, 0xC4) = TBoss6Rock__sub_80353A04();
    return arg0;
}
#pragma pop

s32 TBoss6RockChase__sub_8036D6D4(s32 arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8036D6D4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8036D6D4, spC) == 0x4) ? 1 : -1];
    Stack_8036D6D4 stack;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg1));
    var_r31 = 0;
    stack.spC = lbl_805E03E4;
    if ((lbl_805E03D0 * (f32) rand__11TOBoss4RockFv()) < lbl_805E03D8) {
        var_r31 = 1;
    }
    temp_r3 = __nw__7TObjectFUl((int) (0xC8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TBoss6RockChase__ct((u8 *)((int) (temp_r3)), (s32)((void *) (arg0)), (s32)((void *) (&stack.sp8)), (s32)((int) (var_r31))));
    }
    return var_r0;
}

}
