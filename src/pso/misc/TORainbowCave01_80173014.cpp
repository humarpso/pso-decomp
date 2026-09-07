#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80173330_lbl_804B3A18 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80173330_lbl_804B3A18_size[sizeof(RecoveredGlobal_80173330_lbl_804B3A18) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801733D8___vt__15TORainbowCave01 { M2C_UNK value; u8 remaining[0x34]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DB940;
extern const f32 lbl_805DB944;
extern const f32 lbl_805DB948;
extern const f32 lbl_805DB94C;
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80173330_lbl_804B3A18 lbl_804B3A18;
extern u32 TORainbowCave01__data_805D5A70;
void TORainbowCave01__sub_80173330(void);
u8 * init_map_object_base(void *);
void TORainbowCave01__sub_8017307C(u8 *arg0, int, f32, f32);
extern M2C_UNK __vt__15TORainbowCave01[];
extern s32 lbl_805D30D4;
extern u32 TORainbowCave01__data_805D5A70;
extern const f32 lbl_805DB94C;
extern const f32 TORainbowCave01__data_805DB954;
extern const f32 lbl_805DB958;
u8 *TORainbowCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1);
void *create__15TORainbowCave01FPv(void *arg0);
void free_static_data__15TORainbowCave01Fv(void);
s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0);
void TLobby__sub_8001FE7C(void*, int);
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
void TORainbowCave01__sub_8017307C(u8 *arg0, int _w1, f32 _w2, f32 _w3) {
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (lbl_805DB940 / (((f32) M2C_FIELD(arg0, s32 *, 0x84) * lbl_805DB948) + lbl_805DB944));
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (lbl_805DB94C + (f32) M2C_FIELD(arg0, s32 *, 0x8C));
    VecCopy__FP3VecPC3Vec(arg0 + 0xD4, arg0 + 0x68);
}
#pragma pop

void *create__15TORainbowCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORainbowCave01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
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
u8 *TORainbowCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r4;
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801733D8___vt__15TORainbowCave01 *)&__vt__15TORainbowCave01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30D4;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TORainbowCave01__data_805D5A70), u8 **, 0x42C), s32 *, 8);
    temp_r4 = (u8 *)(M2C_FIELD((*(u8 * *)&TORainbowCave01__data_805D5A70), u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r4, s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB958;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB94C;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TORainbowCave01__data_805DB954;
    TORainbowCave01__sub_8017307C((u8 *)((void *) (arg0)), (int)((int) (temp_r4)), (f32) (lbl_805DB94C), (f32) (lbl_805DB958));
    return arg0;
}

}
