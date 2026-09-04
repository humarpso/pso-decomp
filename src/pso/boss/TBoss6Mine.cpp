#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Mine__sub_80323E68(void* a0);
void TBoss6Mine__vt1(void *arg0);
void TBoss6Mine__vt4(u8 *arg0);
void TBoss6Mine__vt6(s32 arg0);
void TBoss6Mine__vt7(void* p);
void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1);
void copy_pos__10TBoss6MineFi(s32 arg0);
s32 create__10TBoss6MineFi(s32 arg0);
void draw__10TBoss6MineFPv(void *arg0);
void draw_parts__10TBoss6MineFPv(void* p);
void set_state7__10TBoss6MineFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TBoss6Mine__ct(s32, s32, s32);
M2C_UNK TBoss6Mine__sub_803240F8();
M2C_UNK TBoss6PlotFalz__sub_802ABE3C(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
void TBoss6Type1__sub_802B5DD4(void *);
int TOHangerMachine01__sub_803D9C00(void*);
int TOSwitchAttack__sub_80087278(void*, void*, void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 TObjControl__ct(s32, s32);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_global_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

void set_state7__10TBoss6MineFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x380) != 7) {
        M2C_FIELD(arg0, s32 *, 0x380) = 7;
    }
}

    extern const float TBoss6Mine__data_805DF584;
void TBoss6Mine__sub_80323E68(void* a0) { *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffffdff); *(float*)((char*)a0 + 0x3c8) = TBoss6Mine__data_805DF584; }

void copy_pos__10TBoss6MineFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern f32 TBoss6Mine__data_805DF580;

void draw__10TBoss6MineFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r30 = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r31_2 = TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x374), 0);
    set_global_param__8TObjFishFi(temp_r31);
    TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3C8), TBoss6Mine__data_805DF580);
    TObjEneSlimeOne__sub_803E4AF4(temp_r30, temp_r31_2, M2C_FIELD(arg0, f32 *, 0x39C));
    update_camera_target__14TBoss6PlotFalzFv();
    clear_global_state__10TObjPlayerFv();
}

void draw_parts__10TBoss6MineFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x390)); TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x394)); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x398)); draw__10TBoss6MineFPv((void *)(p)); TObjPlayer__sub_803D9B78(); }

void TBoss6Mine__vt7(void* p) { TOSwitchAttack__sub_80087278((void*)((char*)p + 0x38), (void*)((void*)252), (void*)((void*)64)); queue_destruction__7TObjectFv((void*)(p)); }

extern f32 lbl_805DF598;

void TBoss6Mine__vt6(s32 arg0) {
    TBoss6Mine__sub_803240F8();
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFB), (void*)(0x40));
    TOSwitchAttack__sub_80087278((void*)(arg0 + 0x38), (void*)(0xFC), (void*)(0x40));
    TBoss6PlotFalz__sub_802ABE3C(arg0 + 0x38, 0xC0, 0xF, lbl_805DF598);
    queue_destruction__7TObjectFv((void*)(arg0));
}

void TBoss6Mine__vt4(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r3;
    if (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x3A8)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 5;
        TBoss3Volopt__sub_8022675C(0x4003B51D, arg0 + 0x38, 0, 0);
    }
}

void TBoss6Mine__vt1(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C) + 1;
    M2C_FIELD(arg0, s32 *, 0x38C) = temp_r4;
    if (temp_r4 > (s32) M2C_FIELD(arg0, s32 *, 0x3A0)) {
        M2C_FIELD(arg0, s32 *, 0x38C) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 2;
    }
}

extern M2C_UNK lbl_804ECBAC[];

void *__dt__10TBoss6MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECBAC;
        if (M2C_FIELD(arg0, void **, 0x3CC) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3CC)); M2C_FIELD(arg0, M2C_UNK *, 0x3CC) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x378) != NULL) { TBoss6Type1__sub_802B5DD4(M2C_FIELD(arg0, void **, 0x378)); }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

s32 create__10TBoss6MineFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3D0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Mine__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
