#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80322994___vt__13TBoss6Kakusan { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6Type1__sub_80322AE0(s32 arg0, u8 *arg1, u8 *arg2, s16 arg3, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
u32 TBoss4Type2__sub_800874F4(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
extern M2C_UNK __vt__13TBoss6Kakusan[];
extern s32 lbl_805D4160;
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF53C;
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0);
}

extern "C" {

int TBoss6Kakusan__sub_8032263C(void);
void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1);
void render__13TBoss6KakusanFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void render__15TAdLdQuestPrtGCFv(void);
void request_destroy__11TBoss4Type2FUi(void *);

int TBoss6Kakusan__sub_8032263C(void) { return 0; }

void render__13TBoss6KakusanFv(void) {  }

extern M2C_UNK __vt__13TBoss6Kakusan[];

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TBoss6Kakusan;
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0) {
    f32 temp_f2;
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80322994___vt__13TBoss6Kakusan *)&__vt__13TBoss6Kakusan).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4160;
    M2C_FIELD(arg0, s16 *, 0x20) = arg4;
    M2C_FIELD(arg0, f32 *, 0x24) = farg0;
    if (M2C_FIELD(arg0, f32 *, 0x24) <= TBoss6Kakusan__data_805DF518) {
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3C), (void *) (arg3));
    if (TBoss6Kakusan__sub_803D8BD8((void *) (arg0 + 0x3C)) <= TBoss6Kakusan__data_805DF51C) {
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x30), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x48), (void *) (arg0 + 0x30));
    temp_f2 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2B), f32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) temp_f2;
    if (TBoss6Kakusan__data_805DF518 == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x14;
    }
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 0x10);
    if (M2C_FIELD(arg0, f32 *, 0x28) < TBoss6Kakusan__data_805DF518) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) TBoss6Kakusan__data_805DF518;
    }
    M2C_FIELD(arg0, u32 *, 0x54) = TBoss4Type2__sub_800874F4((void *) (arg0 + 0x30), (int) (0x214));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x54);
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}
#pragma pop

u8 *TBoss6Type1__sub_80322AE0(s32 arg0, u8 *arg1, u8 *arg2, s16 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x58));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TBoss6Kakusan__ct((u8 *)(temp_r3), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3, farg0));
    }
    return var_r0;
}

}
