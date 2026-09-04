#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawDamage__vt13(void *arg0);
void TOTrapChainSawDamage__vt22(void *arg0);
void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void *create__20TOTrapChainSawDamageFPv(void *arg0);
void *TOTrapChainSawDamage__ct(void *, void *, void *);
M2C_UNK TOTrapChainSaw__sub_802C9600();
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK decode_params__14TOTrapChainSawFPv();
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TOTrapChainSawDamage__vt22(void *arg0) {
    TOTrapChainSaw__sub_802C9600();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 0x100);
        return;
    }
    set_indexed_flags(arg0, 1, 0x100);
}

void TOTrapChainSawDamage__vt13(void *arg0) {
    decode_params__14TOTrapChainSawFPv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}

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
