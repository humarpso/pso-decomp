#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_font__13TOCtrlDubchikFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 TLobby__sub_8001DC24();
s32 __ct__14TFontSmallTaskFv(s32, s32, s32, s32, M2C_UNK, s32, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80229080(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 __nw__7TObjectFUl(M2C_UNK);

s32 create_font__13TOCtrlDubchikFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;

    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(arg3);
    var_r31 = __nw__7TObjectFUl(0x58);
    if (var_r31 != 0) {
        var_r31 = __ct__14TFontSmallTaskFv(var_r31, arg0, arg1, arg2, 0, TLobby__sub_8001DC24(), 0xFFFF);
    }
    return var_r31;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015C9D0
#include "types.h"

extern "C" {

s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_32__FPUl(s32);
void TObjPlayer__sub_8015C940(void);
void init_packet_67_04__6TLobbyFPv(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);

void TOCtrlDubchik__sub_8015C9D0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015CC60
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, void *, f32);
f32 TBoss8Dragon__sub_803D64C0(s32, s32, f32);

extern const f64 TOCtrlDubchik__data_80440990;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;

void update_spin__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + TOCtrlDubchik__data_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (TOCtrlDubchik__data_805DB3B8 + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x380), temp_r4, temp_f1));
    TObjPlayer__sub_80011734(arg0, arg0 + 0x390, M2C_FIELD(arg0, f32 *, 0x37C));
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 0x147);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015D290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TOCtrlDubchikFPv(void *arg0);
void *TOCtrlDubchik__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__13TOCtrlDubchikFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3A0);
    if (o != NULL) {
        o = TOCtrlDubchik__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015D2DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__13TOCtrlDubchikFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOCtrlDubchik__data_805D58F0;

void destroy_instance__13TOCtrlDubchikFv(void) {
    if ((u32) TOCtrlDubchik__data_805D58F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCtrlDubchik__data_805D58F0, 1);
        TOCtrlDubchik__data_805D58F0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015D364
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__13TOCtrlDubchik[];

void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCtrlDubchik;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015D4E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOCtrlDubchik__vt18(void *arg0);

s32 TObjPlayer__sub_80016454();

s32 TOCtrlDubchik__vt18(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return TObjPlayer__sub_80016454();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015D5D0
#include "types.h"

extern "C" {

void TOCtrlDubchik__vt23(void);

void TOCtrlDubchik__vt23(void) {  }

}
#endif
#endif
