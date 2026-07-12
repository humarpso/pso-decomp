#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__17TObjEneDf2BringerFv(void);
void *create__17TObjEneDf2BringerFPv(void *arg0);
void *TObjEneDf2Bringer__ct(void *, void *, void *);
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK fn_8009A7A0();
void fn_800F5C8C(void*, int);

extern u32 TObjEneDf2Bringer__data_805D4FB8;
extern u32 TObjEneDf2Bringer__data_805D4FC8;
extern u32 TObjEneDf2Bringer__data_805D4FCC;

void free_resources__17TObjEneDf2BringerFv(void) {
    fn_8009A7A0();
    if ((u32) TObjEneDf2Bringer__data_805D4FCC != 0U) {
        fn_800F5C8C((void*)TObjEneDf2Bringer__data_805D4FCC, 1);
        TObjEneDf2Bringer__data_805D4FCC = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FC8 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDf2Bringer__data_805D4FC8, 1);
        TObjEneDf2Bringer__data_805D4FC8 = 0U;
    }
    if ((u32) TObjEneDf2Bringer__data_805D4FB8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDf2Bringer__data_805D4FB8, 1);
        TObjEneDf2Bringer__data_805D4FB8 = 0U;
    }
}

extern void *tl_04;

void *create__17TObjEneDf2BringerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C8);
    if (o != NULL) {
        o = TObjEneDf2Bringer__ct(o, tl_04, arg0);
    }
    return o;
}

}
