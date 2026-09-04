#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjCity_Season_EasterEgg__create(void *arg0);
void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0);
void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void *TObjCity_Season_EasterEgg__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);
u32 get_anim_frame__25TObjCity_Season_EasterEggFPv();
void queue_destruction__7TObjectFv(void *);

void advance_egg_anim__25TObjCity_Season_EasterEggFPv(void *arg0) {
    s32 temp_r3;

    if (get_anim_frame__25TObjCity_Season_EasterEggFPv() != 0U) {
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 2);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 >= 0xFF) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

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
