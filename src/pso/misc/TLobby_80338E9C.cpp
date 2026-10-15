#include "types.h"

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

extern s32 lbl_804EF4E0[];

void *TWindowSubStatusDisp__sub_80338EE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EF4E0;
        deleting_dtor__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
