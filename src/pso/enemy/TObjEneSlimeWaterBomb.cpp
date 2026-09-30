#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 TBoss4Type2__sub_800874F4(void *, int);
s32 get_attack_target__15TObjEneSlimeOneFPv(s32);
s32 initialize__9TObjEnemyFPv(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_804966EC[];
extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];
extern s32 lbl_805D2AE0;
extern const f32 lbl_805DA6B4;
extern const f32 lbl_805DA6D8;
extern const f32 lbl_805DA6E0;
extern const f32 lbl_805DA6E4;
void *TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1);
void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);
void request_destroy__11TBoss4Type2FUi(void *);

void * create__21TObjEneSlimeWaterBombFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x398);
    if (o != NULL) {
        o = TObjEneSlimeWaterBomb__ct((void *)(o), (void *)(arg0), (void *)(arg1));
    }
    return o;
}

extern M2C_UNK __vt__21TObjEneSlimeWaterBomb[];

void *__dt__21TObjEneSlimeWaterBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void *TObjEneSlimeWaterBomb__ct(void *arg0, void *arg1, void *arg2) {
    f32 s;
    f32 c;
    initialize__9TObjEnemyFPv(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneSlimeWaterBomb;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D2AE0;
    M2C_FIELD(arg0, void **, 0x38C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x10), s32 *, 0x60);
    VecCopy__FP3VecPC3Vec((u8 *) arg0 + 0x38, M2C_FIELD(arg0, u8 **, 0x10) + 0x38);
    s = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    c = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0x38) += lbl_805DA6E0 * s;
    M2C_FIELD(arg0, f32 *, 0x3C) += lbl_805DA6E4;
    M2C_FIELD(arg0, f32 *, 0x40) += lbl_805DA6E0 * c;
    M2C_FIELD(arg0, f32 *, 0x374) = lbl_805DA6D8 * s;
    M2C_FIELD(arg0, f32 *, 0x378) = lbl_805DA6B4;
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805DA6D8 * c;
    M2C_FIELD(arg0, f32 *, 0x384) = lbl_805DA6B4;
    M2C_FIELD(arg0, s32 *, 0x388) = TBoss4Type2__sub_800874F4((u8 *) arg0 + 0x38, 0xCF);
    M2C_FIELD(arg0, f32 *, 0x390) = *dispatch_shared_handler_a__6TLobbyFPv(lbl_804966EC[get_attack_target__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x38C))]);
    if (M2C_FIELD(arg0, f32 *, 0x390) < lbl_805DA6B4) {
        M2C_FIELD(arg0, f32 *, 0x390) = lbl_805DA6B4;
    }
    M2C_FIELD(arg0, s32 *, 0x394) = 0;
    return arg0;
}
#pragma pop

}
