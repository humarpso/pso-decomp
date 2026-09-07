#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80173330_lbl_804B3A18 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80173330_lbl_804B3A18_size[sizeof(RecoveredGlobal_80173330_lbl_804B3A18) == 0x10 ? 1 : -1];

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DB940;
extern const f32 lbl_805DB944;
extern const f32 lbl_805DB948;
extern const f32 lbl_805DB94C;
void TORainbowCave01__sub_8017307C(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80173330_lbl_804B3A18 lbl_804B3A18;
extern u32 TORainbowCave01__data_805D5A70;
void TORainbowCave01__sub_80173330(void);
}

extern "C" {

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1);
void *create__15TORainbowCave01FPv(void *arg0);
void free_static_data__15TORainbowCave01Fv(void);
s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0);
void TLobby__sub_8001FE7C(void*, int);
void *TORainbowCave01__ct(void *, void *, void *);
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 TPhotonMylla__sub_80154CB4(u16);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern s32 lbl_805D53A0;

s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0) {
    s32 temp_r3;

    temp_r3 = TPhotonMylla__sub_80154CB4((u16) lbl_805D53A0);
    if ((temp_r3 != 0) && (TObjPlayer__sub_80141CF8(arg0 + 0x38, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

extern void *tl_05;

#pragma push
#pragma fp_contract on
void TORainbowCave01__sub_8017307C(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (lbl_805DB940 / (((f32) M2C_FIELD(arg0, s32 *, 0x84) * lbl_805DB948) + lbl_805DB944));
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (lbl_805DB94C + (f32) M2C_FIELD(arg0, s32 *, 0x8C));
    VecCopy__FP3VecPC3Vec(arg0 + 0xD4, arg0 + 0x68);
}
#pragma pop

void *create__15TORainbowCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORainbowCave01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TORainbowCave01__data_805D5A70;

void free_static_data__15TORainbowCave01Fv(void) {
    if ((u32) TORainbowCave01__data_805D5A70 != 0U) {
        TLobby__sub_8001FE7C((void*)TORainbowCave01__data_805D5A70, 1);
        TORainbowCave01__data_805D5A70 = 0U;
    }
}

extern M2C_UNK __vt__15TORainbowCave01[];

void TORainbowCave01__sub_80173330(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B3A18.value, 0, 0, 0));
    }
    (*(s32 *)&TORainbowCave01__data_805D5A70) = var_r0;
}

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORainbowCave01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
