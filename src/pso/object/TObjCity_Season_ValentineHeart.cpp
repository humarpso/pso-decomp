#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCity_Season_ValentineHeart__create(void *arg0);
void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1);
void *TObjCity_Season_ValentineHeart__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_05;

void *TObjCity_Season_ValentineHeart__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_ValentineHeart__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5DD8[];

void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5DD8;
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4)); M2C_FIELD(arg0, M2C_UNK *, 0xB4) = 0; }
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801845F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0);
M2C_UNK TObjCity_Season_EasterEgg__sub_80184A08(M2C_UNK, M2C_UNK, f32);

extern const f32 lbl_805DBC70;

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0) {
    TObjCity_Season_EasterEgg__sub_80184A08(arg0, 1, lbl_805DBC70);
}

}
#endif
#endif
