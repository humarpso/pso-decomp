#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TObjCameraFv(void *arg0, s16 arg1);
void *create__10TObjCameraFPv(void *arg0);
void release_static_resource__10TObjCameraFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjCamera__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern M2C_UNK __vt__10TObjCamera[];

void *__dt__10TObjCameraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCamera;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *create__10TObjCameraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1AC);
    if (o != NULL) {
        o = TObjCamera__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjCamera__data_805D5B18;

void release_static_resource__10TObjCameraFv(void) {
    if ((u32) TObjCamera__data_805D5B18 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCamera__data_805D5B18, 1);
        TObjCamera__data_805D5B18 = 0U;
    }
}

}
