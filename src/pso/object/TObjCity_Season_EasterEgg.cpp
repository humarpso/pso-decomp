#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCity_Season_EasterEgg__create(void *arg0);
void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void *TObjCity_Season_EasterEgg__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern void *tl_05;

void *TObjCity_Season_EasterEgg__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjCity_Season_EasterEgg__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5E10[];

void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5E10;
        if (M2C_FIELD(arg0, void **, 0xB8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xB8)); M2C_FIELD(arg0, M2C_UNK *, 0xB8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
