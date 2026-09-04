#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubStatusDisp__sub_80338EE4(void *arg0, s16 arg1);
void *create_object__6TLobbyFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void deleting_dtor__20TWindowSubStatusDispFPvs(void *, int);
void *fn_80338F3C(void *, void *);

void *create_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x8C);
    if (o != NULL) {
        o = fn_80338F3C(o, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804EF4E0[];

void *TWindowSubStatusDisp__sub_80338EE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF4E0;
        deleting_dtor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
