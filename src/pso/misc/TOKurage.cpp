#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__8TOKurageFv(void *arg0, s16 arg1);
void check_player_distance__8TOKurageFPv(u8 *arg0);
void *create__8TOKurageFPv(void *arg0);
void destroy_static_instance__8TOKurageFv(void);
void init__8TOKurageFPv(u8 *arg0);
void update_state__8TOKurageFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 TODragonfly__sub_80158360(f32);
void *TOKurage__ct(void *, void *, void *);
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
        o = TOKurage__ct(o, tl_05, arg0);
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

}
