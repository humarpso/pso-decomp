#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityMapWarp__sub_801859C0(void *arg0);
void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1);
void *TObjCityMapWarp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjCityMapWarp__sub_801859C0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjCityMapWarp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TObjCityMapWarp[];

void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjCityMapWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
