#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TOSignCave03Fv(void *arg0, s16 arg1);
void close_dialog_window__12TOSignCave03Fv(void);
void *create__12TOSignCave03FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TOSignCave03__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern void *tl_05;

void *create__12TOSignCave03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TOSignCave03__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOSignCave03__data_805D5AB8;

void close_dialog_window__12TOSignCave03Fv(void) {
    if ((u32) TOSignCave03__data_805D5AB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOSignCave03__data_805D5AB8, 1);
        TOSignCave03__data_805D5AB8 = 0U;
    }
}

extern M2C_UNK __vt__12TOSignCave03[];

void *__dt__12TOSignCave03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSignCave03;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
