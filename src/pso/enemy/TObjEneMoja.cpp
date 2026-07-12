#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * create__11TObjEneMojaFPv(void *arg0);
void free_resources__11TObjEneMojaFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjEneMoja__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void free__11TOBoss4RockFUi(void*);

extern void *tl_04;

void * create__11TObjEneMojaFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x40C);
    if (o2 != NULL) {
        o2 = TObjEneMoja__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D50C8;
extern u32 lbl_805D50CC;
extern u32 lbl_805D50D0;
extern u32 lbl_805D50D4;
extern u32 lbl_805D50D8;
extern u32 lbl_805D50DC;

void free_resources__11TObjEneMojaFv(void) {
    if ((u32) lbl_805D50C8 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50C8);
        lbl_805D50C8 = 0U;
    }
    if ((u32) lbl_805D50CC != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50CC);
        lbl_805D50CC = 0U;
    }
    if ((u32) lbl_805D50D0 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50D0);
        lbl_805D50D0 = 0U;
    }
    if ((u32) lbl_805D50D4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50D4);
        lbl_805D50D4 = 0U;
    }
    if ((u32) lbl_805D50DC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50DC, 1);
        lbl_805D50DC = 0U;
    }
    if ((u32) lbl_805D50D8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D50D8, 1);
        lbl_805D50D8 = 0U;
    }
}

}
