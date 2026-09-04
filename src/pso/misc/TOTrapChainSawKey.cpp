#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOTrapChainSawDamage__vt23(void *arg0);
void TOTrapChainSawDamage__vt24(void* p);
int TOTrapChainSawDamage__vt25(void);
int TOTrapChainSawDamage__vt26(void);
int TOTrapChainSawKey__vt13(void* p);
void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1);
void *create__17TOTrapChainSawKeyFPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void *TOTrapChainSawKey__ct(void *, void *, void *);
void TObjDoor__sub_803DC894(void *, void *, f32);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);
void *__nw__7TObjectFUl(int);
int decode_params__14TOTrapChainSawFPv(void*);
void set_global_param__8TObjFishFi(void *);

int TOTrapChainSawKey__vt13(void* p) { return decode_params__14TOTrapChainSawFPv(p); }

extern void *tl_05;

void *create__17TOTrapChainSawKeyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__17TOTrapChainSawKey[];

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int TOTrapChainSawDamage__vt26(void) { return 0; }
int TOTrapChainSawDamage__vt25(void) { return 0; }

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

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
