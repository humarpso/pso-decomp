#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8016E800_lbl_804B2E6C { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016E800_lbl_804B2E6C_size[sizeof(RecoveredGlobal_8016E800_lbl_804B2E6C) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016E8A8___vt__8TOKurage { M2C_UNK value; u8 remaining[0x38]; };

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8016E800_lbl_804B2E6C lbl_804B2E6C;
extern u32 TOKurage__data_805D5A38;
void TOKurage__sub_8016E800(void);
u8 *TObjFish__sub_8001ED9C(s32, s32);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 init_map_object_base(void *);
void init__8TOKurageFPv(u8 *arg0);
extern M2C_UNK __vt__8TOKurage[];
extern s32 lbl_805D3060;
extern u32 TOKurage__data_805D5A38;
extern const f32 TOKurage__data_805DB7AC;
extern const f32 lbl_805DB7D8;
extern const f32 lbl_805DB820;
extern const f32 lbl_805DB824;
u8 *TOKurage__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__8TOKurageFv(void *arg0, s16 arg1);
void check_player_distance__8TOKurageFPv(u8 *arg0);
void *create__8TOKurageFPv(void *arg0);
void destroy_static_instance__8TOKurageFv(void);
void init__8TOKurageFPv(u8 *arg0);
void update_state__8TOKurageFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 TODragonfly__sub_80158360(f32);
f32 TObjPlayer__sub_803E1A58(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void check_player_distance__8TOKurageFPv(u8 *arg0) {
    if ((TObjPlayer__sub_803E1A58(arg0 + 0xE4, arg0 + 0x38) > M2C_FIELD(arg0, f32 *, 0x6C)) && ((u8) M2C_FIELD(arg0, u8 *, 0x100) != 4)) {
        M2C_FIELD(arg0, u8 *, 0x100) = 3U;
    }
}

void update_state__8TOKurageFPv(void *arg0) {
    f32 temp_f0;

    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    if (TODragonfly__sub_80158360(temp_f0 * temp_f0) == 1) {
        M2C_FIELD(arg0, s8 *, 0x100) = 4;
    }
}

extern const f32 lbl_805DB7A8;
extern const f32 TOKurage__data_805DB7AC;

void init__8TOKurageFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0xCC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0xE4, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) lbl_805DB7A8;
    M2C_FIELD(arg0, s8 *, 0x100) = 0;
    M2C_FIELD(arg0, s8 *, 0x101) = 0;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xFE) = 0;
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) TOKurage__data_805DB7AC;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) TOKurage__data_805DB7AC;
}

extern void *tl_05;

void *create__8TOKurageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x114);
    if (o != NULL) {
        o = TOKurage__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKurage__data_805D5A38;

void destroy_static_instance__8TOKurageFv(void) {
    if ((u32) TOKurage__data_805D5A38 != 0U) {
        TLobby__sub_8001FE7C((void*)TOKurage__data_805D5A38, 1);
        TOKurage__data_805D5A38 = 0U;
    }
}

extern M2C_UNK __vt__8TOKurage[];

void TOKurage__sub_8016E800(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B2E6C.value, 0, 0, 0));
    }
    (*(s32 *)&TOKurage__data_805D5A38) = var_r0;
}

void *__dt__8TOKurageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOKurage;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKurage__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_map_object_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016E8A8___vt__8TOKurage *)&__vt__8TOKurage).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3060;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) ((*(s32 *)&TOKurage__data_805D5A38)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TOKurage__data_805D5A38)), (int) (0));
    M2C_FIELD(arg0, u8 **, 0xBC) = TObjFish__sub_8001ED9C((*(s32 *)&TOKurage__data_805D5A38), 0);
    M2C_FIELD(arg0, u8 **, 0xC8) = TObjFish__sub_8001ED9C((*(s32 *)&TOKurage__data_805D5A38), 1);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB7D8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - TOKurage__data_805DB7AC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB820;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB824;
    init__8TOKurageFPv((u8 *)((void *) (arg0)));
    return arg0;
}

}
