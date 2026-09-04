#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawDamage__vt22(void *arg0);

M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK TOTrapChainSaw__sub_802C9600();

void TOTrapChainSawDamage__vt22(void *arg0) {
    TOTrapChainSaw__sub_802C9600();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 0x100);
        return;
    }
    set_indexed_flags(arg0, 1, 0x100);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802C8A90
#include "types.h"

extern "C" {

void TOTrapChainSawDamage__vt24(void* p);

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C8B04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOTrapChainSawDamage__vt23(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void set_global_param__8TObjFishFi(void *);
void TObjDoor__sub_803DC894(void *, void *, f32);

void TOTrapChainSawDamage__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0xD4));
    TObjDoor__sub_803DC894(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C8D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawDamage__vt13(void *arg0);

M2C_UNK decode_params__14TOTrapChainSawFPv();

void TOTrapChainSawDamage__vt13(void *arg0) {
    decode_params__14TOTrapChainSawFPv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C8D70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__20TOTrapChainSawDamageFPv(void *arg0);
void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void *TOTrapChainSawDamage__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern void *tl_05;

void *create__20TOTrapChainSawDamageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawDamage__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__20TOTrapChainSawDamage[];

void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TOTrapChainSawDamage;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802C9BF8
#include "types.h"

extern "C" {

void TOTrapChainSawEdge__vt15(void);
void TOTrapChainSaw__sub_802C9BE4(void);
void TOTrapChainSaw__sub_802C9BE8(void);
void TOTrapChainSaw__sub_802C9BEC(void);
void TOTrapChainSaw__sub_802C9BF0(void);
void TOTrapChainSaw__sub_802C9BF4(void);
void set_damage__20TOTrapChainSawDamageFPvi(void* p, s32 v);
void TOTrapChainSaw__vt23(void);
void TOTrapChainSaw__vt14(void);

void set_damage__20TOTrapChainSawDamageFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xf8) = v; }

}
#endif
#endif
